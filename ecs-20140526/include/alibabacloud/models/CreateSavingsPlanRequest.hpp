// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESAVINGSPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESAVINGSPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateSavingsPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSavingsPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CommittedAmount, committedAmount_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamilyGroup, instanceTypeFamilyGroup_);
      DARABONBA_PTR_TO_JSON(OfferingType, offeringType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PlanType, planType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSavingsPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CommittedAmount, committedAmount_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamilyGroup, instanceTypeFamilyGroup_);
      DARABONBA_PTR_FROM_JSON(OfferingType, offeringType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PlanType, planType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    CreateSavingsPlanRequest() = default ;
    CreateSavingsPlanRequest(const CreateSavingsPlanRequest &) = default ;
    CreateSavingsPlanRequest(CreateSavingsPlanRequest &&) = default ;
    CreateSavingsPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSavingsPlanRequest() = default ;
    CreateSavingsPlanRequest& operator=(const CreateSavingsPlanRequest &) = default ;
    CreateSavingsPlanRequest& operator=(CreateSavingsPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->committedAmount_ == nullptr && this->instanceTypeFamily_ == nullptr && this->instanceTypeFamilyGroup_ == nullptr && this->offeringType_ == nullptr && this->period_ == nullptr
        && this->periodUnit_ == nullptr && this->planType_ == nullptr && this->regionId_ == nullptr && this->resourceId_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateSavingsPlanRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // committedAmount Field Functions 
    bool hasCommittedAmount() const { return this->committedAmount_ != nullptr;};
    void deleteCommittedAmount() { this->committedAmount_ = nullptr;};
    inline string getCommittedAmount() const { DARABONBA_PTR_GET_DEFAULT(committedAmount_, "") };
    inline CreateSavingsPlanRequest& setCommittedAmount(string committedAmount) { DARABONBA_PTR_SET_VALUE(committedAmount_, committedAmount) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline string getInstanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
    inline CreateSavingsPlanRequest& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


    // instanceTypeFamilyGroup Field Functions 
    bool hasInstanceTypeFamilyGroup() const { return this->instanceTypeFamilyGroup_ != nullptr;};
    void deleteInstanceTypeFamilyGroup() { this->instanceTypeFamilyGroup_ = nullptr;};
    inline string getInstanceTypeFamilyGroup() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamilyGroup_, "") };
    inline CreateSavingsPlanRequest& setInstanceTypeFamilyGroup(string instanceTypeFamilyGroup) { DARABONBA_PTR_SET_VALUE(instanceTypeFamilyGroup_, instanceTypeFamilyGroup) };


    // offeringType Field Functions 
    bool hasOfferingType() const { return this->offeringType_ != nullptr;};
    void deleteOfferingType() { this->offeringType_ = nullptr;};
    inline string getOfferingType() const { DARABONBA_PTR_GET_DEFAULT(offeringType_, "") };
    inline CreateSavingsPlanRequest& setOfferingType(string offeringType) { DARABONBA_PTR_SET_VALUE(offeringType_, offeringType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateSavingsPlanRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateSavingsPlanRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // planType Field Functions 
    bool hasPlanType() const { return this->planType_ != nullptr;};
    void deletePlanType() { this->planType_ = nullptr;};
    inline string getPlanType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
    inline CreateSavingsPlanRequest& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSavingsPlanRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline const vector<string> & getResourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
    inline vector<string> getResourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
    inline CreateSavingsPlanRequest& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
    inline CreateSavingsPlanRequest& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


  protected:
    shared_ptr<string> chargeType_ {};
    shared_ptr<string> committedAmount_ {};
    shared_ptr<string> instanceTypeFamily_ {};
    shared_ptr<string> instanceTypeFamilyGroup_ {};
    shared_ptr<string> offeringType_ {};
    shared_ptr<string> period_ {};
    shared_ptr<string> periodUnit_ {};
    shared_ptr<string> planType_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<vector<string>> resourceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
