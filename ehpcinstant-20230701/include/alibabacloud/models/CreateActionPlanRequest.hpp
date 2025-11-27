// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACTIONPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACTIONPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateActionPlanRequestRegions.hpp>
#include <alibabacloud/models/CreateActionPlanRequestResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateActionPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateActionPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionPlanName, actionPlanName_);
      DARABONBA_PTR_TO_JSON(AllocationSpec, allocationSpec_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DesiredCapacity, desiredCapacity_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(PrologScript, prologScript_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(Script, script_);
    };
    friend void from_json(const Darabonba::Json& j, CreateActionPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionPlanName, actionPlanName_);
      DARABONBA_PTR_FROM_JSON(AllocationSpec, allocationSpec_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DesiredCapacity, desiredCapacity_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(PrologScript, prologScript_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
    };
    CreateActionPlanRequest() = default ;
    CreateActionPlanRequest(const CreateActionPlanRequest &) = default ;
    CreateActionPlanRequest(CreateActionPlanRequest &&) = default ;
    CreateActionPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateActionPlanRequest() = default ;
    CreateActionPlanRequest& operator=(const CreateActionPlanRequest &) = default ;
    CreateActionPlanRequest& operator=(CreateActionPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionPlanName_ == nullptr
        && return this->allocationSpec_ == nullptr && return this->appId_ == nullptr && return this->desiredCapacity_ == nullptr && return this->level_ == nullptr && return this->prologScript_ == nullptr
        && return this->regions_ == nullptr && return this->resourceType_ == nullptr && return this->resources_ == nullptr && return this->script_ == nullptr; };
    // actionPlanName Field Functions 
    bool hasActionPlanName() const { return this->actionPlanName_ != nullptr;};
    void deleteActionPlanName() { this->actionPlanName_ = nullptr;};
    inline string actionPlanName() const { DARABONBA_PTR_GET_DEFAULT(actionPlanName_, "") };
    inline CreateActionPlanRequest& setActionPlanName(string actionPlanName) { DARABONBA_PTR_SET_VALUE(actionPlanName_, actionPlanName) };


    // allocationSpec Field Functions 
    bool hasAllocationSpec() const { return this->allocationSpec_ != nullptr;};
    void deleteAllocationSpec() { this->allocationSpec_ = nullptr;};
    inline string allocationSpec() const { DARABONBA_PTR_GET_DEFAULT(allocationSpec_, "") };
    inline CreateActionPlanRequest& setAllocationSpec(string allocationSpec) { DARABONBA_PTR_SET_VALUE(allocationSpec_, allocationSpec) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateActionPlanRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // desiredCapacity Field Functions 
    bool hasDesiredCapacity() const { return this->desiredCapacity_ != nullptr;};
    void deleteDesiredCapacity() { this->desiredCapacity_ = nullptr;};
    inline double desiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(desiredCapacity_, 0.0) };
    inline CreateActionPlanRequest& setDesiredCapacity(double desiredCapacity) { DARABONBA_PTR_SET_VALUE(desiredCapacity_, desiredCapacity) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline CreateActionPlanRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // prologScript Field Functions 
    bool hasPrologScript() const { return this->prologScript_ != nullptr;};
    void deletePrologScript() { this->prologScript_ = nullptr;};
    inline string prologScript() const { DARABONBA_PTR_GET_DEFAULT(prologScript_, "") };
    inline CreateActionPlanRequest& setPrologScript(string prologScript) { DARABONBA_PTR_SET_VALUE(prologScript_, prologScript) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<CreateActionPlanRequestRegions> & regions() const { DARABONBA_PTR_GET_CONST(regions_, vector<CreateActionPlanRequestRegions>) };
    inline vector<CreateActionPlanRequestRegions> regions() { DARABONBA_PTR_GET(regions_, vector<CreateActionPlanRequestRegions>) };
    inline CreateActionPlanRequest& setRegions(const vector<CreateActionPlanRequestRegions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline CreateActionPlanRequest& setRegions(vector<CreateActionPlanRequestRegions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateActionPlanRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<CreateActionPlanRequestResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<CreateActionPlanRequestResources>) };
    inline vector<CreateActionPlanRequestResources> resources() { DARABONBA_PTR_GET(resources_, vector<CreateActionPlanRequestResources>) };
    inline CreateActionPlanRequest& setResources(const vector<CreateActionPlanRequestResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline CreateActionPlanRequest& setResources(vector<CreateActionPlanRequestResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string script() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline CreateActionPlanRequest& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


  protected:
    // The name of the execution plan.
    std::shared_ptr<string> actionPlanName_ = nullptr;
    // The type of the resource.
    // 
    // *   Standard
    // *   Dedicated: You must enable a whitelist for use.
    // *   Economic: You must enable a whitelist for use.
    std::shared_ptr<string> allocationSpec_ = nullptr;
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The expected scale of resources for the execution plan. If the ResourceType parameter is set to VcpuCapacity, the execution plan is expected to have 10000 vCPUs.
    std::shared_ptr<double> desiredCapacity_ = nullptr;
    // The computing power level. This value is valid only when the resource type is Economic. The following disk categories are supported:
    // 
    // *   General
    // *   Performance
    // 
    // Default value: General
    std::shared_ptr<string> level_ = nullptr;
    // The pre-processing script. Base64 encoding is required.
    std::shared_ptr<string> prologScript_ = nullptr;
    // The list of resource configurations in the region where the execution plan runs.
    std::shared_ptr<vector<CreateActionPlanRequestRegions>> regions_ = nullptr;
    // Target resource type: the capacity of vCPUs or the number of execution nodes. Valid values:
    // 
    // *   VCpuCapacity
    // *   ExecutorCapacity
    std::shared_ptr<string> resourceType_ = nullptr;
    // The list of resource configurations of the execution plan runtime environment. You can configure 1 to 10 resources.
    std::shared_ptr<vector<CreateActionPlanRequestResources>> resources_ = nullptr;
    // The running-job script. Base64 encoding is required.
    std::shared_ptr<string> script_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
