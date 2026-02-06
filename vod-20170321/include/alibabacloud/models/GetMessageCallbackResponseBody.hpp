// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGECALLBACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGECALLBACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMessageCallbackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageCallbackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MessageCallback, messageCallback_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageCallbackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageCallback, messageCallback_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMessageCallbackResponseBody() = default ;
    GetMessageCallbackResponseBody(const GetMessageCallbackResponseBody &) = default ;
    GetMessageCallbackResponseBody(GetMessageCallbackResponseBody &&) = default ;
    GetMessageCallbackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageCallbackResponseBody() = default ;
    GetMessageCallbackResponseBody& operator=(const GetMessageCallbackResponseBody &) = default ;
    GetMessageCallbackResponseBody& operator=(GetMessageCallbackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MessageCallback : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MessageCallback& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
        DARABONBA_PTR_TO_JSON(AuthSwitch, authSwitch_);
        DARABONBA_PTR_TO_JSON(CallbackType, callbackType_);
        DARABONBA_PTR_TO_JSON(CallbackURL, callbackURL_);
        DARABONBA_PTR_TO_JSON(EventTypeList, eventTypeList_);
        DARABONBA_PTR_TO_JSON(MnsEndpoint, mnsEndpoint_);
        DARABONBA_PTR_TO_JSON(MnsQueueName, mnsQueueName_);
      };
      friend void from_json(const Darabonba::Json& j, MessageCallback& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
        DARABONBA_PTR_FROM_JSON(AuthSwitch, authSwitch_);
        DARABONBA_PTR_FROM_JSON(CallbackType, callbackType_);
        DARABONBA_PTR_FROM_JSON(CallbackURL, callbackURL_);
        DARABONBA_PTR_FROM_JSON(EventTypeList, eventTypeList_);
        DARABONBA_PTR_FROM_JSON(MnsEndpoint, mnsEndpoint_);
        DARABONBA_PTR_FROM_JSON(MnsQueueName, mnsQueueName_);
      };
      MessageCallback() = default ;
      MessageCallback(const MessageCallback &) = default ;
      MessageCallback(MessageCallback &&) = default ;
      MessageCallback(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MessageCallback() = default ;
      MessageCallback& operator=(const MessageCallback &) = default ;
      MessageCallback& operator=(MessageCallback &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->authKey_ == nullptr && this->authSwitch_ == nullptr && this->callbackType_ == nullptr && this->callbackURL_ == nullptr && this->eventTypeList_ == nullptr
        && this->mnsEndpoint_ == nullptr && this->mnsQueueName_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline MessageCallback& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // authKey Field Functions 
      bool hasAuthKey() const { return this->authKey_ != nullptr;};
      void deleteAuthKey() { this->authKey_ = nullptr;};
      inline string getAuthKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
      inline MessageCallback& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


      // authSwitch Field Functions 
      bool hasAuthSwitch() const { return this->authSwitch_ != nullptr;};
      void deleteAuthSwitch() { this->authSwitch_ = nullptr;};
      inline string getAuthSwitch() const { DARABONBA_PTR_GET_DEFAULT(authSwitch_, "") };
      inline MessageCallback& setAuthSwitch(string authSwitch) { DARABONBA_PTR_SET_VALUE(authSwitch_, authSwitch) };


      // callbackType Field Functions 
      bool hasCallbackType() const { return this->callbackType_ != nullptr;};
      void deleteCallbackType() { this->callbackType_ = nullptr;};
      inline string getCallbackType() const { DARABONBA_PTR_GET_DEFAULT(callbackType_, "") };
      inline MessageCallback& setCallbackType(string callbackType) { DARABONBA_PTR_SET_VALUE(callbackType_, callbackType) };


      // callbackURL Field Functions 
      bool hasCallbackURL() const { return this->callbackURL_ != nullptr;};
      void deleteCallbackURL() { this->callbackURL_ = nullptr;};
      inline string getCallbackURL() const { DARABONBA_PTR_GET_DEFAULT(callbackURL_, "") };
      inline MessageCallback& setCallbackURL(string callbackURL) { DARABONBA_PTR_SET_VALUE(callbackURL_, callbackURL) };


      // eventTypeList Field Functions 
      bool hasEventTypeList() const { return this->eventTypeList_ != nullptr;};
      void deleteEventTypeList() { this->eventTypeList_ = nullptr;};
      inline string getEventTypeList() const { DARABONBA_PTR_GET_DEFAULT(eventTypeList_, "") };
      inline MessageCallback& setEventTypeList(string eventTypeList) { DARABONBA_PTR_SET_VALUE(eventTypeList_, eventTypeList) };


      // mnsEndpoint Field Functions 
      bool hasMnsEndpoint() const { return this->mnsEndpoint_ != nullptr;};
      void deleteMnsEndpoint() { this->mnsEndpoint_ = nullptr;};
      inline string getMnsEndpoint() const { DARABONBA_PTR_GET_DEFAULT(mnsEndpoint_, "") };
      inline MessageCallback& setMnsEndpoint(string mnsEndpoint) { DARABONBA_PTR_SET_VALUE(mnsEndpoint_, mnsEndpoint) };


      // mnsQueueName Field Functions 
      bool hasMnsQueueName() const { return this->mnsQueueName_ != nullptr;};
      void deleteMnsQueueName() { this->mnsQueueName_ = nullptr;};
      inline string getMnsQueueName() const { DARABONBA_PTR_GET_DEFAULT(mnsQueueName_, "") };
      inline MessageCallback& setMnsQueueName(string mnsQueueName) { DARABONBA_PTR_SET_VALUE(mnsQueueName_, mnsQueueName) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // The cryptographic key. This parameter is returned only for HTTP callbacks.
      shared_ptr<string> authKey_ {};
      // Indicates whether callback authentication is enabled. This parameter is returned only for HTTP callbacks. Valid values:
      // 
      // *   **on**
      // *   **off**
      shared_ptr<string> authSwitch_ {};
      // The callback method. Valid values:
      // 
      // *   **HTTP**
      // *   **MNS**
      shared_ptr<string> callbackType_ {};
      // The callback URL. This parameter is returned only for HTTP callbacks.
      shared_ptr<string> callbackURL_ {};
      // The type of the callback event.
      shared_ptr<string> eventTypeList_ {};
      // The public endpoint of MNS. This parameter is returned only for MNS callbacks.
      shared_ptr<string> mnsEndpoint_ {};
      // The name of the Message Service (MNS) queue. This parameter is returned only for MNS callbacks.
      shared_ptr<string> mnsQueueName_ {};
    };

    virtual bool empty() const override { return this->messageCallback_ == nullptr
        && this->requestId_ == nullptr; };
    // messageCallback Field Functions 
    bool hasMessageCallback() const { return this->messageCallback_ != nullptr;};
    void deleteMessageCallback() { this->messageCallback_ = nullptr;};
    inline const GetMessageCallbackResponseBody::MessageCallback & getMessageCallback() const { DARABONBA_PTR_GET_CONST(messageCallback_, GetMessageCallbackResponseBody::MessageCallback) };
    inline GetMessageCallbackResponseBody::MessageCallback getMessageCallback() { DARABONBA_PTR_GET(messageCallback_, GetMessageCallbackResponseBody::MessageCallback) };
    inline GetMessageCallbackResponseBody& setMessageCallback(const GetMessageCallbackResponseBody::MessageCallback & messageCallback) { DARABONBA_PTR_SET_VALUE(messageCallback_, messageCallback) };
    inline GetMessageCallbackResponseBody& setMessageCallback(GetMessageCallbackResponseBody::MessageCallback && messageCallback) { DARABONBA_PTR_SET_RVALUE(messageCallback_, messageCallback) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMessageCallbackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration of the event notification.
    shared_ptr<GetMessageCallbackResponseBody::MessageCallback> messageCallback_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
