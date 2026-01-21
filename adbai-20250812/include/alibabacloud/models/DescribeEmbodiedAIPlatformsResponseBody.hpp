// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEMBODIEDAIPLATFORMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEMBODIEDAIPLATFORMSRESPONSEBODY_HPP_
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
  class DescribeEmbodiedAIPlatformsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEmbodiedAIPlatformsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Platforms, platforms_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEmbodiedAIPlatformsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Platforms, platforms_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEmbodiedAIPlatformsResponseBody() = default ;
    DescribeEmbodiedAIPlatformsResponseBody(const DescribeEmbodiedAIPlatformsResponseBody &) = default ;
    DescribeEmbodiedAIPlatformsResponseBody(DescribeEmbodiedAIPlatformsResponseBody &&) = default ;
    DescribeEmbodiedAIPlatformsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEmbodiedAIPlatformsResponseBody() = default ;
    DescribeEmbodiedAIPlatformsResponseBody& operator=(const DescribeEmbodiedAIPlatformsResponseBody &) = default ;
    DescribeEmbodiedAIPlatformsResponseBody& operator=(DescribeEmbodiedAIPlatformsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Platforms : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Platforms& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EapConfig, eapConfig_);
        DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
        DARABONBA_PTR_TO_JSON(PlatformName, platformName_);
        DARABONBA_PTR_TO_JSON(RayConfig, rayConfig_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, Platforms& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EapConfig, eapConfig_);
        DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
        DARABONBA_PTR_FROM_JSON(PlatformName, platformName_);
        DARABONBA_PTR_FROM_JSON(RayConfig, rayConfig_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      Platforms() = default ;
      Platforms(const Platforms &) = default ;
      Platforms(Platforms &&) = default ;
      Platforms(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Platforms() = default ;
      Platforms& operator=(const Platforms &) = default ;
      Platforms& operator=(Platforms &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RayConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RayConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(HeadDiskCapacity, headDiskCapacity_);
          DARABONBA_PTR_TO_JSON(HeadSpec, headSpec_);
          DARABONBA_PTR_TO_JSON(HeadSpecType, headSpecType_);
          DARABONBA_PTR_TO_JSON(RayClusterAddress, rayClusterAddress_);
          DARABONBA_PTR_TO_JSON(RayDashboardAddress, rayDashboardAddress_);
          DARABONBA_PTR_TO_JSON(RayGrafanaAddress, rayGrafanaAddress_);
          DARABONBA_PTR_TO_JSON(WorkerGroups, workerGroups_);
        };
        friend void from_json(const Darabonba::Json& j, RayConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(HeadDiskCapacity, headDiskCapacity_);
          DARABONBA_PTR_FROM_JSON(HeadSpec, headSpec_);
          DARABONBA_PTR_FROM_JSON(HeadSpecType, headSpecType_);
          DARABONBA_PTR_FROM_JSON(RayClusterAddress, rayClusterAddress_);
          DARABONBA_PTR_FROM_JSON(RayDashboardAddress, rayDashboardAddress_);
          DARABONBA_PTR_FROM_JSON(RayGrafanaAddress, rayGrafanaAddress_);
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
        && this->headDiskCapacity_ == nullptr && this->headSpec_ == nullptr && this->headSpecType_ == nullptr && this->rayClusterAddress_ == nullptr && this->rayDashboardAddress_ == nullptr
        && this->rayGrafanaAddress_ == nullptr && this->workerGroups_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline RayConfig& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


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


        // workerGroups Field Functions 
        bool hasWorkerGroups() const { return this->workerGroups_ != nullptr;};
        void deleteWorkerGroups() { this->workerGroups_ = nullptr;};
        inline const vector<RayConfig::WorkerGroups> & getWorkerGroups() const { DARABONBA_PTR_GET_CONST(workerGroups_, vector<RayConfig::WorkerGroups>) };
        inline vector<RayConfig::WorkerGroups> getWorkerGroups() { DARABONBA_PTR_GET(workerGroups_, vector<RayConfig::WorkerGroups>) };
        inline RayConfig& setWorkerGroups(const vector<RayConfig::WorkerGroups> & workerGroups) { DARABONBA_PTR_SET_VALUE(workerGroups_, workerGroups) };
        inline RayConfig& setWorkerGroups(vector<RayConfig::WorkerGroups> && workerGroups) { DARABONBA_PTR_SET_RVALUE(workerGroups_, workerGroups) };


      protected:
        shared_ptr<string> category_ {};
        shared_ptr<string> headDiskCapacity_ {};
        shared_ptr<string> headSpec_ {};
        shared_ptr<string> headSpecType_ {};
        shared_ptr<string> rayClusterAddress_ {};
        shared_ptr<string> rayDashboardAddress_ {};
        shared_ptr<string> rayGrafanaAddress_ {};
        shared_ptr<vector<RayConfig::WorkerGroups>> workerGroups_ {};
      };

      class EapConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EapConfig& obj) { 
          DARABONBA_PTR_TO_JSON(WebserverAddress, webserverAddress_);
          DARABONBA_PTR_TO_JSON(WebserverSpecName, webserverSpecName_);
        };
        friend void from_json(const Darabonba::Json& j, EapConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(WebserverAddress, webserverAddress_);
          DARABONBA_PTR_FROM_JSON(WebserverSpecName, webserverSpecName_);
        };
        EapConfig() = default ;
        EapConfig(const EapConfig &) = default ;
        EapConfig(EapConfig &&) = default ;
        EapConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EapConfig() = default ;
        EapConfig& operator=(const EapConfig &) = default ;
        EapConfig& operator=(EapConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->webserverAddress_ == nullptr
        && this->webserverSpecName_ == nullptr; };
        // webserverAddress Field Functions 
        bool hasWebserverAddress() const { return this->webserverAddress_ != nullptr;};
        void deleteWebserverAddress() { this->webserverAddress_ = nullptr;};
        inline string getWebserverAddress() const { DARABONBA_PTR_GET_DEFAULT(webserverAddress_, "") };
        inline EapConfig& setWebserverAddress(string webserverAddress) { DARABONBA_PTR_SET_VALUE(webserverAddress_, webserverAddress) };


        // webserverSpecName Field Functions 
        bool hasWebserverSpecName() const { return this->webserverSpecName_ != nullptr;};
        void deleteWebserverSpecName() { this->webserverSpecName_ = nullptr;};
        inline string getWebserverSpecName() const { DARABONBA_PTR_GET_DEFAULT(webserverSpecName_, "") };
        inline EapConfig& setWebserverSpecName(string webserverSpecName) { DARABONBA_PTR_SET_VALUE(webserverSpecName_, webserverSpecName) };


      protected:
        shared_ptr<string> webserverAddress_ {};
        shared_ptr<string> webserverSpecName_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->eapConfig_ == nullptr && this->ossBucketName_ == nullptr && this->platformName_ == nullptr && this->rayConfig_ == nullptr && this->state_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Platforms& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // eapConfig Field Functions 
      bool hasEapConfig() const { return this->eapConfig_ != nullptr;};
      void deleteEapConfig() { this->eapConfig_ = nullptr;};
      inline const Platforms::EapConfig & getEapConfig() const { DARABONBA_PTR_GET_CONST(eapConfig_, Platforms::EapConfig) };
      inline Platforms::EapConfig getEapConfig() { DARABONBA_PTR_GET(eapConfig_, Platforms::EapConfig) };
      inline Platforms& setEapConfig(const Platforms::EapConfig & eapConfig) { DARABONBA_PTR_SET_VALUE(eapConfig_, eapConfig) };
      inline Platforms& setEapConfig(Platforms::EapConfig && eapConfig) { DARABONBA_PTR_SET_RVALUE(eapConfig_, eapConfig) };


      // ossBucketName Field Functions 
      bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
      void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
      inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
      inline Platforms& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


      // platformName Field Functions 
      bool hasPlatformName() const { return this->platformName_ != nullptr;};
      void deletePlatformName() { this->platformName_ = nullptr;};
      inline string getPlatformName() const { DARABONBA_PTR_GET_DEFAULT(platformName_, "") };
      inline Platforms& setPlatformName(string platformName) { DARABONBA_PTR_SET_VALUE(platformName_, platformName) };


      // rayConfig Field Functions 
      bool hasRayConfig() const { return this->rayConfig_ != nullptr;};
      void deleteRayConfig() { this->rayConfig_ = nullptr;};
      inline const Platforms::RayConfig & getRayConfig() const { DARABONBA_PTR_GET_CONST(rayConfig_, Platforms::RayConfig) };
      inline Platforms::RayConfig getRayConfig() { DARABONBA_PTR_GET(rayConfig_, Platforms::RayConfig) };
      inline Platforms& setRayConfig(const Platforms::RayConfig & rayConfig) { DARABONBA_PTR_SET_VALUE(rayConfig_, rayConfig) };
      inline Platforms& setRayConfig(Platforms::RayConfig && rayConfig) { DARABONBA_PTR_SET_RVALUE(rayConfig_, rayConfig) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Platforms& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<Platforms::EapConfig> eapConfig_ {};
      shared_ptr<string> ossBucketName_ {};
      shared_ptr<string> platformName_ {};
      shared_ptr<Platforms::RayConfig> rayConfig_ {};
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->platforms_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeEmbodiedAIPlatformsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeEmbodiedAIPlatformsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEmbodiedAIPlatformsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEmbodiedAIPlatformsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // platforms Field Functions 
    bool hasPlatforms() const { return this->platforms_ != nullptr;};
    void deletePlatforms() { this->platforms_ = nullptr;};
    inline const vector<DescribeEmbodiedAIPlatformsResponseBody::Platforms> & getPlatforms() const { DARABONBA_PTR_GET_CONST(platforms_, vector<DescribeEmbodiedAIPlatformsResponseBody::Platforms>) };
    inline vector<DescribeEmbodiedAIPlatformsResponseBody::Platforms> getPlatforms() { DARABONBA_PTR_GET(platforms_, vector<DescribeEmbodiedAIPlatformsResponseBody::Platforms>) };
    inline DescribeEmbodiedAIPlatformsResponseBody& setPlatforms(const vector<DescribeEmbodiedAIPlatformsResponseBody::Platforms> & platforms) { DARABONBA_PTR_SET_VALUE(platforms_, platforms) };
    inline DescribeEmbodiedAIPlatformsResponseBody& setPlatforms(vector<DescribeEmbodiedAIPlatformsResponseBody::Platforms> && platforms) { DARABONBA_PTR_SET_RVALUE(platforms_, platforms) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEmbodiedAIPlatformsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeEmbodiedAIPlatformsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<vector<DescribeEmbodiedAIPlatformsResponseBody::Platforms>> platforms_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
