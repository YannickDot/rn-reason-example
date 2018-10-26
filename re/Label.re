open BsReactNative;
open Style;

let component = ReasonReact.statelessComponent("Label");

let containerStyles = style([
  borderRadius(4.),
  backgroundColor(String("red")),
  padding(Pt(16.))
]);

let textStyles = style([
  color(String("white")),
])

let make = (~name, _children) => {
  ...component, /* spread the template's other defaults into here  */
  render: _self =>
    <TouchableOpacity>
      <View style={containerStyles}>
        <Text style={textStyles}> {ReasonReact.string(name)} </Text>
      </View>
    </TouchableOpacity>,
};

let default = ReasonReact.wrapReasonForJs(~component, jsProps => make(~name=jsProps##name, [||]));
