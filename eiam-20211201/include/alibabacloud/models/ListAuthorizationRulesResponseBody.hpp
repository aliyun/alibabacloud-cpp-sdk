// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZATIONRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZATIONRULESRESPONSEBODY_HPP_
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
  class ListAuthorizationRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizationRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationRules, authorizationRules_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizationRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationRules, authorizationRules_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAuthorizationRulesResponseBody() = default ;
    ListAuthorizationRulesResponseBody(const ListAuthorizationRulesResponseBody &) = default ;
    ListAuthorizationRulesResponseBody(ListAuthorizationRulesResponseBody &&) = default ;
    ListAuthorizationRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizationRulesResponseBody() = default ;
    ListAuthorizationRulesResponseBody& operator=(const ListAuthorizationRulesResponseBody &) = default ;
    ListAuthorizationRulesResponseBody& operator=(ListAuthorizationRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthorizationRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthorizationRules& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizationResourceScope, authorizationResourceScope_);
        DARABONBA_PTR_TO_JSON(AuthorizationRuleCreationType, authorizationRuleCreationType_);
        DARABONBA_PTR_TO_JSON(AuthorizationRuleId, authorizationRuleId_);
        DARABONBA_PTR_TO_JSON(AuthorizationRuleName, authorizationRuleName_);
        DARABONBA_PTR_TO_JSON(AuthorizationRuleSubjectId, authorizationRuleSubjectId_);
        DARABONBA_PTR_TO_JSON(AuthorizationRuleSubjectScope, authorizationRuleSubjectScope_);
        DARABONBA_PTR_TO_JSON(AuthorizationRuleSubjectType, authorizationRuleSubjectType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, AuthorizationRules& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizationResourceScope, authorizationResourceScope_);
        DARABONBA_PTR_FROM_JSON(AuthorizationRuleCreationType, authorizationRuleCreationType_);
        DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
        DARABONBA_PTR_FROM_JSON(AuthorizationRuleName, authorizationRuleName_);
        DARABONBA_PTR_FROM_JSON(AuthorizationRuleSubjectId, authorizationRuleSubjectId_);
        DARABONBA_PTR_FROM_JSON(AuthorizationRuleSubjectScope, authorizationRuleSubjectScope_);
        DARABONBA_PTR_FROM_JSON(AuthorizationRuleSubjectType, authorizationRuleSubjectType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      AuthorizationRules() = default ;
      AuthorizationRules(const AuthorizationRules &) = default ;
      AuthorizationRules(AuthorizationRules &&) = default ;
      AuthorizationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthorizationRules() = default ;
      AuthorizationRules& operator=(const AuthorizationRules &) = default ;
      AuthorizationRules& operator=(AuthorizationRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authorizationResourceScope_ == nullptr
        && this->authorizationRuleCreationType_ == nullptr && this->authorizationRuleId_ == nullptr && this->authorizationRuleName_ == nullptr && this->authorizationRuleSubjectId_ == nullptr && this->authorizationRuleSubjectScope_ == nullptr
        && this->authorizationRuleSubjectType_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr && this->projectId_ == nullptr
        && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // authorizationResourceScope Field Functions 
      bool hasAuthorizationResourceScope() const { return this->authorizationResourceScope_ != nullptr;};
      void deleteAuthorizationResourceScope() { this->authorizationResourceScope_ = nullptr;};
      inline string getAuthorizationResourceScope() const { DARABONBA_PTR_GET_DEFAULT(authorizationResourceScope_, "") };
      inline AuthorizationRules& setAuthorizationResourceScope(string authorizationResourceScope) { DARABONBA_PTR_SET_VALUE(authorizationResourceScope_, authorizationResourceScope) };


      // authorizationRuleCreationType Field Functions 
      bool hasAuthorizationRuleCreationType() const { return this->authorizationRuleCreationType_ != nullptr;};
      void deleteAuthorizationRuleCreationType() { this->authorizationRuleCreationType_ = nullptr;};
      inline string getAuthorizationRuleCreationType() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleCreationType_, "") };
      inline AuthorizationRules& setAuthorizationRuleCreationType(string authorizationRuleCreationType) { DARABONBA_PTR_SET_VALUE(authorizationRuleCreationType_, authorizationRuleCreationType) };


      // authorizationRuleId Field Functions 
      bool hasAuthorizationRuleId() const { return this->authorizationRuleId_ != nullptr;};
      void deleteAuthorizationRuleId() { this->authorizationRuleId_ = nullptr;};
      inline string getAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleId_, "") };
      inline AuthorizationRules& setAuthorizationRuleId(string authorizationRuleId) { DARABONBA_PTR_SET_VALUE(authorizationRuleId_, authorizationRuleId) };


      // authorizationRuleName Field Functions 
      bool hasAuthorizationRuleName() const { return this->authorizationRuleName_ != nullptr;};
      void deleteAuthorizationRuleName() { this->authorizationRuleName_ = nullptr;};
      inline string getAuthorizationRuleName() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleName_, "") };
      inline AuthorizationRules& setAuthorizationRuleName(string authorizationRuleName) { DARABONBA_PTR_SET_VALUE(authorizationRuleName_, authorizationRuleName) };


      // authorizationRuleSubjectId Field Functions 
      bool hasAuthorizationRuleSubjectId() const { return this->authorizationRuleSubjectId_ != nullptr;};
      void deleteAuthorizationRuleSubjectId() { this->authorizationRuleSubjectId_ = nullptr;};
      inline string getAuthorizationRuleSubjectId() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleSubjectId_, "") };
      inline AuthorizationRules& setAuthorizationRuleSubjectId(string authorizationRuleSubjectId) { DARABONBA_PTR_SET_VALUE(authorizationRuleSubjectId_, authorizationRuleSubjectId) };


      // authorizationRuleSubjectScope Field Functions 
      bool hasAuthorizationRuleSubjectScope() const { return this->authorizationRuleSubjectScope_ != nullptr;};
      void deleteAuthorizationRuleSubjectScope() { this->authorizationRuleSubjectScope_ = nullptr;};
      inline string getAuthorizationRuleSubjectScope() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleSubjectScope_, "") };
      inline AuthorizationRules& setAuthorizationRuleSubjectScope(string authorizationRuleSubjectScope) { DARABONBA_PTR_SET_VALUE(authorizationRuleSubjectScope_, authorizationRuleSubjectScope) };


      // authorizationRuleSubjectType Field Functions 
      bool hasAuthorizationRuleSubjectType() const { return this->authorizationRuleSubjectType_ != nullptr;};
      void deleteAuthorizationRuleSubjectType() { this->authorizationRuleSubjectType_ = nullptr;};
      inline string getAuthorizationRuleSubjectType() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleSubjectType_, "") };
      inline AuthorizationRules& setAuthorizationRuleSubjectType(string authorizationRuleSubjectType) { DARABONBA_PTR_SET_VALUE(authorizationRuleSubjectType_, authorizationRuleSubjectType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline AuthorizationRules& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AuthorizationRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AuthorizationRules& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline AuthorizationRules& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AuthorizationRules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline AuthorizationRules& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // 授权资源范围，枚举值：global（项目下所有资源）、custom（指定资源）。
      shared_ptr<string> authorizationResourceScope_ {};
      // 授权规则的创建类型，枚举类型：user_created（用户创建)，approval_created（审批创建)。
      shared_ptr<string> authorizationRuleCreationType_ {};
      // 授权规则标识。
      shared_ptr<string> authorizationRuleId_ {};
      // 授权规则名称。
      shared_ptr<string> authorizationRuleName_ {};
      // 授权规则主体ID，主体类型对应的主体ID。
      shared_ptr<string> authorizationRuleSubjectId_ {};
      // 授权规则主体范围，枚举类型：shared（共享型，即支持所有主体，包括账户、应用），exclusive（专属类型）
      shared_ptr<string> authorizationRuleSubjectScope_ {};
      // 授权规则主体类型，枚举类型：application（应用)，user（账户)。
      shared_ptr<string> authorizationRuleSubjectType_ {};
      // 创建时间，Unix时间戳格式，单位为毫秒。
      shared_ptr<int64_t> createTime_ {};
      // 授权规则描述，长度限制为128字符。
      shared_ptr<string> description_ {};
      // 实例ID。
      shared_ptr<string> instanceId_ {};
      // 授权规则关联的项目标识。
      shared_ptr<string> projectId_ {};
      // 授权规则状态，枚举值：enabled（启用）、disabled（禁用）。
      shared_ptr<string> status_ {};
      // 最近一次更新时间，Unix时间戳格式，单位为毫秒。
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->authorizationRules_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // authorizationRules Field Functions 
    bool hasAuthorizationRules() const { return this->authorizationRules_ != nullptr;};
    void deleteAuthorizationRules() { this->authorizationRules_ = nullptr;};
    inline const vector<ListAuthorizationRulesResponseBody::AuthorizationRules> & getAuthorizationRules() const { DARABONBA_PTR_GET_CONST(authorizationRules_, vector<ListAuthorizationRulesResponseBody::AuthorizationRules>) };
    inline vector<ListAuthorizationRulesResponseBody::AuthorizationRules> getAuthorizationRules() { DARABONBA_PTR_GET(authorizationRules_, vector<ListAuthorizationRulesResponseBody::AuthorizationRules>) };
    inline ListAuthorizationRulesResponseBody& setAuthorizationRules(const vector<ListAuthorizationRulesResponseBody::AuthorizationRules> & authorizationRules) { DARABONBA_PTR_SET_VALUE(authorizationRules_, authorizationRules) };
    inline ListAuthorizationRulesResponseBody& setAuthorizationRules(vector<ListAuthorizationRulesResponseBody::AuthorizationRules> && authorizationRules) { DARABONBA_PTR_SET_RVALUE(authorizationRules_, authorizationRules) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAuthorizationRulesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAuthorizationRulesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorizationRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAuthorizationRulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListAuthorizationRulesResponseBody::AuthorizationRules>> authorizationRules_ {};
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
