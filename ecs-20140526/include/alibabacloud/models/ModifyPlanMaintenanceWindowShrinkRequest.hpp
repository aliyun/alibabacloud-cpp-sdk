// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPLANMAINTENANCEWINDOWSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPLANMAINTENANCEWINDOWSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyPlanMaintenanceWindowShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPlanMaintenanceWindowShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(PlanWindowId, planWindowId_);
      DARABONBA_PTR_TO_JSON(PlanWindowName, planWindowName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SupportMaintenanceAction, supportMaintenanceAction_);
      DARABONBA_PTR_TO_JSON(TargetResource, targetResourceShrink_);
      DARABONBA_PTR_TO_JSON(TimePeriod, timePeriodShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPlanMaintenanceWindowShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(PlanWindowId, planWindowId_);
      DARABONBA_PTR_FROM_JSON(PlanWindowName, planWindowName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SupportMaintenanceAction, supportMaintenanceAction_);
      DARABONBA_PTR_FROM_JSON(TargetResource, targetResourceShrink_);
      DARABONBA_PTR_FROM_JSON(TimePeriod, timePeriodShrink_);
    };
    ModifyPlanMaintenanceWindowShrinkRequest() = default ;
    ModifyPlanMaintenanceWindowShrinkRequest(const ModifyPlanMaintenanceWindowShrinkRequest &) = default ;
    ModifyPlanMaintenanceWindowShrinkRequest(ModifyPlanMaintenanceWindowShrinkRequest &&) = default ;
    ModifyPlanMaintenanceWindowShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPlanMaintenanceWindowShrinkRequest() = default ;
    ModifyPlanMaintenanceWindowShrinkRequest& operator=(const ModifyPlanMaintenanceWindowShrinkRequest &) = default ;
    ModifyPlanMaintenanceWindowShrinkRequest& operator=(ModifyPlanMaintenanceWindowShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && this->planWindowId_ == nullptr && this->planWindowName_ == nullptr && this->regionId_ == nullptr && this->supportMaintenanceAction_ == nullptr && this->targetResourceShrink_ == nullptr
        && this->timePeriodShrink_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ModifyPlanMaintenanceWindowShrinkRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // planWindowId Field Functions 
    bool hasPlanWindowId() const { return this->planWindowId_ != nullptr;};
    void deletePlanWindowId() { this->planWindowId_ = nullptr;};
    inline string getPlanWindowId() const { DARABONBA_PTR_GET_DEFAULT(planWindowId_, "") };
    inline ModifyPlanMaintenanceWindowShrinkRequest& setPlanWindowId(string planWindowId) { DARABONBA_PTR_SET_VALUE(planWindowId_, planWindowId) };


    // planWindowName Field Functions 
    bool hasPlanWindowName() const { return this->planWindowName_ != nullptr;};
    void deletePlanWindowName() { this->planWindowName_ = nullptr;};
    inline string getPlanWindowName() const { DARABONBA_PTR_GET_DEFAULT(planWindowName_, "") };
    inline ModifyPlanMaintenanceWindowShrinkRequest& setPlanWindowName(string planWindowName) { DARABONBA_PTR_SET_VALUE(planWindowName_, planWindowName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyPlanMaintenanceWindowShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // supportMaintenanceAction Field Functions 
    bool hasSupportMaintenanceAction() const { return this->supportMaintenanceAction_ != nullptr;};
    void deleteSupportMaintenanceAction() { this->supportMaintenanceAction_ = nullptr;};
    inline string getSupportMaintenanceAction() const { DARABONBA_PTR_GET_DEFAULT(supportMaintenanceAction_, "") };
    inline ModifyPlanMaintenanceWindowShrinkRequest& setSupportMaintenanceAction(string supportMaintenanceAction) { DARABONBA_PTR_SET_VALUE(supportMaintenanceAction_, supportMaintenanceAction) };


    // targetResourceShrink Field Functions 
    bool hasTargetResourceShrink() const { return this->targetResourceShrink_ != nullptr;};
    void deleteTargetResourceShrink() { this->targetResourceShrink_ = nullptr;};
    inline string getTargetResourceShrink() const { DARABONBA_PTR_GET_DEFAULT(targetResourceShrink_, "") };
    inline ModifyPlanMaintenanceWindowShrinkRequest& setTargetResourceShrink(string targetResourceShrink) { DARABONBA_PTR_SET_VALUE(targetResourceShrink_, targetResourceShrink) };


    // timePeriodShrink Field Functions 
    bool hasTimePeriodShrink() const { return this->timePeriodShrink_ != nullptr;};
    void deleteTimePeriodShrink() { this->timePeriodShrink_ = nullptr;};
    inline string getTimePeriodShrink() const { DARABONBA_PTR_GET_DEFAULT(timePeriodShrink_, "") };
    inline ModifyPlanMaintenanceWindowShrinkRequest& setTimePeriodShrink(string timePeriodShrink) { DARABONBA_PTR_SET_VALUE(timePeriodShrink_, timePeriodShrink) };


  protected:
    shared_ptr<bool> enable_ {};
    // This parameter is required.
    shared_ptr<string> planWindowId_ {};
    shared_ptr<string> planWindowName_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> supportMaintenanceAction_ {};
    shared_ptr<string> targetResourceShrink_ {};
    shared_ptr<string> timePeriodShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
