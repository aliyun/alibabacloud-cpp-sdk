// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALEWITHADJUSTMENTRESPONSEBODYPLANRESULTRESOURCEALLOCATIONS_HPP_
#define ALIBABACLOUD_MODELS_SCALEWITHADJUSTMENTRESPONSEBODYPLANRESULTRESOURCEALLOCATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations() = default ;
    ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations(const ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations &) = default ;
    ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations(ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations &&) = default ;
    ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations() = default ;
    ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations& operator=(const ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations &) = default ;
    ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations& operator=(ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && return this->instanceChargeType_ == nullptr && return this->instanceType_ == nullptr && return this->spotStrategy_ == nullptr && return this->zoneId_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The number of instances.
    std::shared_ptr<int32_t> amount_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   **Prepaid**: subscription.
    // *   **Postpaid**: pay-as-you-go.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The instance type.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The spot policy of instances. Valid values:
    // 
    // *   NoSpot: The instances are created as pay-as-you-go instances.
    // *   SpotWithPriceLimit: The instances are created as spot instances for which you can specify the maximum hourly price.
    // *   SpotAsPriceGo: The instances are spot instances for which the market price at the time of purchase is automatically used as the bid price.
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // The ID of the zone.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
