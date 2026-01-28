// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHORIZATIONRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHORIZATIONRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetAuthorizationRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthorizationRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationRule, authorizationRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthorizationRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationRule, authorizationRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAuthorizationRuleResponseBody() = default ;
    GetAuthorizationRuleResponseBody(const GetAuthorizationRuleResponseBody &) = default ;
    GetAuthorizationRuleResponseBody(GetAuthorizationRuleResponseBody &&) = default ;
    GetAuthorizationRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthorizationRuleResponseBody() = default ;
    GetAuthorizationRuleResponseBody& operator=(const GetAuthorizationRuleResponseBody &) = default ;
    GetAuthorizationRuleResponseBody& operator=(GetAuthorizationRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthorizationRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthorizationRule& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizationResourceScope, authorizationResourceScope_);
        DARABONBA_PTR_TO_JSON(AuthorizationRuleCreationType, authorizationRuleCreationType_);
        DARABONBA_PTR_TO_JSON(AuthorizationRuleId, authorizationRuleId_);
        DARABONBA_PTR_TO_JSON(AuthorizationRuleName, authorizationRuleName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, AuthorizationRule& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizationResourceScope, authorizationResourceScope_);
        DARABONBA_PTR_FROM_JSON(AuthorizationRuleCreationType, authorizationRuleCreationType_);
        DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
        DARABONBA_PTR_FROM_JSON(AuthorizationRuleName, authorizationRuleName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      AuthorizationRule() = default ;
      AuthorizationRule(const AuthorizationRule &) = default ;
      AuthorizationRule(AuthorizationRule &&) = default ;
      AuthorizationRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthorizationRule() = default ;
      AuthorizationRule& operator=(const AuthorizationRule &) = default ;
      AuthorizationRule& operator=(AuthorizationRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authorizationResourceScope_ == nullptr
        && this->authorizationRuleCreationType_ == nullptr && this->authorizationRuleId_ == nullptr && this->authorizationRuleName_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr
        && this->instanceId_ == nullptr && this->projectId_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // authorizationResourceScope Field Functions 
      bool hasAuthorizationResourceScope() const { return this->authorizationResourceScope_ != nullptr;};
      void deleteAuthorizationResourceScope() { this->authorizationResourceScope_ = nullptr;};
      inline string getAuthorizationResourceScope() const { DARABONBA_PTR_GET_DEFAULT(authorizationResourceScope_, "") };
      inline AuthorizationRule& setAuthorizationResourceScope(string authorizationResourceScope) { DARABONBA_PTR_SET_VALUE(authorizationResourceScope_, authorizationResourceScope) };


      // authorizationRuleCreationType Field Functions 
      bool hasAuthorizationRuleCreationType() const { return this->authorizationRuleCreationType_ != nullptr;};
      void deleteAuthorizationRuleCreationType() { this->authorizationRuleCreationType_ = nullptr;};
      inline string getAuthorizationRuleCreationType() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleCreationType_, "") };
      inline AuthorizationRule& setAuthorizationRuleCreationType(string authorizationRuleCreationType) { DARABONBA_PTR_SET_VALUE(authorizationRuleCreationType_, authorizationRuleCreationType) };


      // authorizationRuleId Field Functions 
      bool hasAuthorizationRuleId() const { return this->authorizationRuleId_ != nullptr;};
      void deleteAuthorizationRuleId() { this->authorizationRuleId_ = nullptr;};
      inline string getAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleId_, "") };
      inline AuthorizationRule& setAuthorizationRuleId(string authorizationRuleId) { DARABONBA_PTR_SET_VALUE(authorizationRuleId_, authorizationRuleId) };


      // authorizationRuleName Field Functions 
      bool hasAuthorizationRuleName() const { return this->authorizationRuleName_ != nullptr;};
      void deleteAuthorizationRuleName() { this->authorizationRuleName_ = nullptr;};
      inline string getAuthorizationRuleName() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleName_, "") };
      inline AuthorizationRule& setAuthorizationRuleName(string authorizationRuleName) { DARABONBA_PTR_SET_VALUE(authorizationRuleName_, authorizationRuleName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline AuthorizationRule& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AuthorizationRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AuthorizationRule& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline AuthorizationRule& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AuthorizationRule& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline AuthorizationRule& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // 授权资源范围，枚举值：global（项目下所有资源）、custom（指定资源）。
      shared_ptr<string> authorizationResourceScope_ {};
      // 授权规则的创建类型，枚举类型：user_created（用户创建)，approval_created（审批创建)。
      shared_ptr<string> authorizationRuleCreationType_ {};
      // 授权规则标识。
      shared_ptr<string> authorizationRuleId_ {};
      // 授权规则名称。
      shared_ptr<string> authorizationRuleName_ {};
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

    virtual bool empty() const override { return this->authorizationRule_ == nullptr
        && this->requestId_ == nullptr; };
    // authorizationRule Field Functions 
    bool hasAuthorizationRule() const { return this->authorizationRule_ != nullptr;};
    void deleteAuthorizationRule() { this->authorizationRule_ = nullptr;};
    inline const GetAuthorizationRuleResponseBody::AuthorizationRule & getAuthorizationRule() const { DARABONBA_PTR_GET_CONST(authorizationRule_, GetAuthorizationRuleResponseBody::AuthorizationRule) };
    inline GetAuthorizationRuleResponseBody::AuthorizationRule getAuthorizationRule() { DARABONBA_PTR_GET(authorizationRule_, GetAuthorizationRuleResponseBody::AuthorizationRule) };
    inline GetAuthorizationRuleResponseBody& setAuthorizationRule(const GetAuthorizationRuleResponseBody::AuthorizationRule & authorizationRule) { DARABONBA_PTR_SET_VALUE(authorizationRule_, authorizationRule) };
    inline GetAuthorizationRuleResponseBody& setAuthorizationRule(GetAuthorizationRuleResponseBody::AuthorizationRule && authorizationRule) { DARABONBA_PTR_SET_RVALUE(authorizationRule_, authorizationRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuthorizationRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetAuthorizationRuleResponseBody::AuthorizationRule> authorizationRule_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
