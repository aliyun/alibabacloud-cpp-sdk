// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBRESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBRESOURCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateDBResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AtmConfig, atmConfig_);
      DARABONBA_PTR_TO_JSON(AutoStopInterval, autoStopInterval_);
      DARABONBA_PTR_TO_JSON(Classification, classification_);
      DARABONBA_PTR_TO_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_TO_JSON(ClusterSizeResource, clusterSizeResource_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EnableSpot, enableSpot_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_ANY_TO_JSON(EngineParams, engineParams_);
      DARABONBA_PTR_TO_JSON(GpuElasticPlan, gpuElasticPlan_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(MaxClusterCount, maxClusterCount_);
      DARABONBA_PTR_TO_JSON(MaxComputeResource, maxComputeResource_);
      DARABONBA_PTR_TO_JSON(MaxGpuQuantity, maxGpuQuantity_);
      DARABONBA_PTR_TO_JSON(MinClusterCount, minClusterCount_);
      DARABONBA_PTR_TO_JSON(MinComputeResource, minComputeResource_);
      DARABONBA_PTR_TO_JSON(MinGpuQuantity, minGpuQuantity_);
      DARABONBA_PTR_TO_JSON(RayConfig, rayConfig_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(ScalePolicy, scalePolicy_);
      DARABONBA_PTR_TO_JSON(SpecName, specName_);
      DARABONBA_PTR_TO_JSON(TargetResourceGroupName, targetResourceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AtmConfig, atmConfig_);
      DARABONBA_PTR_FROM_JSON(AutoStopInterval, autoStopInterval_);
      DARABONBA_PTR_FROM_JSON(Classification, classification_);
      DARABONBA_PTR_FROM_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_FROM_JSON(ClusterSizeResource, clusterSizeResource_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EnableSpot, enableSpot_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_ANY_FROM_JSON(EngineParams, engineParams_);
      DARABONBA_PTR_FROM_JSON(GpuElasticPlan, gpuElasticPlan_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(MaxClusterCount, maxClusterCount_);
      DARABONBA_PTR_FROM_JSON(MaxComputeResource, maxComputeResource_);
      DARABONBA_PTR_FROM_JSON(MaxGpuQuantity, maxGpuQuantity_);
      DARABONBA_PTR_FROM_JSON(MinClusterCount, minClusterCount_);
      DARABONBA_PTR_FROM_JSON(MinComputeResource, minComputeResource_);
      DARABONBA_PTR_FROM_JSON(MinGpuQuantity, minGpuQuantity_);
      DARABONBA_PTR_FROM_JSON(RayConfig, rayConfig_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(ScalePolicy, scalePolicy_);
      DARABONBA_PTR_FROM_JSON(SpecName, specName_);
      DARABONBA_PTR_FROM_JSON(TargetResourceGroupName, targetResourceGroupName_);
    };
    CreateDBResourceGroupRequest() = default ;
    CreateDBResourceGroupRequest(const CreateDBResourceGroupRequest &) = default ;
    CreateDBResourceGroupRequest(CreateDBResourceGroupRequest &&) = default ;
    CreateDBResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBResourceGroupRequest() = default ;
    CreateDBResourceGroupRequest& operator=(const CreateDBResourceGroupRequest &) = default ;
    CreateDBResourceGroupRequest& operator=(CreateDBResourceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(QueryTime, queryTime_);
        DARABONBA_PTR_TO_JSON(TargetGroupName, targetGroupName_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(QueryTime, queryTime_);
        DARABONBA_PTR_FROM_JSON(TargetGroupName, targetGroupName_);
      };
      Rules() = default ;
      Rules(const Rules &) = default ;
      Rules(Rules &&) = default ;
      Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rules() = default ;
      Rules& operator=(const Rules &) = default ;
      Rules& operator=(Rules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupName_ == nullptr
        && this->queryTime_ == nullptr && this->targetGroupName_ == nullptr; };
      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Rules& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // queryTime Field Functions 
      bool hasQueryTime() const { return this->queryTime_ != nullptr;};
      void deleteQueryTime() { this->queryTime_ = nullptr;};
      inline string getQueryTime() const { DARABONBA_PTR_GET_DEFAULT(queryTime_, "") };
      inline Rules& setQueryTime(string queryTime) { DARABONBA_PTR_SET_VALUE(queryTime_, queryTime) };


      // targetGroupName Field Functions 
      bool hasTargetGroupName() const { return this->targetGroupName_ != nullptr;};
      void deleteTargetGroupName() { this->targetGroupName_ = nullptr;};
      inline string getTargetGroupName() const { DARABONBA_PTR_GET_DEFAULT(targetGroupName_, "") };
      inline Rules& setTargetGroupName(string targetGroupName) { DARABONBA_PTR_SET_VALUE(targetGroupName_, targetGroupName) };


    protected:
      // The name of the resource group.
      // - The name can be up to 255 characters in length.
      // - The name must start with a digit, an uppercase letter, or a lowercase letter.
      // - The name can contain digits, uppercase letters, lowercase letters, hyphens (-), and underscores (_).
      shared_ptr<string> groupName_ {};
      // The query execution time threshold. Unit: milliseconds (ms).
      shared_ptr<string> queryTime_ {};
      // The name of the destination resource group.
      shared_ptr<string> targetGroupName_ {};
    };

    class RayConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RayConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(EnableUserEni, enableUserEni_);
        DARABONBA_PTR_TO_JSON(HeadAllocateUnit, headAllocateUnit_);
        DARABONBA_PTR_TO_JSON(HeadDiskCapacity, headDiskCapacity_);
        DARABONBA_PTR_TO_JSON(HeadSpec, headSpec_);
        DARABONBA_PTR_TO_JSON(HeadSpecType, headSpecType_);
        DARABONBA_PTR_TO_JSON(UserDefinedRequirements, userDefinedRequirements_);
        DARABONBA_PTR_TO_JSON(WorkerGroups, workerGroups_);
      };
      friend void from_json(const Darabonba::Json& j, RayConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(EnableUserEni, enableUserEni_);
        DARABONBA_PTR_FROM_JSON(HeadAllocateUnit, headAllocateUnit_);
        DARABONBA_PTR_FROM_JSON(HeadDiskCapacity, headDiskCapacity_);
        DARABONBA_PTR_FROM_JSON(HeadSpec, headSpec_);
        DARABONBA_PTR_FROM_JSON(HeadSpecType, headSpecType_);
        DARABONBA_PTR_FROM_JSON(UserDefinedRequirements, userDefinedRequirements_);
        DARABONBA_PTR_FROM_JSON(WorkerGroups, workerGroups_);
      };
      RayConfig() = default ;
      RayConfig(const RayConfig &) = default ;
      RayConfig(RayConfig &&) = default ;
      RayConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RayConfig() = default ;
      RayConfig& operator=(const RayConfig &) = default ;
      RayConfig& operator=(RayConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WorkerGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WorkerGroups& obj) { 
          DARABONBA_PTR_TO_JSON(AllocateUnit, allocateUnit_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(MaxWorkerQuantity, maxWorkerQuantity_);
          DARABONBA_PTR_TO_JSON(MinWorkerQuantity, minWorkerQuantity_);
          DARABONBA_PTR_TO_JSON(WorkerDiskCapacity, workerDiskCapacity_);
          DARABONBA_PTR_TO_JSON(WorkerSpecName, workerSpecName_);
          DARABONBA_PTR_TO_JSON(WorkerSpecType, workerSpecType_);
        };
        friend void from_json(const Darabonba::Json& j, WorkerGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(AllocateUnit, allocateUnit_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(MaxWorkerQuantity, maxWorkerQuantity_);
          DARABONBA_PTR_FROM_JSON(MinWorkerQuantity, minWorkerQuantity_);
          DARABONBA_PTR_FROM_JSON(WorkerDiskCapacity, workerDiskCapacity_);
          DARABONBA_PTR_FROM_JSON(WorkerSpecName, workerSpecName_);
          DARABONBA_PTR_FROM_JSON(WorkerSpecType, workerSpecType_);
        };
        WorkerGroups() = default ;
        WorkerGroups(const WorkerGroups &) = default ;
        WorkerGroups(WorkerGroups &&) = default ;
        WorkerGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WorkerGroups() = default ;
        WorkerGroups& operator=(const WorkerGroups &) = default ;
        WorkerGroups& operator=(WorkerGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allocateUnit_ == nullptr
        && this->groupName_ == nullptr && this->maxWorkerQuantity_ == nullptr && this->minWorkerQuantity_ == nullptr && this->workerDiskCapacity_ == nullptr && this->workerSpecName_ == nullptr
        && this->workerSpecType_ == nullptr; };
        // allocateUnit Field Functions 
        bool hasAllocateUnit() const { return this->allocateUnit_ != nullptr;};
        void deleteAllocateUnit() { this->allocateUnit_ = nullptr;};
        inline string getAllocateUnit() const { DARABONBA_PTR_GET_DEFAULT(allocateUnit_, "") };
        inline WorkerGroups& setAllocateUnit(string allocateUnit) { DARABONBA_PTR_SET_VALUE(allocateUnit_, allocateUnit) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline WorkerGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // maxWorkerQuantity Field Functions 
        bool hasMaxWorkerQuantity() const { return this->maxWorkerQuantity_ != nullptr;};
        void deleteMaxWorkerQuantity() { this->maxWorkerQuantity_ = nullptr;};
        inline int32_t getMaxWorkerQuantity() const { DARABONBA_PTR_GET_DEFAULT(maxWorkerQuantity_, 0) };
        inline WorkerGroups& setMaxWorkerQuantity(int32_t maxWorkerQuantity) { DARABONBA_PTR_SET_VALUE(maxWorkerQuantity_, maxWorkerQuantity) };


        // minWorkerQuantity Field Functions 
        bool hasMinWorkerQuantity() const { return this->minWorkerQuantity_ != nullptr;};
        void deleteMinWorkerQuantity() { this->minWorkerQuantity_ = nullptr;};
        inline int32_t getMinWorkerQuantity() const { DARABONBA_PTR_GET_DEFAULT(minWorkerQuantity_, 0) };
        inline WorkerGroups& setMinWorkerQuantity(int32_t minWorkerQuantity) { DARABONBA_PTR_SET_VALUE(minWorkerQuantity_, minWorkerQuantity) };


        // workerDiskCapacity Field Functions 
        bool hasWorkerDiskCapacity() const { return this->workerDiskCapacity_ != nullptr;};
        void deleteWorkerDiskCapacity() { this->workerDiskCapacity_ = nullptr;};
        inline string getWorkerDiskCapacity() const { DARABONBA_PTR_GET_DEFAULT(workerDiskCapacity_, "") };
        inline WorkerGroups& setWorkerDiskCapacity(string workerDiskCapacity) { DARABONBA_PTR_SET_VALUE(workerDiskCapacity_, workerDiskCapacity) };


        // workerSpecName Field Functions 
        bool hasWorkerSpecName() const { return this->workerSpecName_ != nullptr;};
        void deleteWorkerSpecName() { this->workerSpecName_ = nullptr;};
        inline string getWorkerSpecName() const { DARABONBA_PTR_GET_DEFAULT(workerSpecName_, "") };
        inline WorkerGroups& setWorkerSpecName(string workerSpecName) { DARABONBA_PTR_SET_VALUE(workerSpecName_, workerSpecName) };


        // workerSpecType Field Functions 
        bool hasWorkerSpecType() const { return this->workerSpecType_ != nullptr;};
        void deleteWorkerSpecType() { this->workerSpecType_ = nullptr;};
        inline string getWorkerSpecType() const { DARABONBA_PTR_GET_DEFAULT(workerSpecType_, "") };
        inline WorkerGroups& setWorkerSpecType(string workerSpecType) { DARABONBA_PTR_SET_VALUE(workerSpecType_, workerSpecType) };


      protected:
        // The allocation unit.
        shared_ptr<string> allocateUnit_ {};
        // The name of the worker group.
        shared_ptr<string> groupName_ {};
        // The maximum number of workers.
        shared_ptr<int32_t> maxWorkerQuantity_ {};
        // The minimum number of workers.
        shared_ptr<int32_t> minWorkerQuantity_ {};
        // The disk size of the worker node.
        shared_ptr<string> workerDiskCapacity_ {};
        // The node specifications of the worker node.
        shared_ptr<string> workerSpecName_ {};
        // The resource type of the worker node.
        shared_ptr<string> workerSpecType_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->enableUserEni_ == nullptr && this->headAllocateUnit_ == nullptr && this->headDiskCapacity_ == nullptr && this->headSpec_ == nullptr && this->headSpecType_ == nullptr
        && this->userDefinedRequirements_ == nullptr && this->workerGroups_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline RayConfig& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // enableUserEni Field Functions 
      bool hasEnableUserEni() const { return this->enableUserEni_ != nullptr;};
      void deleteEnableUserEni() { this->enableUserEni_ = nullptr;};
      inline bool getEnableUserEni() const { DARABONBA_PTR_GET_DEFAULT(enableUserEni_, false) };
      inline RayConfig& setEnableUserEni(bool enableUserEni) { DARABONBA_PTR_SET_VALUE(enableUserEni_, enableUserEni) };


      // headAllocateUnit Field Functions 
      bool hasHeadAllocateUnit() const { return this->headAllocateUnit_ != nullptr;};
      void deleteHeadAllocateUnit() { this->headAllocateUnit_ = nullptr;};
      inline string getHeadAllocateUnit() const { DARABONBA_PTR_GET_DEFAULT(headAllocateUnit_, "") };
      inline RayConfig& setHeadAllocateUnit(string headAllocateUnit) { DARABONBA_PTR_SET_VALUE(headAllocateUnit_, headAllocateUnit) };


      // headDiskCapacity Field Functions 
      bool hasHeadDiskCapacity() const { return this->headDiskCapacity_ != nullptr;};
      void deleteHeadDiskCapacity() { this->headDiskCapacity_ = nullptr;};
      inline string getHeadDiskCapacity() const { DARABONBA_PTR_GET_DEFAULT(headDiskCapacity_, "") };
      inline RayConfig& setHeadDiskCapacity(string headDiskCapacity) { DARABONBA_PTR_SET_VALUE(headDiskCapacity_, headDiskCapacity) };


      // headSpec Field Functions 
      bool hasHeadSpec() const { return this->headSpec_ != nullptr;};
      void deleteHeadSpec() { this->headSpec_ = nullptr;};
      inline string getHeadSpec() const { DARABONBA_PTR_GET_DEFAULT(headSpec_, "") };
      inline RayConfig& setHeadSpec(string headSpec) { DARABONBA_PTR_SET_VALUE(headSpec_, headSpec) };


      // headSpecType Field Functions 
      bool hasHeadSpecType() const { return this->headSpecType_ != nullptr;};
      void deleteHeadSpecType() { this->headSpecType_ = nullptr;};
      inline string getHeadSpecType() const { DARABONBA_PTR_GET_DEFAULT(headSpecType_, "") };
      inline RayConfig& setHeadSpecType(string headSpecType) { DARABONBA_PTR_SET_VALUE(headSpecType_, headSpecType) };


      // userDefinedRequirements Field Functions 
      bool hasUserDefinedRequirements() const { return this->userDefinedRequirements_ != nullptr;};
      void deleteUserDefinedRequirements() { this->userDefinedRequirements_ = nullptr;};
      inline string getUserDefinedRequirements() const { DARABONBA_PTR_GET_DEFAULT(userDefinedRequirements_, "") };
      inline RayConfig& setUserDefinedRequirements(string userDefinedRequirements) { DARABONBA_PTR_SET_VALUE(userDefinedRequirements_, userDefinedRequirements) };


      // workerGroups Field Functions 
      bool hasWorkerGroups() const { return this->workerGroups_ != nullptr;};
      void deleteWorkerGroups() { this->workerGroups_ = nullptr;};
      inline const vector<RayConfig::WorkerGroups> & getWorkerGroups() const { DARABONBA_PTR_GET_CONST(workerGroups_, vector<RayConfig::WorkerGroups>) };
      inline vector<RayConfig::WorkerGroups> getWorkerGroups() { DARABONBA_PTR_GET(workerGroups_, vector<RayConfig::WorkerGroups>) };
      inline RayConfig& setWorkerGroups(const vector<RayConfig::WorkerGroups> & workerGroups) { DARABONBA_PTR_SET_VALUE(workerGroups_, workerGroups) };
      inline RayConfig& setWorkerGroups(vector<RayConfig::WorkerGroups> && workerGroups) { DARABONBA_PTR_SET_RVALUE(workerGroups_, workerGroups) };


    protected:
      // The Ray cluster type. Valid values:
      // 
      // - BASIC: basic type, non-high-availability
      // - HIGH_AVAILABILITY: high-availability type
      shared_ptr<string> category_ {};
      // Specifies whether to enable user ENI connectivity.
      shared_ptr<bool> enableUserEni_ {};
      // The allocation unit of the head node.
      shared_ptr<string> headAllocateUnit_ {};
      // The disk size of the head node.
      shared_ptr<string> headDiskCapacity_ {};
      // The node specifications of the head node.
      shared_ptr<string> headSpec_ {};
      // The resource type of the head node.
      shared_ptr<string> headSpecType_ {};
      shared_ptr<string> userDefinedRequirements_ {};
      // The list of Ray worker group configurations.
      shared_ptr<vector<RayConfig::WorkerGroups>> workerGroups_ {};
    };

    class GpuElasticPlan : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GpuElasticPlan& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
      };
      friend void from_json(const Darabonba::Json& j, GpuElasticPlan& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
      };
      GpuElasticPlan() = default ;
      GpuElasticPlan(const GpuElasticPlan &) = default ;
      GpuElasticPlan(GpuElasticPlan &&) = default ;
      GpuElasticPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GpuElasticPlan() = default ;
      GpuElasticPlan& operator=(const GpuElasticPlan &) = default ;
      GpuElasticPlan& operator=(GpuElasticPlan &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(EndCronExpression, endCronExpression_);
          DARABONBA_PTR_TO_JSON(StartCronExpression, startCronExpression_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(EndCronExpression, endCronExpression_);
          DARABONBA_PTR_FROM_JSON(StartCronExpression, startCronExpression_);
        };
        Rules() = default ;
        Rules(const Rules &) = default ;
        Rules(Rules &&) = default ;
        Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rules() = default ;
        Rules& operator=(const Rules &) = default ;
        Rules& operator=(Rules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endCronExpression_ == nullptr
        && this->startCronExpression_ == nullptr; };
        // endCronExpression Field Functions 
        bool hasEndCronExpression() const { return this->endCronExpression_ != nullptr;};
        void deleteEndCronExpression() { this->endCronExpression_ = nullptr;};
        inline string getEndCronExpression() const { DARABONBA_PTR_GET_DEFAULT(endCronExpression_, "") };
        inline Rules& setEndCronExpression(string endCronExpression) { DARABONBA_PTR_SET_VALUE(endCronExpression_, endCronExpression) };


        // startCronExpression Field Functions 
        bool hasStartCronExpression() const { return this->startCronExpression_ != nullptr;};
        void deleteStartCronExpression() { this->startCronExpression_ = nullptr;};
        inline string getStartCronExpression() const { DARABONBA_PTR_GET_DEFAULT(startCronExpression_, "") };
        inline Rules& setStartCronExpression(string startCronExpression) { DARABONBA_PTR_SET_VALUE(startCronExpression_, startCronExpression) };


      protected:
        // The end time as a cron expression. The interval must be at least 1 hour.
        shared_ptr<string> endCronExpression_ {};
        // The start time as a cron expression. The interval must be at least 1 hour.
        shared_ptr<string> startCronExpression_ {};
      };

      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->rules_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline GpuElasticPlan& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<GpuElasticPlan::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<GpuElasticPlan::Rules>) };
      inline vector<GpuElasticPlan::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<GpuElasticPlan::Rules>) };
      inline GpuElasticPlan& setRules(const vector<GpuElasticPlan::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline GpuElasticPlan& setRules(vector<GpuElasticPlan::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    protected:
      // Specifies whether to enable the elastic plan immediately after creation. Valid values:
      // - true: enables the elastic plan immediately.
      // - false: does not enable the elastic plan.
      shared_ptr<bool> enabled_ {};
      // The list of rules.
      shared_ptr<vector<GpuElasticPlan::Rules>> rules_ {};
    };

    class AtmConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AtmConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AuthNodeNum, authNodeNum_);
        DARABONBA_PTR_TO_JSON(AuthNodeSpec, authNodeSpec_);
        DARABONBA_PTR_TO_JSON(InsertNodeNum, insertNodeNum_);
        DARABONBA_PTR_TO_JSON(InsertNodeSpec, insertNodeSpec_);
        DARABONBA_PTR_TO_JSON(SelectNodeCacheSize, selectNodeCacheSize_);
        DARABONBA_PTR_TO_JSON(SelectNodeNum, selectNodeNum_);
        DARABONBA_PTR_TO_JSON(SelectNodeSpec, selectNodeSpec_);
        DARABONBA_PTR_TO_JSON(StorageNodeDiskSize, storageNodeDiskSize_);
        DARABONBA_PTR_TO_JSON(StorageNodeDiskType, storageNodeDiskType_);
        DARABONBA_PTR_TO_JSON(StorageNodeNum, storageNodeNum_);
        DARABONBA_PTR_TO_JSON(StorageNodeSpec, storageNodeSpec_);
      };
      friend void from_json(const Darabonba::Json& j, AtmConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthNodeNum, authNodeNum_);
        DARABONBA_PTR_FROM_JSON(AuthNodeSpec, authNodeSpec_);
        DARABONBA_PTR_FROM_JSON(InsertNodeNum, insertNodeNum_);
        DARABONBA_PTR_FROM_JSON(InsertNodeSpec, insertNodeSpec_);
        DARABONBA_PTR_FROM_JSON(SelectNodeCacheSize, selectNodeCacheSize_);
        DARABONBA_PTR_FROM_JSON(SelectNodeNum, selectNodeNum_);
        DARABONBA_PTR_FROM_JSON(SelectNodeSpec, selectNodeSpec_);
        DARABONBA_PTR_FROM_JSON(StorageNodeDiskSize, storageNodeDiskSize_);
        DARABONBA_PTR_FROM_JSON(StorageNodeDiskType, storageNodeDiskType_);
        DARABONBA_PTR_FROM_JSON(StorageNodeNum, storageNodeNum_);
        DARABONBA_PTR_FROM_JSON(StorageNodeSpec, storageNodeSpec_);
      };
      AtmConfig() = default ;
      AtmConfig(const AtmConfig &) = default ;
      AtmConfig(AtmConfig &&) = default ;
      AtmConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AtmConfig() = default ;
      AtmConfig& operator=(const AtmConfig &) = default ;
      AtmConfig& operator=(AtmConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authNodeNum_ == nullptr
        && this->authNodeSpec_ == nullptr && this->insertNodeNum_ == nullptr && this->insertNodeSpec_ == nullptr && this->selectNodeCacheSize_ == nullptr && this->selectNodeNum_ == nullptr
        && this->selectNodeSpec_ == nullptr && this->storageNodeDiskSize_ == nullptr && this->storageNodeDiskType_ == nullptr && this->storageNodeNum_ == nullptr && this->storageNodeSpec_ == nullptr; };
      // authNodeNum Field Functions 
      bool hasAuthNodeNum() const { return this->authNodeNum_ != nullptr;};
      void deleteAuthNodeNum() { this->authNodeNum_ = nullptr;};
      inline int32_t getAuthNodeNum() const { DARABONBA_PTR_GET_DEFAULT(authNodeNum_, 0) };
      inline AtmConfig& setAuthNodeNum(int32_t authNodeNum) { DARABONBA_PTR_SET_VALUE(authNodeNum_, authNodeNum) };


      // authNodeSpec Field Functions 
      bool hasAuthNodeSpec() const { return this->authNodeSpec_ != nullptr;};
      void deleteAuthNodeSpec() { this->authNodeSpec_ = nullptr;};
      inline string getAuthNodeSpec() const { DARABONBA_PTR_GET_DEFAULT(authNodeSpec_, "") };
      inline AtmConfig& setAuthNodeSpec(string authNodeSpec) { DARABONBA_PTR_SET_VALUE(authNodeSpec_, authNodeSpec) };


      // insertNodeNum Field Functions 
      bool hasInsertNodeNum() const { return this->insertNodeNum_ != nullptr;};
      void deleteInsertNodeNum() { this->insertNodeNum_ = nullptr;};
      inline int32_t getInsertNodeNum() const { DARABONBA_PTR_GET_DEFAULT(insertNodeNum_, 0) };
      inline AtmConfig& setInsertNodeNum(int32_t insertNodeNum) { DARABONBA_PTR_SET_VALUE(insertNodeNum_, insertNodeNum) };


      // insertNodeSpec Field Functions 
      bool hasInsertNodeSpec() const { return this->insertNodeSpec_ != nullptr;};
      void deleteInsertNodeSpec() { this->insertNodeSpec_ = nullptr;};
      inline string getInsertNodeSpec() const { DARABONBA_PTR_GET_DEFAULT(insertNodeSpec_, "") };
      inline AtmConfig& setInsertNodeSpec(string insertNodeSpec) { DARABONBA_PTR_SET_VALUE(insertNodeSpec_, insertNodeSpec) };


      // selectNodeCacheSize Field Functions 
      bool hasSelectNodeCacheSize() const { return this->selectNodeCacheSize_ != nullptr;};
      void deleteSelectNodeCacheSize() { this->selectNodeCacheSize_ = nullptr;};
      inline int32_t getSelectNodeCacheSize() const { DARABONBA_PTR_GET_DEFAULT(selectNodeCacheSize_, 0) };
      inline AtmConfig& setSelectNodeCacheSize(int32_t selectNodeCacheSize) { DARABONBA_PTR_SET_VALUE(selectNodeCacheSize_, selectNodeCacheSize) };


      // selectNodeNum Field Functions 
      bool hasSelectNodeNum() const { return this->selectNodeNum_ != nullptr;};
      void deleteSelectNodeNum() { this->selectNodeNum_ = nullptr;};
      inline int32_t getSelectNodeNum() const { DARABONBA_PTR_GET_DEFAULT(selectNodeNum_, 0) };
      inline AtmConfig& setSelectNodeNum(int32_t selectNodeNum) { DARABONBA_PTR_SET_VALUE(selectNodeNum_, selectNodeNum) };


      // selectNodeSpec Field Functions 
      bool hasSelectNodeSpec() const { return this->selectNodeSpec_ != nullptr;};
      void deleteSelectNodeSpec() { this->selectNodeSpec_ = nullptr;};
      inline string getSelectNodeSpec() const { DARABONBA_PTR_GET_DEFAULT(selectNodeSpec_, "") };
      inline AtmConfig& setSelectNodeSpec(string selectNodeSpec) { DARABONBA_PTR_SET_VALUE(selectNodeSpec_, selectNodeSpec) };


      // storageNodeDiskSize Field Functions 
      bool hasStorageNodeDiskSize() const { return this->storageNodeDiskSize_ != nullptr;};
      void deleteStorageNodeDiskSize() { this->storageNodeDiskSize_ = nullptr;};
      inline int32_t getStorageNodeDiskSize() const { DARABONBA_PTR_GET_DEFAULT(storageNodeDiskSize_, 0) };
      inline AtmConfig& setStorageNodeDiskSize(int32_t storageNodeDiskSize) { DARABONBA_PTR_SET_VALUE(storageNodeDiskSize_, storageNodeDiskSize) };


      // storageNodeDiskType Field Functions 
      bool hasStorageNodeDiskType() const { return this->storageNodeDiskType_ != nullptr;};
      void deleteStorageNodeDiskType() { this->storageNodeDiskType_ = nullptr;};
      inline string getStorageNodeDiskType() const { DARABONBA_PTR_GET_DEFAULT(storageNodeDiskType_, "") };
      inline AtmConfig& setStorageNodeDiskType(string storageNodeDiskType) { DARABONBA_PTR_SET_VALUE(storageNodeDiskType_, storageNodeDiskType) };


      // storageNodeNum Field Functions 
      bool hasStorageNodeNum() const { return this->storageNodeNum_ != nullptr;};
      void deleteStorageNodeNum() { this->storageNodeNum_ = nullptr;};
      inline int32_t getStorageNodeNum() const { DARABONBA_PTR_GET_DEFAULT(storageNodeNum_, 0) };
      inline AtmConfig& setStorageNodeNum(int32_t storageNodeNum) { DARABONBA_PTR_SET_VALUE(storageNodeNum_, storageNodeNum) };


      // storageNodeSpec Field Functions 
      bool hasStorageNodeSpec() const { return this->storageNodeSpec_ != nullptr;};
      void deleteStorageNodeSpec() { this->storageNodeSpec_ = nullptr;};
      inline string getStorageNodeSpec() const { DARABONBA_PTR_GET_DEFAULT(storageNodeSpec_, "") };
      inline AtmConfig& setStorageNodeSpec(string storageNodeSpec) { DARABONBA_PTR_SET_VALUE(storageNodeSpec_, storageNodeSpec) };


    protected:
      shared_ptr<int32_t> authNodeNum_ {};
      shared_ptr<string> authNodeSpec_ {};
      shared_ptr<int32_t> insertNodeNum_ {};
      shared_ptr<string> insertNodeSpec_ {};
      shared_ptr<int32_t> selectNodeCacheSize_ {};
      shared_ptr<int32_t> selectNodeNum_ {};
      shared_ptr<string> selectNodeSpec_ {};
      shared_ptr<int32_t> storageNodeDiskSize_ {};
      shared_ptr<string> storageNodeDiskType_ {};
      shared_ptr<int32_t> storageNodeNum_ {};
      shared_ptr<string> storageNodeSpec_ {};
    };

    virtual bool empty() const override { return this->atmConfig_ == nullptr
        && this->autoStopInterval_ == nullptr && this->classification_ == nullptr && this->clusterMode_ == nullptr && this->clusterSizeResource_ == nullptr && this->DBClusterId_ == nullptr
        && this->enableSpot_ == nullptr && this->engine_ == nullptr && this->engineParams_ == nullptr && this->gpuElasticPlan_ == nullptr && this->groupName_ == nullptr
        && this->groupType_ == nullptr && this->maxClusterCount_ == nullptr && this->maxComputeResource_ == nullptr && this->maxGpuQuantity_ == nullptr && this->minClusterCount_ == nullptr
        && this->minComputeResource_ == nullptr && this->minGpuQuantity_ == nullptr && this->rayConfig_ == nullptr && this->regionId_ == nullptr && this->rules_ == nullptr
        && this->scalePolicy_ == nullptr && this->specName_ == nullptr && this->targetResourceGroupName_ == nullptr; };
    // atmConfig Field Functions 
    bool hasAtmConfig() const { return this->atmConfig_ != nullptr;};
    void deleteAtmConfig() { this->atmConfig_ = nullptr;};
    inline const CreateDBResourceGroupRequest::AtmConfig & getAtmConfig() const { DARABONBA_PTR_GET_CONST(atmConfig_, CreateDBResourceGroupRequest::AtmConfig) };
    inline CreateDBResourceGroupRequest::AtmConfig getAtmConfig() { DARABONBA_PTR_GET(atmConfig_, CreateDBResourceGroupRequest::AtmConfig) };
    inline CreateDBResourceGroupRequest& setAtmConfig(const CreateDBResourceGroupRequest::AtmConfig & atmConfig) { DARABONBA_PTR_SET_VALUE(atmConfig_, atmConfig) };
    inline CreateDBResourceGroupRequest& setAtmConfig(CreateDBResourceGroupRequest::AtmConfig && atmConfig) { DARABONBA_PTR_SET_RVALUE(atmConfig_, atmConfig) };


    // autoStopInterval Field Functions 
    bool hasAutoStopInterval() const { return this->autoStopInterval_ != nullptr;};
    void deleteAutoStopInterval() { this->autoStopInterval_ = nullptr;};
    inline string getAutoStopInterval() const { DARABONBA_PTR_GET_DEFAULT(autoStopInterval_, "") };
    inline CreateDBResourceGroupRequest& setAutoStopInterval(string autoStopInterval) { DARABONBA_PTR_SET_VALUE(autoStopInterval_, autoStopInterval) };


    // classification Field Functions 
    bool hasClassification() const { return this->classification_ != nullptr;};
    void deleteClassification() { this->classification_ = nullptr;};
    inline string getClassification() const { DARABONBA_PTR_GET_DEFAULT(classification_, "") };
    inline CreateDBResourceGroupRequest& setClassification(string classification) { DARABONBA_PTR_SET_VALUE(classification_, classification) };


    // clusterMode Field Functions 
    bool hasClusterMode() const { return this->clusterMode_ != nullptr;};
    void deleteClusterMode() { this->clusterMode_ = nullptr;};
    inline string getClusterMode() const { DARABONBA_PTR_GET_DEFAULT(clusterMode_, "") };
    inline CreateDBResourceGroupRequest& setClusterMode(string clusterMode) { DARABONBA_PTR_SET_VALUE(clusterMode_, clusterMode) };


    // clusterSizeResource Field Functions 
    bool hasClusterSizeResource() const { return this->clusterSizeResource_ != nullptr;};
    void deleteClusterSizeResource() { this->clusterSizeResource_ = nullptr;};
    inline string getClusterSizeResource() const { DARABONBA_PTR_GET_DEFAULT(clusterSizeResource_, "") };
    inline CreateDBResourceGroupRequest& setClusterSizeResource(string clusterSizeResource) { DARABONBA_PTR_SET_VALUE(clusterSizeResource_, clusterSizeResource) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateDBResourceGroupRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // enableSpot Field Functions 
    bool hasEnableSpot() const { return this->enableSpot_ != nullptr;};
    void deleteEnableSpot() { this->enableSpot_ = nullptr;};
    inline bool getEnableSpot() const { DARABONBA_PTR_GET_DEFAULT(enableSpot_, false) };
    inline CreateDBResourceGroupRequest& setEnableSpot(bool enableSpot) { DARABONBA_PTR_SET_VALUE(enableSpot_, enableSpot) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateDBResourceGroupRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineParams Field Functions 
    bool hasEngineParams() const { return this->engineParams_ != nullptr;};
    void deleteEngineParams() { this->engineParams_ = nullptr;};
    inline     const Darabonba::Json & getEngineParams() const { DARABONBA_GET(engineParams_) };
    Darabonba::Json & getEngineParams() { DARABONBA_GET(engineParams_) };
    inline CreateDBResourceGroupRequest& setEngineParams(const Darabonba::Json & engineParams) { DARABONBA_SET_VALUE(engineParams_, engineParams) };
    inline CreateDBResourceGroupRequest& setEngineParams(Darabonba::Json && engineParams) { DARABONBA_SET_RVALUE(engineParams_, engineParams) };


    // gpuElasticPlan Field Functions 
    bool hasGpuElasticPlan() const { return this->gpuElasticPlan_ != nullptr;};
    void deleteGpuElasticPlan() { this->gpuElasticPlan_ = nullptr;};
    inline const CreateDBResourceGroupRequest::GpuElasticPlan & getGpuElasticPlan() const { DARABONBA_PTR_GET_CONST(gpuElasticPlan_, CreateDBResourceGroupRequest::GpuElasticPlan) };
    inline CreateDBResourceGroupRequest::GpuElasticPlan getGpuElasticPlan() { DARABONBA_PTR_GET(gpuElasticPlan_, CreateDBResourceGroupRequest::GpuElasticPlan) };
    inline CreateDBResourceGroupRequest& setGpuElasticPlan(const CreateDBResourceGroupRequest::GpuElasticPlan & gpuElasticPlan) { DARABONBA_PTR_SET_VALUE(gpuElasticPlan_, gpuElasticPlan) };
    inline CreateDBResourceGroupRequest& setGpuElasticPlan(CreateDBResourceGroupRequest::GpuElasticPlan && gpuElasticPlan) { DARABONBA_PTR_SET_RVALUE(gpuElasticPlan_, gpuElasticPlan) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateDBResourceGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline CreateDBResourceGroupRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // maxClusterCount Field Functions 
    bool hasMaxClusterCount() const { return this->maxClusterCount_ != nullptr;};
    void deleteMaxClusterCount() { this->maxClusterCount_ = nullptr;};
    inline int32_t getMaxClusterCount() const { DARABONBA_PTR_GET_DEFAULT(maxClusterCount_, 0) };
    inline CreateDBResourceGroupRequest& setMaxClusterCount(int32_t maxClusterCount) { DARABONBA_PTR_SET_VALUE(maxClusterCount_, maxClusterCount) };


    // maxComputeResource Field Functions 
    bool hasMaxComputeResource() const { return this->maxComputeResource_ != nullptr;};
    void deleteMaxComputeResource() { this->maxComputeResource_ = nullptr;};
    inline string getMaxComputeResource() const { DARABONBA_PTR_GET_DEFAULT(maxComputeResource_, "") };
    inline CreateDBResourceGroupRequest& setMaxComputeResource(string maxComputeResource) { DARABONBA_PTR_SET_VALUE(maxComputeResource_, maxComputeResource) };


    // maxGpuQuantity Field Functions 
    bool hasMaxGpuQuantity() const { return this->maxGpuQuantity_ != nullptr;};
    void deleteMaxGpuQuantity() { this->maxGpuQuantity_ = nullptr;};
    inline int32_t getMaxGpuQuantity() const { DARABONBA_PTR_GET_DEFAULT(maxGpuQuantity_, 0) };
    inline CreateDBResourceGroupRequest& setMaxGpuQuantity(int32_t maxGpuQuantity) { DARABONBA_PTR_SET_VALUE(maxGpuQuantity_, maxGpuQuantity) };


    // minClusterCount Field Functions 
    bool hasMinClusterCount() const { return this->minClusterCount_ != nullptr;};
    void deleteMinClusterCount() { this->minClusterCount_ = nullptr;};
    inline int32_t getMinClusterCount() const { DARABONBA_PTR_GET_DEFAULT(minClusterCount_, 0) };
    inline CreateDBResourceGroupRequest& setMinClusterCount(int32_t minClusterCount) { DARABONBA_PTR_SET_VALUE(minClusterCount_, minClusterCount) };


    // minComputeResource Field Functions 
    bool hasMinComputeResource() const { return this->minComputeResource_ != nullptr;};
    void deleteMinComputeResource() { this->minComputeResource_ = nullptr;};
    inline string getMinComputeResource() const { DARABONBA_PTR_GET_DEFAULT(minComputeResource_, "") };
    inline CreateDBResourceGroupRequest& setMinComputeResource(string minComputeResource) { DARABONBA_PTR_SET_VALUE(minComputeResource_, minComputeResource) };


    // minGpuQuantity Field Functions 
    bool hasMinGpuQuantity() const { return this->minGpuQuantity_ != nullptr;};
    void deleteMinGpuQuantity() { this->minGpuQuantity_ = nullptr;};
    inline int32_t getMinGpuQuantity() const { DARABONBA_PTR_GET_DEFAULT(minGpuQuantity_, 0) };
    inline CreateDBResourceGroupRequest& setMinGpuQuantity(int32_t minGpuQuantity) { DARABONBA_PTR_SET_VALUE(minGpuQuantity_, minGpuQuantity) };


    // rayConfig Field Functions 
    bool hasRayConfig() const { return this->rayConfig_ != nullptr;};
    void deleteRayConfig() { this->rayConfig_ = nullptr;};
    inline const CreateDBResourceGroupRequest::RayConfig & getRayConfig() const { DARABONBA_PTR_GET_CONST(rayConfig_, CreateDBResourceGroupRequest::RayConfig) };
    inline CreateDBResourceGroupRequest::RayConfig getRayConfig() { DARABONBA_PTR_GET(rayConfig_, CreateDBResourceGroupRequest::RayConfig) };
    inline CreateDBResourceGroupRequest& setRayConfig(const CreateDBResourceGroupRequest::RayConfig & rayConfig) { DARABONBA_PTR_SET_VALUE(rayConfig_, rayConfig) };
    inline CreateDBResourceGroupRequest& setRayConfig(CreateDBResourceGroupRequest::RayConfig && rayConfig) { DARABONBA_PTR_SET_RVALUE(rayConfig_, rayConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDBResourceGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<CreateDBResourceGroupRequest::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<CreateDBResourceGroupRequest::Rules>) };
    inline vector<CreateDBResourceGroupRequest::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<CreateDBResourceGroupRequest::Rules>) };
    inline CreateDBResourceGroupRequest& setRules(const vector<CreateDBResourceGroupRequest::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline CreateDBResourceGroupRequest& setRules(vector<CreateDBResourceGroupRequest::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // scalePolicy Field Functions 
    bool hasScalePolicy() const { return this->scalePolicy_ != nullptr;};
    void deleteScalePolicy() { this->scalePolicy_ = nullptr;};
    inline string getScalePolicy() const { DARABONBA_PTR_GET_DEFAULT(scalePolicy_, "") };
    inline CreateDBResourceGroupRequest& setScalePolicy(string scalePolicy) { DARABONBA_PTR_SET_VALUE(scalePolicy_, scalePolicy) };


    // specName Field Functions 
    bool hasSpecName() const { return this->specName_ != nullptr;};
    void deleteSpecName() { this->specName_ = nullptr;};
    inline string getSpecName() const { DARABONBA_PTR_GET_DEFAULT(specName_, "") };
    inline CreateDBResourceGroupRequest& setSpecName(string specName) { DARABONBA_PTR_SET_VALUE(specName_, specName) };


    // targetResourceGroupName Field Functions 
    bool hasTargetResourceGroupName() const { return this->targetResourceGroupName_ != nullptr;};
    void deleteTargetResourceGroupName() { this->targetResourceGroupName_ = nullptr;};
    inline string getTargetResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(targetResourceGroupName_, "") };
    inline CreateDBResourceGroupRequest& setTargetResourceGroupName(string targetResourceGroupName) { DARABONBA_PTR_SET_VALUE(targetResourceGroupName_, targetResourceGroupName) };


  protected:
    shared_ptr<CreateDBResourceGroupRequest::AtmConfig> atmConfig_ {};
    // The automatic stop interval. Unit: minutes (m).
    shared_ptr<string> autoStopInterval_ {};
    // The classification of the resource group. Valid values:
    // - SQL
    // - SparkSQL
    // - MultiCluster
    // - AI
    shared_ptr<string> classification_ {};
    // A reserved parameter (not applicable).
    shared_ptr<string> clusterMode_ {};
    // A reserved parameter (not applicable).
    shared_ptr<string> clusterSizeResource_ {};
    // The ID of the Dedicated Edition, Basic Edition, or Data Lakehouse Edition cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // Specifies whether to enable the spot instance feature for the resource group. After the spot instance feature is enabled, the unit price of resources is reduced, but the resources may be released. Only Job resource groups support this feature. Valid values:
    // - **True**: enables the spot instance feature.
    // - **False**: disables the spot instance feature.
    shared_ptr<bool> enableSpot_ {};
    // The database engine. Valid values:
    // 
    // - **AnalyticDB** (default): the AnalyticDB for MySQL engine.
    // - **SparkWarehouse**: the SparkWarehouse engine.
    shared_ptr<string> engine_ {};
    // The engine configuration.
    Darabonba::Json engineParams_ {};
    // The GPU time-sharing elastic plan.
    shared_ptr<CreateDBResourceGroupRequest::GpuElasticPlan> gpuElasticPlan_ {};
    // The name of the resource group.
    // - The name can be up to 255 characters in length.
    // - The name must start with a digit, an uppercase letter, or a lowercase letter.
    // - The name can contain digits, uppercase letters, lowercase letters, hyphens (-), and underscores (_).
    // 
    // This parameter is required.
    shared_ptr<string> groupName_ {};
    // The type of the resource group. Valid values:
    // - **Interactive**
    // - **Job**
    // > For more information about Data Lakehouse Edition resource groups, see [Resource group overview (Data Lakehouse Edition)](https://help.aliyun.com/document_detail/428610.html).
    // 
    // This parameter is required.
    shared_ptr<string> groupType_ {};
    // A reserved parameter (not applicable).
    shared_ptr<int32_t> maxClusterCount_ {};
    // The maximum amount of reserved computing resources. Unit: ACUs.
    // - If the resource group type is Interactive, the maximum reserved computing resources is the current unallocated resources of the cluster, in increments of 16 ACUs.
    // - If the resource group type is Job, the maximum reserved computing resources is the current unallocated resources of the cluster, in increments of 8 ACUs.
    shared_ptr<string> maxComputeResource_ {};
    // The maximum number of GPUs.
    shared_ptr<int32_t> maxGpuQuantity_ {};
    // A reserved parameter (not applicable).
    shared_ptr<int32_t> minClusterCount_ {};
    // The minimum amount of reserved computing resources. Unit: ACUs.
    // - If the resource group type is Interactive, the minimum reserved computing resources is 16 ACUs.
    // - If the resource group type is Job, the minimum reserved computing resources is 0 ACUs.
    shared_ptr<string> minComputeResource_ {};
    // The minimum number of GPUs.
    shared_ptr<int32_t> minGpuQuantity_ {};
    // The Ray configuration.
    // > This parameter is required when the resource group is an AI resource group and the corresponding engine is RayCluster.
    shared_ptr<CreateDBResourceGroupRequest::RayConfig> rayConfig_ {};
    // The region ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/612393.html) operation to query the region IDs of AnalyticDB for MySQL Data Lakehouse Edition (V3.0) clusters.
    shared_ptr<string> regionId_ {};
    // The job routing rules.
    shared_ptr<vector<CreateDBResourceGroupRequest::Rules>> rules_ {};
    // The scaling policy of the resource group. Valid values:
    // - AutoScaling: enables the AutoScaling automatic scaling policy.
    // - Disable: disables automatic scaling.
    // - MultiCluster: enables the MultiCluster automatic scaling policy.
    shared_ptr<string> scalePolicy_ {};
    // The specification name.
    shared_ptr<string> specName_ {};
    // The name of the destination resource group.
    shared_ptr<string> targetResourceGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
