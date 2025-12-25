// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCREATEINSTANCEPRICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCREATEINSTANCEPRICESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class QueryCreateInstancePriceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCreateInstancePriceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArchitectureType, architectureType_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(Ha, ha_);
      DARABONBA_PTR_TO_JSON(HaResourceSpec, haResourceSpecShrink_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpecShrink_);
      DARABONBA_PTR_TO_JSON(Storage, storageShrink_);
      DARABONBA_PTR_TO_JSON(UsePromotionCode, usePromotionCode_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIdsShrink_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCreateInstancePriceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchitectureType, architectureType_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(Ha, ha_);
      DARABONBA_PTR_FROM_JSON(HaResourceSpec, haResourceSpecShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpecShrink_);
      DARABONBA_PTR_FROM_JSON(Storage, storageShrink_);
      DARABONBA_PTR_FROM_JSON(UsePromotionCode, usePromotionCode_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIdsShrink_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    QueryCreateInstancePriceShrinkRequest() = default ;
    QueryCreateInstancePriceShrinkRequest(const QueryCreateInstancePriceShrinkRequest &) = default ;
    QueryCreateInstancePriceShrinkRequest(QueryCreateInstancePriceShrinkRequest &&) = default ;
    QueryCreateInstancePriceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCreateInstancePriceShrinkRequest() = default ;
    QueryCreateInstancePriceShrinkRequest& operator=(const QueryCreateInstancePriceShrinkRequest &) = default ;
    QueryCreateInstancePriceShrinkRequest& operator=(QueryCreateInstancePriceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->architectureType_ == nullptr
        && return this->autoRenew_ == nullptr && return this->chargeType_ == nullptr && return this->duration_ == nullptr && return this->extra_ == nullptr && return this->ha_ == nullptr
        && return this->haResourceSpecShrink_ == nullptr && return this->instanceName_ == nullptr && return this->pricingCycle_ == nullptr && return this->promotionCode_ == nullptr && return this->region_ == nullptr
        && return this->resourceSpecShrink_ == nullptr && return this->storageShrink_ == nullptr && return this->usePromotionCode_ == nullptr && return this->vSwitchIdsShrink_ == nullptr && return this->vpcId_ == nullptr; };
    // architectureType Field Functions 
    bool hasArchitectureType() const { return this->architectureType_ != nullptr;};
    void deleteArchitectureType() { this->architectureType_ = nullptr;};
    inline string architectureType() const { DARABONBA_PTR_GET_DEFAULT(architectureType_, "") };
    inline QueryCreateInstancePriceShrinkRequest& setArchitectureType(string architectureType) { DARABONBA_PTR_SET_VALUE(architectureType_, architectureType) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline QueryCreateInstancePriceShrinkRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline QueryCreateInstancePriceShrinkRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline QueryCreateInstancePriceShrinkRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline QueryCreateInstancePriceShrinkRequest& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool ha() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline QueryCreateInstancePriceShrinkRequest& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // haResourceSpecShrink Field Functions 
    bool hasHaResourceSpecShrink() const { return this->haResourceSpecShrink_ != nullptr;};
    void deleteHaResourceSpecShrink() { this->haResourceSpecShrink_ = nullptr;};
    inline string haResourceSpecShrink() const { DARABONBA_PTR_GET_DEFAULT(haResourceSpecShrink_, "") };
    inline QueryCreateInstancePriceShrinkRequest& setHaResourceSpecShrink(string haResourceSpecShrink) { DARABONBA_PTR_SET_VALUE(haResourceSpecShrink_, haResourceSpecShrink) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline QueryCreateInstancePriceShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline QueryCreateInstancePriceShrinkRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string promotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline QueryCreateInstancePriceShrinkRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline QueryCreateInstancePriceShrinkRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceSpecShrink Field Functions 
    bool hasResourceSpecShrink() const { return this->resourceSpecShrink_ != nullptr;};
    void deleteResourceSpecShrink() { this->resourceSpecShrink_ = nullptr;};
    inline string resourceSpecShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceSpecShrink_, "") };
    inline QueryCreateInstancePriceShrinkRequest& setResourceSpecShrink(string resourceSpecShrink) { DARABONBA_PTR_SET_VALUE(resourceSpecShrink_, resourceSpecShrink) };


    // storageShrink Field Functions 
    bool hasStorageShrink() const { return this->storageShrink_ != nullptr;};
    void deleteStorageShrink() { this->storageShrink_ = nullptr;};
    inline string storageShrink() const { DARABONBA_PTR_GET_DEFAULT(storageShrink_, "") };
    inline QueryCreateInstancePriceShrinkRequest& setStorageShrink(string storageShrink) { DARABONBA_PTR_SET_VALUE(storageShrink_, storageShrink) };


    // usePromotionCode Field Functions 
    bool hasUsePromotionCode() const { return this->usePromotionCode_ != nullptr;};
    void deleteUsePromotionCode() { this->usePromotionCode_ = nullptr;};
    inline bool usePromotionCode() const { DARABONBA_PTR_GET_DEFAULT(usePromotionCode_, false) };
    inline QueryCreateInstancePriceShrinkRequest& setUsePromotionCode(bool usePromotionCode) { DARABONBA_PTR_SET_VALUE(usePromotionCode_, usePromotionCode) };


    // vSwitchIdsShrink Field Functions 
    bool hasVSwitchIdsShrink() const { return this->vSwitchIdsShrink_ != nullptr;};
    void deleteVSwitchIdsShrink() { this->vSwitchIdsShrink_ = nullptr;};
    inline string vSwitchIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIdsShrink_, "") };
    inline QueryCreateInstancePriceShrinkRequest& setVSwitchIdsShrink(string vSwitchIdsShrink) { DARABONBA_PTR_SET_VALUE(vSwitchIdsShrink_, vSwitchIdsShrink) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline QueryCreateInstancePriceShrinkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> architectureType_ = nullptr;
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<bool> ha_ = nullptr;
    std::shared_ptr<string> haResourceSpecShrink_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> pricingCycle_ = nullptr;
    std::shared_ptr<string> promotionCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> resourceSpecShrink_ = nullptr;
    std::shared_ptr<string> storageShrink_ = nullptr;
    std::shared_ptr<bool> usePromotionCode_ = nullptr;
    std::shared_ptr<string> vSwitchIdsShrink_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
