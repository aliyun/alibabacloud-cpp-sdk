// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTHORIZEDAPISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTHORIZEDAPISRESPONSEBODY_HPP_
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
  class DescribeAuthorizedApisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuthorizedApisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedApis, authorizedApis_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuthorizedApisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedApis, authorizedApis_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAuthorizedApisResponseBody() = default ;
    DescribeAuthorizedApisResponseBody(const DescribeAuthorizedApisResponseBody &) = default ;
    DescribeAuthorizedApisResponseBody(DescribeAuthorizedApisResponseBody &&) = default ;
    DescribeAuthorizedApisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuthorizedApisResponseBody() = default ;
    DescribeAuthorizedApisResponseBody& operator=(const DescribeAuthorizedApisResponseBody &) = default ;
    DescribeAuthorizedApisResponseBody& operator=(DescribeAuthorizedApisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthorizedApis : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthorizedApis& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizedApi, authorizedApi_);
      };
      friend void from_json(const Darabonba::Json& j, AuthorizedApis& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizedApi, authorizedApi_);
      };
      AuthorizedApis() = default ;
      AuthorizedApis(const AuthorizedApis &) = default ;
      AuthorizedApis(AuthorizedApis &&) = default ;
      AuthorizedApis(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthorizedApis() = default ;
      AuthorizedApis& operator=(const AuthorizedApis &) = default ;
      AuthorizedApis& operator=(AuthorizedApis &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AuthorizedApi : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthorizedApi& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(AuthVaildTime, authVaildTime_);
          DARABONBA_PTR_TO_JSON(AuthorizationSource, authorizationSource_);
          DARABONBA_PTR_TO_JSON(AuthorizedTime, authorizedTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(Operator, operator_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(StageName, stageName_);
        };
        friend void from_json(const Darabonba::Json& j, AuthorizedApi& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(AuthVaildTime, authVaildTime_);
          DARABONBA_PTR_FROM_JSON(AuthorizationSource, authorizationSource_);
          DARABONBA_PTR_FROM_JSON(AuthorizedTime, authorizedTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(Operator, operator_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(StageName, stageName_);
        };
        AuthorizedApi() = default ;
        AuthorizedApi(const AuthorizedApi &) = default ;
        AuthorizedApi(AuthorizedApi &&) = default ;
        AuthorizedApi(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthorizedApi() = default ;
        AuthorizedApi& operator=(const AuthorizedApi &) = default ;
        AuthorizedApi& operator=(AuthorizedApi &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->authVaildTime_ == nullptr && this->authorizationSource_ == nullptr && this->authorizedTime_ == nullptr && this->description_ == nullptr
        && this->groupId_ == nullptr && this->groupName_ == nullptr && this->operator_ == nullptr && this->regionId_ == nullptr && this->stageName_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
        inline AuthorizedApi& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline AuthorizedApi& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // authVaildTime Field Functions 
        bool hasAuthVaildTime() const { return this->authVaildTime_ != nullptr;};
        void deleteAuthVaildTime() { this->authVaildTime_ = nullptr;};
        inline string getAuthVaildTime() const { DARABONBA_PTR_GET_DEFAULT(authVaildTime_, "") };
        inline AuthorizedApi& setAuthVaildTime(string authVaildTime) { DARABONBA_PTR_SET_VALUE(authVaildTime_, authVaildTime) };


        // authorizationSource Field Functions 
        bool hasAuthorizationSource() const { return this->authorizationSource_ != nullptr;};
        void deleteAuthorizationSource() { this->authorizationSource_ = nullptr;};
        inline string getAuthorizationSource() const { DARABONBA_PTR_GET_DEFAULT(authorizationSource_, "") };
        inline AuthorizedApi& setAuthorizationSource(string authorizationSource) { DARABONBA_PTR_SET_VALUE(authorizationSource_, authorizationSource) };


        // authorizedTime Field Functions 
        bool hasAuthorizedTime() const { return this->authorizedTime_ != nullptr;};
        void deleteAuthorizedTime() { this->authorizedTime_ = nullptr;};
        inline string getAuthorizedTime() const { DARABONBA_PTR_GET_DEFAULT(authorizedTime_, "") };
        inline AuthorizedApi& setAuthorizedTime(string authorizedTime) { DARABONBA_PTR_SET_VALUE(authorizedTime_, authorizedTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AuthorizedApi& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline AuthorizedApi& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline AuthorizedApi& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline AuthorizedApi& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline AuthorizedApi& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // stageName Field Functions 
        bool hasStageName() const { return this->stageName_ != nullptr;};
        void deleteStageName() { this->stageName_ = nullptr;};
        inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
        inline AuthorizedApi& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


      protected:
        // The unique identifier of the API, which is automatically generated by the system.
        shared_ptr<string> apiId_ {};
        // The name of the API
        shared_ptr<string> apiName_ {};
        // The expiration time of the authorization in UTC.
        shared_ptr<string> authVaildTime_ {};
        // The authorization source. Valid values:
        // 
        // *   **CONSOLE**
        // *   **API**
        shared_ptr<string> authorizationSource_ {};
        // The authorization time in UTC.
        shared_ptr<string> authorizedTime_ {};
        // Authorization description
        shared_ptr<string> description_ {};
        // The ID of the API group. This ID is generated by the system and globally unique.
        shared_ptr<string> groupId_ {};
        // The name of the API group.
        shared_ptr<string> groupName_ {};
        // The authorizer. Valid values:
        // 
        // *   **PROVIDER:** API owner
        // *   **CONSUMER:** API caller
        shared_ptr<string> operator_ {};
        // The region to which the API belongs.
        shared_ptr<string> regionId_ {};
        // The name of the runtime environment. Valid values:
        // 
        // *   **RELEASE**
        // *   **TEST**: the test environment
        shared_ptr<string> stageName_ {};
      };

      virtual bool empty() const override { return this->authorizedApi_ == nullptr; };
      // authorizedApi Field Functions 
      bool hasAuthorizedApi() const { return this->authorizedApi_ != nullptr;};
      void deleteAuthorizedApi() { this->authorizedApi_ = nullptr;};
      inline const vector<AuthorizedApis::AuthorizedApi> & getAuthorizedApi() const { DARABONBA_PTR_GET_CONST(authorizedApi_, vector<AuthorizedApis::AuthorizedApi>) };
      inline vector<AuthorizedApis::AuthorizedApi> getAuthorizedApi() { DARABONBA_PTR_GET(authorizedApi_, vector<AuthorizedApis::AuthorizedApi>) };
      inline AuthorizedApis& setAuthorizedApi(const vector<AuthorizedApis::AuthorizedApi> & authorizedApi) { DARABONBA_PTR_SET_VALUE(authorizedApi_, authorizedApi) };
      inline AuthorizedApis& setAuthorizedApi(vector<AuthorizedApis::AuthorizedApi> && authorizedApi) { DARABONBA_PTR_SET_RVALUE(authorizedApi_, authorizedApi) };


    protected:
      shared_ptr<vector<AuthorizedApis::AuthorizedApi>> authorizedApi_ {};
    };

    virtual bool empty() const override { return this->authorizedApis_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // authorizedApis Field Functions 
    bool hasAuthorizedApis() const { return this->authorizedApis_ != nullptr;};
    void deleteAuthorizedApis() { this->authorizedApis_ = nullptr;};
    inline const DescribeAuthorizedApisResponseBody::AuthorizedApis & getAuthorizedApis() const { DARABONBA_PTR_GET_CONST(authorizedApis_, DescribeAuthorizedApisResponseBody::AuthorizedApis) };
    inline DescribeAuthorizedApisResponseBody::AuthorizedApis getAuthorizedApis() { DARABONBA_PTR_GET(authorizedApis_, DescribeAuthorizedApisResponseBody::AuthorizedApis) };
    inline DescribeAuthorizedApisResponseBody& setAuthorizedApis(const DescribeAuthorizedApisResponseBody::AuthorizedApis & authorizedApis) { DARABONBA_PTR_SET_VALUE(authorizedApis_, authorizedApis) };
    inline DescribeAuthorizedApisResponseBody& setAuthorizedApis(DescribeAuthorizedApisResponseBody::AuthorizedApis && authorizedApis) { DARABONBA_PTR_SET_RVALUE(authorizedApis_, authorizedApis) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAuthorizedApisResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAuthorizedApisResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAuthorizedApisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAuthorizedApisResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The authorized API set.
    shared_ptr<DescribeAuthorizedApisResponseBody::AuthorizedApis> authorizedApis_ {};
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
