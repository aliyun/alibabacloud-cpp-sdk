// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBRESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBRESOURCEGROUPREQUEST_HPP_
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
  class ModifyDBResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoStopInterval, autoStopInterval_);
      DARABONBA_PTR_TO_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_TO_JSON(ClusterSizeResource, clusterSizeResource_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EnableSpot, enableSpot_);
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
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetResourceGroupName, targetResourceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoStopInterval, autoStopInterval_);
      DARABONBA_PTR_FROM_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_FROM_JSON(ClusterSizeResource, clusterSizeResource_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EnableSpot, enableSpot_);
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
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetResourceGroupName, targetResourceGroupName_);
    };
    ModifyDBResourceGroupRequest() = default ;
    ModifyDBResourceGroupRequest(const ModifyDBResourceGroupRequest &) = default ;
    ModifyDBResourceGroupRequest(ModifyDBResourceGroupRequest &&) = default ;
    ModifyDBResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBResourceGroupRequest() = default ;
    ModifyDBResourceGroupRequest& operator=(const ModifyDBResourceGroupRequest &) = default ;
    ModifyDBResourceGroupRequest& operator=(ModifyDBResourceGroupRequest &&) = default ;
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
      shared_ptr<string> groupName_ {};
      // The execution duration of the query. Unit: milliseconds.
      shared_ptr<string> queryTime_ {};
      // The name of the destination resource group.
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
        DARABONBA_PTR_TO_JSON(StorageMounts, storageMounts_);
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
        DARABONBA_PTR_FROM_JSON(StorageMounts, storageMounts_);
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
        shared_ptr<string> mountPath_ {};
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
          shared_ptr<string> image_ {};
          shared_ptr<string> inferenceEngine_ {};
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
        shared_ptr<string> appName_ {};
        shared_ptr<string> appType_ {};
        shared_ptr<AppConfig::ImageSelector> imageSelector_ {};
      };

      virtual bool empty() const override { return this->appConfig_ == nullptr
        && this->category_ == nullptr && this->enableUserEni_ == nullptr && this->headAllocateUnit_ == nullptr && this->headDiskCapacity_ == nullptr && this->headSpec_ == nullptr
        && this->headSpecType_ == nullptr && this->storageMounts_ == nullptr && this->workerGroups_ == nullptr; };
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


      // storageMounts Field Functions 
      bool hasStorageMounts() const { return this->storageMounts_ != nullptr;};
      void deleteStorageMounts() { this->storageMounts_ = nullptr;};
      inline const vector<RayConfig::StorageMounts> & getStorageMounts() const { DARABONBA_PTR_GET_CONST(storageMounts_, vector<RayConfig::StorageMounts>) };
      inline vector<RayConfig::StorageMounts> getStorageMounts() { DARABONBA_PTR_GET(storageMounts_, vector<RayConfig::StorageMounts>) };
      inline RayConfig& setStorageMounts(const vector<RayConfig::StorageMounts> & storageMounts) { DARABONBA_PTR_SET_VALUE(storageMounts_, storageMounts) };
      inline RayConfig& setStorageMounts(vector<RayConfig::StorageMounts> && storageMounts) { DARABONBA_PTR_SET_RVALUE(storageMounts_, storageMounts) };


      // workerGroups Field Functions 
      bool hasWorkerGroups() const { return this->workerGroups_ != nullptr;};
      void deleteWorkerGroups() { this->workerGroups_ = nullptr;};
      inline const vector<RayConfig::WorkerGroups> & getWorkerGroups() const { DARABONBA_PTR_GET_CONST(workerGroups_, vector<RayConfig::WorkerGroups>) };
      inline vector<RayConfig::WorkerGroups> getWorkerGroups() { DARABONBA_PTR_GET(workerGroups_, vector<RayConfig::WorkerGroups>) };
      inline RayConfig& setWorkerGroups(const vector<RayConfig::WorkerGroups> & workerGroups) { DARABONBA_PTR_SET_VALUE(workerGroups_, workerGroups) };
      inline RayConfig& setWorkerGroups(vector<RayConfig::WorkerGroups> && workerGroups) { DARABONBA_PTR_SET_RVALUE(workerGroups_, workerGroups) };


    protected:
      shared_ptr<RayConfig::AppConfig> appConfig_ {};
      shared_ptr<string> category_ {};
      shared_ptr<bool> enableUserEni_ {};
      shared_ptr<string> headAllocateUnit_ {};
      shared_ptr<string> headDiskCapacity_ {};
      shared_ptr<string> headSpec_ {};
      shared_ptr<string> headSpecType_ {};
      shared_ptr<vector<RayConfig::StorageMounts>> storageMounts_ {};
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
        && this->clusterMode_ == nullptr && this->clusterSizeResource_ == nullptr && this->DBClusterId_ == nullptr && this->enableSpot_ == nullptr && this->engineParams_ == nullptr
        && this->gpuElasticPlan_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr && this->maxClusterCount_ == nullptr && this->maxComputeResource_ == nullptr
        && this->maxGpuQuantity_ == nullptr && this->minClusterCount_ == nullptr && this->minComputeResource_ == nullptr && this->minGpuQuantity_ == nullptr && this->rayConfig_ == nullptr
        && this->regionId_ == nullptr && this->rules_ == nullptr && this->specName_ == nullptr && this->status_ == nullptr && this->targetResourceGroupName_ == nullptr; };
    // autoStopInterval Field Functions 
    bool hasAutoStopInterval() const { return this->autoStopInterval_ != nullptr;};
    void deleteAutoStopInterval() { this->autoStopInterval_ = nullptr;};
    inline string getAutoStopInterval() const { DARABONBA_PTR_GET_DEFAULT(autoStopInterval_, "") };
    inline ModifyDBResourceGroupRequest& setAutoStopInterval(string autoStopInterval) { DARABONBA_PTR_SET_VALUE(autoStopInterval_, autoStopInterval) };


    // clusterMode Field Functions 
    bool hasClusterMode() const { return this->clusterMode_ != nullptr;};
    void deleteClusterMode() { this->clusterMode_ = nullptr;};
    inline string getClusterMode() const { DARABONBA_PTR_GET_DEFAULT(clusterMode_, "") };
    inline ModifyDBResourceGroupRequest& setClusterMode(string clusterMode) { DARABONBA_PTR_SET_VALUE(clusterMode_, clusterMode) };


    // clusterSizeResource Field Functions 
    bool hasClusterSizeResource() const { return this->clusterSizeResource_ != nullptr;};
    void deleteClusterSizeResource() { this->clusterSizeResource_ = nullptr;};
    inline string getClusterSizeResource() const { DARABONBA_PTR_GET_DEFAULT(clusterSizeResource_, "") };
    inline ModifyDBResourceGroupRequest& setClusterSizeResource(string clusterSizeResource) { DARABONBA_PTR_SET_VALUE(clusterSizeResource_, clusterSizeResource) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBResourceGroupRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // enableSpot Field Functions 
    bool hasEnableSpot() const { return this->enableSpot_ != nullptr;};
    void deleteEnableSpot() { this->enableSpot_ = nullptr;};
    inline bool getEnableSpot() const { DARABONBA_PTR_GET_DEFAULT(enableSpot_, false) };
    inline ModifyDBResourceGroupRequest& setEnableSpot(bool enableSpot) { DARABONBA_PTR_SET_VALUE(enableSpot_, enableSpot) };


    // engineParams Field Functions 
    bool hasEngineParams() const { return this->engineParams_ != nullptr;};
    void deleteEngineParams() { this->engineParams_ = nullptr;};
    inline     const Darabonba::Json & getEngineParams() const { DARABONBA_GET(engineParams_) };
    Darabonba::Json & getEngineParams() { DARABONBA_GET(engineParams_) };
    inline ModifyDBResourceGroupRequest& setEngineParams(const Darabonba::Json & engineParams) { DARABONBA_SET_VALUE(engineParams_, engineParams) };
    inline ModifyDBResourceGroupRequest& setEngineParams(Darabonba::Json && engineParams) { DARABONBA_SET_RVALUE(engineParams_, engineParams) };


    // gpuElasticPlan Field Functions 
    bool hasGpuElasticPlan() const { return this->gpuElasticPlan_ != nullptr;};
    void deleteGpuElasticPlan() { this->gpuElasticPlan_ = nullptr;};
    inline const ModifyDBResourceGroupRequest::GpuElasticPlan & getGpuElasticPlan() const { DARABONBA_PTR_GET_CONST(gpuElasticPlan_, ModifyDBResourceGroupRequest::GpuElasticPlan) };
    inline ModifyDBResourceGroupRequest::GpuElasticPlan getGpuElasticPlan() { DARABONBA_PTR_GET(gpuElasticPlan_, ModifyDBResourceGroupRequest::GpuElasticPlan) };
    inline ModifyDBResourceGroupRequest& setGpuElasticPlan(const ModifyDBResourceGroupRequest::GpuElasticPlan & gpuElasticPlan) { DARABONBA_PTR_SET_VALUE(gpuElasticPlan_, gpuElasticPlan) };
    inline ModifyDBResourceGroupRequest& setGpuElasticPlan(ModifyDBResourceGroupRequest::GpuElasticPlan && gpuElasticPlan) { DARABONBA_PTR_SET_RVALUE(gpuElasticPlan_, gpuElasticPlan) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModifyDBResourceGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline ModifyDBResourceGroupRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // maxClusterCount Field Functions 
    bool hasMaxClusterCount() const { return this->maxClusterCount_ != nullptr;};
    void deleteMaxClusterCount() { this->maxClusterCount_ = nullptr;};
    inline int32_t getMaxClusterCount() const { DARABONBA_PTR_GET_DEFAULT(maxClusterCount_, 0) };
    inline ModifyDBResourceGroupRequest& setMaxClusterCount(int32_t maxClusterCount) { DARABONBA_PTR_SET_VALUE(maxClusterCount_, maxClusterCount) };


    // maxComputeResource Field Functions 
    bool hasMaxComputeResource() const { return this->maxComputeResource_ != nullptr;};
    void deleteMaxComputeResource() { this->maxComputeResource_ = nullptr;};
    inline string getMaxComputeResource() const { DARABONBA_PTR_GET_DEFAULT(maxComputeResource_, "") };
    inline ModifyDBResourceGroupRequest& setMaxComputeResource(string maxComputeResource) { DARABONBA_PTR_SET_VALUE(maxComputeResource_, maxComputeResource) };


    // maxGpuQuantity Field Functions 
    bool hasMaxGpuQuantity() const { return this->maxGpuQuantity_ != nullptr;};
    void deleteMaxGpuQuantity() { this->maxGpuQuantity_ = nullptr;};
    inline int32_t getMaxGpuQuantity() const { DARABONBA_PTR_GET_DEFAULT(maxGpuQuantity_, 0) };
    inline ModifyDBResourceGroupRequest& setMaxGpuQuantity(int32_t maxGpuQuantity) { DARABONBA_PTR_SET_VALUE(maxGpuQuantity_, maxGpuQuantity) };


    // minClusterCount Field Functions 
    bool hasMinClusterCount() const { return this->minClusterCount_ != nullptr;};
    void deleteMinClusterCount() { this->minClusterCount_ = nullptr;};
    inline int32_t getMinClusterCount() const { DARABONBA_PTR_GET_DEFAULT(minClusterCount_, 0) };
    inline ModifyDBResourceGroupRequest& setMinClusterCount(int32_t minClusterCount) { DARABONBA_PTR_SET_VALUE(minClusterCount_, minClusterCount) };


    // minComputeResource Field Functions 
    bool hasMinComputeResource() const { return this->minComputeResource_ != nullptr;};
    void deleteMinComputeResource() { this->minComputeResource_ = nullptr;};
    inline string getMinComputeResource() const { DARABONBA_PTR_GET_DEFAULT(minComputeResource_, "") };
    inline ModifyDBResourceGroupRequest& setMinComputeResource(string minComputeResource) { DARABONBA_PTR_SET_VALUE(minComputeResource_, minComputeResource) };


    // minGpuQuantity Field Functions 
    bool hasMinGpuQuantity() const { return this->minGpuQuantity_ != nullptr;};
    void deleteMinGpuQuantity() { this->minGpuQuantity_ = nullptr;};
    inline int32_t getMinGpuQuantity() const { DARABONBA_PTR_GET_DEFAULT(minGpuQuantity_, 0) };
    inline ModifyDBResourceGroupRequest& setMinGpuQuantity(int32_t minGpuQuantity) { DARABONBA_PTR_SET_VALUE(minGpuQuantity_, minGpuQuantity) };


    // rayConfig Field Functions 
    bool hasRayConfig() const { return this->rayConfig_ != nullptr;};
    void deleteRayConfig() { this->rayConfig_ = nullptr;};
    inline const ModifyDBResourceGroupRequest::RayConfig & getRayConfig() const { DARABONBA_PTR_GET_CONST(rayConfig_, ModifyDBResourceGroupRequest::RayConfig) };
    inline ModifyDBResourceGroupRequest::RayConfig getRayConfig() { DARABONBA_PTR_GET(rayConfig_, ModifyDBResourceGroupRequest::RayConfig) };
    inline ModifyDBResourceGroupRequest& setRayConfig(const ModifyDBResourceGroupRequest::RayConfig & rayConfig) { DARABONBA_PTR_SET_VALUE(rayConfig_, rayConfig) };
    inline ModifyDBResourceGroupRequest& setRayConfig(ModifyDBResourceGroupRequest::RayConfig && rayConfig) { DARABONBA_PTR_SET_RVALUE(rayConfig_, rayConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDBResourceGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<ModifyDBResourceGroupRequest::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<ModifyDBResourceGroupRequest::Rules>) };
    inline vector<ModifyDBResourceGroupRequest::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<ModifyDBResourceGroupRequest::Rules>) };
    inline ModifyDBResourceGroupRequest& setRules(const vector<ModifyDBResourceGroupRequest::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ModifyDBResourceGroupRequest& setRules(vector<ModifyDBResourceGroupRequest::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // specName Field Functions 
    bool hasSpecName() const { return this->specName_ != nullptr;};
    void deleteSpecName() { this->specName_ = nullptr;};
    inline string getSpecName() const { DARABONBA_PTR_GET_DEFAULT(specName_, "") };
    inline ModifyDBResourceGroupRequest& setSpecName(string specName) { DARABONBA_PTR_SET_VALUE(specName_, specName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyDBResourceGroupRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetResourceGroupName Field Functions 
    bool hasTargetResourceGroupName() const { return this->targetResourceGroupName_ != nullptr;};
    void deleteTargetResourceGroupName() { this->targetResourceGroupName_ = nullptr;};
    inline string getTargetResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(targetResourceGroupName_, "") };
    inline ModifyDBResourceGroupRequest& setTargetResourceGroupName(string targetResourceGroupName) { DARABONBA_PTR_SET_VALUE(targetResourceGroupName_, targetResourceGroupName) };


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
    Darabonba::Json engineParams_ {};
    shared_ptr<ModifyDBResourceGroupRequest::GpuElasticPlan> gpuElasticPlan_ {};
    // The name of the resource group.
    // 
    // > You can call the [DescribeDBResourceGroup](https://help.aliyun.com/document_detail/459446.html) operation to query the name of a resource group in a cluster.
    // 
    // This parameter is required.
    shared_ptr<string> groupName_ {};
    // The type of the resource group. Valid values:
    // 
    // *   **Interactive**
    // *   **Job**
    // 
    // > For information about resource groups of Data Lakehouse Edition, see [Resource groups](https://help.aliyun.com/document_detail/428610.html).
    // 
    // This parameter is required.
    shared_ptr<string> groupType_ {};
    // A reserved parameter.
    shared_ptr<int32_t> maxClusterCount_ {};
    // The maximum amount of reserved computing resources.
    // 
    // *   If GroupType is set to Interactive, the maximum amount of reserved computing resources refers to the amount of resources that are not allocated in the cluster. Set this parameter to a value in increments of 16ACU.
    // *   If GroupType is set to Job, the maximum amount of reserved computing resources refers to the amount of resources that are not allocated in the cluster. Set this parameter to a value in increments of 8ACU.
    shared_ptr<string> maxComputeResource_ {};
    shared_ptr<int32_t> maxGpuQuantity_ {};
    // A reserved parameter.
    shared_ptr<int32_t> minClusterCount_ {};
    // The minimum amount of reserved computing resources.
    // 
    // *   If the GroupType parameter is set to Interactive, set the value to 16ACU.
    // *   If GroupType is set to Job, set the value to 0ACU.
    shared_ptr<string> minComputeResource_ {};
    shared_ptr<int32_t> minGpuQuantity_ {};
    shared_ptr<ModifyDBResourceGroupRequest::RayConfig> rayConfig_ {};
    // The region ID of the cluster.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/454314.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The job resubmission rules.
    shared_ptr<vector<ModifyDBResourceGroupRequest::Rules>> rules_ {};
    shared_ptr<string> specName_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> targetResourceGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
