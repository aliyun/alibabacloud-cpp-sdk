// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEDATASERVICEAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEDATASERVICEAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class RevokeDataServiceApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeDataServiceApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RevokeCommand, revokeCommand_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeDataServiceApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RevokeCommand, revokeCommand_);
    };
    RevokeDataServiceApiRequest() = default ;
    RevokeDataServiceApiRequest(const RevokeDataServiceApiRequest &) = default ;
    RevokeDataServiceApiRequest(RevokeDataServiceApiRequest &&) = default ;
    RevokeDataServiceApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeDataServiceApiRequest() = default ;
    RevokeDataServiceApiRequest& operator=(const RevokeDataServiceApiRequest &) = default ;
    RevokeDataServiceApiRequest& operator=(RevokeDataServiceApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RevokeCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RevokeCommand& obj) { 
        DARABONBA_PTR_TO_JSON(ApiId, apiId_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AuthType, authType_);
        DARABONBA_PTR_TO_JSON(Env, env_);
        DARABONBA_PTR_TO_JSON(GranteeType, granteeType_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, RevokeCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AuthType, authType_);
        DARABONBA_PTR_FROM_JSON(Env, env_);
        DARABONBA_PTR_FROM_JSON(GranteeType, granteeType_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      RevokeCommand() = default ;
      RevokeCommand(const RevokeCommand &) = default ;
      RevokeCommand(RevokeCommand &&) = default ;
      RevokeCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RevokeCommand() = default ;
      RevokeCommand& operator=(const RevokeCommand &) = default ;
      RevokeCommand& operator=(RevokeCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiId_ == nullptr
        && this->appId_ == nullptr && this->authType_ == nullptr && this->env_ == nullptr && this->granteeType_ == nullptr && this->reason_ == nullptr
        && this->userId_ == nullptr; };
      // apiId Field Functions 
      bool hasApiId() const { return this->apiId_ != nullptr;};
      void deleteApiId() { this->apiId_ = nullptr;};
      inline int64_t getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
      inline RevokeCommand& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline int32_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
      inline RevokeCommand& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // authType Field Functions 
      bool hasAuthType() const { return this->authType_ != nullptr;};
      void deleteAuthType() { this->authType_ = nullptr;};
      inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
      inline RevokeCommand& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline RevokeCommand& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // granteeType Field Functions 
      bool hasGranteeType() const { return this->granteeType_ != nullptr;};
      void deleteGranteeType() { this->granteeType_ = nullptr;};
      inline string getGranteeType() const { DARABONBA_PTR_GET_DEFAULT(granteeType_, "") };
      inline RevokeCommand& setGranteeType(string granteeType) { DARABONBA_PTR_SET_VALUE(granteeType_, granteeType) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline RevokeCommand& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline RevokeCommand& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The API ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> apiId_ {};
      // The ID of the application.
      shared_ptr<int32_t> appId_ {};
      // The permission type. Valid values:
      // - USE: use permission
      // - DELEGATION: delegation permission.
      shared_ptr<string> authType_ {};
      // The API environment. Valid values:
      // - DEV: development environment
      // - PROD: production environment.
      shared_ptr<string> env_ {};
      // The authorization object type. Valid values:
      // - APP: application
      // - USER: user.
      shared_ptr<string> granteeType_ {};
      // The reason for the request.
      // 
      // This parameter is required.
      shared_ptr<string> reason_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->projectId_ == nullptr && this->revokeCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline RevokeDataServiceApiRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline RevokeDataServiceApiRequest& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // revokeCommand Field Functions 
    bool hasRevokeCommand() const { return this->revokeCommand_ != nullptr;};
    void deleteRevokeCommand() { this->revokeCommand_ = nullptr;};
    inline const RevokeDataServiceApiRequest::RevokeCommand & getRevokeCommand() const { DARABONBA_PTR_GET_CONST(revokeCommand_, RevokeDataServiceApiRequest::RevokeCommand) };
    inline RevokeDataServiceApiRequest::RevokeCommand getRevokeCommand() { DARABONBA_PTR_GET(revokeCommand_, RevokeDataServiceApiRequest::RevokeCommand) };
    inline RevokeDataServiceApiRequest& setRevokeCommand(const RevokeDataServiceApiRequest::RevokeCommand & revokeCommand) { DARABONBA_PTR_SET_VALUE(revokeCommand_, revokeCommand) };
    inline RevokeDataServiceApiRequest& setRevokeCommand(RevokeDataServiceApiRequest::RevokeCommand && revokeCommand) { DARABONBA_PTR_SET_RVALUE(revokeCommand_, revokeCommand) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The data service project ID.
    // 
    // This parameter is required.
    shared_ptr<int32_t> projectId_ {};
    // The revoke instruction.
    // 
    // This parameter is required.
    shared_ptr<RevokeDataServiceApiRequest::RevokeCommand> revokeCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
