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
        DARABONBA_PTR_TO_JSON(AuthorizationRuleScenarioLabel, authorizationRuleScenarioLabel_);
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
      friend void from_json(const Darabonba::Json& j, AuthorizationRule& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizationResourceScope, authorizationResourceScope_);
        DARABONBA_PTR_FROM_JSON(AuthorizationRuleCreationType, authorizationRuleCreationType_);
        DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
        DARABONBA_PTR_FROM_JSON(AuthorizationRuleName, authorizationRuleName_);
        DARABONBA_PTR_FROM_JSON(AuthorizationRuleScenarioLabel, authorizationRuleScenarioLabel_);
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
        && this->authorizationRuleCreationType_ == nullptr && this->authorizationRuleId_ == nullptr && this->authorizationRuleName_ == nullptr && this->authorizationRuleScenarioLabel_ == nullptr && this->authorizationRuleSubjectId_ == nullptr
        && this->authorizationRuleSubjectScope_ == nullptr && this->authorizationRuleSubjectType_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr
        && this->projectId_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
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


      // authorizationRuleScenarioLabel Field Functions 
      bool hasAuthorizationRuleScenarioLabel() const { return this->authorizationRuleScenarioLabel_ != nullptr;};
      void deleteAuthorizationRuleScenarioLabel() { this->authorizationRuleScenarioLabel_ = nullptr;};
      inline string getAuthorizationRuleScenarioLabel() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleScenarioLabel_, "") };
      inline AuthorizationRule& setAuthorizationRuleScenarioLabel(string authorizationRuleScenarioLabel) { DARABONBA_PTR_SET_VALUE(authorizationRuleScenarioLabel_, authorizationRuleScenarioLabel) };


      // authorizationRuleSubjectId Field Functions 
      bool hasAuthorizationRuleSubjectId() const { return this->authorizationRuleSubjectId_ != nullptr;};
      void deleteAuthorizationRuleSubjectId() { this->authorizationRuleSubjectId_ = nullptr;};
      inline string getAuthorizationRuleSubjectId() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleSubjectId_, "") };
      inline AuthorizationRule& setAuthorizationRuleSubjectId(string authorizationRuleSubjectId) { DARABONBA_PTR_SET_VALUE(authorizationRuleSubjectId_, authorizationRuleSubjectId) };


      // authorizationRuleSubjectScope Field Functions 
      bool hasAuthorizationRuleSubjectScope() const { return this->authorizationRuleSubjectScope_ != nullptr;};
      void deleteAuthorizationRuleSubjectScope() { this->authorizationRuleSubjectScope_ = nullptr;};
      inline string getAuthorizationRuleSubjectScope() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleSubjectScope_, "") };
      inline AuthorizationRule& setAuthorizationRuleSubjectScope(string authorizationRuleSubjectScope) { DARABONBA_PTR_SET_VALUE(authorizationRuleSubjectScope_, authorizationRuleSubjectScope) };


      // authorizationRuleSubjectType Field Functions 
      bool hasAuthorizationRuleSubjectType() const { return this->authorizationRuleSubjectType_ != nullptr;};
      void deleteAuthorizationRuleSubjectType() { this->authorizationRuleSubjectType_ = nullptr;};
      inline string getAuthorizationRuleSubjectType() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleSubjectType_, "") };
      inline AuthorizationRule& setAuthorizationRuleSubjectType(string authorizationRuleSubjectType) { DARABONBA_PTR_SET_VALUE(authorizationRuleSubjectType_, authorizationRuleSubjectType) };


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
      // The authorization resource scope. Valid values:
      // - global: All resources under the project.
      // - custom: Specified resources within the project scope.
      shared_ptr<string> authorizationResourceScope_ {};
      // The creation type of the authorization rule. Valid values:
      // - system_init: Created by the system.
      // - user_custom: Created by the user.
      shared_ptr<string> authorizationRuleCreationType_ {};
      // The authorization rule ID.
      shared_ptr<string> authorizationRuleId_ {};
      // The authorization rule name.
      shared_ptr<string> authorizationRuleName_ {};
      // The scenario label of the authorization rule.
      shared_ptr<string> authorizationRuleScenarioLabel_ {};
      // The subject ID associated with the authorization rule.
      shared_ptr<string> authorizationRuleSubjectId_ {};
      // The subject scope of the authorization rule. Valid values:
      // - shared: Shared type, which supports all subjects, including accounts and applications.
      // - exclusive: Exclusive type.
      shared_ptr<string> authorizationRuleSubjectScope_ {};
      // The subject type associated with the authorization rule. This parameter is valid only when the authorization rule subject scope is exclusive. Valid values:
      // - application: Application.
      // - user: Account.
      shared_ptr<string> authorizationRuleSubjectType_ {};
      // The creation time, in UNIX timestamp format, measured in milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The description of the authorization rule.
      shared_ptr<string> description_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The project ID associated with the authorization rule.
      shared_ptr<string> projectId_ {};
      // The authorization rule status. Valid values:
      // - enabled: Enabled.
      // - disabled: Disabled.
      shared_ptr<string> status_ {};
      // The last update time, in UNIX timestamp format, measured in milliseconds.
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
    // The authorization rule object.
    shared_ptr<GetAuthorizationRuleResponseBody::AuthorizationRule> authorizationRule_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
