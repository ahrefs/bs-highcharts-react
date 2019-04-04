[@bs.module "highcharts-react-official"]
external reactClass: ReasonReact.reactClass = "default";

[@bs.obj]
external makeProps:
  (~highcharts: Highcharts.t=?, ~options: Highcharts.Options.make=?, unit) => _ =
  "";

let make = (~highcharts=?, ~options=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=makeProps(~highcharts?, ~options?, ()),
    children,
  );
