// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETMESSAGECALLBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETMESSAGECALLBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SetMessageCallbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetMessageCallbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
      DARABONBA_PTR_TO_JSON(AuthSwitch, authSwitch_);
      DARABONBA_PTR_TO_JSON(CallbackType, callbackType_);
      DARABONBA_PTR_TO_JSON(CallbackURL, callbackURL_);
      DARABONBA_PTR_TO_JSON(EventTypeList, eventTypeList_);
      DARABONBA_PTR_TO_JSON(MnsEndpoint, mnsEndpoint_);
      DARABONBA_PTR_TO_JSON(MnsQueueName, mnsQueueName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
    };
    friend void from_json(const Darabonba::Json& j, SetMessageCallbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
      DARABONBA_PTR_FROM_JSON(AuthSwitch, authSwitch_);
      DARABONBA_PTR_FROM_JSON(CallbackType, callbackType_);
      DARABONBA_PTR_FROM_JSON(CallbackURL, callbackURL_);
      DARABONBA_PTR_FROM_JSON(EventTypeList, eventTypeList_);
      DARABONBA_PTR_FROM_JSON(MnsEndpoint, mnsEndpoint_);
      DARABONBA_PTR_FROM_JSON(MnsQueueName, mnsQueueName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
    };
    SetMessageCallbackRequest() = default ;
    SetMessageCallbackRequest(const SetMessageCallbackRequest &) = default ;
    SetMessageCallbackRequest(SetMessageCallbackRequest &&) = default ;
    SetMessageCallbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetMessageCallbackRequest() = default ;
    SetMessageCallbackRequest& operator=(const SetMessageCallbackRequest &) = default ;
    SetMessageCallbackRequest& operator=(SetMessageCallbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->authKey_ == nullptr && this->authSwitch_ == nullptr && this->callbackType_ == nullptr && this->callbackURL_ == nullptr && this->eventTypeList_ == nullptr
        && this->mnsEndpoint_ == nullptr && this->mnsQueueName_ == nullptr && this->ownerAccount_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SetMessageCallbackRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string getAuthKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline SetMessageCallbackRequest& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


    // authSwitch Field Functions 
    bool hasAuthSwitch() const { return this->authSwitch_ != nullptr;};
    void deleteAuthSwitch() { this->authSwitch_ = nullptr;};
    inline string getAuthSwitch() const { DARABONBA_PTR_GET_DEFAULT(authSwitch_, "") };
    inline SetMessageCallbackRequest& setAuthSwitch(string authSwitch) { DARABONBA_PTR_SET_VALUE(authSwitch_, authSwitch) };


    // callbackType Field Functions 
    bool hasCallbackType() const { return this->callbackType_ != nullptr;};
    void deleteCallbackType() { this->callbackType_ = nullptr;};
    inline string getCallbackType() const { DARABONBA_PTR_GET_DEFAULT(callbackType_, "") };
    inline SetMessageCallbackRequest& setCallbackType(string callbackType) { DARABONBA_PTR_SET_VALUE(callbackType_, callbackType) };


    // callbackURL Field Functions 
    bool hasCallbackURL() const { return this->callbackURL_ != nullptr;};
    void deleteCallbackURL() { this->callbackURL_ = nullptr;};
    inline string getCallbackURL() const { DARABONBA_PTR_GET_DEFAULT(callbackURL_, "") };
    inline SetMessageCallbackRequest& setCallbackURL(string callbackURL) { DARABONBA_PTR_SET_VALUE(callbackURL_, callbackURL) };


    // eventTypeList Field Functions 
    bool hasEventTypeList() const { return this->eventTypeList_ != nullptr;};
    void deleteEventTypeList() { this->eventTypeList_ = nullptr;};
    inline string getEventTypeList() const { DARABONBA_PTR_GET_DEFAULT(eventTypeList_, "") };
    inline SetMessageCallbackRequest& setEventTypeList(string eventTypeList) { DARABONBA_PTR_SET_VALUE(eventTypeList_, eventTypeList) };


    // mnsEndpoint Field Functions 
    bool hasMnsEndpoint() const { return this->mnsEndpoint_ != nullptr;};
    void deleteMnsEndpoint() { this->mnsEndpoint_ = nullptr;};
    inline string getMnsEndpoint() const { DARABONBA_PTR_GET_DEFAULT(mnsEndpoint_, "") };
    inline SetMessageCallbackRequest& setMnsEndpoint(string mnsEndpoint) { DARABONBA_PTR_SET_VALUE(mnsEndpoint_, mnsEndpoint) };


    // mnsQueueName Field Functions 
    bool hasMnsQueueName() const { return this->mnsQueueName_ != nullptr;};
    void deleteMnsQueueName() { this->mnsQueueName_ = nullptr;};
    inline string getMnsQueueName() const { DARABONBA_PTR_GET_DEFAULT(mnsQueueName_, "") };
    inline SetMessageCallbackRequest& setMnsQueueName(string mnsQueueName) { DARABONBA_PTR_SET_VALUE(mnsQueueName_, mnsQueueName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SetMessageCallbackRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


  protected:
    // The application ID. If this parameter is not specified, the ID of the default application is used, which is the fixed value: **app-1000000**.
    shared_ptr<string> appId_ {};
    // The authentication key. The key can be up to 32 characters in length and must contain uppercase letters, lowercase letters, and digits. This parameter can be set when the callback method is **HTTP**.
    shared_ptr<string> authKey_ {};
    // The authentication switch for HTTP callbacks. This parameter takes effect only when the callback method is set to **HTTP**. Valid values:
    // - **on**: enabled.
    // - **off**: disabled.
    shared_ptr<string> authSwitch_ {};
    // The callback method. Valid values:
    // - **HTTP**
    // - **Simple Message Queue (formerly MNS)**
    shared_ptr<string> callbackType_ {};
    // The callback URL. This parameter is required when the callback method is set to **HTTP**.
    // The callback URL cannot exceed 256 bytes in length. Multiple callback URLs are not supported.
    shared_ptr<string> callbackURL_ {};
    // The event types for callbacks. If this parameter is left empty, all notifications are disabled. If this parameter is set to **ALL**, all notifications are enabled. You can also specify specific event types, separated by commas (,). For the valid event types, see [Event types](https://help.aliyun.com/document_detail/55627.html).
    // 
    // <props="china">
    // > All AI-related events such as AIMediaAuditComplete and AIMediaDNAComplete use the value **AIComplete**.
    shared_ptr<string> eventTypeList_ {};
    // The public endpoint of Simple Message Queue (formerly MNS). This parameter is required when the callback method is set to **Simple Message Queue (formerly MNS)**. Log on to the [Simple Message Queue (formerly MNS) console](https://account.aliyun.com/login/login.html) and click the **Get Endpoint** button in the upper-right corner to obtain the endpoint. For more information, see [Endpoint](https://help.aliyun.com/document_detail/27480.html).
    shared_ptr<string> mnsEndpoint_ {};
    // The name of the message queue. Log on to the [Simple Message Queue (formerly MNS) console](https://account.aliyun.com/login/login.html) and view the queue in the **Queue List**. This parameter is required when the callback method is set to **Simple Message Queue (formerly MNS)**.
    shared_ptr<string> mnsQueueName_ {};
    shared_ptr<string> ownerAccount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
