// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODY_HPP_
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
  class DescribeDBResourceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupsInfo, groupsInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupsInfo, groupsInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBResourceGroupResponseBody() = default ;
    DescribeDBResourceGroupResponseBody(const DescribeDBResourceGroupResponseBody &) = default ;
    DescribeDBResourceGroupResponseBody(DescribeDBResourceGroupResponseBody &&) = default ;
    DescribeDBResourceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBResourceGroupResponseBody() = default ;
    DescribeDBResourceGroupResponseBody& operator=(const DescribeDBResourceGroupResponseBody &) = default ;
    DescribeDBResourceGroupResponseBody& operator=(DescribeDBResourceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GroupsInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupsInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AtmConfig, atmConfig_);
        DARABONBA_PTR_TO_JSON(AutoStopInterval, autoStopInterval_);
        DARABONBA_PTR_TO_JSON(Classification, classification_);
        DARABONBA_PTR_TO_JSON(ClusterMode, clusterMode_);
        DARABONBA_PTR_TO_JSON(ClusterSizeResource, clusterSizeResource_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ElasticMinComputeResource, elasticMinComputeResource_);
        DARABONBA_PTR_TO_JSON(EnableSpot, enableSpot_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_ANY_TO_JSON(EngineParams, engineParams_);
        DARABONBA_PTR_TO_JSON(GpuElasticPlan, gpuElasticPlan_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(GroupType, groupType_);
        DARABONBA_PTR_TO_JSON(GroupUsers, groupUsers_);
        DARABONBA_PTR_TO_JSON(MaxClusterCount, maxClusterCount_);
        DARABONBA_PTR_TO_JSON(MaxComputeResource, maxComputeResource_);
        DARABONBA_PTR_TO_JSON(MaxGpuQuantity, maxGpuQuantity_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(MinClusterCount, minClusterCount_);
        DARABONBA_PTR_TO_JSON(MinComputeResource, minComputeResource_);
        DARABONBA_PTR_TO_JSON(MinGpuQuantity, minGpuQuantity_);
        DARABONBA_PTR_TO_JSON(RayConfig, rayConfig_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
        DARABONBA_PTR_TO_JSON(RunningClusterCount, runningClusterCount_);
        DARABONBA_PTR_TO_JSON(ScalePolicy, scalePolicy_);
        DARABONBA_PTR_TO_JSON(SpecName, specName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TargetResourceGroupName, targetResourceGroupName_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, GroupsInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AtmConfig, atmConfig_);
        DARABONBA_PTR_FROM_JSON(AutoStopInterval, autoStopInterval_);
        DARABONBA_PTR_FROM_JSON(Classification, classification_);
        DARABONBA_PTR_FROM_JSON(ClusterMode, clusterMode_);
        DARABONBA_PTR_FROM_JSON(ClusterSizeResource, clusterSizeResource_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ElasticMinComputeResource, elasticMinComputeResource_);
        DARABONBA_PTR_FROM_JSON(EnableSpot, enableSpot_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_ANY_FROM_JSON(EngineParams, engineParams_);
        DARABONBA_PTR_FROM_JSON(GpuElasticPlan, gpuElasticPlan_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
        DARABONBA_PTR_FROM_JSON(GroupUsers, groupUsers_);
        DARABONBA_PTR_FROM_JSON(MaxClusterCount, maxClusterCount_);
        DARABONBA_PTR_FROM_JSON(MaxComputeResource, maxComputeResource_);
        DARABONBA_PTR_FROM_JSON(MaxGpuQuantity, maxGpuQuantity_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(MinClusterCount, minClusterCount_);
        DARABONBA_PTR_FROM_JSON(MinComputeResource, minComputeResource_);
        DARABONBA_PTR_FROM_JSON(MinGpuQuantity, minGpuQuantity_);
        DARABONBA_PTR_FROM_JSON(RayConfig, rayConfig_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
        DARABONBA_PTR_FROM_JSON(RunningClusterCount, runningClusterCount_);
        DARABONBA_PTR_FROM_JSON(ScalePolicy, scalePolicy_);
        DARABONBA_PTR_FROM_JSON(SpecName, specName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TargetResourceGroupName, targetResourceGroupName_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      GroupsInfo() = default ;
      GroupsInfo(const GroupsInfo &) = default ;
      GroupsInfo(GroupsInfo &&) = default ;
      GroupsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupsInfo() = default ;
      GroupsInfo& operator=(const GroupsInfo &) = default ;
      GroupsInfo& operator=(GroupsInfo &&) = default ;
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
        // The resource group name.
        shared_ptr<string> groupName_ {};
        // The query execution time threshold. Unit: milliseconds (ms).
        shared_ptr<string> queryTime_ {};
        // The name of the target resource group.
        shared_ptr<string> targetGroupName_ {};
      };

      class RayConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RayConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AppConfig, appConfig_);
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(EnableUserEni, enableUserEni_);
          DARABONBA_PTR_TO_JSON(HeadAllocateUnit, headAllocateUnit_);
          DARABONBA_PTR_TO_JSON(HeadDiskCapacity, headDiskCapacity_);
          DARABONBA_PTR_TO_JSON(HeadSpec, headSpec_);
          DARABONBA_PTR_TO_JSON(HeadSpecType, headSpecType_);
          DARABONBA_PTR_TO_JSON(RayClusterAddress, rayClusterAddress_);
          DARABONBA_PTR_TO_JSON(RayDashboardAddress, rayDashboardAddress_);
          DARABONBA_PTR_TO_JSON(RayGrafanaAddress, rayGrafanaAddress_);
          DARABONBA_PTR_TO_JSON(RayServePublicAddress, rayServePublicAddress_);
          DARABONBA_PTR_TO_JSON(StorageMounts, storageMounts_);
          DARABONBA_PTR_TO_JSON(UserDefinedRequirements, userDefinedRequirements_);
          DARABONBA_PTR_TO_JSON(WorkerGroups, workerGroups_);
        };
        friend void from_json(const Darabonba::Json& j, RayConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AppConfig, appConfig_);
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(EnableUserEni, enableUserEni_);
          DARABONBA_PTR_FROM_JSON(HeadAllocateUnit, headAllocateUnit_);
          DARABONBA_PTR_FROM_JSON(HeadDiskCapacity, headDiskCapacity_);
          DARABONBA_PTR_FROM_JSON(HeadSpec, headSpec_);
          DARABONBA_PTR_FROM_JSON(HeadSpecType, headSpecType_);
          DARABONBA_PTR_FROM_JSON(RayClusterAddress, rayClusterAddress_);
          DARABONBA_PTR_FROM_JSON(RayDashboardAddress, rayDashboardAddress_);
          DARABONBA_PTR_FROM_JSON(RayGrafanaAddress, rayGrafanaAddress_);
          DARABONBA_PTR_FROM_JSON(RayServePublicAddress, rayServePublicAddress_);
          DARABONBA_PTR_FROM_JSON(StorageMounts, storageMounts_);
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
          // The name of the Ray worker group.
          shared_ptr<string> groupName_ {};
          // The maximum number of workers.
          shared_ptr<int32_t> maxWorkerQuantity_ {};
          // The minimum number of workers.
          shared_ptr<int32_t> minWorkerQuantity_ {};
          // The disk size per worker.
          shared_ptr<string> workerDiskCapacity_ {};
          // The worker specification name.
          shared_ptr<string> workerSpecName_ {};
          // The Ray worker resource type.
          shared_ptr<string> workerSpecType_ {};
        };

        class StorageMounts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StorageMounts& obj) { 
            DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
            DARABONBA_PTR_TO_JSON(StorageId, storageId_);
          };
          friend void from_json(const Darabonba::Json& j, StorageMounts& obj) { 
            DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
            DARABONBA_PTR_FROM_JSON(StorageId, storageId_);
          };
          StorageMounts() = default ;
          StorageMounts(const StorageMounts &) = default ;
          StorageMounts(StorageMounts &&) = default ;
          StorageMounts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StorageMounts() = default ;
          StorageMounts& operator=(const StorageMounts &) = default ;
          StorageMounts& operator=(StorageMounts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->mountPath_ == nullptr
        && this->storageId_ == nullptr; };
          // mountPath Field Functions 
          bool hasMountPath() const { return this->mountPath_ != nullptr;};
          void deleteMountPath() { this->mountPath_ = nullptr;};
          inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
          inline StorageMounts& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


          // storageId Field Functions 
          bool hasStorageId() const { return this->storageId_ != nullptr;};
          void deleteStorageId() { this->storageId_ = nullptr;};
          inline int64_t getStorageId() const { DARABONBA_PTR_GET_DEFAULT(storageId_, 0L) };
          inline StorageMounts& setStorageId(int64_t storageId) { DARABONBA_PTR_SET_VALUE(storageId_, storageId) };


        protected:
          // The mount path.
          shared_ptr<string> mountPath_ {};
          // The storage ID.
          shared_ptr<int64_t> storageId_ {};
        };

        class AppConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AppConfig& obj) { 
            DARABONBA_PTR_TO_JSON(AppName, appName_);
            DARABONBA_PTR_TO_JSON(AppType, appType_);
            DARABONBA_PTR_TO_JSON(ImageSelector, imageSelector_);
          };
          friend void from_json(const Darabonba::Json& j, AppConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(AppName, appName_);
            DARABONBA_PTR_FROM_JSON(AppType, appType_);
            DARABONBA_PTR_FROM_JSON(ImageSelector, imageSelector_);
          };
          AppConfig() = default ;
          AppConfig(const AppConfig &) = default ;
          AppConfig(AppConfig &&) = default ;
          AppConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AppConfig() = default ;
          AppConfig& operator=(const AppConfig &) = default ;
          AppConfig& operator=(AppConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ImageSelector : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ImageSelector& obj) { 
              DARABONBA_PTR_TO_JSON(Image, image_);
              DARABONBA_PTR_TO_JSON(InferenceEngine, inferenceEngine_);
              DARABONBA_PTR_TO_JSON(LlmModel, llmModel_);
            };
            friend void from_json(const Darabonba::Json& j, ImageSelector& obj) { 
              DARABONBA_PTR_FROM_JSON(Image, image_);
              DARABONBA_PTR_FROM_JSON(InferenceEngine, inferenceEngine_);
              DARABONBA_PTR_FROM_JSON(LlmModel, llmModel_);
            };
            ImageSelector() = default ;
            ImageSelector(const ImageSelector &) = default ;
            ImageSelector(ImageSelector &&) = default ;
            ImageSelector(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ImageSelector() = default ;
            ImageSelector& operator=(const ImageSelector &) = default ;
            ImageSelector& operator=(ImageSelector &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->image_ == nullptr
        && this->inferenceEngine_ == nullptr && this->llmModel_ == nullptr; };
            // image Field Functions 
            bool hasImage() const { return this->image_ != nullptr;};
            void deleteImage() { this->image_ = nullptr;};
            inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
            inline ImageSelector& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


            // inferenceEngine Field Functions 
            bool hasInferenceEngine() const { return this->inferenceEngine_ != nullptr;};
            void deleteInferenceEngine() { this->inferenceEngine_ = nullptr;};
            inline string getInferenceEngine() const { DARABONBA_PTR_GET_DEFAULT(inferenceEngine_, "") };
            inline ImageSelector& setInferenceEngine(string inferenceEngine) { DARABONBA_PTR_SET_VALUE(inferenceEngine_, inferenceEngine) };


            // llmModel Field Functions 
            bool hasLlmModel() const { return this->llmModel_ != nullptr;};
            void deleteLlmModel() { this->llmModel_ = nullptr;};
            inline string getLlmModel() const { DARABONBA_PTR_GET_DEFAULT(llmModel_, "") };
            inline ImageSelector& setLlmModel(string llmModel) { DARABONBA_PTR_SET_VALUE(llmModel_, llmModel) };


          protected:
            // The image.
            shared_ptr<string> image_ {};
            // The inference engine.
            shared_ptr<string> inferenceEngine_ {};
            // The LLM model.
            shared_ptr<string> llmModel_ {};
          };

          virtual bool empty() const override { return this->appName_ == nullptr
        && this->appType_ == nullptr && this->imageSelector_ == nullptr; };
          // appName Field Functions 
          bool hasAppName() const { return this->appName_ != nullptr;};
          void deleteAppName() { this->appName_ = nullptr;};
          inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
          inline AppConfig& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


          // appType Field Functions 
          bool hasAppType() const { return this->appType_ != nullptr;};
          void deleteAppType() { this->appType_ = nullptr;};
          inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
          inline AppConfig& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


          // imageSelector Field Functions 
          bool hasImageSelector() const { return this->imageSelector_ != nullptr;};
          void deleteImageSelector() { this->imageSelector_ = nullptr;};
          inline const AppConfig::ImageSelector & getImageSelector() const { DARABONBA_PTR_GET_CONST(imageSelector_, AppConfig::ImageSelector) };
          inline AppConfig::ImageSelector getImageSelector() { DARABONBA_PTR_GET(imageSelector_, AppConfig::ImageSelector) };
          inline AppConfig& setImageSelector(const AppConfig::ImageSelector & imageSelector) { DARABONBA_PTR_SET_VALUE(imageSelector_, imageSelector) };
          inline AppConfig& setImageSelector(AppConfig::ImageSelector && imageSelector) { DARABONBA_PTR_SET_RVALUE(imageSelector_, imageSelector) };


        protected:
          // The Ray application name.
          shared_ptr<string> appName_ {};
          // The Ray application type.
          shared_ptr<string> appType_ {};
          // The image configuration.
          shared_ptr<AppConfig::ImageSelector> imageSelector_ {};
        };

        virtual bool empty() const override { return this->appConfig_ == nullptr
        && this->category_ == nullptr && this->enableUserEni_ == nullptr && this->headAllocateUnit_ == nullptr && this->headDiskCapacity_ == nullptr && this->headSpec_ == nullptr
        && this->headSpecType_ == nullptr && this->rayClusterAddress_ == nullptr && this->rayDashboardAddress_ == nullptr && this->rayGrafanaAddress_ == nullptr && this->rayServePublicAddress_ == nullptr
        && this->storageMounts_ == nullptr && this->userDefinedRequirements_ == nullptr && this->workerGroups_ == nullptr; };
        // appConfig Field Functions 
        bool hasAppConfig() const { return this->appConfig_ != nullptr;};
        void deleteAppConfig() { this->appConfig_ = nullptr;};
        inline const RayConfig::AppConfig & getAppConfig() const { DARABONBA_PTR_GET_CONST(appConfig_, RayConfig::AppConfig) };
        inline RayConfig::AppConfig getAppConfig() { DARABONBA_PTR_GET(appConfig_, RayConfig::AppConfig) };
        inline RayConfig& setAppConfig(const RayConfig::AppConfig & appConfig) { DARABONBA_PTR_SET_VALUE(appConfig_, appConfig) };
        inline RayConfig& setAppConfig(RayConfig::AppConfig && appConfig) { DARABONBA_PTR_SET_RVALUE(appConfig_, appConfig) };


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


        // rayClusterAddress Field Functions 
        bool hasRayClusterAddress() const { return this->rayClusterAddress_ != nullptr;};
        void deleteRayClusterAddress() { this->rayClusterAddress_ = nullptr;};
        inline string getRayClusterAddress() const { DARABONBA_PTR_GET_DEFAULT(rayClusterAddress_, "") };
        inline RayConfig& setRayClusterAddress(string rayClusterAddress) { DARABONBA_PTR_SET_VALUE(rayClusterAddress_, rayClusterAddress) };


        // rayDashboardAddress Field Functions 
        bool hasRayDashboardAddress() const { return this->rayDashboardAddress_ != nullptr;};
        void deleteRayDashboardAddress() { this->rayDashboardAddress_ = nullptr;};
        inline string getRayDashboardAddress() const { DARABONBA_PTR_GET_DEFAULT(rayDashboardAddress_, "") };
        inline RayConfig& setRayDashboardAddress(string rayDashboardAddress) { DARABONBA_PTR_SET_VALUE(rayDashboardAddress_, rayDashboardAddress) };


        // rayGrafanaAddress Field Functions 
        bool hasRayGrafanaAddress() const { return this->rayGrafanaAddress_ != nullptr;};
        void deleteRayGrafanaAddress() { this->rayGrafanaAddress_ = nullptr;};
        inline string getRayGrafanaAddress() const { DARABONBA_PTR_GET_DEFAULT(rayGrafanaAddress_, "") };
        inline RayConfig& setRayGrafanaAddress(string rayGrafanaAddress) { DARABONBA_PTR_SET_VALUE(rayGrafanaAddress_, rayGrafanaAddress) };


        // rayServePublicAddress Field Functions 
        bool hasRayServePublicAddress() const { return this->rayServePublicAddress_ != nullptr;};
        void deleteRayServePublicAddress() { this->rayServePublicAddress_ = nullptr;};
        inline string getRayServePublicAddress() const { DARABONBA_PTR_GET_DEFAULT(rayServePublicAddress_, "") };
        inline RayConfig& setRayServePublicAddress(string rayServePublicAddress) { DARABONBA_PTR_SET_VALUE(rayServePublicAddress_, rayServePublicAddress) };


        // storageMounts Field Functions 
        bool hasStorageMounts() const { return this->storageMounts_ != nullptr;};
        void deleteStorageMounts() { this->storageMounts_ = nullptr;};
        inline const vector<RayConfig::StorageMounts> & getStorageMounts() const { DARABONBA_PTR_GET_CONST(storageMounts_, vector<RayConfig::StorageMounts>) };
        inline vector<RayConfig::StorageMounts> getStorageMounts() { DARABONBA_PTR_GET(storageMounts_, vector<RayConfig::StorageMounts>) };
        inline RayConfig& setStorageMounts(const vector<RayConfig::StorageMounts> & storageMounts) { DARABONBA_PTR_SET_VALUE(storageMounts_, storageMounts) };
        inline RayConfig& setStorageMounts(vector<RayConfig::StorageMounts> && storageMounts) { DARABONBA_PTR_SET_RVALUE(storageMounts_, storageMounts) };


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
        // The Ray application configuration.
        shared_ptr<RayConfig::AppConfig> appConfig_ {};
        // The Ray cluster type. Valid values:
        // 
        // - BASIC: basic type, non-high-availability
        // 
        // - HIGH_AVAILABILITY: high-availability type
        shared_ptr<string> category_ {};
        // Indicates whether ENI is enabled.
        shared_ptr<bool> enableUserEni_ {};
        // The allocation unit of the head node.
        shared_ptr<string> headAllocateUnit_ {};
        // The disk size of the head node.
        shared_ptr<string> headDiskCapacity_ {};
        // The node specifications of the head node.
        shared_ptr<string> headSpec_ {};
        // The resource type of the head node.
        shared_ptr<string> headSpecType_ {};
        // The Ray cluster address.
        shared_ptr<string> rayClusterAddress_ {};
        // The Ray Dashboard address.
        shared_ptr<string> rayDashboardAddress_ {};
        // The Ray Grafana address.
        shared_ptr<string> rayGrafanaAddress_ {};
        shared_ptr<string> rayServePublicAddress_ {};
        // The list of storage mounts.
        shared_ptr<vector<RayConfig::StorageMounts>> storageMounts_ {};
        shared_ptr<string> userDefinedRequirements_ {};
        // The list of Ray worker groups.
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
          // The end time, specified as a cron expression. The interval must be at least 1 hour.
          shared_ptr<string> endCronExpression_ {};
          // The start time, specified as a cron expression. The interval must be at least 1 hour.
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
        // Indicates whether the plan is enabled.
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
        inline string getAuthNodeNum() const { DARABONBA_PTR_GET_DEFAULT(authNodeNum_, "") };
        inline AtmConfig& setAuthNodeNum(string authNodeNum) { DARABONBA_PTR_SET_VALUE(authNodeNum_, authNodeNum) };


        // authNodeSpec Field Functions 
        bool hasAuthNodeSpec() const { return this->authNodeSpec_ != nullptr;};
        void deleteAuthNodeSpec() { this->authNodeSpec_ = nullptr;};
        inline string getAuthNodeSpec() const { DARABONBA_PTR_GET_DEFAULT(authNodeSpec_, "") };
        inline AtmConfig& setAuthNodeSpec(string authNodeSpec) { DARABONBA_PTR_SET_VALUE(authNodeSpec_, authNodeSpec) };


        // insertNodeNum Field Functions 
        bool hasInsertNodeNum() const { return this->insertNodeNum_ != nullptr;};
        void deleteInsertNodeNum() { this->insertNodeNum_ = nullptr;};
        inline string getInsertNodeNum() const { DARABONBA_PTR_GET_DEFAULT(insertNodeNum_, "") };
        inline AtmConfig& setInsertNodeNum(string insertNodeNum) { DARABONBA_PTR_SET_VALUE(insertNodeNum_, insertNodeNum) };


        // insertNodeSpec Field Functions 
        bool hasInsertNodeSpec() const { return this->insertNodeSpec_ != nullptr;};
        void deleteInsertNodeSpec() { this->insertNodeSpec_ = nullptr;};
        inline string getInsertNodeSpec() const { DARABONBA_PTR_GET_DEFAULT(insertNodeSpec_, "") };
        inline AtmConfig& setInsertNodeSpec(string insertNodeSpec) { DARABONBA_PTR_SET_VALUE(insertNodeSpec_, insertNodeSpec) };


        // selectNodeCacheSize Field Functions 
        bool hasSelectNodeCacheSize() const { return this->selectNodeCacheSize_ != nullptr;};
        void deleteSelectNodeCacheSize() { this->selectNodeCacheSize_ = nullptr;};
        inline string getSelectNodeCacheSize() const { DARABONBA_PTR_GET_DEFAULT(selectNodeCacheSize_, "") };
        inline AtmConfig& setSelectNodeCacheSize(string selectNodeCacheSize) { DARABONBA_PTR_SET_VALUE(selectNodeCacheSize_, selectNodeCacheSize) };


        // selectNodeNum Field Functions 
        bool hasSelectNodeNum() const { return this->selectNodeNum_ != nullptr;};
        void deleteSelectNodeNum() { this->selectNodeNum_ = nullptr;};
        inline string getSelectNodeNum() const { DARABONBA_PTR_GET_DEFAULT(selectNodeNum_, "") };
        inline AtmConfig& setSelectNodeNum(string selectNodeNum) { DARABONBA_PTR_SET_VALUE(selectNodeNum_, selectNodeNum) };


        // selectNodeSpec Field Functions 
        bool hasSelectNodeSpec() const { return this->selectNodeSpec_ != nullptr;};
        void deleteSelectNodeSpec() { this->selectNodeSpec_ = nullptr;};
        inline string getSelectNodeSpec() const { DARABONBA_PTR_GET_DEFAULT(selectNodeSpec_, "") };
        inline AtmConfig& setSelectNodeSpec(string selectNodeSpec) { DARABONBA_PTR_SET_VALUE(selectNodeSpec_, selectNodeSpec) };


        // storageNodeDiskSize Field Functions 
        bool hasStorageNodeDiskSize() const { return this->storageNodeDiskSize_ != nullptr;};
        void deleteStorageNodeDiskSize() { this->storageNodeDiskSize_ = nullptr;};
        inline string getStorageNodeDiskSize() const { DARABONBA_PTR_GET_DEFAULT(storageNodeDiskSize_, "") };
        inline AtmConfig& setStorageNodeDiskSize(string storageNodeDiskSize) { DARABONBA_PTR_SET_VALUE(storageNodeDiskSize_, storageNodeDiskSize) };


        // storageNodeDiskType Field Functions 
        bool hasStorageNodeDiskType() const { return this->storageNodeDiskType_ != nullptr;};
        void deleteStorageNodeDiskType() { this->storageNodeDiskType_ = nullptr;};
        inline string getStorageNodeDiskType() const { DARABONBA_PTR_GET_DEFAULT(storageNodeDiskType_, "") };
        inline AtmConfig& setStorageNodeDiskType(string storageNodeDiskType) { DARABONBA_PTR_SET_VALUE(storageNodeDiskType_, storageNodeDiskType) };


        // storageNodeNum Field Functions 
        bool hasStorageNodeNum() const { return this->storageNodeNum_ != nullptr;};
        void deleteStorageNodeNum() { this->storageNodeNum_ = nullptr;};
        inline string getStorageNodeNum() const { DARABONBA_PTR_GET_DEFAULT(storageNodeNum_, "") };
        inline AtmConfig& setStorageNodeNum(string storageNodeNum) { DARABONBA_PTR_SET_VALUE(storageNodeNum_, storageNodeNum) };


        // storageNodeSpec Field Functions 
        bool hasStorageNodeSpec() const { return this->storageNodeSpec_ != nullptr;};
        void deleteStorageNodeSpec() { this->storageNodeSpec_ = nullptr;};
        inline string getStorageNodeSpec() const { DARABONBA_PTR_GET_DEFAULT(storageNodeSpec_, "") };
        inline AtmConfig& setStorageNodeSpec(string storageNodeSpec) { DARABONBA_PTR_SET_VALUE(storageNodeSpec_, storageNodeSpec) };


      protected:
        shared_ptr<string> authNodeNum_ {};
        shared_ptr<string> authNodeSpec_ {};
        shared_ptr<string> insertNodeNum_ {};
        shared_ptr<string> insertNodeSpec_ {};
        shared_ptr<string> selectNodeCacheSize_ {};
        shared_ptr<string> selectNodeNum_ {};
        shared_ptr<string> selectNodeSpec_ {};
        shared_ptr<string> storageNodeDiskSize_ {};
        shared_ptr<string> storageNodeDiskType_ {};
        shared_ptr<string> storageNodeNum_ {};
        shared_ptr<string> storageNodeSpec_ {};
      };

      virtual bool empty() const override { return this->atmConfig_ == nullptr
        && this->autoStopInterval_ == nullptr && this->classification_ == nullptr && this->clusterMode_ == nullptr && this->clusterSizeResource_ == nullptr && this->createTime_ == nullptr
        && this->elasticMinComputeResource_ == nullptr && this->enableSpot_ == nullptr && this->engine_ == nullptr && this->engineParams_ == nullptr && this->gpuElasticPlan_ == nullptr
        && this->groupName_ == nullptr && this->groupType_ == nullptr && this->groupUsers_ == nullptr && this->maxClusterCount_ == nullptr && this->maxComputeResource_ == nullptr
        && this->maxGpuQuantity_ == nullptr && this->message_ == nullptr && this->minClusterCount_ == nullptr && this->minComputeResource_ == nullptr && this->minGpuQuantity_ == nullptr
        && this->rayConfig_ == nullptr && this->rules_ == nullptr && this->runningClusterCount_ == nullptr && this->scalePolicy_ == nullptr && this->specName_ == nullptr
        && this->status_ == nullptr && this->targetResourceGroupName_ == nullptr && this->updateTime_ == nullptr; };
      // atmConfig Field Functions 
      bool hasAtmConfig() const { return this->atmConfig_ != nullptr;};
      void deleteAtmConfig() { this->atmConfig_ = nullptr;};
      inline const GroupsInfo::AtmConfig & getAtmConfig() const { DARABONBA_PTR_GET_CONST(atmConfig_, GroupsInfo::AtmConfig) };
      inline GroupsInfo::AtmConfig getAtmConfig() { DARABONBA_PTR_GET(atmConfig_, GroupsInfo::AtmConfig) };
      inline GroupsInfo& setAtmConfig(const GroupsInfo::AtmConfig & atmConfig) { DARABONBA_PTR_SET_VALUE(atmConfig_, atmConfig) };
      inline GroupsInfo& setAtmConfig(GroupsInfo::AtmConfig && atmConfig) { DARABONBA_PTR_SET_RVALUE(atmConfig_, atmConfig) };


      // autoStopInterval Field Functions 
      bool hasAutoStopInterval() const { return this->autoStopInterval_ != nullptr;};
      void deleteAutoStopInterval() { this->autoStopInterval_ = nullptr;};
      inline string getAutoStopInterval() const { DARABONBA_PTR_GET_DEFAULT(autoStopInterval_, "") };
      inline GroupsInfo& setAutoStopInterval(string autoStopInterval) { DARABONBA_PTR_SET_VALUE(autoStopInterval_, autoStopInterval) };


      // classification Field Functions 
      bool hasClassification() const { return this->classification_ != nullptr;};
      void deleteClassification() { this->classification_ = nullptr;};
      inline string getClassification() const { DARABONBA_PTR_GET_DEFAULT(classification_, "") };
      inline GroupsInfo& setClassification(string classification) { DARABONBA_PTR_SET_VALUE(classification_, classification) };


      // clusterMode Field Functions 
      bool hasClusterMode() const { return this->clusterMode_ != nullptr;};
      void deleteClusterMode() { this->clusterMode_ = nullptr;};
      inline string getClusterMode() const { DARABONBA_PTR_GET_DEFAULT(clusterMode_, "") };
      inline GroupsInfo& setClusterMode(string clusterMode) { DARABONBA_PTR_SET_VALUE(clusterMode_, clusterMode) };


      // clusterSizeResource Field Functions 
      bool hasClusterSizeResource() const { return this->clusterSizeResource_ != nullptr;};
      void deleteClusterSizeResource() { this->clusterSizeResource_ = nullptr;};
      inline string getClusterSizeResource() const { DARABONBA_PTR_GET_DEFAULT(clusterSizeResource_, "") };
      inline GroupsInfo& setClusterSizeResource(string clusterSizeResource) { DARABONBA_PTR_SET_VALUE(clusterSizeResource_, clusterSizeResource) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline GroupsInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // elasticMinComputeResource Field Functions 
      bool hasElasticMinComputeResource() const { return this->elasticMinComputeResource_ != nullptr;};
      void deleteElasticMinComputeResource() { this->elasticMinComputeResource_ = nullptr;};
      inline string getElasticMinComputeResource() const { DARABONBA_PTR_GET_DEFAULT(elasticMinComputeResource_, "") };
      inline GroupsInfo& setElasticMinComputeResource(string elasticMinComputeResource) { DARABONBA_PTR_SET_VALUE(elasticMinComputeResource_, elasticMinComputeResource) };


      // enableSpot Field Functions 
      bool hasEnableSpot() const { return this->enableSpot_ != nullptr;};
      void deleteEnableSpot() { this->enableSpot_ = nullptr;};
      inline string getEnableSpot() const { DARABONBA_PTR_GET_DEFAULT(enableSpot_, "") };
      inline GroupsInfo& setEnableSpot(string enableSpot) { DARABONBA_PTR_SET_VALUE(enableSpot_, enableSpot) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline GroupsInfo& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // engineParams Field Functions 
      bool hasEngineParams() const { return this->engineParams_ != nullptr;};
      void deleteEngineParams() { this->engineParams_ = nullptr;};
      inline       const Darabonba::Json & getEngineParams() const { DARABONBA_GET(engineParams_) };
      Darabonba::Json & getEngineParams() { DARABONBA_GET(engineParams_) };
      inline GroupsInfo& setEngineParams(const Darabonba::Json & engineParams) { DARABONBA_SET_VALUE(engineParams_, engineParams) };
      inline GroupsInfo& setEngineParams(Darabonba::Json && engineParams) { DARABONBA_SET_RVALUE(engineParams_, engineParams) };


      // gpuElasticPlan Field Functions 
      bool hasGpuElasticPlan() const { return this->gpuElasticPlan_ != nullptr;};
      void deleteGpuElasticPlan() { this->gpuElasticPlan_ = nullptr;};
      inline const GroupsInfo::GpuElasticPlan & getGpuElasticPlan() const { DARABONBA_PTR_GET_CONST(gpuElasticPlan_, GroupsInfo::GpuElasticPlan) };
      inline GroupsInfo::GpuElasticPlan getGpuElasticPlan() { DARABONBA_PTR_GET(gpuElasticPlan_, GroupsInfo::GpuElasticPlan) };
      inline GroupsInfo& setGpuElasticPlan(const GroupsInfo::GpuElasticPlan & gpuElasticPlan) { DARABONBA_PTR_SET_VALUE(gpuElasticPlan_, gpuElasticPlan) };
      inline GroupsInfo& setGpuElasticPlan(GroupsInfo::GpuElasticPlan && gpuElasticPlan) { DARABONBA_PTR_SET_RVALUE(gpuElasticPlan_, gpuElasticPlan) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline GroupsInfo& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // groupType Field Functions 
      bool hasGroupType() const { return this->groupType_ != nullptr;};
      void deleteGroupType() { this->groupType_ = nullptr;};
      inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
      inline GroupsInfo& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


      // groupUsers Field Functions 
      bool hasGroupUsers() const { return this->groupUsers_ != nullptr;};
      void deleteGroupUsers() { this->groupUsers_ = nullptr;};
      inline string getGroupUsers() const { DARABONBA_PTR_GET_DEFAULT(groupUsers_, "") };
      inline GroupsInfo& setGroupUsers(string groupUsers) { DARABONBA_PTR_SET_VALUE(groupUsers_, groupUsers) };


      // maxClusterCount Field Functions 
      bool hasMaxClusterCount() const { return this->maxClusterCount_ != nullptr;};
      void deleteMaxClusterCount() { this->maxClusterCount_ = nullptr;};
      inline int32_t getMaxClusterCount() const { DARABONBA_PTR_GET_DEFAULT(maxClusterCount_, 0) };
      inline GroupsInfo& setMaxClusterCount(int32_t maxClusterCount) { DARABONBA_PTR_SET_VALUE(maxClusterCount_, maxClusterCount) };


      // maxComputeResource Field Functions 
      bool hasMaxComputeResource() const { return this->maxComputeResource_ != nullptr;};
      void deleteMaxComputeResource() { this->maxComputeResource_ = nullptr;};
      inline string getMaxComputeResource() const { DARABONBA_PTR_GET_DEFAULT(maxComputeResource_, "") };
      inline GroupsInfo& setMaxComputeResource(string maxComputeResource) { DARABONBA_PTR_SET_VALUE(maxComputeResource_, maxComputeResource) };


      // maxGpuQuantity Field Functions 
      bool hasMaxGpuQuantity() const { return this->maxGpuQuantity_ != nullptr;};
      void deleteMaxGpuQuantity() { this->maxGpuQuantity_ = nullptr;};
      inline int32_t getMaxGpuQuantity() const { DARABONBA_PTR_GET_DEFAULT(maxGpuQuantity_, 0) };
      inline GroupsInfo& setMaxGpuQuantity(int32_t maxGpuQuantity) { DARABONBA_PTR_SET_VALUE(maxGpuQuantity_, maxGpuQuantity) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline GroupsInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // minClusterCount Field Functions 
      bool hasMinClusterCount() const { return this->minClusterCount_ != nullptr;};
      void deleteMinClusterCount() { this->minClusterCount_ = nullptr;};
      inline int32_t getMinClusterCount() const { DARABONBA_PTR_GET_DEFAULT(minClusterCount_, 0) };
      inline GroupsInfo& setMinClusterCount(int32_t minClusterCount) { DARABONBA_PTR_SET_VALUE(minClusterCount_, minClusterCount) };


      // minComputeResource Field Functions 
      bool hasMinComputeResource() const { return this->minComputeResource_ != nullptr;};
      void deleteMinComputeResource() { this->minComputeResource_ = nullptr;};
      inline string getMinComputeResource() const { DARABONBA_PTR_GET_DEFAULT(minComputeResource_, "") };
      inline GroupsInfo& setMinComputeResource(string minComputeResource) { DARABONBA_PTR_SET_VALUE(minComputeResource_, minComputeResource) };


      // minGpuQuantity Field Functions 
      bool hasMinGpuQuantity() const { return this->minGpuQuantity_ != nullptr;};
      void deleteMinGpuQuantity() { this->minGpuQuantity_ = nullptr;};
      inline int32_t getMinGpuQuantity() const { DARABONBA_PTR_GET_DEFAULT(minGpuQuantity_, 0) };
      inline GroupsInfo& setMinGpuQuantity(int32_t minGpuQuantity) { DARABONBA_PTR_SET_VALUE(minGpuQuantity_, minGpuQuantity) };


      // rayConfig Field Functions 
      bool hasRayConfig() const { return this->rayConfig_ != nullptr;};
      void deleteRayConfig() { this->rayConfig_ = nullptr;};
      inline const GroupsInfo::RayConfig & getRayConfig() const { DARABONBA_PTR_GET_CONST(rayConfig_, GroupsInfo::RayConfig) };
      inline GroupsInfo::RayConfig getRayConfig() { DARABONBA_PTR_GET(rayConfig_, GroupsInfo::RayConfig) };
      inline GroupsInfo& setRayConfig(const GroupsInfo::RayConfig & rayConfig) { DARABONBA_PTR_SET_VALUE(rayConfig_, rayConfig) };
      inline GroupsInfo& setRayConfig(GroupsInfo::RayConfig && rayConfig) { DARABONBA_PTR_SET_RVALUE(rayConfig_, rayConfig) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<GroupsInfo::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<GroupsInfo::Rules>) };
      inline vector<GroupsInfo::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<GroupsInfo::Rules>) };
      inline GroupsInfo& setRules(const vector<GroupsInfo::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline GroupsInfo& setRules(vector<GroupsInfo::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      // runningClusterCount Field Functions 
      bool hasRunningClusterCount() const { return this->runningClusterCount_ != nullptr;};
      void deleteRunningClusterCount() { this->runningClusterCount_ = nullptr;};
      inline int32_t getRunningClusterCount() const { DARABONBA_PTR_GET_DEFAULT(runningClusterCount_, 0) };
      inline GroupsInfo& setRunningClusterCount(int32_t runningClusterCount) { DARABONBA_PTR_SET_VALUE(runningClusterCount_, runningClusterCount) };


      // scalePolicy Field Functions 
      bool hasScalePolicy() const { return this->scalePolicy_ != nullptr;};
      void deleteScalePolicy() { this->scalePolicy_ = nullptr;};
      inline string getScalePolicy() const { DARABONBA_PTR_GET_DEFAULT(scalePolicy_, "") };
      inline GroupsInfo& setScalePolicy(string scalePolicy) { DARABONBA_PTR_SET_VALUE(scalePolicy_, scalePolicy) };


      // specName Field Functions 
      bool hasSpecName() const { return this->specName_ != nullptr;};
      void deleteSpecName() { this->specName_ = nullptr;};
      inline string getSpecName() const { DARABONBA_PTR_GET_DEFAULT(specName_, "") };
      inline GroupsInfo& setSpecName(string specName) { DARABONBA_PTR_SET_VALUE(specName_, specName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline GroupsInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // targetResourceGroupName Field Functions 
      bool hasTargetResourceGroupName() const { return this->targetResourceGroupName_ != nullptr;};
      void deleteTargetResourceGroupName() { this->targetResourceGroupName_ = nullptr;};
      inline string getTargetResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(targetResourceGroupName_, "") };
      inline GroupsInfo& setTargetResourceGroupName(string targetResourceGroupName) { DARABONBA_PTR_SET_VALUE(targetResourceGroupName_, targetResourceGroupName) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline GroupsInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<GroupsInfo::AtmConfig> atmConfig_ {};
      // The automatic stop interval, in the format of a number followed by m (minutes). The value ranges from 0m or 5m to 10080m. A value of 0m indicates that automatic stop is disabled.
      shared_ptr<string> autoStopInterval_ {};
      // The classification of the resource group. Valid values:
      // 
      // - SQL
      // - SparkSQL
      // - MultiCluster
      // - AI
      shared_ptr<string> classification_ {};
      // A reserved parameter. Not applicable.
      shared_ptr<string> clusterMode_ {};
      // A reserved parameter. Not applicable.
      shared_ptr<string> clusterSizeResource_ {};
      // The time when the resource group was created. The time is in UTC and in the format of <i>yyyy-MM-ddTHH:mm:ssZ</i>.
      shared_ptr<string> createTime_ {};
      // The minimum elastic computing resources. Unit: ACUs.
      shared_ptr<string> elasticMinComputeResource_ {};
      // Indicates whether the spot instance feature is enabled for the resource group. When the spot instance feature is enabled, the unit price of resources is reduced, but the resources may be released. Valid values:
      // - **True**: The spot instance feature is enabled.
      // - **False**: The spot instance feature is disabled.
      // 
      // Only Job-type resource groups can be set to True.
      shared_ptr<string> enableSpot_ {};
      // The engine type.
      shared_ptr<string> engine_ {};
      // The engine parameters.
      Darabonba::Json engineParams_ {};
      // The GPU time-sharing elastic plan.
      shared_ptr<GroupsInfo::GpuElasticPlan> gpuElasticPlan_ {};
      // The resource group name.
      shared_ptr<string> groupName_ {};
      // The resource group type. Valid values:
      // - **Interactive**
      // - **Job**
      // > For more information about resource groups in Data Lakehouse Edition, see [Resource group overview (Data Lakehouse Edition)](https://help.aliyun.com/document_detail/428610.html).
      shared_ptr<string> groupType_ {};
      // The Resource Access Management (RAM) users attached to the resource group.
      shared_ptr<string> groupUsers_ {};
      // A reserved parameter. Not applicable.
      shared_ptr<int32_t> maxClusterCount_ {};
      // The maximum reserved computing resources. Unit: ACUs.
      shared_ptr<string> maxComputeResource_ {};
      // The maximum number of GPUs.
      shared_ptr<int32_t> maxGpuQuantity_ {};
      // The job routing rule message.
      // 
      // This parameter is required.
      shared_ptr<string> message_ {};
      // A reserved parameter. Not applicable.
      shared_ptr<int32_t> minClusterCount_ {};
      // The minimum reserved computing resources. Unit: ACUs.
      shared_ptr<string> minComputeResource_ {};
      // The minimum number of GPUs.
      shared_ptr<int32_t> minGpuQuantity_ {};
      // The Ray configuration information.
      shared_ptr<GroupsInfo::RayConfig> rayConfig_ {};
      // The job routing rules.
      shared_ptr<vector<GroupsInfo::Rules>> rules_ {};
      // A reserved parameter. Not applicable.
      shared_ptr<int32_t> runningClusterCount_ {};
      // The scale-out policy of the resource group. Valid values:
      // 
      // - AutoScaling: enables the AutoScaling automatic scaling policy.
      // - Disable: disables automatic scaling.
      // - MultiCluster: enables the MultiCluster automatic scaling policy.
      shared_ptr<string> scalePolicy_ {};
      // The specification name.
      shared_ptr<string> specName_ {};
      // The status of the resource group. Valid values:
      // - **creating**: being created
      // - **ok**: created
      // - **pendingdelete**: pending deletion
      shared_ptr<string> status_ {};
      // The name of the target resource group.
      shared_ptr<string> targetResourceGroupName_ {};
      // The time when the resource group was last updated. The time is in UTC and in the format of <i>yyyy-MM-ddTHH:mm:ssZ</i>.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->groupsInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // groupsInfo Field Functions 
    bool hasGroupsInfo() const { return this->groupsInfo_ != nullptr;};
    void deleteGroupsInfo() { this->groupsInfo_ = nullptr;};
    inline const vector<DescribeDBResourceGroupResponseBody::GroupsInfo> & getGroupsInfo() const { DARABONBA_PTR_GET_CONST(groupsInfo_, vector<DescribeDBResourceGroupResponseBody::GroupsInfo>) };
    inline vector<DescribeDBResourceGroupResponseBody::GroupsInfo> getGroupsInfo() { DARABONBA_PTR_GET(groupsInfo_, vector<DescribeDBResourceGroupResponseBody::GroupsInfo>) };
    inline DescribeDBResourceGroupResponseBody& setGroupsInfo(const vector<DescribeDBResourceGroupResponseBody::GroupsInfo> & groupsInfo) { DARABONBA_PTR_SET_VALUE(groupsInfo_, groupsInfo) };
    inline DescribeDBResourceGroupResponseBody& setGroupsInfo(vector<DescribeDBResourceGroupResponseBody::GroupsInfo> && groupsInfo) { DARABONBA_PTR_SET_RVALUE(groupsInfo_, groupsInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBResourceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of resource group information.
    shared_ptr<vector<DescribeDBResourceGroupResponseBody::GroupsInfo>> groupsInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
