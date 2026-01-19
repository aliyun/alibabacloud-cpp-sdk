// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISBYBACKENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISBYBACKENDRESPONSEBODY_HPP_
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
  class DescribeApisByBackendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisByBackendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiInfoList, apiInfoList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisByBackendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiInfoList, apiInfoList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApisByBackendResponseBody() = default ;
    DescribeApisByBackendResponseBody(const DescribeApisByBackendResponseBody &) = default ;
    DescribeApisByBackendResponseBody(DescribeApisByBackendResponseBody &&) = default ;
    DescribeApisByBackendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisByBackendResponseBody() = default ;
    DescribeApisByBackendResponseBody& operator=(const DescribeApisByBackendResponseBody &) = default ;
    DescribeApisByBackendResponseBody& operator=(DescribeApisByBackendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(ApiInfo, apiInfo_);
      };
      friend void from_json(const Darabonba::Json& j, ApiInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiInfo, apiInfo_);
      };
      ApiInfoList() = default ;
      ApiInfoList(const ApiInfoList &) = default ;
      ApiInfoList(ApiInfoList &&) = default ;
      ApiInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiInfoList() = default ;
      ApiInfoList& operator=(const ApiInfoList &) = default ;
      ApiInfoList& operator=(ApiInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(Method, method_);
          DARABONBA_PTR_TO_JSON(Path, path_);
        };
        friend void from_json(const Darabonba::Json& j, ApiInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(Method, method_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
        };
        ApiInfo() = default ;
        ApiInfo(const ApiInfo &) = default ;
        ApiInfo(ApiInfo &&) = default ;
        ApiInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiInfo() = default ;
        ApiInfo& operator=(const ApiInfo &) = default ;
        ApiInfo& operator=(ApiInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->description_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->method_ == nullptr
        && this->path_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
        inline ApiInfo& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline ApiInfo& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ApiInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline ApiInfo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline ApiInfo& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline ApiInfo& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline ApiInfo& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      protected:
        // The ID of the API.
        shared_ptr<string> apiId_ {};
        // The name of the API.
        shared_ptr<string> apiName_ {};
        // The description of the API.
        shared_ptr<string> description_ {};
        // The ID of the API group.
        shared_ptr<string> groupId_ {};
        // The name of the API group.
        shared_ptr<string> groupName_ {};
        // The request method of the API.
        shared_ptr<string> method_ {};
        // The request path of the API.
        shared_ptr<string> path_ {};
      };

      virtual bool empty() const override { return this->apiInfo_ == nullptr; };
      // apiInfo Field Functions 
      bool hasApiInfo() const { return this->apiInfo_ != nullptr;};
      void deleteApiInfo() { this->apiInfo_ = nullptr;};
      inline const vector<ApiInfoList::ApiInfo> & getApiInfo() const { DARABONBA_PTR_GET_CONST(apiInfo_, vector<ApiInfoList::ApiInfo>) };
      inline vector<ApiInfoList::ApiInfo> getApiInfo() { DARABONBA_PTR_GET(apiInfo_, vector<ApiInfoList::ApiInfo>) };
      inline ApiInfoList& setApiInfo(const vector<ApiInfoList::ApiInfo> & apiInfo) { DARABONBA_PTR_SET_VALUE(apiInfo_, apiInfo) };
      inline ApiInfoList& setApiInfo(vector<ApiInfoList::ApiInfo> && apiInfo) { DARABONBA_PTR_SET_RVALUE(apiInfo_, apiInfo) };


    protected:
      shared_ptr<vector<ApiInfoList::ApiInfo>> apiInfo_ {};
    };

    virtual bool empty() const override { return this->apiInfoList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // apiInfoList Field Functions 
    bool hasApiInfoList() const { return this->apiInfoList_ != nullptr;};
    void deleteApiInfoList() { this->apiInfoList_ = nullptr;};
    inline const DescribeApisByBackendResponseBody::ApiInfoList & getApiInfoList() const { DARABONBA_PTR_GET_CONST(apiInfoList_, DescribeApisByBackendResponseBody::ApiInfoList) };
    inline DescribeApisByBackendResponseBody::ApiInfoList getApiInfoList() { DARABONBA_PTR_GET(apiInfoList_, DescribeApisByBackendResponseBody::ApiInfoList) };
    inline DescribeApisByBackendResponseBody& setApiInfoList(const DescribeApisByBackendResponseBody::ApiInfoList & apiInfoList) { DARABONBA_PTR_SET_VALUE(apiInfoList_, apiInfoList) };
    inline DescribeApisByBackendResponseBody& setApiInfoList(DescribeApisByBackendResponseBody::ApiInfoList && apiInfoList) { DARABONBA_PTR_SET_RVALUE(apiInfoList_, apiInfoList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApisByBackendResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApisByBackendResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisByBackendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApisByBackendResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the returned API list.
    shared_ptr<DescribeApisByBackendResponseBody::ApiInfoList> apiInfoList_ {};
    // The number of the current page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
