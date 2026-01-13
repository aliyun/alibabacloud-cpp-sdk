// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACTIONPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACTIONPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(IntervalMinutes, intervalMinutes_);
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
      DARABONBA_PTR_FROM_JSON(IntervalMinutes, intervalMinutes_);
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
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(Cores, cores_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(Cores, cores_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cores_ == nullptr
        && this->memory_ == nullptr; };
      // cores Field Functions 
      bool hasCores() const { return this->cores_ != nullptr;};
      void deleteCores() { this->cores_ = nullptr;};
      inline float getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0.0) };
      inline Resources& setCores(float cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
      inline Resources& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    protected:
      // The number of CPUs in the running environment.
      shared_ptr<float> cores_ {};
      // The memory size of the running environment. Unit: GiB.
      shared_ptr<float> memory_ {};
    };

    class Regions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Regions& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      };
      friend void from_json(const Darabonba::Json& j, Regions& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      };
      Regions() = default ;
      Regions(const Regions &) = default ;
      Regions(Regions &&) = default ;
      Regions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Regions() = default ;
      Regions& operator=(const Regions &) = default ;
      Regions& operator=(Regions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->securityGroupIds_ == nullptr && this->vSwitchIds_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Regions& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // securityGroupIds Field Functions 
      bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
      void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
      inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
      inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
      inline Regions& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
      inline Regions& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline Regions& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline Regions& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    protected:
      // The region ID of the instance.
      shared_ptr<string> regionId_ {};
      // The list of security groups available for the execution plan in the region.
      shared_ptr<vector<string>> securityGroupIds_ {};
      // The list of VSwitches available for the execution plan in the region.
      shared_ptr<vector<string>> vSwitchIds_ {};
    };

    virtual bool empty() const override { return this->actionPlanId_ == nullptr
        && this->actionPlanName_ == nullptr && this->allocationSpec_ == nullptr && this->appId_ == nullptr && this->createTime_ == nullptr && this->desiredCapacity_ == nullptr
        && this->intervalMinutes_ == nullptr && this->level_ == nullptr && this->prologScript_ == nullptr && this->regions_ == nullptr && this->requestId_ == nullptr
        && this->resourceType_ == nullptr && this->resources_ == nullptr && this->status_ == nullptr && this->totalCapacity_ == nullptr && this->updateTime_ == nullptr; };
    // actionPlanId Field Functions 
    bool hasActionPlanId() const { return this->actionPlanId_ != nullptr;};
    void deleteActionPlanId() { this->actionPlanId_ = nullptr;};
    inline string getActionPlanId() const { DARABONBA_PTR_GET_DEFAULT(actionPlanId_, "") };
    inline GetActionPlanResponseBody& setActionPlanId(string actionPlanId) { DARABONBA_PTR_SET_VALUE(actionPlanId_, actionPlanId) };


    // actionPlanName Field Functions 
    bool hasActionPlanName() const { return this->actionPlanName_ != nullptr;};
    void deleteActionPlanName() { this->actionPlanName_ = nullptr;};
    inline string getActionPlanName() const { DARABONBA_PTR_GET_DEFAULT(actionPlanName_, "") };
    inline GetActionPlanResponseBody& setActionPlanName(string actionPlanName) { DARABONBA_PTR_SET_VALUE(actionPlanName_, actionPlanName) };


    // allocationSpec Field Functions 
    bool hasAllocationSpec() const { return this->allocationSpec_ != nullptr;};
    void deleteAllocationSpec() { this->allocationSpec_ = nullptr;};
    inline string getAllocationSpec() const { DARABONBA_PTR_GET_DEFAULT(allocationSpec_, "") };
    inline GetActionPlanResponseBody& setAllocationSpec(string allocationSpec) { DARABONBA_PTR_SET_VALUE(allocationSpec_, allocationSpec) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetActionPlanResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetActionPlanResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // desiredCapacity Field Functions 
    bool hasDesiredCapacity() const { return this->desiredCapacity_ != nullptr;};
    void deleteDesiredCapacity() { this->desiredCapacity_ = nullptr;};
    inline float getDesiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(desiredCapacity_, 0.0) };
    inline GetActionPlanResponseBody& setDesiredCapacity(float desiredCapacity) { DARABONBA_PTR_SET_VALUE(desiredCapacity_, desiredCapacity) };


    // intervalMinutes Field Functions 
    bool hasIntervalMinutes() const { return this->intervalMinutes_ != nullptr;};
    void deleteIntervalMinutes() { this->intervalMinutes_ = nullptr;};
    inline int32_t getIntervalMinutes() const { DARABONBA_PTR_GET_DEFAULT(intervalMinutes_, 0) };
    inline GetActionPlanResponseBody& setIntervalMinutes(int32_t intervalMinutes) { DARABONBA_PTR_SET_VALUE(intervalMinutes_, intervalMinutes) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetActionPlanResponseBody& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // prologScript Field Functions 
    bool hasPrologScript() const { return this->prologScript_ != nullptr;};
    void deletePrologScript() { this->prologScript_ = nullptr;};
    inline string getPrologScript() const { DARABONBA_PTR_GET_DEFAULT(prologScript_, "") };
    inline GetActionPlanResponseBody& setPrologScript(string prologScript) { DARABONBA_PTR_SET_VALUE(prologScript_, prologScript) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<GetActionPlanResponseBody::Regions> & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, vector<GetActionPlanResponseBody::Regions>) };
    inline vector<GetActionPlanResponseBody::Regions> getRegions() { DARABONBA_PTR_GET(regions_, vector<GetActionPlanResponseBody::Regions>) };
    inline GetActionPlanResponseBody& setRegions(const vector<GetActionPlanResponseBody::Regions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline GetActionPlanResponseBody& setRegions(vector<GetActionPlanResponseBody::Regions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetActionPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetActionPlanResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<GetActionPlanResponseBody::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<GetActionPlanResponseBody::Resources>) };
    inline vector<GetActionPlanResponseBody::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<GetActionPlanResponseBody::Resources>) };
    inline GetActionPlanResponseBody& setResources(const vector<GetActionPlanResponseBody::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline GetActionPlanResponseBody& setResources(vector<GetActionPlanResponseBody::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetActionPlanResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalCapacity Field Functions 
    bool hasTotalCapacity() const { return this->totalCapacity_ != nullptr;};
    void deleteTotalCapacity() { this->totalCapacity_ = nullptr;};
    inline float getTotalCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalCapacity_, 0.0) };
    inline GetActionPlanResponseBody& setTotalCapacity(float totalCapacity) { DARABONBA_PTR_SET_VALUE(totalCapacity_, totalCapacity) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetActionPlanResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The ID of the execution plan.
    shared_ptr<string> actionPlanId_ {};
    // The name of the execution plan.
    shared_ptr<string> actionPlanName_ {};
    // The type of the resource.
    shared_ptr<string> allocationSpec_ {};
    // The ID of the application.
    shared_ptr<string> appId_ {};
    // The time when the execution plan was created.
    shared_ptr<string> createTime_ {};
    // The expected scale of resources for the execution plan. If the ResourceType parameter is set to VcpuCapacity, the execution plan is expected to have 10000 vCPUs.
    shared_ptr<float> desiredCapacity_ {};
    shared_ptr<int32_t> intervalMinutes_ {};
    // The computing power level.
    shared_ptr<string> level_ {};
    // The pre-processing script. Base64 encoding is required.
    shared_ptr<string> prologScript_ {};
    // The list of resource configurations in the region where the execution plan runs.
    shared_ptr<vector<GetActionPlanResponseBody::Regions>> regions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Target resource type: the capacity of vCPUs or the number of execution nodes. Valid values:
    // 
    // *   VCpuCapacity
    // *   ExecutorCapacity
    shared_ptr<string> resourceType_ {};
    // The list of resource configurations of the execution plan runtime environment.
    shared_ptr<vector<GetActionPlanResponseBody::Resources>> resources_ {};
    // The status of the execution plan. The possible values are as follows:
    // 
    // *   Active Instant tasks are dynamically managed only when the execution plan is in the Active state.
    // *   Inactive Instant tasks are no longer managed by execution plans in the Inactive state.
    // *   Deleting You cannot modify the parameters of an execution plan in this state.
    shared_ptr<string> status_ {};
    // The size of the resources currently managed by the execution plan.
    shared_ptr<float> totalCapacity_ {};
    // The time when the execution plan was last modified.
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
