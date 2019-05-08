[@bs.module "highcharts-react-official"]
external reactClass: ReasonReact.reactClass = "default";

[@react.component] [@bs.module "highcharts-react-official"]
external make:
  (~highcharts: Highcharts.t=?, ~options: Highcharts.Options.make=?) => _ =
  "default";
