// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEMBODIEDAIPLATFORMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEMBODIEDAIPLATFORMREQUEST_HPP_
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
  class CreateEmbodiedAIPlatformRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEmbodiedAIPlatformRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PlatformName, platformName_);
      DARABONBA_PTR_TO_JSON(RayConfig, rayConfig_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WebserverSpecName, webserverSpecName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEmbodiedAIPlatformRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PlatformName, platformName_);
      DARABONBA_PTR_FROM_JSON(RayConfig, rayConfig_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WebserverSpecName, webserverSpecName_);
    };
    CreateEmbodiedAIPlatformRequest() = default ;
    CreateEmbodiedAIPlatformRequest(const CreateEmbodiedAIPlatformRequest &) = default ;
    CreateEmbodiedAIPlatformRequest(CreateEmbodiedAIPlatformRequest &&) = default ;
    CreateEmbodiedAIPlatformRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEmbodiedAIPlatformRequest() = default ;
    CreateEmbodiedAIPlatformRequest& operator=(const CreateEmbodiedAIPlatformRequest &) = default ;
    CreateEmbodiedAIPlatformRequest& operator=(CreateEmbodiedAIPlatformRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        && this->platformName_ == nullptr && this->rayConfig_ == nullptr && this->regionId_ == nullptr && this->webserverSpecName_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateEmbodiedAIPlatformRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // platformName Field Functions 
    bool hasPlatformName() const { return this->platformName_ != nullptr;};
    void deletePlatformName() { this->platformName_ = nullptr;};
    inline string getPlatformName() const { DARABONBA_PTR_GET_DEFAULT(platformName_, "") };
    inline CreateEmbodiedAIPlatformRequest& setPlatformName(string platformName) { DARABONBA_PTR_SET_VALUE(platformName_, platformName) };


    // rayConfig Field Functions 
    bool hasRayConfig() const { return this->rayConfig_ != nullptr;};
    void deleteRayConfig() { this->rayConfig_ = nullptr;};
    inline const CreateEmbodiedAIPlatformRequest::RayConfig & getRayConfig() const { DARABONBA_PTR_GET_CONST(rayConfig_, CreateEmbodiedAIPlatformRequest::RayConfig) };
    inline CreateEmbodiedAIPlatformRequest::RayConfig getRayConfig() { DARABONBA_PTR_GET(rayConfig_, CreateEmbodiedAIPlatformRequest::RayConfig) };
    inline CreateEmbodiedAIPlatformRequest& setRayConfig(const CreateEmbodiedAIPlatformRequest::RayConfig & rayConfig) { DARABONBA_PTR_SET_VALUE(rayConfig_, rayConfig) };
    inline CreateEmbodiedAIPlatformRequest& setRayConfig(CreateEmbodiedAIPlatformRequest::RayConfig && rayConfig) { DARABONBA_PTR_SET_RVALUE(rayConfig_, rayConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateEmbodiedAIPlatformRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // webserverSpecName Field Functions 
    bool hasWebserverSpecName() const { return this->webserverSpecName_ != nullptr;};
    void deleteWebserverSpecName() { this->webserverSpecName_ = nullptr;};
    inline string getWebserverSpecName() const { DARABONBA_PTR_GET_DEFAULT(webserverSpecName_, "") };
    inline CreateEmbodiedAIPlatformRequest& setWebserverSpecName(string webserverSpecName) { DARABONBA_PTR_SET_VALUE(webserverSpecName_, webserverSpecName) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // This parameter is required.
    shared_ptr<string> platformName_ {};
    shared_ptr<CreateEmbodiedAIPlatformRequest::RayConfig> rayConfig_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> webserverSpecName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
