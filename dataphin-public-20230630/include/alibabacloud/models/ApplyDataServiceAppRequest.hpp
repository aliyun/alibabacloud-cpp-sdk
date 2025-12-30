// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYDATASERVICEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYDATASERVICEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ApplyDataServiceAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyDataServiceAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyCommand, applyCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyDataServiceAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyCommand, applyCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ApplyDataServiceAppRequest() = default ;
    ApplyDataServiceAppRequest(const ApplyDataServiceAppRequest &) = default ;
    ApplyDataServiceAppRequest(ApplyDataServiceAppRequest &&) = default ;
    ApplyDataServiceAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyDataServiceAppRequest() = default ;
    ApplyDataServiceAppRequest& operator=(const ApplyDataServiceAppRequest &) = default ;
    ApplyDataServiceAppRequest& operator=(ApplyDataServiceAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplyCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplyCommand& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
      };
      friend void from_json(const Darabonba::Json& j, ApplyCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
      };
      ApplyCommand() = default ;
      ApplyCommand(const ApplyCommand &) = default ;
      ApplyCommand(ApplyCommand &&) = default ;
      ApplyCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplyCommand() = default ;
      ApplyCommand& operator=(const ApplyCommand &) = default ;
      ApplyCommand& operator=(ApplyCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->expireDate_ == nullptr && this->reason_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline int32_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
      inline ApplyCommand& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // expireDate Field Functions 
      bool hasExpireDate() const { return this->expireDate_ != nullptr;};
      void deleteExpireDate() { this->expireDate_ = nullptr;};
      inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
      inline ApplyCommand& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline ApplyCommand& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    protected:
      // appId
      // 
      // This parameter is required.
      shared_ptr<int32_t> appId_ {};
      // This parameter is required.
      shared_ptr<string> expireDate_ {};
      // This parameter is required.
      shared_ptr<string> reason_ {};
    };

    virtual bool empty() const override { return this->applyCommand_ == nullptr
        && this->opTenantId_ == nullptr && this->projectId_ == nullptr; };
    // applyCommand Field Functions 
    bool hasApplyCommand() const { return this->applyCommand_ != nullptr;};
    void deleteApplyCommand() { this->applyCommand_ = nullptr;};
    inline const ApplyDataServiceAppRequest::ApplyCommand & getApplyCommand() const { DARABONBA_PTR_GET_CONST(applyCommand_, ApplyDataServiceAppRequest::ApplyCommand) };
    inline ApplyDataServiceAppRequest::ApplyCommand getApplyCommand() { DARABONBA_PTR_GET(applyCommand_, ApplyDataServiceAppRequest::ApplyCommand) };
    inline ApplyDataServiceAppRequest& setApplyCommand(const ApplyDataServiceAppRequest::ApplyCommand & applyCommand) { DARABONBA_PTR_SET_VALUE(applyCommand_, applyCommand) };
    inline ApplyDataServiceAppRequest& setApplyCommand(ApplyDataServiceAppRequest::ApplyCommand && applyCommand) { DARABONBA_PTR_SET_RVALUE(applyCommand_, applyCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ApplyDataServiceAppRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline ApplyDataServiceAppRequest& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    shared_ptr<ApplyDataServiceAppRequest::ApplyCommand> applyCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<int32_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
