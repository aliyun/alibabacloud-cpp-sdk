// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiHistoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiHistoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiHisItems, apiHisItems_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiHistoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiHisItems, apiHisItems_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApiHistoriesResponseBody() = default ;
    DescribeApiHistoriesResponseBody(const DescribeApiHistoriesResponseBody &) = default ;
    DescribeApiHistoriesResponseBody(DescribeApiHistoriesResponseBody &&) = default ;
    DescribeApiHistoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiHistoriesResponseBody() = default ;
    DescribeApiHistoriesResponseBody& operator=(const DescribeApiHistoriesResponseBody &) = default ;
    DescribeApiHistoriesResponseBody& operator=(DescribeApiHistoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiHisItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiHisItems& obj) { 
        DARABONBA_PTR_TO_JSON(ApiHisItem, apiHisItem_);
      };
      friend void from_json(const Darabonba::Json& j, ApiHisItems& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiHisItem, apiHisItem_);
      };
      ApiHisItems() = default ;
      ApiHisItems(const ApiHisItems &) = default ;
      ApiHisItems(ApiHisItems &&) = default ;
      ApiHisItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiHisItems() = default ;
      ApiHisItems& operator=(const ApiHisItems &) = default ;
      ApiHisItems& operator=(ApiHisItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiHisItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiHisItem& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(DeployedTime, deployedTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(HistoryVersion, historyVersion_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(StageName, stageName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ApiHisItem& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(DeployedTime, deployedTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(HistoryVersion, historyVersion_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(StageName, stageName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ApiHisItem() = default ;
        ApiHisItem(const ApiHisItem &) = default ;
        ApiHisItem(ApiHisItem &&) = default ;
        ApiHisItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiHisItem() = default ;
        ApiHisItem& operator=(const ApiHisItem &) = default ;
        ApiHisItem& operator=(ApiHisItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->deployedTime_ == nullptr && this->description_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr
        && this->historyVersion_ == nullptr && this->regionId_ == nullptr && this->stageName_ == nullptr && this->status_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
        inline ApiHisItem& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline ApiHisItem& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // deployedTime Field Functions 
        bool hasDeployedTime() const { return this->deployedTime_ != nullptr;};
        void deleteDeployedTime() { this->deployedTime_ = nullptr;};
        inline string getDeployedTime() const { DARABONBA_PTR_GET_DEFAULT(deployedTime_, "") };
        inline ApiHisItem& setDeployedTime(string deployedTime) { DARABONBA_PTR_SET_VALUE(deployedTime_, deployedTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ApiHisItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline ApiHisItem& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline ApiHisItem& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // historyVersion Field Functions 
        bool hasHistoryVersion() const { return this->historyVersion_ != nullptr;};
        void deleteHistoryVersion() { this->historyVersion_ = nullptr;};
        inline string getHistoryVersion() const { DARABONBA_PTR_GET_DEFAULT(historyVersion_, "") };
        inline ApiHisItem& setHistoryVersion(string historyVersion) { DARABONBA_PTR_SET_VALUE(historyVersion_, historyVersion) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ApiHisItem& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // stageName Field Functions 
        bool hasStageName() const { return this->stageName_ != nullptr;};
        void deleteStageName() { this->stageName_ = nullptr;};
        inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
        inline ApiHisItem& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ApiHisItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The ID of the API.
        shared_ptr<string> apiId_ {};
        // The name of the API.
        shared_ptr<string> apiName_ {};
        // The publishing time (UTC) of the API.
        shared_ptr<string> deployedTime_ {};
        // The description of the API.
        shared_ptr<string> description_ {};
        // The ID of the API group.
        shared_ptr<string> groupId_ {};
        // The name of the API group.
        shared_ptr<string> groupName_ {};
        // The historical version of the API.
        shared_ptr<string> historyVersion_ {};
        // The region in which the API is located.
        shared_ptr<string> regionId_ {};
        // The name of the runtime environment. Valid values:
        // 
        // *   **RELEASE**
        // *   **TEST**
        shared_ptr<string> stageName_ {};
        // Indicates whether an API version is effective. Valid values: **ONLINE** and **OFFLINE**.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->apiHisItem_ == nullptr; };
      // apiHisItem Field Functions 
      bool hasApiHisItem() const { return this->apiHisItem_ != nullptr;};
      void deleteApiHisItem() { this->apiHisItem_ = nullptr;};
      inline const vector<ApiHisItems::ApiHisItem> & getApiHisItem() const { DARABONBA_PTR_GET_CONST(apiHisItem_, vector<ApiHisItems::ApiHisItem>) };
      inline vector<ApiHisItems::ApiHisItem> getApiHisItem() { DARABONBA_PTR_GET(apiHisItem_, vector<ApiHisItems::ApiHisItem>) };
      inline ApiHisItems& setApiHisItem(const vector<ApiHisItems::ApiHisItem> & apiHisItem) { DARABONBA_PTR_SET_VALUE(apiHisItem_, apiHisItem) };
      inline ApiHisItems& setApiHisItem(vector<ApiHisItems::ApiHisItem> && apiHisItem) { DARABONBA_PTR_SET_RVALUE(apiHisItem_, apiHisItem) };


    protected:
      shared_ptr<vector<ApiHisItems::ApiHisItem>> apiHisItem_ {};
    };

    virtual bool empty() const override { return this->apiHisItems_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // apiHisItems Field Functions 
    bool hasApiHisItems() const { return this->apiHisItems_ != nullptr;};
    void deleteApiHisItems() { this->apiHisItems_ = nullptr;};
    inline const DescribeApiHistoriesResponseBody::ApiHisItems & getApiHisItems() const { DARABONBA_PTR_GET_CONST(apiHisItems_, DescribeApiHistoriesResponseBody::ApiHisItems) };
    inline DescribeApiHistoriesResponseBody::ApiHisItems getApiHisItems() { DARABONBA_PTR_GET(apiHisItems_, DescribeApiHistoriesResponseBody::ApiHisItems) };
    inline DescribeApiHistoriesResponseBody& setApiHisItems(const DescribeApiHistoriesResponseBody::ApiHisItems & apiHisItems) { DARABONBA_PTR_SET_VALUE(apiHisItems_, apiHisItems) };
    inline DescribeApiHistoriesResponseBody& setApiHisItems(DescribeApiHistoriesResponseBody::ApiHisItems && apiHisItems) { DARABONBA_PTR_SET_RVALUE(apiHisItems_, apiHisItems) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApiHistoriesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApiHistoriesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiHistoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApiHistoriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned API information. It is an array consisting of ApiHisItem data.
    shared_ptr<DescribeApiHistoriesResponseBody::ApiHisItems> apiHisItems_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
