
/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateEventEmitterH.js
 */
#pragma once

#include <react/renderer/components/view/ViewEventEmitter.h>


namespace facebook {
namespace react {
class RNCSafeAreaViewEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnSafeAreaValueChangeSafeAreaViewInsetsValue {
      Float top;
    Float left;
    Float bottom;
    Float right;
    };

  struct OnSafeAreaValueChange {
      OnSafeAreaValueChangeSafeAreaViewInsetsValue safeAreaViewInsetsValue;
    };
  void onSafeAreaValueChange(OnSafeAreaValueChange value) const;
};

class RNCSafeAreaProviderEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnInsetsChangeInsets {
      double top;
    double right;
    double bottom;
    double left;
    };

  struct OnInsetsChangeFrame {
      double x;
    double y;
    double width;
    double height;
    };

  struct OnInsetsChange {
      OnInsetsChangeInsets insets;
    OnInsetsChangeFrame frame;
    };
  void onInsetsChange(OnInsetsChange value) const;
};
} // namespace react
} // namespace facebook