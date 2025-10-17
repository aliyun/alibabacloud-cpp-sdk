// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANESTIMATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANESTIMATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSavingsPlanEstimationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSavingsPlanEstimationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EstimationResource, estimationResource_);
      DARABONBA_PTR_TO_JSON(InstanceTypeScope, instanceTypeScope_);
      DARABONBA_PTR_TO_JSON(OfferingType, offeringType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PlanType, planType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSavingsPlanEstimationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EstimationResource, estimationResource_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeScope, instanceTypeScope_);
      DARABONBA_PTR_FROM_JSON(OfferingType, offeringType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PlanType, planType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    DescribeSavingsPlanEstimationRequest() = default ;
    DescribeSavingsPlanEstimationRequest(const DescribeSavingsPlanEstimationRequest &) = default ;
    DescribeSavingsPlanEstimationRequest(DescribeSavingsPlanEstimationRequest &&) = default ;
    DescribeSavingsPlanEstimationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSavingsPlanEstimationRequest() = default ;
    DescribeSavingsPlanEstimationRequest& operator=(const DescribeSavingsPlanEstimationRequest &) = default ;
    DescribeSavingsPlanEstimationRequest& operator=(DescribeSavingsPlanEstimationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->estimationResource_ == nullptr
        && return this->instanceTypeScope_ == nullptr && return this->offeringType_ == nullptr && return this->period_ == nullptr && return this->periodUnit_ == nullptr && return this->planType_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceId_ == nullptr; };
    // estimationResource Field Functions 
    bool hasEstimationResource() const { return this->estimationResource_ != nullptr;};
    void deleteEstimationResource() { this->estimationResource_ = nullptr;};
    inline string estimationResource() const { DARABONBA_PTR_GET_DEFAULT(estimationResource_, "") };
    inline DescribeSavingsPlanEstimationRequest& setEstimationResource(string estimationResource) { DARABONBA_PTR_SET_VALUE(estimationResource_, estimationResource) };


    // instanceTypeScope Field Functions 
    bool hasInstanceTypeScope() const { return this->instanceTypeScope_ != nullptr;};
    void deleteInstanceTypeScope() { this->instanceTypeScope_ = nullptr;};
    inline string instanceTypeScope() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeScope_, "") };
    inline DescribeSavingsPlanEstimationRequest& setInstanceTypeScope(string instanceTypeScope) { DARABONBA_PTR_SET_VALUE(instanceTypeScope_, instanceTypeScope) };


    // offeringType Field Functions 
    bool hasOfferingType() const { return this->offeringType_ != nullptr;};
    void deleteOfferingType() { this->offeringType_ = nullptr;};
    inline string offeringType() const { DARABONBA_PTR_GET_DEFAULT(offeringType_, "") };
    inline DescribeSavingsPlanEstimationRequest& setOfferingType(string offeringType) { DARABONBA_PTR_SET_VALUE(offeringType_, offeringType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeSavingsPlanEstimationRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline DescribeSavingsPlanEstimationRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // planType Field Functions 
    bool hasPlanType() const { return this->planType_ != nullptr;};
    void deletePlanType() { this->planType_ = nullptr;};
    inline string planType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
    inline DescribeSavingsPlanEstimationRequest& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSavingsPlanEstimationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeSavingsPlanEstimationRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    std::shared_ptr<string> estimationResource_ = nullptr;
    std::shared_ptr<string> instanceTypeScope_ = nullptr;
    std::shared_ptr<string> offeringType_ = nullptr;
    std::shared_ptr<string> period_ = nullptr;
    std::shared_ptr<string> periodUnit_ = nullptr;
    std::shared_ptr<string> planType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
