// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLANMAINTENANCEWINDOWSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLANMAINTENANCEWINDOWSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreatePlanMaintenanceWindowShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePlanMaintenanceWindowShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(MinMaintenanceInterval, minMaintenanceInterval_);
      DARABONBA_PTR_TO_JSON(PlanWindowName, planWindowName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SupportMaintenanceAction, supportMaintenanceAction_);
      DARABONBA_PTR_TO_JSON(TargetResource, targetResourceShrink_);
      DARABONBA_PTR_TO_JSON(TimePeriod, timePeriodShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePlanMaintenanceWindowShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(MinMaintenanceInterval, minMaintenanceInterval_);
      DARABONBA_PTR_FROM_JSON(PlanWindowName, planWindowName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SupportMaintenanceAction, supportMaintenanceAction_);
      DARABONBA_PTR_FROM_JSON(TargetResource, targetResourceShrink_);
      DARABONBA_PTR_FROM_JSON(TimePeriod, timePeriodShrink_);
    };
    CreatePlanMaintenanceWindowShrinkRequest() = default ;
    CreatePlanMaintenanceWindowShrinkRequest(const CreatePlanMaintenanceWindowShrinkRequest &) = default ;
    CreatePlanMaintenanceWindowShrinkRequest(CreatePlanMaintenanceWindowShrinkRequest &&) = default ;
    CreatePlanMaintenanceWindowShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePlanMaintenanceWindowShrinkRequest() = default ;
    CreatePlanMaintenanceWindowShrinkRequest& operator=(const CreatePlanMaintenanceWindowShrinkRequest &) = default ;
    CreatePlanMaintenanceWindowShrinkRequest& operator=(CreatePlanMaintenanceWindowShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && this->minMaintenanceInterval_ == nullptr && this->planWindowName_ == nullptr && this->regionId_ == nullptr && this->supportMaintenanceAction_ == nullptr && this->targetResourceShrink_ == nullptr
        && this->timePeriodShrink_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreatePlanMaintenanceWindowShrinkRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // minMaintenanceInterval Field Functions 
    bool hasMinMaintenanceInterval() const { return this->minMaintenanceInterval_ != nullptr;};
    void deleteMinMaintenanceInterval() { this->minMaintenanceInterval_ = nullptr;};
    inline int32_t getMinMaintenanceInterval() const { DARABONBA_PTR_GET_DEFAULT(minMaintenanceInterval_, 0) };
    inline CreatePlanMaintenanceWindowShrinkRequest& setMinMaintenanceInterval(int32_t minMaintenanceInterval) { DARABONBA_PTR_SET_VALUE(minMaintenanceInterval_, minMaintenanceInterval) };


    // planWindowName Field Functions 
    bool hasPlanWindowName() const { return this->planWindowName_ != nullptr;};
    void deletePlanWindowName() { this->planWindowName_ = nullptr;};
    inline string getPlanWindowName() const { DARABONBA_PTR_GET_DEFAULT(planWindowName_, "") };
    inline CreatePlanMaintenanceWindowShrinkRequest& setPlanWindowName(string planWindowName) { DARABONBA_PTR_SET_VALUE(planWindowName_, planWindowName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePlanMaintenanceWindowShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // supportMaintenanceAction Field Functions 
    bool hasSupportMaintenanceAction() const { return this->supportMaintenanceAction_ != nullptr;};
    void deleteSupportMaintenanceAction() { this->supportMaintenanceAction_ = nullptr;};
    inline string getSupportMaintenanceAction() const { DARABONBA_PTR_GET_DEFAULT(supportMaintenanceAction_, "") };
    inline CreatePlanMaintenanceWindowShrinkRequest& setSupportMaintenanceAction(string supportMaintenanceAction) { DARABONBA_PTR_SET_VALUE(supportMaintenanceAction_, supportMaintenanceAction) };


    // targetResourceShrink Field Functions 
    bool hasTargetResourceShrink() const { return this->targetResourceShrink_ != nullptr;};
    void deleteTargetResourceShrink() { this->targetResourceShrink_ = nullptr;};
    inline string getTargetResourceShrink() const { DARABONBA_PTR_GET_DEFAULT(targetResourceShrink_, "") };
    inline CreatePlanMaintenanceWindowShrinkRequest& setTargetResourceShrink(string targetResourceShrink) { DARABONBA_PTR_SET_VALUE(targetResourceShrink_, targetResourceShrink) };


    // timePeriodShrink Field Functions 
    bool hasTimePeriodShrink() const { return this->timePeriodShrink_ != nullptr;};
    void deleteTimePeriodShrink() { this->timePeriodShrink_ = nullptr;};
    inline string getTimePeriodShrink() const { DARABONBA_PTR_GET_DEFAULT(timePeriodShrink_, "") };
    inline CreatePlanMaintenanceWindowShrinkRequest& setTimePeriodShrink(string timePeriodShrink) { DARABONBA_PTR_SET_VALUE(timePeriodShrink_, timePeriodShrink) };


  protected:
    // Specifies whether to enable the maintenance window.
    // 
    // - **true**: Enables the maintenance window.
    // 
    // - **false**: Disables the maintenance window.
    // 
    // This parameter is required.
    shared_ptr<bool> enable_ {};
    shared_ptr<int32_t> minMaintenanceInterval_ {};
    // The name of the maintenance window. The name can be up to 200 characters long.
    // 
    // This parameter is required.
    shared_ptr<string> planWindowName_ {};
    // The ID of the region. You can call the DescribeRegions operation to query the latest list of Alibaba Cloud regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The maintenance operation supported by the maintenance window.
    // 
    // This parameter is required.
    shared_ptr<string> supportMaintenanceAction_ {};
    // The resources to which the maintenance window applies.
    // 
    // This parameter is required.
    shared_ptr<string> targetResourceShrink_ {};
    // The recurring schedule for the maintenance window.
    // 
    // This parameter is required.
    shared_ptr<string> timePeriodShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
