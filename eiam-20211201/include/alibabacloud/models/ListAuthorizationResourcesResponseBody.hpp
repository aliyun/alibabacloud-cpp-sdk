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
        DARABONBA_PTR_TO_JSON(Condition, condition_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, AuthorizationResources& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizationResourceEntityId, authorizationResourceEntityId_);
        DARABONBA_PTR_FROM_JSON(AuthorizationResourceEntityType, authorizationResourceEntityType_);
        DARABONBA_PTR_FROM_JSON(AuthorizationResourceId, authorizationResourceId_);
        DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
        DARABONBA_PTR_FROM_JSON(CloudAccountId, cloudAccountId_);
        DARABONBA_PTR_FROM_JSON(Condition, condition_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
      class Condition : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Condition& obj) { 
          DARABONBA_PTR_TO_JSON(CredentialCondition, credentialCondition_);
        };
        friend void from_json(const Darabonba::Json& j, Condition& obj) { 
          DARABONBA_PTR_FROM_JSON(CredentialCondition, credentialCondition_);
        };
        Condition() = default ;
        Condition(const Condition &) = default ;
        Condition(Condition &&) = default ;
        Condition(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Condition() = default ;
        Condition& operator=(const Condition &) = default ;
        Condition& operator=(Condition &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CredentialCondition : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CredentialCondition& obj) { 
            DARABONBA_PTR_TO_JSON(AllowSameNameIdentity, allowSameNameIdentity_);
          };
          friend void from_json(const Darabonba::Json& j, CredentialCondition& obj) { 
            DARABONBA_PTR_FROM_JSON(AllowSameNameIdentity, allowSameNameIdentity_);
          };
          CredentialCondition() = default ;
          CredentialCondition(const CredentialCondition &) = default ;
          CredentialCondition(CredentialCondition &&) = default ;
          CredentialCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CredentialCondition() = default ;
          CredentialCondition& operator=(const CredentialCondition &) = default ;
          CredentialCondition& operator=(CredentialCondition &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->allowSameNameIdentity_ == nullptr; };
          // allowSameNameIdentity Field Functions 
          bool hasAllowSameNameIdentity() const { return this->allowSameNameIdentity_ != nullptr;};
          void deleteAllowSameNameIdentity() { this->allowSameNameIdentity_ = nullptr;};
          inline bool getAllowSameNameIdentity() const { DARABONBA_PTR_GET_DEFAULT(allowSameNameIdentity_, false) };
          inline CredentialCondition& setAllowSameNameIdentity(bool allowSameNameIdentity) { DARABONBA_PTR_SET_VALUE(allowSameNameIdentity_, allowSameNameIdentity) };


        protected:
          // Specifies whether same-name identity accounts are supported.
          shared_ptr<bool> allowSameNameIdentity_ {};
        };

        virtual bool empty() const override { return this->credentialCondition_ == nullptr; };
        // credentialCondition Field Functions 
        bool hasCredentialCondition() const { return this->credentialCondition_ != nullptr;};
        void deleteCredentialCondition() { this->credentialCondition_ = nullptr;};
        inline const Condition::CredentialCondition & getCredentialCondition() const { DARABONBA_PTR_GET_CONST(credentialCondition_, Condition::CredentialCondition) };
        inline Condition::CredentialCondition getCredentialCondition() { DARABONBA_PTR_GET(credentialCondition_, Condition::CredentialCondition) };
        inline Condition& setCredentialCondition(const Condition::CredentialCondition & credentialCondition) { DARABONBA_PTR_SET_VALUE(credentialCondition_, credentialCondition) };
        inline Condition& setCredentialCondition(Condition::CredentialCondition && credentialCondition) { DARABONBA_PTR_SET_RVALUE(credentialCondition_, credentialCondition) };


      protected:
        // The effective condition when used as a credential.
        shared_ptr<Condition::CredentialCondition> credentialCondition_ {};
      };

      virtual bool empty() const override { return this->authorizationResourceEntityId_ == nullptr
        && this->authorizationResourceEntityType_ == nullptr && this->authorizationResourceId_ == nullptr && this->authorizationRuleId_ == nullptr && this->cloudAccountId_ == nullptr && this->condition_ == nullptr
        && this->createTime_ == nullptr && this->instanceId_ == nullptr && this->updateTime_ == nullptr; };
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


      // condition Field Functions 
      bool hasCondition() const { return this->condition_ != nullptr;};
      void deleteCondition() { this->condition_ = nullptr;};
      inline const AuthorizationResources::Condition & getCondition() const { DARABONBA_PTR_GET_CONST(condition_, AuthorizationResources::Condition) };
      inline AuthorizationResources::Condition getCondition() { DARABONBA_PTR_GET(condition_, AuthorizationResources::Condition) };
      inline AuthorizationResources& setCondition(const AuthorizationResources::Condition & condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };
      inline AuthorizationResources& setCondition(AuthorizationResources::Condition && condition) { DARABONBA_PTR_SET_RVALUE(condition_, condition) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline AuthorizationResources& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AuthorizationResources& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline AuthorizationResources& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The resource entity ID associated with the authorization resource.
      shared_ptr<string> authorizationResourceEntityId_ {};
      // The resource entity type associated with the authorization resource. Valid values:
      // - cloud_account_role: cloud role
      shared_ptr<string> authorizationResourceEntityType_ {};
      // The authorization resource ID.
      shared_ptr<string> authorizationResourceId_ {};
      // The authorization rule ID.
      shared_ptr<string> authorizationRuleId_ {};
      // The cloud account ID to which the resource entity associated with the authorization resource belongs.
      shared_ptr<string> cloudAccountId_ {};
      // The effective condition.
      shared_ptr<AuthorizationResources::Condition> condition_ {};
      // The creation time.
      shared_ptr<int64_t> createTime_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The update time.
      shared_ptr<int64_t> updateTime_ {};
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
    // The list of authorization resources.
    shared_ptr<vector<ListAuthorizationResourcesResponseBody::AuthorizationResources>> authorizationResources_ {};
    // The number of rows per page in a paging query.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token returned by this call, used for the next page query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries in the list.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
