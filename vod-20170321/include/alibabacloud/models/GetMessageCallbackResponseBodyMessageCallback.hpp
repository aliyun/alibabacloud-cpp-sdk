// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGECALLBACKRESPONSEBODYMESSAGECALLBACK_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGECALLBACKRESPONSEBODYMESSAGECALLBACK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMessageCallbackResponseBodyMessageCallback : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageCallbackResponseBodyMessageCallback& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
      DARABONBA_PTR_TO_JSON(AuthSwitch, authSwitch_);
      DARABONBA_PTR_TO_JSON(CallbackType, callbackType_);
      DARABONBA_PTR_TO_JSON(CallbackURL, callbackURL_);
      DARABONBA_PTR_TO_JSON(EventTypeList, eventTypeList_);
      DARABONBA_PTR_TO_JSON(MnsEndpoint, mnsEndpoint_);
      DARABONBA_PTR_TO_JSON(MnsQueueName, mnsQueueName_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageCallbackResponseBodyMessageCallback& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
      DARABONBA_PTR_FROM_JSON(AuthSwitch, authSwitch_);
      DARABONBA_PTR_FROM_JSON(CallbackType, callbackType_);
      DARABONBA_PTR_FROM_JSON(CallbackURL, callbackURL_);
      DARABONBA_PTR_FROM_JSON(EventTypeList, eventTypeList_);
      DARABONBA_PTR_FROM_JSON(MnsEndpoint, mnsEndpoint_);
      DARABONBA_PTR_FROM_JSON(MnsQueueName, mnsQueueName_);
    };
    GetMessageCallbackResponseBodyMessageCallback() = default ;
    GetMessageCallbackResponseBodyMessageCallback(const GetMessageCallbackResponseBodyMessageCallback &) = default ;
    GetMessageCallbackResponseBodyMessageCallback(GetMessageCallbackResponseBodyMessageCallback &&) = default ;
    GetMessageCallbackResponseBodyMessageCallback(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageCallbackResponseBodyMessageCallback() = default ;
    GetMessageCallbackResponseBodyMessageCallback& operator=(const GetMessageCallbackResponseBodyMessageCallback &) = default ;
    GetMessageCallbackResponseBodyMessageCallback& operator=(GetMessageCallbackResponseBodyMessageCallback &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->authKey_ == nullptr && return this->authSwitch_ == nullptr && return this->callbackType_ == nullptr && return this->callbackURL_ == nullptr && return this->eventTypeList_ == nullptr
        && return this->mnsEndpoint_ == nullptr && return this->mnsQueueName_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetMessageCallbackResponseBodyMessageCallback& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string authKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline GetMessageCallbackResponseBodyMessageCallback& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


    // authSwitch Field Functions 
    bool hasAuthSwitch() const { return this->authSwitch_ != nullptr;};
    void deleteAuthSwitch() { this->authSwitch_ = nullptr;};
    inline string authSwitch() const { DARABONBA_PTR_GET_DEFAULT(authSwitch_, "") };
    inline GetMessageCallbackResponseBodyMessageCallback& setAuthSwitch(string authSwitch) { DARABONBA_PTR_SET_VALUE(authSwitch_, authSwitch) };


    // callbackType Field Functions 
    bool hasCallbackType() const { return this->callbackType_ != nullptr;};
    void deleteCallbackType() { this->callbackType_ = nullptr;};
    inline string callbackType() const { DARABONBA_PTR_GET_DEFAULT(callbackType_, "") };
    inline GetMessageCallbackResponseBodyMessageCallback& setCallbackType(string callbackType) { DARABONBA_PTR_SET_VALUE(callbackType_, callbackType) };


    // callbackURL Field Functions 
    bool hasCallbackURL() const { return this->callbackURL_ != nullptr;};
    void deleteCallbackURL() { this->callbackURL_ = nullptr;};
    inline string callbackURL() const { DARABONBA_PTR_GET_DEFAULT(callbackURL_, "") };
    inline GetMessageCallbackResponseBodyMessageCallback& setCallbackURL(string callbackURL) { DARABONBA_PTR_SET_VALUE(callbackURL_, callbackURL) };


    // eventTypeList Field Functions 
    bool hasEventTypeList() const { return this->eventTypeList_ != nullptr;};
    void deleteEventTypeList() { this->eventTypeList_ = nullptr;};
    inline string eventTypeList() const { DARABONBA_PTR_GET_DEFAULT(eventTypeList_, "") };
    inline GetMessageCallbackResponseBodyMessageCallback& setEventTypeList(string eventTypeList) { DARABONBA_PTR_SET_VALUE(eventTypeList_, eventTypeList) };


    // mnsEndpoint Field Functions 
    bool hasMnsEndpoint() const { return this->mnsEndpoint_ != nullptr;};
    void deleteMnsEndpoint() { this->mnsEndpoint_ = nullptr;};
    inline string mnsEndpoint() const { DARABONBA_PTR_GET_DEFAULT(mnsEndpoint_, "") };
    inline GetMessageCallbackResponseBodyMessageCallback& setMnsEndpoint(string mnsEndpoint) { DARABONBA_PTR_SET_VALUE(mnsEndpoint_, mnsEndpoint) };


    // mnsQueueName Field Functions 
    bool hasMnsQueueName() const { return this->mnsQueueName_ != nullptr;};
    void deleteMnsQueueName() { this->mnsQueueName_ = nullptr;};
    inline string mnsQueueName() const { DARABONBA_PTR_GET_DEFAULT(mnsQueueName_, "") };
    inline GetMessageCallbackResponseBodyMessageCallback& setMnsQueueName(string mnsQueueName) { DARABONBA_PTR_SET_VALUE(mnsQueueName_, mnsQueueName) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The cryptographic key. This parameter is returned only for HTTP callbacks.
    std::shared_ptr<string> authKey_ = nullptr;
    // Indicates whether callback authentication is enabled. This parameter is returned only for HTTP callbacks. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> authSwitch_ = nullptr;
    // The callback method. Valid values:
    // 
    // *   **HTTP**
    // *   **MNS**
    std::shared_ptr<string> callbackType_ = nullptr;
    // The callback URL. This parameter is returned only for HTTP callbacks.
    std::shared_ptr<string> callbackURL_ = nullptr;
    // The type of the callback event.
    std::shared_ptr<string> eventTypeList_ = nullptr;
    // The public endpoint of MNS. This parameter is returned only for MNS callbacks.
    std::shared_ptr<string> mnsEndpoint_ = nullptr;
    // The name of the Message Service (MNS) queue. This parameter is returned only for MNS callbacks.
    std::shared_ptr<string> mnsQueueName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
