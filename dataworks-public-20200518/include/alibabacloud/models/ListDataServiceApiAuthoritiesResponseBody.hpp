// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPIAUTHORITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPIAUTHORITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServiceApiAuthoritiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApiAuthoritiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApiAuthoritiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataServiceApiAuthoritiesResponseBody() = default ;
    ListDataServiceApiAuthoritiesResponseBody(const ListDataServiceApiAuthoritiesResponseBody &) = default ;
    ListDataServiceApiAuthoritiesResponseBody(ListDataServiceApiAuthoritiesResponseBody &&) = default ;
    ListDataServiceApiAuthoritiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApiAuthoritiesResponseBody() = default ;
    ListDataServiceApiAuthoritiesResponseBody& operator=(const ListDataServiceApiAuthoritiesResponseBody &) = default ;
    ListDataServiceApiAuthoritiesResponseBody& operator=(ListDataServiceApiAuthoritiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApiAuthorizationList, apiAuthorizationList_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiAuthorizationList, apiAuthorizationList_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiAuthorizationList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiAuthorizationList& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(ApiPath, apiPath_);
          DARABONBA_PTR_TO_JSON(ApiStatus, apiStatus_);
          DARABONBA_PTR_TO_JSON(AuthorizationRecords, authorizationRecords_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        };
        friend void from_json(const Darabonba::Json& j, ApiAuthorizationList& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(ApiPath, apiPath_);
          DARABONBA_PTR_FROM_JSON(ApiStatus, apiStatus_);
          DARABONBA_PTR_FROM_JSON(AuthorizationRecords, authorizationRecords_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        };
        ApiAuthorizationList() = default ;
        ApiAuthorizationList(const ApiAuthorizationList &) = default ;
        ApiAuthorizationList(ApiAuthorizationList &&) = default ;
        ApiAuthorizationList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiAuthorizationList() = default ;
        ApiAuthorizationList& operator=(const ApiAuthorizationList &) = default ;
        ApiAuthorizationList& operator=(ApiAuthorizationList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AuthorizationRecords : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AuthorizationRecords& obj) { 
            DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
            DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          };
          friend void from_json(const Darabonba::Json& j, AuthorizationRecords& obj) { 
            DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
            DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          };
          AuthorizationRecords() = default ;
          AuthorizationRecords(const AuthorizationRecords &) = default ;
          AuthorizationRecords(AuthorizationRecords &&) = default ;
          AuthorizationRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AuthorizationRecords() = default ;
          AuthorizationRecords& operator=(const AuthorizationRecords &) = default ;
          AuthorizationRecords& operator=(AuthorizationRecords &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->creatorId_ == nullptr && this->endTime_ == nullptr && this->projectId_ == nullptr; };
          // createdTime Field Functions 
          bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
          void deleteCreatedTime() { this->createdTime_ = nullptr;};
          inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
          inline AuthorizationRecords& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


          // creatorId Field Functions 
          bool hasCreatorId() const { return this->creatorId_ != nullptr;};
          void deleteCreatorId() { this->creatorId_ = nullptr;};
          inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
          inline AuthorizationRecords& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline AuthorizationRecords& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // projectId Field Functions 
          bool hasProjectId() const { return this->projectId_ != nullptr;};
          void deleteProjectId() { this->projectId_ = nullptr;};
          inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
          inline AuthorizationRecords& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        protected:
          // The time when the access permissions on the API were granted to other users.
          shared_ptr<string> createdTime_ {};
          // The ID of the Alibaba Cloud account used by the API owner.
          shared_ptr<string> creatorId_ {};
          // The end time of the validity period of the authorization.
          shared_ptr<string> endTime_ {};
          // The ID of the workspace to which the access permissions on the API are granted.
          shared_ptr<int64_t> projectId_ {};
        };

        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->apiPath_ == nullptr && this->apiStatus_ == nullptr && this->authorizationRecords_ == nullptr && this->createdTime_ == nullptr
        && this->creatorId_ == nullptr && this->groupId_ == nullptr && this->modifiedTime_ == nullptr && this->projectId_ == nullptr && this->tenantId_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline int64_t getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
        inline ApiAuthorizationList& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline ApiAuthorizationList& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // apiPath Field Functions 
        bool hasApiPath() const { return this->apiPath_ != nullptr;};
        void deleteApiPath() { this->apiPath_ = nullptr;};
        inline string getApiPath() const { DARABONBA_PTR_GET_DEFAULT(apiPath_, "") };
        inline ApiAuthorizationList& setApiPath(string apiPath) { DARABONBA_PTR_SET_VALUE(apiPath_, apiPath) };


        // apiStatus Field Functions 
        bool hasApiStatus() const { return this->apiStatus_ != nullptr;};
        void deleteApiStatus() { this->apiStatus_ = nullptr;};
        inline int32_t getApiStatus() const { DARABONBA_PTR_GET_DEFAULT(apiStatus_, 0) };
        inline ApiAuthorizationList& setApiStatus(int32_t apiStatus) { DARABONBA_PTR_SET_VALUE(apiStatus_, apiStatus) };


        // authorizationRecords Field Functions 
        bool hasAuthorizationRecords() const { return this->authorizationRecords_ != nullptr;};
        void deleteAuthorizationRecords() { this->authorizationRecords_ = nullptr;};
        inline const vector<ApiAuthorizationList::AuthorizationRecords> & getAuthorizationRecords() const { DARABONBA_PTR_GET_CONST(authorizationRecords_, vector<ApiAuthorizationList::AuthorizationRecords>) };
        inline vector<ApiAuthorizationList::AuthorizationRecords> getAuthorizationRecords() { DARABONBA_PTR_GET(authorizationRecords_, vector<ApiAuthorizationList::AuthorizationRecords>) };
        inline ApiAuthorizationList& setAuthorizationRecords(const vector<ApiAuthorizationList::AuthorizationRecords> & authorizationRecords) { DARABONBA_PTR_SET_VALUE(authorizationRecords_, authorizationRecords) };
        inline ApiAuthorizationList& setAuthorizationRecords(vector<ApiAuthorizationList::AuthorizationRecords> && authorizationRecords) { DARABONBA_PTR_SET_RVALUE(authorizationRecords_, authorizationRecords) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline ApiAuthorizationList& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // creatorId Field Functions 
        bool hasCreatorId() const { return this->creatorId_ != nullptr;};
        void deleteCreatorId() { this->creatorId_ = nullptr;};
        inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
        inline ApiAuthorizationList& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline ApiAuthorizationList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline ApiAuthorizationList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline ApiAuthorizationList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
        inline ApiAuthorizationList& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      protected:
        // The API ID.
        shared_ptr<int64_t> apiId_ {};
        // The name of the API.
        shared_ptr<string> apiName_ {};
        // The path of the API.
        shared_ptr<string> apiPath_ {};
        // The status of the API. Valid values: 0 and 1. The value 0 indicates that the API is not published. The value 1 indicates that the API is published.
        shared_ptr<int32_t> apiStatus_ {};
        // The authorization records.
        shared_ptr<vector<ApiAuthorizationList::AuthorizationRecords>> authorizationRecords_ {};
        // The time when the API was created.
        shared_ptr<string> createdTime_ {};
        // The ID of the Alibaba Cloud account used by the API owner.
        shared_ptr<string> creatorId_ {};
        // The group ID.
        shared_ptr<string> groupId_ {};
        // The time when the API was last modified.
        shared_ptr<string> modifiedTime_ {};
        // The workspace ID.
        shared_ptr<int64_t> projectId_ {};
        // The tenant ID.
        shared_ptr<int64_t> tenantId_ {};
      };

      virtual bool empty() const override { return this->apiAuthorizationList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // apiAuthorizationList Field Functions 
      bool hasApiAuthorizationList() const { return this->apiAuthorizationList_ != nullptr;};
      void deleteApiAuthorizationList() { this->apiAuthorizationList_ = nullptr;};
      inline const vector<Data::ApiAuthorizationList> & getApiAuthorizationList() const { DARABONBA_PTR_GET_CONST(apiAuthorizationList_, vector<Data::ApiAuthorizationList>) };
      inline vector<Data::ApiAuthorizationList> getApiAuthorizationList() { DARABONBA_PTR_GET(apiAuthorizationList_, vector<Data::ApiAuthorizationList>) };
      inline Data& setApiAuthorizationList(const vector<Data::ApiAuthorizationList> & apiAuthorizationList) { DARABONBA_PTR_SET_VALUE(apiAuthorizationList_, apiAuthorizationList) };
      inline Data& setApiAuthorizationList(vector<Data::ApiAuthorizationList> && apiAuthorizationList) { DARABONBA_PTR_SET_RVALUE(apiAuthorizationList_, apiAuthorizationList) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The APIs on which other users are granted the access permissions.
      shared_ptr<vector<Data::ApiAuthorizationList>> apiAuthorizationList_ {};
      // The page number. The value of this parameter is the same as that of the PageNumber parameter in the request.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page. Valid values: 1 to 100. Default value: 10.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDataServiceApiAuthoritiesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListDataServiceApiAuthoritiesResponseBody::Data) };
    inline ListDataServiceApiAuthoritiesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListDataServiceApiAuthoritiesResponseBody::Data) };
    inline ListDataServiceApiAuthoritiesResponseBody& setData(const ListDataServiceApiAuthoritiesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataServiceApiAuthoritiesResponseBody& setData(ListDataServiceApiAuthoritiesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDataServiceApiAuthoritiesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDataServiceApiAuthoritiesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDataServiceApiAuthoritiesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataServiceApiAuthoritiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataServiceApiAuthoritiesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The APIs on which other users are granted the access permissions.
    shared_ptr<ListDataServiceApiAuthoritiesResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
