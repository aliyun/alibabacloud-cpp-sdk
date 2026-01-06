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
      DARABONBA_PTR_TO_JSON(AutoStopInterval, autoStopInterval_);
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
      DARABONBA_PTR_TO_JSON(SpecName, specName_);
      DARABONBA_PTR_TO_JSON(TargetResourceGroupName, targetResourceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoStopInterval, autoStopInterval_);
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
      // 
      // *   The name can be up to 255 characters in length.
      // *   The name must start with a letter or digit.
      // *   The name can contain letters, digits, hyphens (-), and underscores (_).
      shared_ptr<string> groupName_ {};
      // The execution duration of the query. Unit: milliseconds.
      shared_ptr<string> queryTime_ {};
      // The name of the resource group to which you want to resubmit the query job.
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
        DARABONBA_PTR_TO_JSON(WorkerGroups, workerGroups_);
      };
      friend void from_json(const Darabonba::Json& j, RayConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(EnableUserEni, enableUserEni_);
        DARABONBA_PTR_FROM_JSON(HeadAllocateUnit, headAllocateUnit_);
        DARABONBA_PTR_FROM_JSON(HeadDiskCapacity, headDiskCapacity_);
        DARABONBA_PTR_FROM_JSON(HeadSpec, headSpec_);
        DARABONBA_PTR_FROM_JSON(HeadSpecType, headSpecType_);
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
        shared_ptr<string> allocateUnit_ {};
        shared_ptr<string> groupName_ {};
        shared_ptr<int32_t> maxWorkerQuantity_ {};
        shared_ptr<int32_t> minWorkerQuantity_ {};
        shared_ptr<string> workerDiskCapacity_ {};
        shared_ptr<string> workerSpecName_ {};
        shared_ptr<string> workerSpecType_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->enableUserEni_ == nullptr && this->headAllocateUnit_ == nullptr && this->headDiskCapacity_ == nullptr && this->headSpec_ == nullptr && this->headSpecType_ == nullptr
        && this->workerGroups_ == nullptr; };
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


      // workerGroups Field Functions 
      bool hasWorkerGroups() const { return this->workerGroups_ != nullptr;};
      void deleteWorkerGroups() { this->workerGroups_ = nullptr;};
      inline const vector<RayConfig::WorkerGroups> & getWorkerGroups() const { DARABONBA_PTR_GET_CONST(workerGroups_, vector<RayConfig::WorkerGroups>) };
      inline vector<RayConfig::WorkerGroups> getWorkerGroups() { DARABONBA_PTR_GET(workerGroups_, vector<RayConfig::WorkerGroups>) };
      inline RayConfig& setWorkerGroups(const vector<RayConfig::WorkerGroups> & workerGroups) { DARABONBA_PTR_SET_VALUE(workerGroups_, workerGroups) };
      inline RayConfig& setWorkerGroups(vector<RayConfig::WorkerGroups> && workerGroups) { DARABONBA_PTR_SET_RVALUE(workerGroups_, workerGroups) };


    protected:
      shared_ptr<string> category_ {};
      shared_ptr<bool> enableUserEni_ {};
      shared_ptr<string> headAllocateUnit_ {};
      shared_ptr<string> headDiskCapacity_ {};
      shared_ptr<string> headSpec_ {};
      shared_ptr<string> headSpecType_ {};
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
        shared_ptr<string> endCronExpression_ {};
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
      shared_ptr<bool> enabled_ {};
      shared_ptr<vector<GpuElasticPlan::Rules>> rules_ {};
    };

    virtual bool empty() const override { return this->autoStopInterval_ == nullptr
        && this->clusterMode_ == nullptr && this->clusterSizeResource_ == nullptr && this->DBClusterId_ == nullptr && this->enableSpot_ == nullptr && this->engine_ == nullptr
        && this->engineParams_ == nullptr && this->gpuElasticPlan_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr && this->maxClusterCount_ == nullptr
        && this->maxComputeResource_ == nullptr && this->maxGpuQuantity_ == nullptr && this->minClusterCount_ == nullptr && this->minComputeResource_ == nullptr && this->minGpuQuantity_ == nullptr
        && this->rayConfig_ == nullptr && this->regionId_ == nullptr && this->rules_ == nullptr && this->specName_ == nullptr && this->targetResourceGroupName_ == nullptr; };
    // autoStopInterval Field Functions 
    bool hasAutoStopInterval() const { return this->autoStopInterval_ != nullptr;};
    void deleteAutoStopInterval() { this->autoStopInterval_ = nullptr;};
    inline string getAutoStopInterval() const { DARABONBA_PTR_GET_DEFAULT(autoStopInterval_, "") };
    inline CreateDBResourceGroupRequest& setAutoStopInterval(string autoStopInterval) { DARABONBA_PTR_SET_VALUE(autoStopInterval_, autoStopInterval) };


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
    shared_ptr<string> autoStopInterval_ {};
    // A reserved parameter.
    shared_ptr<string> clusterMode_ {};
    // A reserved parameter.
    shared_ptr<string> clusterSizeResource_ {};
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // Specifies whether to enable the spot instance feature for the resource group. After you enable the spot instance feature, you are charged for resources at a lower unit price but the resources are probably released. You can enable the spot instance feature only for job resource groups. Valid values:
    // 
    // *   **True**
    // *   **False**
    shared_ptr<bool> enableSpot_ {};
    shared_ptr<string> engine_ {};
    Darabonba::Json engineParams_ {};
    shared_ptr<CreateDBResourceGroupRequest::GpuElasticPlan> gpuElasticPlan_ {};
    // The name of the resource group.
    // 
    // *   The name can be up to 255 characters in length.
    // *   The name must start with a letter or a digit.
    // *   The name can contain letters, digits, hyphens (_), and underscores (_).
    // 
    // This parameter is required.
    shared_ptr<string> groupName_ {};
    // The type of the resource group. Valid values:
    // 
    // *   **Interactive**
    // *   **Job**
    // 
    // >  For more information about resource groups, see [Resource group overview](https://help.aliyun.com/document_detail/428610.html).
    // 
    // This parameter is required.
    shared_ptr<string> groupType_ {};
    // A reserved parameter.
    shared_ptr<int32_t> maxClusterCount_ {};
    // The maximum reserved computing resources.
    // 
    // *   If GroupType is set to Interactive, the maximum amount of reserved computing resources refers to the amount of resources that are not allocated in the cluster. Set this parameter to a value in increments of 16ACU.
    // *   If GroupType is set to Job, the maximum amount of reserved computing resources refers to the amount of resources that are not allocated in the cluster. Set this parameter to a value in increments of 8ACU.
    shared_ptr<string> maxComputeResource_ {};
    // A reserved parameter.
    shared_ptr<int32_t> maxGpuQuantity_ {};
    // A reserved parameter.
    shared_ptr<int32_t> minClusterCount_ {};
    // The minimum reserved computing resources.
    // 
    // *   When GroupType is set to Interactive, set this parameter to 16ACU.
    // *   When GroupType is set to Job, set this parameter to 0ACU.
    shared_ptr<string> minComputeResource_ {};
    // A reserved parameter.
    shared_ptr<int32_t> minGpuQuantity_ {};
    shared_ptr<CreateDBResourceGroupRequest::RayConfig> rayConfig_ {};
    // The region ID of the cluster.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/612393.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The job resubmission rules.
    shared_ptr<vector<CreateDBResourceGroupRequest::Rules>> rules_ {};
    // A reserved parameter.
    shared_ptr<string> specName_ {};
    // A reserved parameter.
    shared_ptr<string> targetResourceGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
