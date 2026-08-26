// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVEMESSAGEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVEMESSAGEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateLiveMessageAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLiveMessageAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AuditType, auditType_);
      DARABONBA_PTR_TO_JSON(AuditUrl, auditUrl_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(EventCallbackUrl, eventCallbackUrl_);
      DARABONBA_PTR_TO_JSON(MsgLifeCycle, msgLifeCycle_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLiveMessageAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AuditType, auditType_);
      DARABONBA_PTR_FROM_JSON(AuditUrl, auditUrl_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(EventCallbackUrl, eventCallbackUrl_);
      DARABONBA_PTR_FROM_JSON(MsgLifeCycle, msgLifeCycle_);
    };
    CreateLiveMessageAppRequest() = default ;
    CreateLiveMessageAppRequest(const CreateLiveMessageAppRequest &) = default ;
    CreateLiveMessageAppRequest(CreateLiveMessageAppRequest &&) = default ;
    CreateLiveMessageAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLiveMessageAppRequest() = default ;
    CreateLiveMessageAppRequest& operator=(const CreateLiveMessageAppRequest &) = default ;
    CreateLiveMessageAppRequest& operator=(CreateLiveMessageAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->auditType_ == nullptr && this->auditUrl_ == nullptr && this->dataCenter_ == nullptr && this->eventCallbackUrl_ == nullptr && this->msgLifeCycle_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateLiveMessageAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // auditType Field Functions 
    bool hasAuditType() const { return this->auditType_ != nullptr;};
    void deleteAuditType() { this->auditType_ = nullptr;};
    inline int32_t getAuditType() const { DARABONBA_PTR_GET_DEFAULT(auditType_, 0) };
    inline CreateLiveMessageAppRequest& setAuditType(int32_t auditType) { DARABONBA_PTR_SET_VALUE(auditType_, auditType) };


    // auditUrl Field Functions 
    bool hasAuditUrl() const { return this->auditUrl_ != nullptr;};
    void deleteAuditUrl() { this->auditUrl_ = nullptr;};
    inline string getAuditUrl() const { DARABONBA_PTR_GET_DEFAULT(auditUrl_, "") };
    inline CreateLiveMessageAppRequest& setAuditUrl(string auditUrl) { DARABONBA_PTR_SET_VALUE(auditUrl_, auditUrl) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string getDataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline CreateLiveMessageAppRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // eventCallbackUrl Field Functions 
    bool hasEventCallbackUrl() const { return this->eventCallbackUrl_ != nullptr;};
    void deleteEventCallbackUrl() { this->eventCallbackUrl_ = nullptr;};
    inline string getEventCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(eventCallbackUrl_, "") };
    inline CreateLiveMessageAppRequest& setEventCallbackUrl(string eventCallbackUrl) { DARABONBA_PTR_SET_VALUE(eventCallbackUrl_, eventCallbackUrl) };


    // msgLifeCycle Field Functions 
    bool hasMsgLifeCycle() const { return this->msgLifeCycle_ != nullptr;};
    void deleteMsgLifeCycle() { this->msgLifeCycle_ = nullptr;};
    inline int32_t getMsgLifeCycle() const { DARABONBA_PTR_GET_DEFAULT(msgLifeCycle_, 0) };
    inline CreateLiveMessageAppRequest& setMsgLifeCycle(int32_t msgLifeCycle) { DARABONBA_PTR_SET_VALUE(msgLifeCycle_, msgLifeCycle) };


  protected:
    // The application name. The name must be 2 to 16 characters in length.
    shared_ptr<string> appName_ {};
    // The security audit mode. Valid values:
    // - 0: default value. Security audit is disabled.
    // - 1: built-in security audit.
    // - 2: custom security audit.
    shared_ptr<int32_t> auditType_ {};
    // The URL for custom security audit. This parameter is required when custom security audit is selected (AuditType=2). The URL must start with http:// or https://, must not contain private IP addresses, and must not include port numbers. For the format of custom security audit content, see the following section.
    shared_ptr<string> auditUrl_ {};
    // The data center. Valid values:
    // - cn-shanghai: default value. Shanghai.
    // - ap-southeast-1: Singapore.
    // 
    // > When calling other interactive messaging API operations, the data center must be the same as the one specified when creating the interactive messaging application.
    shared_ptr<string> dataCenter_ {};
    // The event callback URL for client logon, logout, join group, and leave group events. If this parameter is empty, event callbacks are disabled. For the callback API operations that are triggered, see [Client access](https://help.aliyun.com/document_detail/2672836.html). The event callback URL must start with http:// or https://, must not contain private IP addresses, and must not include port numbers. For the event callback format and callback authentication logic, see the following section.
    shared_ptr<string> eventCallbackUrl_ {};
    // The storage duration tier for group messages within the application. Valid values:
    // - 0: default value. Messages are stored for 30 days.
    // - 1: messages are stored for 90 days.
    // - 2: messages are stored for 180 days.
    shared_ptr<int32_t> msgLifeCycle_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
