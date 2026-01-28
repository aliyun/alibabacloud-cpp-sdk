// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZATIONRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZATIONRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListAuthorizationResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizationResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationResources, authorizationResources_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizationResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationResources, authorizationResources_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAuthorizationResourcesResponseBody() = default ;
    ListAuthorizationResourcesResponseBody(const ListAuthorizationResourcesResponseBody &) = default ;
    ListAuthorizationResourcesResponseBody(ListAuthorizationResourcesResponseBody &&) = default ;
    ListAuthorizationResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizationResourcesResponseBody() = default ;
    ListAuthorizationResourcesResponseBody& operator=(const ListAuthorizationResourcesResponseBody &) = default ;
    ListAuthorizationResourcesResponseBody& operator=(ListAuthorizationResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthorizationResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthorizationResources& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizationResourceEntityId, authorizationResourceEntityId_);
        DARABONBA_PTR_TO_JSON(AuthorizationResourceEntityType, authorizationResourceEntityType_);
        DARABONBA_PTR_TO_JSON(AuthorizationResourceId, authorizationResourceId_);
        DARABONBA_PTR_TO_JSON(AuthorizationRuleId, authorizationRuleId_);
        DARABONBA_PTR_TO_JSON(CloudAccountId, cloudAccountId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, AuthorizationResources& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizationResourceEntityId, authorizationResourceEntityId_);
        DARABONBA_PTR_FROM_JSON(AuthorizationResourceEntityType, authorizationResourceEntityType_);
        DARABONBA_PTR_FROM_JSON(AuthorizationResourceId, authorizationResourceId_);
        DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
        DARABONBA_PTR_FROM_JSON(CloudAccountId, cloudAccountId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      AuthorizationResources() = default ;
      AuthorizationResources(const AuthorizationResources &) = default ;
      AuthorizationResources(AuthorizationResources &&) = default ;
      AuthorizationResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthorizationResources() = default ;
      AuthorizationResources& operator=(const AuthorizationResources &) = default ;
      AuthorizationResources& operator=(AuthorizationResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authorizationResourceEntityId_ == nullptr
        && this->authorizationResourceEntityType_ == nullptr && this->authorizationResourceId_ == nullptr && this->authorizationRuleId_ == nullptr && this->cloudAccountId_ == nullptr && this->instanceId_ == nullptr; };
      // authorizationResourceEntityId Field Functions 
      bool hasAuthorizationResourceEntityId() const { return this->authorizationResourceEntityId_ != nullptr;};
      void deleteAuthorizationResourceEntityId() { this->authorizationResourceEntityId_ = nullptr;};
      inline string getAuthorizationResourceEntityId() const { DARABONBA_PTR_GET_DEFAULT(authorizationResourceEntityId_, "") };
      inline AuthorizationResources& setAuthorizationResourceEntityId(string authorizationResourceEntityId) { DARABONBA_PTR_SET_VALUE(authorizationResourceEntityId_, authorizationResourceEntityId) };


      // authorizationResourceEntityType Field Functions 
      bool hasAuthorizationResourceEntityType() const { return this->authorizationResourceEntityType_ != nullptr;};
      void deleteAuthorizationResourceEntityType() { this->authorizationResourceEntityType_ = nullptr;};
      inline string getAuthorizationResourceEntityType() const { DARABONBA_PTR_GET_DEFAULT(authorizationResourceEntityType_, "") };
      inline AuthorizationResources& setAuthorizationResourceEntityType(string authorizationResourceEntityType) { DARABONBA_PTR_SET_VALUE(authorizationResourceEntityType_, authorizationResourceEntityType) };


      // authorizationResourceId Field Functions 
      bool hasAuthorizationResourceId() const { return this->authorizationResourceId_ != nullptr;};
      void deleteAuthorizationResourceId() { this->authorizationResourceId_ = nullptr;};
      inline string getAuthorizationResourceId() const { DARABONBA_PTR_GET_DEFAULT(authorizationResourceId_, "") };
      inline AuthorizationResources& setAuthorizationResourceId(string authorizationResourceId) { DARABONBA_PTR_SET_VALUE(authorizationResourceId_, authorizationResourceId) };


      // authorizationRuleId Field Functions 
      bool hasAuthorizationRuleId() const { return this->authorizationRuleId_ != nullptr;};
      void deleteAuthorizationRuleId() { this->authorizationRuleId_ = nullptr;};
      inline string getAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleId_, "") };
      inline AuthorizationResources& setAuthorizationRuleId(string authorizationRuleId) { DARABONBA_PTR_SET_VALUE(authorizationRuleId_, authorizationRuleId) };


      // cloudAccountId Field Functions 
      bool hasCloudAccountId() const { return this->cloudAccountId_ != nullptr;};
      void deleteCloudAccountId() { this->cloudAccountId_ = nullptr;};
      inline string getCloudAccountId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountId_, "") };
      inline AuthorizationResources& setCloudAccountId(string cloudAccountId) { DARABONBA_PTR_SET_VALUE(cloudAccountId_, cloudAccountId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AuthorizationResources& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // 资源实体标识
      shared_ptr<string> authorizationResourceEntityId_ {};
      // 资源实体类型，枚举类型：asset（资产）、credential（凭据）、cloud_identity_role（云账号角色）
      shared_ptr<string> authorizationResourceEntityType_ {};
      // 授权资源标识
      shared_ptr<string> authorizationResourceId_ {};
      // 授权规则标识
      shared_ptr<string> authorizationRuleId_ {};
      // 云账号ID。
      shared_ptr<string> cloudAccountId_ {};
      // 实例ID
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->authorizationResources_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // authorizationResources Field Functions 
    bool hasAuthorizationResources() const { return this->authorizationResources_ != nullptr;};
    void deleteAuthorizationResources() { this->authorizationResources_ = nullptr;};
    inline const vector<ListAuthorizationResourcesResponseBody::AuthorizationResources> & getAuthorizationResources() const { DARABONBA_PTR_GET_CONST(authorizationResources_, vector<ListAuthorizationResourcesResponseBody::AuthorizationResources>) };
    inline vector<ListAuthorizationResourcesResponseBody::AuthorizationResources> getAuthorizationResources() { DARABONBA_PTR_GET(authorizationResources_, vector<ListAuthorizationResourcesResponseBody::AuthorizationResources>) };
    inline ListAuthorizationResourcesResponseBody& setAuthorizationResources(const vector<ListAuthorizationResourcesResponseBody::AuthorizationResources> & authorizationResources) { DARABONBA_PTR_SET_VALUE(authorizationResources_, authorizationResources) };
    inline ListAuthorizationResourcesResponseBody& setAuthorizationResources(vector<ListAuthorizationResourcesResponseBody::AuthorizationResources> && authorizationResources) { DARABONBA_PTR_SET_RVALUE(authorizationResources_, authorizationResources) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAuthorizationResourcesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAuthorizationResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorizationResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAuthorizationResourcesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListAuthorizationResourcesResponseBody::AuthorizationResources>> authorizationResources_ {};
    // 分页查询时每页行数。
    shared_ptr<int32_t> maxResults_ {};
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
