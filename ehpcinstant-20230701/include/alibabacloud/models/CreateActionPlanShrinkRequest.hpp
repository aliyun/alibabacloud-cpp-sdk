// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACTIONPLANSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACTIONPLANSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateActionPlanShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateActionPlanShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionPlanName, actionPlanName_);
      DARABONBA_PTR_TO_JSON(AllocationSpec, allocationSpec_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DesiredCapacity, desiredCapacity_);
      DARABONBA_PTR_TO_JSON(IntervalMinutes, intervalMinutes_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(PrologScript, prologScript_);
      DARABONBA_PTR_TO_JSON(Regions, regionsShrink_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Resources, resourcesShrink_);
      DARABONBA_PTR_TO_JSON(Script, script_);
    };
    friend void from_json(const Darabonba::Json& j, CreateActionPlanShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionPlanName, actionPlanName_);
      DARABONBA_PTR_FROM_JSON(AllocationSpec, allocationSpec_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DesiredCapacity, desiredCapacity_);
      DARABONBA_PTR_FROM_JSON(IntervalMinutes, intervalMinutes_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(PrologScript, prologScript_);
      DARABONBA_PTR_FROM_JSON(Regions, regionsShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Resources, resourcesShrink_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
    };
    CreateActionPlanShrinkRequest() = default ;
    CreateActionPlanShrinkRequest(const CreateActionPlanShrinkRequest &) = default ;
    CreateActionPlanShrinkRequest(CreateActionPlanShrinkRequest &&) = default ;
    CreateActionPlanShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateActionPlanShrinkRequest() = default ;
    CreateActionPlanShrinkRequest& operator=(const CreateActionPlanShrinkRequest &) = default ;
    CreateActionPlanShrinkRequest& operator=(CreateActionPlanShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionPlanName_ == nullptr
        && this->allocationSpec_ == nullptr && this->appId_ == nullptr && this->desiredCapacity_ == nullptr && this->intervalMinutes_ == nullptr && this->level_ == nullptr
        && this->prologScript_ == nullptr && this->regionsShrink_ == nullptr && this->resourceType_ == nullptr && this->resourcesShrink_ == nullptr && this->script_ == nullptr; };
    // actionPlanName Field Functions 
    bool hasActionPlanName() const { return this->actionPlanName_ != nullptr;};
    void deleteActionPlanName() { this->actionPlanName_ = nullptr;};
    inline string getActionPlanName() const { DARABONBA_PTR_GET_DEFAULT(actionPlanName_, "") };
    inline CreateActionPlanShrinkRequest& setActionPlanName(string actionPlanName) { DARABONBA_PTR_SET_VALUE(actionPlanName_, actionPlanName) };


    // allocationSpec Field Functions 
    bool hasAllocationSpec() const { return this->allocationSpec_ != nullptr;};
    void deleteAllocationSpec() { this->allocationSpec_ = nullptr;};
    inline string getAllocationSpec() const { DARABONBA_PTR_GET_DEFAULT(allocationSpec_, "") };
    inline CreateActionPlanShrinkRequest& setAllocationSpec(string allocationSpec) { DARABONBA_PTR_SET_VALUE(allocationSpec_, allocationSpec) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateActionPlanShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // desiredCapacity Field Functions 
    bool hasDesiredCapacity() const { return this->desiredCapacity_ != nullptr;};
    void deleteDesiredCapacity() { this->desiredCapacity_ = nullptr;};
    inline double getDesiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(desiredCapacity_, 0.0) };
    inline CreateActionPlanShrinkRequest& setDesiredCapacity(double desiredCapacity) { DARABONBA_PTR_SET_VALUE(desiredCapacity_, desiredCapacity) };


    // intervalMinutes Field Functions 
    bool hasIntervalMinutes() const { return this->intervalMinutes_ != nullptr;};
    void deleteIntervalMinutes() { this->intervalMinutes_ = nullptr;};
    inline int32_t getIntervalMinutes() const { DARABONBA_PTR_GET_DEFAULT(intervalMinutes_, 0) };
    inline CreateActionPlanShrinkRequest& setIntervalMinutes(int32_t intervalMinutes) { DARABONBA_PTR_SET_VALUE(intervalMinutes_, intervalMinutes) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline CreateActionPlanShrinkRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // prologScript Field Functions 
    bool hasPrologScript() const { return this->prologScript_ != nullptr;};
    void deletePrologScript() { this->prologScript_ = nullptr;};
    inline string getPrologScript() const { DARABONBA_PTR_GET_DEFAULT(prologScript_, "") };
    inline CreateActionPlanShrinkRequest& setPrologScript(string prologScript) { DARABONBA_PTR_SET_VALUE(prologScript_, prologScript) };


    // regionsShrink Field Functions 
    bool hasRegionsShrink() const { return this->regionsShrink_ != nullptr;};
    void deleteRegionsShrink() { this->regionsShrink_ = nullptr;};
    inline string getRegionsShrink() const { DARABONBA_PTR_GET_DEFAULT(regionsShrink_, "") };
    inline CreateActionPlanShrinkRequest& setRegionsShrink(string regionsShrink) { DARABONBA_PTR_SET_VALUE(regionsShrink_, regionsShrink) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateActionPlanShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resourcesShrink Field Functions 
    bool hasResourcesShrink() const { return this->resourcesShrink_ != nullptr;};
    void deleteResourcesShrink() { this->resourcesShrink_ = nullptr;};
    inline string getResourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(resourcesShrink_, "") };
    inline CreateActionPlanShrinkRequest& setResourcesShrink(string resourcesShrink) { DARABONBA_PTR_SET_VALUE(resourcesShrink_, resourcesShrink) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline CreateActionPlanShrinkRequest& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


  protected:
    // The name of the execution plan.
    shared_ptr<string> actionPlanName_ {};
    // The type of the resource.
    // 
    // *   Standard
    // *   Dedicated: You must enable a whitelist for use.
    // *   Economic: You must enable a whitelist for use.
    shared_ptr<string> allocationSpec_ {};
    // The ID of the application.
    shared_ptr<string> appId_ {};
    // The expected scale of resources for the execution plan. If the ResourceType parameter is set to VcpuCapacity, the execution plan is expected to have 10000 vCPUs.
    shared_ptr<double> desiredCapacity_ {};
    shared_ptr<int32_t> intervalMinutes_ {};
    // The computing power level. This value is valid only when the resource type is Economic. The following disk categories are supported:
    // 
    // *   General
    // *   Performance
    // 
    // Default value: General
    shared_ptr<string> level_ {};
    // The pre-processing script. Base64 encoding is required.
    shared_ptr<string> prologScript_ {};
    // The list of resource configurations in the region where the execution plan runs.
    shared_ptr<string> regionsShrink_ {};
    // Target resource type: the capacity of vCPUs or the number of execution nodes. Valid values:
    // 
    // *   VCpuCapacity
    // *   ExecutorCapacity
    shared_ptr<string> resourceType_ {};
    // The list of resource configurations of the execution plan runtime environment. You can configure 1 to 10 resources.
    shared_ptr<string> resourcesShrink_ {};
    // The running-job script. Base64 encoding is required.
    shared_ptr<string> script_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
