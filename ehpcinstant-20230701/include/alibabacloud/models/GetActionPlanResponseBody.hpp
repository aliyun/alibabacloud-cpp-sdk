// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACTIONPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACTIONPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetActionPlanResponseBodyRegions.hpp>
#include <alibabacloud/models/GetActionPlanResponseBodyResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetActionPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetActionPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActionPlanId, actionPlanId_);
      DARABONBA_PTR_TO_JSON(ActionPlanName, actionPlanName_);
      DARABONBA_PTR_TO_JSON(AllocationSpec, allocationSpec_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DesiredCapacity, desiredCapacity_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(PrologScript, prologScript_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalCapacity, totalCapacity_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetActionPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionPlanId, actionPlanId_);
      DARABONBA_PTR_FROM_JSON(ActionPlanName, actionPlanName_);
      DARABONBA_PTR_FROM_JSON(AllocationSpec, allocationSpec_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DesiredCapacity, desiredCapacity_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(PrologScript, prologScript_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalCapacity, totalCapacity_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetActionPlanResponseBody() = default ;
    GetActionPlanResponseBody(const GetActionPlanResponseBody &) = default ;
    GetActionPlanResponseBody(GetActionPlanResponseBody &&) = default ;
    GetActionPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetActionPlanResponseBody() = default ;
    GetActionPlanResponseBody& operator=(const GetActionPlanResponseBody &) = default ;
    GetActionPlanResponseBody& operator=(GetActionPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionPlanId_ == nullptr
        && return this->actionPlanName_ == nullptr && return this->allocationSpec_ == nullptr && return this->appId_ == nullptr && return this->createTime_ == nullptr && return this->desiredCapacity_ == nullptr
        && return this->level_ == nullptr && return this->prologScript_ == nullptr && return this->regions_ == nullptr && return this->requestId_ == nullptr && return this->resourceType_ == nullptr
        && return this->resources_ == nullptr && return this->status_ == nullptr && return this->totalCapacity_ == nullptr && return this->updateTime_ == nullptr; };
    // actionPlanId Field Functions 
    bool hasActionPlanId() const { return this->actionPlanId_ != nullptr;};
    void deleteActionPlanId() { this->actionPlanId_ = nullptr;};
    inline string actionPlanId() const { DARABONBA_PTR_GET_DEFAULT(actionPlanId_, "") };
    inline GetActionPlanResponseBody& setActionPlanId(string actionPlanId) { DARABONBA_PTR_SET_VALUE(actionPlanId_, actionPlanId) };


    // actionPlanName Field Functions 
    bool hasActionPlanName() const { return this->actionPlanName_ != nullptr;};
    void deleteActionPlanName() { this->actionPlanName_ = nullptr;};
    inline string actionPlanName() const { DARABONBA_PTR_GET_DEFAULT(actionPlanName_, "") };
    inline GetActionPlanResponseBody& setActionPlanName(string actionPlanName) { DARABONBA_PTR_SET_VALUE(actionPlanName_, actionPlanName) };


    // allocationSpec Field Functions 
    bool hasAllocationSpec() const { return this->allocationSpec_ != nullptr;};
    void deleteAllocationSpec() { this->allocationSpec_ = nullptr;};
    inline string allocationSpec() const { DARABONBA_PTR_GET_DEFAULT(allocationSpec_, "") };
    inline GetActionPlanResponseBody& setAllocationSpec(string allocationSpec) { DARABONBA_PTR_SET_VALUE(allocationSpec_, allocationSpec) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetActionPlanResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetActionPlanResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // desiredCapacity Field Functions 
    bool hasDesiredCapacity() const { return this->desiredCapacity_ != nullptr;};
    void deleteDesiredCapacity() { this->desiredCapacity_ = nullptr;};
    inline float desiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(desiredCapacity_, 0.0) };
    inline GetActionPlanResponseBody& setDesiredCapacity(float desiredCapacity) { DARABONBA_PTR_SET_VALUE(desiredCapacity_, desiredCapacity) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetActionPlanResponseBody& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // prologScript Field Functions 
    bool hasPrologScript() const { return this->prologScript_ != nullptr;};
    void deletePrologScript() { this->prologScript_ = nullptr;};
    inline string prologScript() const { DARABONBA_PTR_GET_DEFAULT(prologScript_, "") };
    inline GetActionPlanResponseBody& setPrologScript(string prologScript) { DARABONBA_PTR_SET_VALUE(prologScript_, prologScript) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<GetActionPlanResponseBodyRegions> & regions() const { DARABONBA_PTR_GET_CONST(regions_, vector<GetActionPlanResponseBodyRegions>) };
    inline vector<GetActionPlanResponseBodyRegions> regions() { DARABONBA_PTR_GET(regions_, vector<GetActionPlanResponseBodyRegions>) };
    inline GetActionPlanResponseBody& setRegions(const vector<GetActionPlanResponseBodyRegions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline GetActionPlanResponseBody& setRegions(vector<GetActionPlanResponseBodyRegions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetActionPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetActionPlanResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<GetActionPlanResponseBodyResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<GetActionPlanResponseBodyResources>) };
    inline vector<GetActionPlanResponseBodyResources> resources() { DARABONBA_PTR_GET(resources_, vector<GetActionPlanResponseBodyResources>) };
    inline GetActionPlanResponseBody& setResources(const vector<GetActionPlanResponseBodyResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline GetActionPlanResponseBody& setResources(vector<GetActionPlanResponseBodyResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetActionPlanResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalCapacity Field Functions 
    bool hasTotalCapacity() const { return this->totalCapacity_ != nullptr;};
    void deleteTotalCapacity() { this->totalCapacity_ = nullptr;};
    inline float totalCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalCapacity_, 0.0) };
    inline GetActionPlanResponseBody& setTotalCapacity(float totalCapacity) { DARABONBA_PTR_SET_VALUE(totalCapacity_, totalCapacity) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetActionPlanResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The ID of the execution plan.
    std::shared_ptr<string> actionPlanId_ = nullptr;
    // The name of the execution plan.
    std::shared_ptr<string> actionPlanName_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> allocationSpec_ = nullptr;
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The time when the execution plan was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The expected scale of resources for the execution plan. If the ResourceType parameter is set to VcpuCapacity, the execution plan is expected to have 10000 vCPUs.
    std::shared_ptr<float> desiredCapacity_ = nullptr;
    // The computing power level.
    std::shared_ptr<string> level_ = nullptr;
    // The pre-processing script. Base64 encoding is required.
    std::shared_ptr<string> prologScript_ = nullptr;
    // The list of resource configurations in the region where the execution plan runs.
    std::shared_ptr<vector<GetActionPlanResponseBodyRegions>> regions_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Target resource type: the capacity of vCPUs or the number of execution nodes. Valid values:
    // 
    // *   VCpuCapacity
    // *   ExecutorCapacity
    std::shared_ptr<string> resourceType_ = nullptr;
    // The list of resource configurations of the execution plan runtime environment.
    std::shared_ptr<vector<GetActionPlanResponseBodyResources>> resources_ = nullptr;
    // The status of the execution plan. The possible values are as follows:
    // 
    // *   Active Instant tasks are dynamically managed only when the execution plan is in the Active state.
    // *   Inactive Instant tasks are no longer managed by execution plans in the Inactive state.
    // *   Deleting You cannot modify the parameters of an execution plan in this state.
    std::shared_ptr<string> status_ = nullptr;
    // The size of the resources currently managed by the execution plan.
    std::shared_ptr<float> totalCapacity_ = nullptr;
    // The time when the execution plan was last modified.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
