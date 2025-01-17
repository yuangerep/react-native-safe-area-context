/**
 * This code was generated by "react-native codegen-lib-harmony"
 */

#pragma once

#include <react/renderer/components/react_native_safe_area_context/ComponentDescriptors.h>
#include "RNOH/Package.h"
#include "RNOH/ArkTSTurboModule.h"
#include "RNOH/generated/turbo_modules/RNCSafeAreaContext.h"
#include "RNOH/generated/components/RNCSafeAreaViewJSIBinder.h"
#include "RNOH/generated/components/RNCSafeAreaProviderJSIBinder.h"

namespace rnoh {

class BaseReactNativeSafeAreaContextPackageTurboModuleFactoryDelegate : public TurboModuleFactoryDelegate {
  public:
    SharedTurboModule createTurboModule(Context ctx, const std::string &name) const override {
        if (name == "RNCSafeAreaContext") {
            return std::make_shared<RNCSafeAreaContext>(ctx, name);
        }
        return nullptr;
    };
};

class BaseReactNativeSafeAreaContextPackageEventEmitRequestHandler : public EventEmitRequestHandler {
  public:
    void handleEvent(Context const &ctx) override {
        auto eventEmitter = ctx.shadowViewRegistry->getEventEmitter<facebook::react::EventEmitter>(ctx.tag);
        if (eventEmitter == nullptr) {
            return;
        }

        std::vector<std::string> supportedEventNames = {
        };
        if (std::find(supportedEventNames.begin(), supportedEventNames.end(), ctx.eventName) != supportedEventNames.end()) {
            eventEmitter->dispatchEvent(ctx.eventName, ArkJS(ctx.env).getDynamic(ctx.payload));
        }    
    }
};


class BaseReactNativeSafeAreaContextPackage : public Package {
  public:
    BaseReactNativeSafeAreaContextPackage(Package::Context ctx) : Package(ctx){};

    std::unique_ptr<TurboModuleFactoryDelegate> createTurboModuleFactoryDelegate() override {
        return std::make_unique<BaseReactNativeSafeAreaContextPackageTurboModuleFactoryDelegate>();
    }

    std::vector<facebook::react::ComponentDescriptorProvider> createComponentDescriptorProviders() override {
        return {
            facebook::react::concreteComponentDescriptorProvider<facebook::react::RNCSafeAreaViewComponentDescriptor>(),
            facebook::react::concreteComponentDescriptorProvider<facebook::react::RNCSafeAreaProviderComponentDescriptor>(),
        };
    }

    ComponentJSIBinderByString createComponentJSIBinderByName() override {
        return {
            {"RNCSafeAreaView", std::make_shared<RNCSafeAreaViewJSIBinder>()},
            {"RNCSafeAreaProvider", std::make_shared<RNCSafeAreaProviderJSIBinder>()},
        };
    };

    EventEmitRequestHandlers createEventEmitRequestHandlers() override {
        return {
            std::make_shared<BaseReactNativeSafeAreaContextPackageEventEmitRequestHandler>(),
        };
    }
};

} // namespace rnoh
