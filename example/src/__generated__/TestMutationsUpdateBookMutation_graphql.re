module Unions = {};
type input_UpdateBookInput = {
  .
  "clientMutationId": option(string),
  "id": string,
  "title": string,
  "author": string,
  "status": option(SchemaAssets.Enum_BookStatus.wrapped),
};
type variables = {. "input": input_UpdateBookInput};
type response = {
  .
  "updateBook": {
    .
    "book":
      Js.Nullable.t({
        .
        "id": string,
        "title": string,
        "author": string,
        "status": Js.Nullable.t(SchemaAssets.Enum_BookStatus.wrapped),
      }),
  },
};

let node: ReasonRelay.mutationNode = [%bs.raw
  {| (function(){
var v0 = [
  {
    "kind": "LocalArgument",
    "name": "input",
    "type": "UpdateBookInput!",
    "defaultValue": null
  }
],
v1 = [
  {
    "kind": "LinkedField",
    "alias": null,
    "name": "updateBook",
    "storageKey": null,
    "args": [
      {
        "kind": "Variable",
        "name": "input",
        "variableName": "input"
      }
    ],
    "concreteType": "UpdateBookPayload",
    "plural": false,
    "selections": [
      {
        "kind": "LinkedField",
        "alias": null,
        "name": "book",
        "storageKey": null,
        "args": null,
        "concreteType": "Book",
        "plural": false,
        "selections": [
          {
            "kind": "ScalarField",
            "alias": null,
            "name": "id",
            "args": null,
            "storageKey": null
          },
          {
            "kind": "ScalarField",
            "alias": null,
            "name": "title",
            "args": null,
            "storageKey": null
          },
          {
            "kind": "ScalarField",
            "alias": null,
            "name": "author",
            "args": null,
            "storageKey": null
          },
          {
            "kind": "ScalarField",
            "alias": null,
            "name": "status",
            "args": null,
            "storageKey": null
          }
        ]
      }
    ]
  }
];
return {
  "kind": "Request",
  "fragment": {
    "kind": "Fragment",
    "name": "TestMutationsUpdateBookMutation",
    "type": "Mutation",
    "metadata": null,
    "argumentDefinitions": (v0/*: any*/),
    "selections": (v1/*: any*/)
  },
  "operation": {
    "kind": "Operation",
    "name": "TestMutationsUpdateBookMutation",
    "argumentDefinitions": (v0/*: any*/),
    "selections": (v1/*: any*/)
  },
  "params": {
    "operationKind": "mutation",
    "name": "TestMutationsUpdateBookMutation",
    "id": null,
    "text": "mutation TestMutationsUpdateBookMutation(\n  $input: UpdateBookInput!\n) {\n  updateBook(input: $input) {\n    book {\n      id\n      title\n      author\n      status\n    }\n  }\n}\n",
    "metadata": {}
  }
};
})() |}
];