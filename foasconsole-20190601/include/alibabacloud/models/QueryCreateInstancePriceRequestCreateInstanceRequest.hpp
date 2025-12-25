// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCREATEINSTANCEPRICEREQUESTCREATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCREATEINSTANCEPRICEREQUESTCREATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryCreateInstancePriceRequestCreateInstanceRequestHaResourceSpec.hpp>
#include <alibabacloud/models/QueryCreateInstancePriceRequestCreateInstanceRequestResourceSpec.hpp>
#include <alibabacloud/models/QueryCreateInstancePriceRequestCreateInstanceRequestStorage.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class QueryCreateInstancePriceRequestCreateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCreateInstancePriceRequestCreateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArchitectureType, architectureType_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(Ha, ha_);
      DARABONBA_PTR_TO_JSON(HaResourceSpec, haResourceSpec_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpec_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
      DARABONBA_PTR_TO_JSON(UsePromotionCode, usePromotionCode_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCreateInstancePriceRequestCreateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchitectureType, architectureType_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(Ha, ha_);
      DARABONBA_PTR_FROM_JSON(HaResourceSpec, haResourceSpec_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpec_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
      DARABONBA_PTR_FROM_JSON(UsePromotionCode, usePromotionCode_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    QueryCreateInstancePriceRequestCreateInstanceRequest() = default ;
    QueryCreateInstancePriceRequestCreateInstanceRequest(const QueryCreateInstancePriceRequestCreateInstanceRequest &) = default ;
    QueryCreateInstancePriceRequestCreateInstanceRequest(QueryCreateInstancePriceRequestCreateInstanceRequest &&) = default ;
    QueryCreateInstancePriceRequestCreateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCreateInstancePriceRequestCreateInstanceRequest() = default ;
    QueryCreateInstancePriceRequestCreateInstanceRequest& operator=(const QueryCreateInstancePriceRequestCreateInstanceRequest &) = default ;
    QueryCreateInstancePriceRequestCreateInstanceRequest& operator=(QueryCreateInstancePriceRequestCreateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->architectureType_ == nullptr
        && return this->autoRenew_ == nullptr && return this->chargeType_ == nullptr && return this->duration_ == nullptr && return this->extra_ == nullptr && return this->ha_ == nullptr
        && return this->haResourceSpec_ == nullptr && return this->instanceName_ == nullptr && return this->pricingCycle_ == nullptr && return this->promotionCode_ == nullptr && return this->region_ == nullptr
        && return this->resourceSpec_ == nullptr && return this->storage_ == nullptr && return this->usePromotionCode_ == nullptr && return this->vSwitchIds_ == nullptr && return this->vpcId_ == nullptr
        && return this->zoneId_ == nullptr; };
    // architectureType Field Functions 
    bool hasArchitectureType() const { return this->architectureType_ != nullptr;};
    void deleteArchitectureType() { this->architectureType_ = nullptr;};
    inline string architectureType() const { DARABONBA_PTR_GET_DEFAULT(architectureType_, "") };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest& setArchitectureType(string architectureType) { DARABONBA_PTR_SET_VALUE(architectureType_, architectureType) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool ha() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // haResourceSpec Field Functions 
    bool hasHaResourceSpec() const { return this->haResourceSpec_ != nullptr;};
    void deleteHaResourceSpec() { this->haResourceSpec_ = nullptr;};
    inline const Models::QueryCreateInstancePriceRequestCreateInstanceRequestHaResourceSpec & haResourceSpec() const { DARABONBA_PTR_GET_CONST(haResourceSpec_, Models::QueryCreateInstancePriceRequestCreateInstanceRequestHaResourceSpec) };
    inline Models::QueryCreateInstancePriceRequestCreateInstanceRequestHaResourceSpec haResourceSpec() { DARABONBA_PTR_GET(haResourceSpec_, Models::QueryCreateInstancePriceRequestCreateInstanceRequestHaResourceSpec) };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest& setHaResourceSpec(const Models::QueryCreateInstancePriceRequestCreateInstanceRequestHaResourceSpec & haResourceSpec) { DARABONBA_PTR_SET_VALUE(haResourceSpec_, haResourceSpec) };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest& setHaResourceSpec(Models::QueryCreateInstancePriceRequestCreateInstanceRequestHaResourceSpec && haResourceSpec) { DARABONBA_PTR_SET_RVALUE(haResourceSpec_, haResourceSpec) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string promotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline const Models::QueryCreateInstancePriceRequestCreateInstanceRequestResourceSpec & resourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, Models::QueryCreateInstancePriceRequestCreateInstanceRequestResourceSpec) };
    inline Models::QueryCreateInstancePriceRequestCreateInstanceRequestResourceSpec resourceSpec() { DARABONBA_PTR_GET(resourceSpec_, Models::QueryCreateInstancePriceRequestCreateInstanceRequestResourceSpec) };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest& setResourceSpec(const Models::QueryCreateInstancePriceRequestCreateInstanceRequestResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest& setResourceSpec(Models::QueryCreateInstancePriceRequestCreateInstanceRequestResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline const Models::QueryCreateInstancePriceRequestCreateInstanceRequestStorage & storage() const { DARABONBA_PTR_GET_CONST(storage_, Models::QueryCreateInstancePriceRequestCreateInstanceRequestStorage) };
    inline Models::QueryCreateInstancePriceRequestCreateInstanceRequestStorage storage() { DARABONBA_PTR_GET(storage_, Models::QueryCreateInstancePriceRequestCreateInstanceRequestStorage) };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest& setStorage(const Models::QueryCreateInstancePriceRequestCreateInstanceRequestStorage & storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest& setStorage(Models::QueryCreateInstancePriceRequestCreateInstanceRequestStorage && storage) { DARABONBA_PTR_SET_RVALUE(storage_, storage) };


    // usePromotionCode Field Functions 
    bool hasUsePromotionCode() const { return this->usePromotionCode_ != nullptr;};
    void deleteUsePromotionCode() { this->usePromotionCode_ = nullptr;};
    inline bool usePromotionCode() const { DARABONBA_PTR_GET_DEFAULT(usePromotionCode_, false) };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest& setUsePromotionCode(bool usePromotionCode) { DARABONBA_PTR_SET_VALUE(usePromotionCode_, usePromotionCode) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> architectureType_ = nullptr;
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<bool> ha_ = nullptr;
    std::shared_ptr<Models::QueryCreateInstancePriceRequestCreateInstanceRequestHaResourceSpec> haResourceSpec_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> pricingCycle_ = nullptr;
    std::shared_ptr<string> promotionCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<Models::QueryCreateInstancePriceRequestCreateInstanceRequestResourceSpec> resourceSpec_ = nullptr;
    std::shared_ptr<Models::QueryCreateInstancePriceRequestCreateInstanceRequestStorage> storage_ = nullptr;
    std::shared_ptr<bool> usePromotionCode_ = nullptr;
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
    // VPC ID。
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
