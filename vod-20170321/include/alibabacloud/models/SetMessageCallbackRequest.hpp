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
        && return this->authKey_ == nullptr && return this->authSwitch_ == nullptr && return this->callbackType_ == nullptr && return this->callbackURL_ == nullptr && return this->eventTypeList_ == nullptr
        && return this->mnsEndpoint_ == nullptr && return this->mnsQueueName_ == nullptr && return this->ownerAccount_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SetMessageCallbackRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string authKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline SetMessageCallbackRequest& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


    // authSwitch Field Functions 
    bool hasAuthSwitch() const { return this->authSwitch_ != nullptr;};
    void deleteAuthSwitch() { this->authSwitch_ = nullptr;};
    inline string authSwitch() const { DARABONBA_PTR_GET_DEFAULT(authSwitch_, "") };
    inline SetMessageCallbackRequest& setAuthSwitch(string authSwitch) { DARABONBA_PTR_SET_VALUE(authSwitch_, authSwitch) };


    // callbackType Field Functions 
    bool hasCallbackType() const { return this->callbackType_ != nullptr;};
    void deleteCallbackType() { this->callbackType_ = nullptr;};
    inline string callbackType() const { DARABONBA_PTR_GET_DEFAULT(callbackType_, "") };
    inline SetMessageCallbackRequest& setCallbackType(string callbackType) { DARABONBA_PTR_SET_VALUE(callbackType_, callbackType) };


    // callbackURL Field Functions 
    bool hasCallbackURL() const { return this->callbackURL_ != nullptr;};
    void deleteCallbackURL() { this->callbackURL_ = nullptr;};
    inline string callbackURL() const { DARABONBA_PTR_GET_DEFAULT(callbackURL_, "") };
    inline SetMessageCallbackRequest& setCallbackURL(string callbackURL) { DARABONBA_PTR_SET_VALUE(callbackURL_, callbackURL) };


    // eventTypeList Field Functions 
    bool hasEventTypeList() const { return this->eventTypeList_ != nullptr;};
    void deleteEventTypeList() { this->eventTypeList_ = nullptr;};
    inline string eventTypeList() const { DARABONBA_PTR_GET_DEFAULT(eventTypeList_, "") };
    inline SetMessageCallbackRequest& setEventTypeList(string eventTypeList) { DARABONBA_PTR_SET_VALUE(eventTypeList_, eventTypeList) };


    // mnsEndpoint Field Functions 
    bool hasMnsEndpoint() const { return this->mnsEndpoint_ != nullptr;};
    void deleteMnsEndpoint() { this->mnsEndpoint_ = nullptr;};
    inline string mnsEndpoint() const { DARABONBA_PTR_GET_DEFAULT(mnsEndpoint_, "") };
    inline SetMessageCallbackRequest& setMnsEndpoint(string mnsEndpoint) { DARABONBA_PTR_SET_VALUE(mnsEndpoint_, mnsEndpoint) };


    // mnsQueueName Field Functions 
    bool hasMnsQueueName() const { return this->mnsQueueName_ != nullptr;};
    void deleteMnsQueueName() { this->mnsQueueName_ = nullptr;};
    inline string mnsQueueName() const { DARABONBA_PTR_GET_DEFAULT(mnsQueueName_, "") };
    inline SetMessageCallbackRequest& setMnsQueueName(string mnsQueueName) { DARABONBA_PTR_SET_VALUE(mnsQueueName_, mnsQueueName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SetMessageCallbackRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


  protected:
    // The ID of the application. If you leave this parameter empty, the default value **app-1000000** is used.
    std::shared_ptr<string> appId_ = nullptr;
    // The authentication key. The key can be up to 32 characters in length and must contain uppercase letters, lowercase letters, and digits. This parameter takes effect only when you set CallbackType to **HTTP**.
    std::shared_ptr<string> authKey_ = nullptr;
    // Specifies whether to enable callback authentication. This parameter takes effect only when you set CallbackType to **HTTP**. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> authSwitch_ = nullptr;
    // The callback method. Valid values:
    // 
    // *   **HTTP**
    // *   **Simple Message Queue(formerly MNS)**
    std::shared_ptr<string> callbackType_ = nullptr;
    // The callback URL. This parameter is required if you set CallbackType to **HTTP**. The callback URL cannot exceed 256 bytes in length. You can specify only one callback URL.
    std::shared_ptr<string> callbackURL_ = nullptr;
    // The type of the callback event. If you do not set this parameter, notifications for all types of events are disabled. If you set this parameter to **ALL**, notifications for all types of events are enabled. You can specify the event types for which notifications are enabled. Separate multiple event types with commas (,). For more information about the valid values of this parameter, see [Overview](https://help.aliyun.com/document_detail/55627.html).
    std::shared_ptr<string> eventTypeList_ = nullptr;
    // The public endpoint of Message Service (MNS). This parameter only takes effect when the CallbackType parameter is set to **Simple Message Queue(formerly MNS)**. To obtain the public endpoint, log on to the [Simple Message Queue(formerly MNS) console](https://account.aliyun.com/login/login.html) and click **Get Endpoint** in the upper-right corner of the Topics page. For more information, see [Endpoint](https://help.aliyun.com/document_detail/27480.html).
    std::shared_ptr<string> mnsEndpoint_ = nullptr;
    // The name of the Simple Message Queue(formerly MNS). You can obtain the name of the Simple Message Queue(formerly MNS) on the **Queues** page in the [Simple Message Queue(formerly MNS) console](https://account.aliyun.com/login/login.html). This parameter is required when you set CallbackType to **Simple Message Queue(formerly MNS)**.
    std::shared_ptr<string> mnsQueueName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
