// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTCALLBACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTCALLBACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetEventCallbackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventCallbackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
      DARABONBA_PTR_TO_JSON(AuthSwitch, authSwitch_);
      DARABONBA_PTR_TO_JSON(CallbackQueueName, callbackQueueName_);
      DARABONBA_PTR_TO_JSON(CallbackType, callbackType_);
      DARABONBA_PTR_TO_JSON(CallbackURL, callbackURL_);
      DARABONBA_PTR_TO_JSON(EventTypeList, eventTypeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventCallbackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
      DARABONBA_PTR_FROM_JSON(AuthSwitch, authSwitch_);
      DARABONBA_PTR_FROM_JSON(CallbackQueueName, callbackQueueName_);
      DARABONBA_PTR_FROM_JSON(CallbackType, callbackType_);
      DARABONBA_PTR_FROM_JSON(CallbackURL, callbackURL_);
      DARABONBA_PTR_FROM_JSON(EventTypeList, eventTypeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetEventCallbackResponseBody() = default ;
    GetEventCallbackResponseBody(const GetEventCallbackResponseBody &) = default ;
    GetEventCallbackResponseBody(GetEventCallbackResponseBody &&) = default ;
    GetEventCallbackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventCallbackResponseBody() = default ;
    GetEventCallbackResponseBody& operator=(const GetEventCallbackResponseBody &) = default ;
    GetEventCallbackResponseBody& operator=(GetEventCallbackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authKey_ != nullptr
        && this->authSwitch_ != nullptr && this->callbackQueueName_ != nullptr && this->callbackType_ != nullptr && this->callbackURL_ != nullptr && this->eventTypeList_ != nullptr
        && this->requestId_ != nullptr; };
    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string authKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline GetEventCallbackResponseBody& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


    // authSwitch Field Functions 
    bool hasAuthSwitch() const { return this->authSwitch_ != nullptr;};
    void deleteAuthSwitch() { this->authSwitch_ = nullptr;};
    inline string authSwitch() const { DARABONBA_PTR_GET_DEFAULT(authSwitch_, "") };
    inline GetEventCallbackResponseBody& setAuthSwitch(string authSwitch) { DARABONBA_PTR_SET_VALUE(authSwitch_, authSwitch) };


    // callbackQueueName Field Functions 
    bool hasCallbackQueueName() const { return this->callbackQueueName_ != nullptr;};
    void deleteCallbackQueueName() { this->callbackQueueName_ = nullptr;};
    inline string callbackQueueName() const { DARABONBA_PTR_GET_DEFAULT(callbackQueueName_, "") };
    inline GetEventCallbackResponseBody& setCallbackQueueName(string callbackQueueName) { DARABONBA_PTR_SET_VALUE(callbackQueueName_, callbackQueueName) };


    // callbackType Field Functions 
    bool hasCallbackType() const { return this->callbackType_ != nullptr;};
    void deleteCallbackType() { this->callbackType_ = nullptr;};
    inline string callbackType() const { DARABONBA_PTR_GET_DEFAULT(callbackType_, "") };
    inline GetEventCallbackResponseBody& setCallbackType(string callbackType) { DARABONBA_PTR_SET_VALUE(callbackType_, callbackType) };


    // callbackURL Field Functions 
    bool hasCallbackURL() const { return this->callbackURL_ != nullptr;};
    void deleteCallbackURL() { this->callbackURL_ = nullptr;};
    inline string callbackURL() const { DARABONBA_PTR_GET_DEFAULT(callbackURL_, "") };
    inline GetEventCallbackResponseBody& setCallbackURL(string callbackURL) { DARABONBA_PTR_SET_VALUE(callbackURL_, callbackURL) };


    // eventTypeList Field Functions 
    bool hasEventTypeList() const { return this->eventTypeList_ != nullptr;};
    void deleteEventTypeList() { this->eventTypeList_ = nullptr;};
    inline string eventTypeList() const { DARABONBA_PTR_GET_DEFAULT(eventTypeList_, "") };
    inline GetEventCallbackResponseBody& setEventTypeList(string eventTypeList) { DARABONBA_PTR_SET_VALUE(eventTypeList_, eventTypeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEventCallbackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The authentication key. This parameter is returned only for HTTP callbacks.
    std::shared_ptr<string> authKey_ = nullptr;
    // Specifies whether callback authentication is enabled. This parameter is returned only for **HTTP** callbacks. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> authSwitch_ = nullptr;
    // The name of the Simple Message Queue (SMQ) queue to which callback messages are sent.
    std::shared_ptr<string> callbackQueueName_ = nullptr;
    // The callback method. Valid values:
    // 
    // *   **HTTP**
    // *   **MNS**
    std::shared_ptr<string> callbackType_ = nullptr;
    // The callback URL to which event notifications are sent.
    std::shared_ptr<string> callbackURL_ = nullptr;
    // The type of the callback event. Multiple values are separated with commas (,). For more information about callback event types, see [Event notification content](https://help.aliyun.com/document_detail/610204.html).
    std::shared_ptr<string> eventTypeList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
