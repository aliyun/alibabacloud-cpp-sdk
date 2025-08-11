// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCALINGCONFIGURATIONSHRINKREQUESTSPOTPRICELIMITS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCALINGCONFIGURATIONSHRINKREQUESTSPOTPRICELIMITS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyScalingConfigurationShrinkRequestSpotPriceLimits : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScalingConfigurationShrinkRequestSpotPriceLimits& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(PriceLimit, priceLimit_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScalingConfigurationShrinkRequestSpotPriceLimits& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(PriceLimit, priceLimit_);
    };
    ModifyScalingConfigurationShrinkRequestSpotPriceLimits() = default ;
    ModifyScalingConfigurationShrinkRequestSpotPriceLimits(const ModifyScalingConfigurationShrinkRequestSpotPriceLimits &) = default ;
    ModifyScalingConfigurationShrinkRequestSpotPriceLimits(ModifyScalingConfigurationShrinkRequestSpotPriceLimits &&) = default ;
    ModifyScalingConfigurationShrinkRequestSpotPriceLimits(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScalingConfigurationShrinkRequestSpotPriceLimits() = default ;
    ModifyScalingConfigurationShrinkRequestSpotPriceLimits& operator=(const ModifyScalingConfigurationShrinkRequestSpotPriceLimits &) = default ;
    ModifyScalingConfigurationShrinkRequestSpotPriceLimits& operator=(ModifyScalingConfigurationShrinkRequestSpotPriceLimits &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceType_ != nullptr
        && this->priceLimit_ != nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyScalingConfigurationShrinkRequestSpotPriceLimits& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // priceLimit Field Functions 
    bool hasPriceLimit() const { return this->priceLimit_ != nullptr;};
    void deletePriceLimit() { this->priceLimit_ = nullptr;};
    inline float priceLimit() const { DARABONBA_PTR_GET_DEFAULT(priceLimit_, 0.0) };
    inline ModifyScalingConfigurationShrinkRequestSpotPriceLimits& setPriceLimit(float priceLimit) { DARABONBA_PTR_SET_VALUE(priceLimit_, priceLimit) };


  protected:
    // The instance type of the preemptible instance. This parameter takes effect only if you set SpotStrategy to SpotWithPriceLimit.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The price limit of the preemptible instance. This parameter takes effect only if you set SpotStrategy to SpotWithPriceLimit.
    std::shared_ptr<float> priceLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
