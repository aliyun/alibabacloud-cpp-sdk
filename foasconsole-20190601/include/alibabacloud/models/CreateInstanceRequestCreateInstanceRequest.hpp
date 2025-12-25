// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTCREATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTCREATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateInstanceRequestCreateInstanceRequestHaResourceSpec.hpp>
#include <vector>
#include <alibabacloud/models/CreateInstanceRequestCreateInstanceRequestResourceSpec.hpp>
#include <alibabacloud/models/CreateInstanceRequestCreateInstanceRequestStorage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class CreateInstanceRequestCreateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestCreateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArchitectureType, architectureType_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(Ha, ha_);
      DARABONBA_PTR_TO_JSON(HaResourceSpec, haResourceSpec_);
      DARABONBA_PTR_TO_JSON(HaVSwitchIds, haVSwitchIds_);
      DARABONBA_PTR_TO_JSON(HaZoneId, haZoneId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(MonitorType, monitorType_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpec_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
      DARABONBA_PTR_TO_JSON(UsePromotionCode, usePromotionCode_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestCreateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchitectureType, architectureType_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(Ha, ha_);
      DARABONBA_PTR_FROM_JSON(HaResourceSpec, haResourceSpec_);
      DARABONBA_PTR_FROM_JSON(HaVSwitchIds, haVSwitchIds_);
      DARABONBA_PTR_FROM_JSON(HaZoneId, haZoneId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(MonitorType, monitorType_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpec_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
      DARABONBA_PTR_FROM_JSON(UsePromotionCode, usePromotionCode_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateInstanceRequestCreateInstanceRequest() = default ;
    CreateInstanceRequestCreateInstanceRequest(const CreateInstanceRequestCreateInstanceRequest &) = default ;
    CreateInstanceRequestCreateInstanceRequest(CreateInstanceRequestCreateInstanceRequest &&) = default ;
    CreateInstanceRequestCreateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestCreateInstanceRequest() = default ;
    CreateInstanceRequestCreateInstanceRequest& operator=(const CreateInstanceRequestCreateInstanceRequest &) = default ;
    CreateInstanceRequestCreateInstanceRequest& operator=(CreateInstanceRequestCreateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->architectureType_ == nullptr
        && return this->autoRenew_ == nullptr && return this->chargeType_ == nullptr && return this->duration_ == nullptr && return this->extra_ == nullptr && return this->ha_ == nullptr
        && return this->haResourceSpec_ == nullptr && return this->haVSwitchIds_ == nullptr && return this->haZoneId_ == nullptr && return this->instanceName_ == nullptr && return this->monitorType_ == nullptr
        && return this->pricingCycle_ == nullptr && return this->promotionCode_ == nullptr && return this->region_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceSpec_ == nullptr
        && return this->storage_ == nullptr && return this->usePromotionCode_ == nullptr && return this->vSwitchIds_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // architectureType Field Functions 
    bool hasArchitectureType() const { return this->architectureType_ != nullptr;};
    void deleteArchitectureType() { this->architectureType_ = nullptr;};
    inline string architectureType() const { DARABONBA_PTR_GET_DEFAULT(architectureType_, "") };
    inline CreateInstanceRequestCreateInstanceRequest& setArchitectureType(string architectureType) { DARABONBA_PTR_SET_VALUE(architectureType_, architectureType) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateInstanceRequestCreateInstanceRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateInstanceRequestCreateInstanceRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreateInstanceRequestCreateInstanceRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline CreateInstanceRequestCreateInstanceRequest& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool ha() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline CreateInstanceRequestCreateInstanceRequest& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // haResourceSpec Field Functions 
    bool hasHaResourceSpec() const { return this->haResourceSpec_ != nullptr;};
    void deleteHaResourceSpec() { this->haResourceSpec_ = nullptr;};
    inline const Models::CreateInstanceRequestCreateInstanceRequestHaResourceSpec & haResourceSpec() const { DARABONBA_PTR_GET_CONST(haResourceSpec_, Models::CreateInstanceRequestCreateInstanceRequestHaResourceSpec) };
    inline Models::CreateInstanceRequestCreateInstanceRequestHaResourceSpec haResourceSpec() { DARABONBA_PTR_GET(haResourceSpec_, Models::CreateInstanceRequestCreateInstanceRequestHaResourceSpec) };
    inline CreateInstanceRequestCreateInstanceRequest& setHaResourceSpec(const Models::CreateInstanceRequestCreateInstanceRequestHaResourceSpec & haResourceSpec) { DARABONBA_PTR_SET_VALUE(haResourceSpec_, haResourceSpec) };
    inline CreateInstanceRequestCreateInstanceRequest& setHaResourceSpec(Models::CreateInstanceRequestCreateInstanceRequestHaResourceSpec && haResourceSpec) { DARABONBA_PTR_SET_RVALUE(haResourceSpec_, haResourceSpec) };


    // haVSwitchIds Field Functions 
    bool hasHaVSwitchIds() const { return this->haVSwitchIds_ != nullptr;};
    void deleteHaVSwitchIds() { this->haVSwitchIds_ = nullptr;};
    inline const vector<string> & haVSwitchIds() const { DARABONBA_PTR_GET_CONST(haVSwitchIds_, vector<string>) };
    inline vector<string> haVSwitchIds() { DARABONBA_PTR_GET(haVSwitchIds_, vector<string>) };
    inline CreateInstanceRequestCreateInstanceRequest& setHaVSwitchIds(const vector<string> & haVSwitchIds) { DARABONBA_PTR_SET_VALUE(haVSwitchIds_, haVSwitchIds) };
    inline CreateInstanceRequestCreateInstanceRequest& setHaVSwitchIds(vector<string> && haVSwitchIds) { DARABONBA_PTR_SET_RVALUE(haVSwitchIds_, haVSwitchIds) };


    // haZoneId Field Functions 
    bool hasHaZoneId() const { return this->haZoneId_ != nullptr;};
    void deleteHaZoneId() { this->haZoneId_ = nullptr;};
    inline string haZoneId() const { DARABONBA_PTR_GET_DEFAULT(haZoneId_, "") };
    inline CreateInstanceRequestCreateInstanceRequest& setHaZoneId(string haZoneId) { DARABONBA_PTR_SET_VALUE(haZoneId_, haZoneId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateInstanceRequestCreateInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // monitorType Field Functions 
    bool hasMonitorType() const { return this->monitorType_ != nullptr;};
    void deleteMonitorType() { this->monitorType_ = nullptr;};
    inline string monitorType() const { DARABONBA_PTR_GET_DEFAULT(monitorType_, "") };
    inline CreateInstanceRequestCreateInstanceRequest& setMonitorType(string monitorType) { DARABONBA_PTR_SET_VALUE(monitorType_, monitorType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateInstanceRequestCreateInstanceRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string promotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline CreateInstanceRequestCreateInstanceRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateInstanceRequestCreateInstanceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateInstanceRequestCreateInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline const Models::CreateInstanceRequestCreateInstanceRequestResourceSpec & resourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, Models::CreateInstanceRequestCreateInstanceRequestResourceSpec) };
    inline Models::CreateInstanceRequestCreateInstanceRequestResourceSpec resourceSpec() { DARABONBA_PTR_GET(resourceSpec_, Models::CreateInstanceRequestCreateInstanceRequestResourceSpec) };
    inline CreateInstanceRequestCreateInstanceRequest& setResourceSpec(const Models::CreateInstanceRequestCreateInstanceRequestResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
    inline CreateInstanceRequestCreateInstanceRequest& setResourceSpec(Models::CreateInstanceRequestCreateInstanceRequestResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline const Models::CreateInstanceRequestCreateInstanceRequestStorage & storage() const { DARABONBA_PTR_GET_CONST(storage_, Models::CreateInstanceRequestCreateInstanceRequestStorage) };
    inline Models::CreateInstanceRequestCreateInstanceRequestStorage storage() { DARABONBA_PTR_GET(storage_, Models::CreateInstanceRequestCreateInstanceRequestStorage) };
    inline CreateInstanceRequestCreateInstanceRequest& setStorage(const Models::CreateInstanceRequestCreateInstanceRequestStorage & storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };
    inline CreateInstanceRequestCreateInstanceRequest& setStorage(Models::CreateInstanceRequestCreateInstanceRequestStorage && storage) { DARABONBA_PTR_SET_RVALUE(storage_, storage) };


    // usePromotionCode Field Functions 
    bool hasUsePromotionCode() const { return this->usePromotionCode_ != nullptr;};
    void deleteUsePromotionCode() { this->usePromotionCode_ = nullptr;};
    inline bool usePromotionCode() const { DARABONBA_PTR_GET_DEFAULT(usePromotionCode_, false) };
    inline CreateInstanceRequestCreateInstanceRequest& setUsePromotionCode(bool usePromotionCode) { DARABONBA_PTR_SET_VALUE(usePromotionCode_, usePromotionCode) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline CreateInstanceRequestCreateInstanceRequest& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline CreateInstanceRequestCreateInstanceRequest& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateInstanceRequestCreateInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateInstanceRequestCreateInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> architectureType_ = nullptr;
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<bool> ha_ = nullptr;
    std::shared_ptr<Models::CreateInstanceRequestCreateInstanceRequestHaResourceSpec> haResourceSpec_ = nullptr;
    std::shared_ptr<vector<string>> haVSwitchIds_ = nullptr;
    std::shared_ptr<string> haZoneId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> monitorType_ = nullptr;
    std::shared_ptr<string> pricingCycle_ = nullptr;
    std::shared_ptr<string> promotionCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<Models::CreateInstanceRequestCreateInstanceRequestResourceSpec> resourceSpec_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::CreateInstanceRequestCreateInstanceRequestStorage> storage_ = nullptr;
    std::shared_ptr<bool> usePromotionCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
    // VPC ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
