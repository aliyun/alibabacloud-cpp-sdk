// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYEMBODIEDAIPLATFORMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYEMBODIEDAIPLATFORMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ADBAI20250812
{
namespace Models
{
  class ModifyEmbodiedAIPlatformRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEmbodiedAIPlatformRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DeviceCount, deviceCount_);
      DARABONBA_PTR_TO_JSON(PlatformName, platformName_);
      DARABONBA_PTR_TO_JSON(RayConfig, rayConfig_);
      DARABONBA_PTR_TO_JSON(RayTrainConfig, rayTrainConfig_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WebserverSpecName, webserverSpecName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEmbodiedAIPlatformRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DeviceCount, deviceCount_);
      DARABONBA_PTR_FROM_JSON(PlatformName, platformName_);
      DARABONBA_PTR_FROM_JSON(RayConfig, rayConfig_);
      DARABONBA_PTR_FROM_JSON(RayTrainConfig, rayTrainConfig_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WebserverSpecName, webserverSpecName_);
    };
    ModifyEmbodiedAIPlatformRequest() = default ;
    ModifyEmbodiedAIPlatformRequest(const ModifyEmbodiedAIPlatformRequest &) = default ;
    ModifyEmbodiedAIPlatformRequest(ModifyEmbodiedAIPlatformRequest &&) = default ;
    ModifyEmbodiedAIPlatformRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEmbodiedAIPlatformRequest() = default ;
    ModifyEmbodiedAIPlatformRequest& operator=(const ModifyEmbodiedAIPlatformRequest &) = default ;
    ModifyEmbodiedAIPlatformRequest& operator=(ModifyEmbodiedAIPlatformRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RayTrainConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RayTrainConfig& obj) { 
        DARABONBA_PTR_TO_JSON(CpuAcu, cpuAcu_);
        DARABONBA_PTR_TO_JSON(GpuSpecs, gpuSpecs_);
        DARABONBA_PTR_TO_JSON(TerminalConfig, terminalConfig_);
      };
      friend void from_json(const Darabonba::Json& j, RayTrainConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(CpuAcu, cpuAcu_);
        DARABONBA_PTR_FROM_JSON(GpuSpecs, gpuSpecs_);
        DARABONBA_PTR_FROM_JSON(TerminalConfig, terminalConfig_);
      };
      RayTrainConfig() = default ;
      RayTrainConfig(const RayTrainConfig &) = default ;
      RayTrainConfig(RayTrainConfig &&) = default ;
      RayTrainConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RayTrainConfig() = default ;
      RayTrainConfig& operator=(const RayTrainConfig &) = default ;
      RayTrainConfig& operator=(RayTrainConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TerminalConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TerminalConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AcrConfig, acrConfig_);
        };
        friend void from_json(const Darabonba::Json& j, TerminalConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AcrConfig, acrConfig_);
        };
        TerminalConfig() = default ;
        TerminalConfig(const TerminalConfig &) = default ;
        TerminalConfig(TerminalConfig &&) = default ;
        TerminalConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TerminalConfig() = default ;
        TerminalConfig& operator=(const TerminalConfig &) = default ;
        TerminalConfig& operator=(TerminalConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AcrConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AcrConfig& obj) { 
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
            DARABONBA_PTR_TO_JSON(Registry, registry_);
          };
          friend void from_json(const Darabonba::Json& j, AcrConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
            DARABONBA_PTR_FROM_JSON(Registry, registry_);
          };
          AcrConfig() = default ;
          AcrConfig(const AcrConfig &) = default ;
          AcrConfig(AcrConfig &&) = default ;
          AcrConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AcrConfig() = default ;
          AcrConfig& operator=(const AcrConfig &) = default ;
          AcrConfig& operator=(AcrConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->namespaces_ == nullptr && this->registry_ == nullptr; };
          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline AcrConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // namespaces Field Functions 
          bool hasNamespaces() const { return this->namespaces_ != nullptr;};
          void deleteNamespaces() { this->namespaces_ = nullptr;};
          inline const vector<string> & getNamespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<string>) };
          inline vector<string> getNamespaces() { DARABONBA_PTR_GET(namespaces_, vector<string>) };
          inline AcrConfig& setNamespaces(const vector<string> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
          inline AcrConfig& setNamespaces(vector<string> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


          // registry Field Functions 
          bool hasRegistry() const { return this->registry_ != nullptr;};
          void deleteRegistry() { this->registry_ = nullptr;};
          inline string getRegistry() const { DARABONBA_PTR_GET_DEFAULT(registry_, "") };
          inline AcrConfig& setRegistry(string registry) { DARABONBA_PTR_SET_VALUE(registry_, registry) };


        protected:
          shared_ptr<string> instanceId_ {};
          shared_ptr<vector<string>> namespaces_ {};
          shared_ptr<string> registry_ {};
        };

        virtual bool empty() const override { return this->acrConfig_ == nullptr; };
        // acrConfig Field Functions 
        bool hasAcrConfig() const { return this->acrConfig_ != nullptr;};
        void deleteAcrConfig() { this->acrConfig_ = nullptr;};
        inline const TerminalConfig::AcrConfig & getAcrConfig() const { DARABONBA_PTR_GET_CONST(acrConfig_, TerminalConfig::AcrConfig) };
        inline TerminalConfig::AcrConfig getAcrConfig() { DARABONBA_PTR_GET(acrConfig_, TerminalConfig::AcrConfig) };
        inline TerminalConfig& setAcrConfig(const TerminalConfig::AcrConfig & acrConfig) { DARABONBA_PTR_SET_VALUE(acrConfig_, acrConfig) };
        inline TerminalConfig& setAcrConfig(TerminalConfig::AcrConfig && acrConfig) { DARABONBA_PTR_SET_RVALUE(acrConfig_, acrConfig) };


      protected:
        shared_ptr<TerminalConfig::AcrConfig> acrConfig_ {};
      };

      class GpuSpecs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GpuSpecs& obj) { 
          DARABONBA_PTR_TO_JSON(AllocateUnit, allocateUnit_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(SpecName, specName_);
        };
        friend void from_json(const Darabonba::Json& j, GpuSpecs& obj) { 
          DARABONBA_PTR_FROM_JSON(AllocateUnit, allocateUnit_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(SpecName, specName_);
        };
        GpuSpecs() = default ;
        GpuSpecs(const GpuSpecs &) = default ;
        GpuSpecs(GpuSpecs &&) = default ;
        GpuSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GpuSpecs() = default ;
        GpuSpecs& operator=(const GpuSpecs &) = default ;
        GpuSpecs& operator=(GpuSpecs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allocateUnit_ == nullptr
        && this->count_ == nullptr && this->specName_ == nullptr; };
        // allocateUnit Field Functions 
        bool hasAllocateUnit() const { return this->allocateUnit_ != nullptr;};
        void deleteAllocateUnit() { this->allocateUnit_ = nullptr;};
        inline string getAllocateUnit() const { DARABONBA_PTR_GET_DEFAULT(allocateUnit_, "") };
        inline GpuSpecs& setAllocateUnit(string allocateUnit) { DARABONBA_PTR_SET_VALUE(allocateUnit_, allocateUnit) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline GpuSpecs& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // specName Field Functions 
        bool hasSpecName() const { return this->specName_ != nullptr;};
        void deleteSpecName() { this->specName_ = nullptr;};
        inline string getSpecName() const { DARABONBA_PTR_GET_DEFAULT(specName_, "") };
        inline GpuSpecs& setSpecName(string specName) { DARABONBA_PTR_SET_VALUE(specName_, specName) };


      protected:
        shared_ptr<string> allocateUnit_ {};
        shared_ptr<int64_t> count_ {};
        shared_ptr<string> specName_ {};
      };

      virtual bool empty() const override { return this->cpuAcu_ == nullptr
        && this->gpuSpecs_ == nullptr && this->terminalConfig_ == nullptr; };
      // cpuAcu Field Functions 
      bool hasCpuAcu() const { return this->cpuAcu_ != nullptr;};
      void deleteCpuAcu() { this->cpuAcu_ = nullptr;};
      inline int64_t getCpuAcu() const { DARABONBA_PTR_GET_DEFAULT(cpuAcu_, 0L) };
      inline RayTrainConfig& setCpuAcu(int64_t cpuAcu) { DARABONBA_PTR_SET_VALUE(cpuAcu_, cpuAcu) };


      // gpuSpecs Field Functions 
      bool hasGpuSpecs() const { return this->gpuSpecs_ != nullptr;};
      void deleteGpuSpecs() { this->gpuSpecs_ = nullptr;};
      inline const vector<RayTrainConfig::GpuSpecs> & getGpuSpecs() const { DARABONBA_PTR_GET_CONST(gpuSpecs_, vector<RayTrainConfig::GpuSpecs>) };
      inline vector<RayTrainConfig::GpuSpecs> getGpuSpecs() { DARABONBA_PTR_GET(gpuSpecs_, vector<RayTrainConfig::GpuSpecs>) };
      inline RayTrainConfig& setGpuSpecs(const vector<RayTrainConfig::GpuSpecs> & gpuSpecs) { DARABONBA_PTR_SET_VALUE(gpuSpecs_, gpuSpecs) };
      inline RayTrainConfig& setGpuSpecs(vector<RayTrainConfig::GpuSpecs> && gpuSpecs) { DARABONBA_PTR_SET_RVALUE(gpuSpecs_, gpuSpecs) };


      // terminalConfig Field Functions 
      bool hasTerminalConfig() const { return this->terminalConfig_ != nullptr;};
      void deleteTerminalConfig() { this->terminalConfig_ = nullptr;};
      inline const RayTrainConfig::TerminalConfig & getTerminalConfig() const { DARABONBA_PTR_GET_CONST(terminalConfig_, RayTrainConfig::TerminalConfig) };
      inline RayTrainConfig::TerminalConfig getTerminalConfig() { DARABONBA_PTR_GET(terminalConfig_, RayTrainConfig::TerminalConfig) };
      inline RayTrainConfig& setTerminalConfig(const RayTrainConfig::TerminalConfig & terminalConfig) { DARABONBA_PTR_SET_VALUE(terminalConfig_, terminalConfig) };
      inline RayTrainConfig& setTerminalConfig(RayTrainConfig::TerminalConfig && terminalConfig) { DARABONBA_PTR_SET_RVALUE(terminalConfig_, terminalConfig) };


    protected:
      shared_ptr<int64_t> cpuAcu_ {};
      shared_ptr<vector<RayTrainConfig::GpuSpecs>> gpuSpecs_ {};
      shared_ptr<RayTrainConfig::TerminalConfig> terminalConfig_ {};
    };

    class RayConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RayConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(HeadSpec, headSpec_);
        DARABONBA_PTR_TO_JSON(WorkerGroups, workerGroups_);
      };
      friend void from_json(const Darabonba::Json& j, RayConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(HeadSpec, headSpec_);
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
        && this->headSpec_ == nullptr && this->workerGroups_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline RayConfig& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // headSpec Field Functions 
      bool hasHeadSpec() const { return this->headSpec_ != nullptr;};
      void deleteHeadSpec() { this->headSpec_ = nullptr;};
      inline string getHeadSpec() const { DARABONBA_PTR_GET_DEFAULT(headSpec_, "") };
      inline RayConfig& setHeadSpec(string headSpec) { DARABONBA_PTR_SET_VALUE(headSpec_, headSpec) };


      // workerGroups Field Functions 
      bool hasWorkerGroups() const { return this->workerGroups_ != nullptr;};
      void deleteWorkerGroups() { this->workerGroups_ = nullptr;};
      inline const vector<RayConfig::WorkerGroups> & getWorkerGroups() const { DARABONBA_PTR_GET_CONST(workerGroups_, vector<RayConfig::WorkerGroups>) };
      inline vector<RayConfig::WorkerGroups> getWorkerGroups() { DARABONBA_PTR_GET(workerGroups_, vector<RayConfig::WorkerGroups>) };
      inline RayConfig& setWorkerGroups(const vector<RayConfig::WorkerGroups> & workerGroups) { DARABONBA_PTR_SET_VALUE(workerGroups_, workerGroups) };
      inline RayConfig& setWorkerGroups(vector<RayConfig::WorkerGroups> && workerGroups) { DARABONBA_PTR_SET_RVALUE(workerGroups_, workerGroups) };


    protected:
      shared_ptr<string> category_ {};
      shared_ptr<string> headSpec_ {};
      shared_ptr<vector<RayConfig::WorkerGroups>> workerGroups_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->deviceCount_ == nullptr && this->platformName_ == nullptr && this->rayConfig_ == nullptr && this->rayTrainConfig_ == nullptr && this->regionId_ == nullptr
        && this->webserverSpecName_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyEmbodiedAIPlatformRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // deviceCount Field Functions 
    bool hasDeviceCount() const { return this->deviceCount_ != nullptr;};
    void deleteDeviceCount() { this->deviceCount_ = nullptr;};
    inline string getDeviceCount() const { DARABONBA_PTR_GET_DEFAULT(deviceCount_, "") };
    inline ModifyEmbodiedAIPlatformRequest& setDeviceCount(string deviceCount) { DARABONBA_PTR_SET_VALUE(deviceCount_, deviceCount) };


    // platformName Field Functions 
    bool hasPlatformName() const { return this->platformName_ != nullptr;};
    void deletePlatformName() { this->platformName_ = nullptr;};
    inline string getPlatformName() const { DARABONBA_PTR_GET_DEFAULT(platformName_, "") };
    inline ModifyEmbodiedAIPlatformRequest& setPlatformName(string platformName) { DARABONBA_PTR_SET_VALUE(platformName_, platformName) };


    // rayConfig Field Functions 
    bool hasRayConfig() const { return this->rayConfig_ != nullptr;};
    void deleteRayConfig() { this->rayConfig_ = nullptr;};
    inline const ModifyEmbodiedAIPlatformRequest::RayConfig & getRayConfig() const { DARABONBA_PTR_GET_CONST(rayConfig_, ModifyEmbodiedAIPlatformRequest::RayConfig) };
    inline ModifyEmbodiedAIPlatformRequest::RayConfig getRayConfig() { DARABONBA_PTR_GET(rayConfig_, ModifyEmbodiedAIPlatformRequest::RayConfig) };
    inline ModifyEmbodiedAIPlatformRequest& setRayConfig(const ModifyEmbodiedAIPlatformRequest::RayConfig & rayConfig) { DARABONBA_PTR_SET_VALUE(rayConfig_, rayConfig) };
    inline ModifyEmbodiedAIPlatformRequest& setRayConfig(ModifyEmbodiedAIPlatformRequest::RayConfig && rayConfig) { DARABONBA_PTR_SET_RVALUE(rayConfig_, rayConfig) };


    // rayTrainConfig Field Functions 
    bool hasRayTrainConfig() const { return this->rayTrainConfig_ != nullptr;};
    void deleteRayTrainConfig() { this->rayTrainConfig_ = nullptr;};
    inline const ModifyEmbodiedAIPlatformRequest::RayTrainConfig & getRayTrainConfig() const { DARABONBA_PTR_GET_CONST(rayTrainConfig_, ModifyEmbodiedAIPlatformRequest::RayTrainConfig) };
    inline ModifyEmbodiedAIPlatformRequest::RayTrainConfig getRayTrainConfig() { DARABONBA_PTR_GET(rayTrainConfig_, ModifyEmbodiedAIPlatformRequest::RayTrainConfig) };
    inline ModifyEmbodiedAIPlatformRequest& setRayTrainConfig(const ModifyEmbodiedAIPlatformRequest::RayTrainConfig & rayTrainConfig) { DARABONBA_PTR_SET_VALUE(rayTrainConfig_, rayTrainConfig) };
    inline ModifyEmbodiedAIPlatformRequest& setRayTrainConfig(ModifyEmbodiedAIPlatformRequest::RayTrainConfig && rayTrainConfig) { DARABONBA_PTR_SET_RVALUE(rayTrainConfig_, rayTrainConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyEmbodiedAIPlatformRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // webserverSpecName Field Functions 
    bool hasWebserverSpecName() const { return this->webserverSpecName_ != nullptr;};
    void deleteWebserverSpecName() { this->webserverSpecName_ = nullptr;};
    inline string getWebserverSpecName() const { DARABONBA_PTR_GET_DEFAULT(webserverSpecName_, "") };
    inline ModifyEmbodiedAIPlatformRequest& setWebserverSpecName(string webserverSpecName) { DARABONBA_PTR_SET_VALUE(webserverSpecName_, webserverSpecName) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> deviceCount_ {};
    // This parameter is required.
    shared_ptr<string> platformName_ {};
    shared_ptr<ModifyEmbodiedAIPlatformRequest::RayConfig> rayConfig_ {};
    shared_ptr<ModifyEmbodiedAIPlatformRequest::RayTrainConfig> rayTrainConfig_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> webserverSpecName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
