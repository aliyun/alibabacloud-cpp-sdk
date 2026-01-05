// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEMESSAGEAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEMESSAGEAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveMessageAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveMessageAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppSign, appSign_);
      DARABONBA_PTR_TO_JSON(AuditType, auditType_);
      DARABONBA_PTR_TO_JSON(AuditUrl, auditUrl_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(Disable, disable_);
      DARABONBA_PTR_TO_JSON(EventCallbackUrl, eventCallbackUrl_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(MsgLifeCycle, msgLifeCycle_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveMessageAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppSign, appSign_);
      DARABONBA_PTR_FROM_JSON(AuditType, auditType_);
      DARABONBA_PTR_FROM_JSON(AuditUrl, auditUrl_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(Disable, disable_);
      DARABONBA_PTR_FROM_JSON(EventCallbackUrl, eventCallbackUrl_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(MsgLifeCycle, msgLifeCycle_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveMessageAppResponseBody() = default ;
    DescribeLiveMessageAppResponseBody(const DescribeLiveMessageAppResponseBody &) = default ;
    DescribeLiveMessageAppResponseBody(DescribeLiveMessageAppResponseBody &&) = default ;
    DescribeLiveMessageAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveMessageAppResponseBody() = default ;
    DescribeLiveMessageAppResponseBody& operator=(const DescribeLiveMessageAppResponseBody &) = default ;
    DescribeLiveMessageAppResponseBody& operator=(DescribeLiveMessageAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appKey_ == nullptr && this->appName_ == nullptr && this->appSign_ == nullptr && this->auditType_ == nullptr && this->auditUrl_ == nullptr
        && this->createTime_ == nullptr && this->dataCenter_ == nullptr && this->disable_ == nullptr && this->eventCallbackUrl_ == nullptr && this->modifyTime_ == nullptr
        && this->msgLifeCycle_ == nullptr && this->requestId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeLiveMessageAppResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline DescribeLiveMessageAppResponseBody& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLiveMessageAppResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appSign Field Functions 
    bool hasAppSign() const { return this->appSign_ != nullptr;};
    void deleteAppSign() { this->appSign_ = nullptr;};
    inline string getAppSign() const { DARABONBA_PTR_GET_DEFAULT(appSign_, "") };
    inline DescribeLiveMessageAppResponseBody& setAppSign(string appSign) { DARABONBA_PTR_SET_VALUE(appSign_, appSign) };


    // auditType Field Functions 
    bool hasAuditType() const { return this->auditType_ != nullptr;};
    void deleteAuditType() { this->auditType_ = nullptr;};
    inline int32_t getAuditType() const { DARABONBA_PTR_GET_DEFAULT(auditType_, 0) };
    inline DescribeLiveMessageAppResponseBody& setAuditType(int32_t auditType) { DARABONBA_PTR_SET_VALUE(auditType_, auditType) };


    // auditUrl Field Functions 
    bool hasAuditUrl() const { return this->auditUrl_ != nullptr;};
    void deleteAuditUrl() { this->auditUrl_ = nullptr;};
    inline string getAuditUrl() const { DARABONBA_PTR_GET_DEFAULT(auditUrl_, "") };
    inline DescribeLiveMessageAppResponseBody& setAuditUrl(string auditUrl) { DARABONBA_PTR_SET_VALUE(auditUrl_, auditUrl) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeLiveMessageAppResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string getDataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline DescribeLiveMessageAppResponseBody& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // disable Field Functions 
    bool hasDisable() const { return this->disable_ != nullptr;};
    void deleteDisable() { this->disable_ = nullptr;};
    inline bool getDisable() const { DARABONBA_PTR_GET_DEFAULT(disable_, false) };
    inline DescribeLiveMessageAppResponseBody& setDisable(bool disable) { DARABONBA_PTR_SET_VALUE(disable_, disable) };


    // eventCallbackUrl Field Functions 
    bool hasEventCallbackUrl() const { return this->eventCallbackUrl_ != nullptr;};
    void deleteEventCallbackUrl() { this->eventCallbackUrl_ = nullptr;};
    inline string getEventCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(eventCallbackUrl_, "") };
    inline DescribeLiveMessageAppResponseBody& setEventCallbackUrl(string eventCallbackUrl) { DARABONBA_PTR_SET_VALUE(eventCallbackUrl_, eventCallbackUrl) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline DescribeLiveMessageAppResponseBody& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // msgLifeCycle Field Functions 
    bool hasMsgLifeCycle() const { return this->msgLifeCycle_ != nullptr;};
    void deleteMsgLifeCycle() { this->msgLifeCycle_ = nullptr;};
    inline int32_t getMsgLifeCycle() const { DARABONBA_PTR_GET_DEFAULT(msgLifeCycle_, 0) };
    inline DescribeLiveMessageAppResponseBody& setMsgLifeCycle(int32_t msgLifeCycle) { DARABONBA_PTR_SET_VALUE(msgLifeCycle_, msgLifeCycle) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveMessageAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the interactive messaging application.
    shared_ptr<string> appId_ {};
    // The AppKey of the interactive messaging application. It is used to authorize operations related to the application ID.
    shared_ptr<string> appKey_ {};
    // The name of the interactive messaging application.
    shared_ptr<string> appName_ {};
    // The signature of the interactive messaging application. It is required by the interactive messaging SDK.
    shared_ptr<string> appSign_ {};
    // The content moderation method. Valid values:
    // 
    // *   0: Content moderation is disabled.
    // *   1: Built-in content moderation is used.
    // *   2: Custom content moderation is used.
    shared_ptr<int32_t> auditType_ {};
    // The URL for content moderation. This parameter is returned when the value of AuditType is 2.
    shared_ptr<string> auditUrl_ {};
    // The time when the interactive messaging application was created. The value is a UNIX timestamp. Unit: seconds.
    shared_ptr<int64_t> createTime_ {};
    // The data center.
    shared_ptr<string> dataCenter_ {};
    // Indicates whether the interactive messaging application is disabled.
    shared_ptr<bool> disable_ {};
    // The callback URL for events such as user logon, logoff, joining a group, and leaving a group. An empty value indicates that callbacks are disabled.
    shared_ptr<string> eventCallbackUrl_ {};
    // The time when the interactive messaging application was modified. The value is a UNIX timestamp. Unit: seconds.
    shared_ptr<int64_t> modifyTime_ {};
    // The retention period of group messages in the application. Valid values:
    // 
    // *   0 (default): 30 days
    // *   1: 90 days
    // *   2: 180 days
    shared_ptr<int32_t> msgLifeCycle_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
