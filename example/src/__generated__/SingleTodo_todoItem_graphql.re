/* @generated */

type enum_FetchStatus = pri [> | `ERRORED | `FETCHED | `PENDING];

module Types = {
  [@ocaml.warning "-30"];
  type fragment_fetchState = {status: option(enum_FetchStatus)};

  type fragment = {
    id: string,
    text: string,
    completed: option(bool),
    fetchState: option(fragment_fetchState),
  };
};

module Internal = {
  type fragmentRaw;
  let fragmentConverter: Js.Dict.t(Js.Dict.t(Js.Dict.t(string))) = [%raw
    {json| {"__root":{"completed":{"n":""},"fetchState":{"n":""},"fetchState_status":{"n":""}}} |json}
  ];
  let fragmentConverterMap = ();
  let convertFragment = v =>
    v
    ->ReasonRelay._convertObj(
        fragmentConverter,
        fragmentConverterMap,
        Js.undefined,
      );
};

type t;
type fragmentRef;
external getFragmentRef:
  ReasonRelay.fragmentRefs([> | `SingleTodo_todoItem]) => fragmentRef =
  "%identity";

module Utils = {
  external fetchStatus_toString: enum_FetchStatus => string = "%identity";
};

type operationType = ReasonRelay.fragmentNode;

let node: operationType = [%raw
  {json| {
  "argumentDefinitions": [],
  "kind": "Fragment",
  "metadata": null,
  "name": "SingleTodo_todoItem",
  "selections": [
    {
      "alias": null,
      "args": null,
      "kind": "ScalarField",
      "name": "id",
      "storageKey": null
    },
    {
      "alias": null,
      "args": null,
      "kind": "ScalarField",
      "name": "text",
      "storageKey": null
    },
    {
      "alias": null,
      "args": null,
      "kind": "ScalarField",
      "name": "completed",
      "storageKey": null
    },
    {
      "kind": "ClientExtension",
      "selections": [
        {
          "alias": null,
          "args": null,
          "concreteType": "FetchState",
          "kind": "LinkedField",
          "name": "fetchState",
          "plural": false,
          "selections": [
            {
              "alias": null,
              "args": null,
              "kind": "ScalarField",
              "name": "status",
              "storageKey": null
            }
          ],
          "storageKey": null
        }
      ]
    }
  ],
  "type": "TodoItem",
  "abstractKey": null
} |json}
];
