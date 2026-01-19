// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINAPISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINAPISRESPONSEBODY_HPP_
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
  class DescribePluginApisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginApisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiSummarys, apiSummarys_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginApisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiSummarys, apiSummarys_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePluginApisResponseBody() = default ;
    DescribePluginApisResponseBody(const DescribePluginApisResponseBody &) = default ;
    DescribePluginApisResponseBody(DescribePluginApisResponseBody &&) = default ;
    DescribePluginApisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginApisResponseBody() = default ;
    DescribePluginApisResponseBody& operator=(const DescribePluginApisResponseBody &) = default ;
    DescribePluginApisResponseBody& operator=(DescribePluginApisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiSummarys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiSummarys& obj) { 
        DARABONBA_PTR_TO_JSON(ApiPluginSummary, apiPluginSummary_);
      };
      friend void from_json(const Darabonba::Json& j, ApiSummarys& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiPluginSummary, apiPluginSummary_);
      };
      ApiSummarys() = default ;
      ApiSummarys(const ApiSummarys &) = default ;
      ApiSummarys(ApiSummarys &&) = default ;
      ApiSummarys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiSummarys() = default ;
      ApiSummarys& operator=(const ApiSummarys &) = default ;
      ApiSummarys& operator=(ApiSummarys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiPluginSummary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiPluginSummary& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(Method, method_);
          DARABONBA_PTR_TO_JSON(Path, path_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(StageAlias, stageAlias_);
          DARABONBA_PTR_TO_JSON(StageName, stageName_);
        };
        friend void from_json(const Darabonba::Json& j, ApiPluginSummary& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(Method, method_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(StageAlias, stageAlias_);
          DARABONBA_PTR_FROM_JSON(StageName, stageName_);
        };
        ApiPluginSummary() = default ;
        ApiPluginSummary(const ApiPluginSummary &) = default ;
        ApiPluginSummary(ApiPluginSummary &&) = default ;
        ApiPluginSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiPluginSummary() = default ;
        ApiPluginSummary& operator=(const ApiPluginSummary &) = default ;
        ApiPluginSummary& operator=(ApiPluginSummary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->description_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->method_ == nullptr
        && this->path_ == nullptr && this->regionId_ == nullptr && this->stageAlias_ == nullptr && this->stageName_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
        inline ApiPluginSummary& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline ApiPluginSummary& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ApiPluginSummary& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline ApiPluginSummary& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline ApiPluginSummary& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline ApiPluginSummary& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline ApiPluginSummary& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ApiPluginSummary& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // stageAlias Field Functions 
        bool hasStageAlias() const { return this->stageAlias_ != nullptr;};
        void deleteStageAlias() { this->stageAlias_ = nullptr;};
        inline string getStageAlias() const { DARABONBA_PTR_GET_DEFAULT(stageAlias_, "") };
        inline ApiPluginSummary& setStageAlias(string stageAlias) { DARABONBA_PTR_SET_VALUE(stageAlias_, stageAlias) };


        // stageName Field Functions 
        bool hasStageName() const { return this->stageName_ != nullptr;};
        void deleteStageName() { this->stageName_ = nullptr;};
        inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
        inline ApiPluginSummary& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


      protected:
        // The API ID.
        shared_ptr<string> apiId_ {};
        // The API name.
        shared_ptr<string> apiName_ {};
        // The API description.
        shared_ptr<string> description_ {};
        // The ID of the API group.
        shared_ptr<string> groupId_ {};
        // The API group to which the API belongs.
        shared_ptr<string> groupName_ {};
        // The HTTP method of the API.
        shared_ptr<string> method_ {};
        // The request path of the API.
        shared_ptr<string> path_ {};
        // The ID of the region in which the API resides.
        shared_ptr<string> regionId_ {};
        // The environment alias.
        shared_ptr<string> stageAlias_ {};
        // The environment to which the API is published. Valid values:
        // 
        // *   **RELEASE**: the production environment
        // *   **PRE**: the pre-release environment
        // *   **TEST**: the test environment
        shared_ptr<string> stageName_ {};
      };

      virtual bool empty() const override { return this->apiPluginSummary_ == nullptr; };
      // apiPluginSummary Field Functions 
      bool hasApiPluginSummary() const { return this->apiPluginSummary_ != nullptr;};
      void deleteApiPluginSummary() { this->apiPluginSummary_ = nullptr;};
      inline const vector<ApiSummarys::ApiPluginSummary> & getApiPluginSummary() const { DARABONBA_PTR_GET_CONST(apiPluginSummary_, vector<ApiSummarys::ApiPluginSummary>) };
      inline vector<ApiSummarys::ApiPluginSummary> getApiPluginSummary() { DARABONBA_PTR_GET(apiPluginSummary_, vector<ApiSummarys::ApiPluginSummary>) };
      inline ApiSummarys& setApiPluginSummary(const vector<ApiSummarys::ApiPluginSummary> & apiPluginSummary) { DARABONBA_PTR_SET_VALUE(apiPluginSummary_, apiPluginSummary) };
      inline ApiSummarys& setApiPluginSummary(vector<ApiSummarys::ApiPluginSummary> && apiPluginSummary) { DARABONBA_PTR_SET_RVALUE(apiPluginSummary_, apiPluginSummary) };


    protected:
      shared_ptr<vector<ApiSummarys::ApiPluginSummary>> apiPluginSummary_ {};
    };

    virtual bool empty() const override { return this->apiSummarys_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // apiSummarys Field Functions 
    bool hasApiSummarys() const { return this->apiSummarys_ != nullptr;};
    void deleteApiSummarys() { this->apiSummarys_ = nullptr;};
    inline const DescribePluginApisResponseBody::ApiSummarys & getApiSummarys() const { DARABONBA_PTR_GET_CONST(apiSummarys_, DescribePluginApisResponseBody::ApiSummarys) };
    inline DescribePluginApisResponseBody::ApiSummarys getApiSummarys() { DARABONBA_PTR_GET(apiSummarys_, DescribePluginApisResponseBody::ApiSummarys) };
    inline DescribePluginApisResponseBody& setApiSummarys(const DescribePluginApisResponseBody::ApiSummarys & apiSummarys) { DARABONBA_PTR_SET_VALUE(apiSummarys_, apiSummarys) };
    inline DescribePluginApisResponseBody& setApiSummarys(DescribePluginApisResponseBody::ApiSummarys && apiSummarys) { DARABONBA_PTR_SET_RVALUE(apiSummarys_, apiSummarys) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePluginApisResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePluginApisResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePluginApisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribePluginApisResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about APIs.
    shared_ptr<DescribePluginApisResponseBody::ApiSummarys> apiSummarys_ {};
    // The page number of the page to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
