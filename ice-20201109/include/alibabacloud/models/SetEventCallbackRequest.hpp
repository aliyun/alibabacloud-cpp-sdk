// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETEVENTCALLBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETEVENTCALLBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SetEventCallbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetEventCallbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
      DARABONBA_PTR_TO_JSON(AuthSwitch, authSwitch_);
      DARABONBA_PTR_TO_JSON(CallbackQueueName, callbackQueueName_);
      DARABONBA_PTR_TO_JSON(CallbackType, callbackType_);
      DARABONBA_PTR_TO_JSON(CallbackURL, callbackURL_);
      DARABONBA_PTR_TO_JSON(EventTypeList, eventTypeList_);
    };
    friend void from_json(const Darabonba::Json& j, SetEventCallbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
      DARABONBA_PTR_FROM_JSON(AuthSwitch, authSwitch_);
      DARABONBA_PTR_FROM_JSON(CallbackQueueName, callbackQueueName_);
      DARABONBA_PTR_FROM_JSON(CallbackType, callbackType_);
      DARABONBA_PTR_FROM_JSON(CallbackURL, callbackURL_);
      DARABONBA_PTR_FROM_JSON(EventTypeList, eventTypeList_);
    };
    SetEventCallbackRequest() = default ;
    SetEventCallbackRequest(const SetEventCallbackRequest &) = default ;
    SetEventCallbackRequest(SetEventCallbackRequest &&) = default ;
    SetEventCallbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetEventCallbackRequest() = default ;
    SetEventCallbackRequest& operator=(const SetEventCallbackRequest &) = default ;
    SetEventCallbackRequest& operator=(SetEventCallbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authKey_ != nullptr
        && this->authSwitch_ != nullptr && this->callbackQueueName_ != nullptr && this->callbackType_ != nullptr && this->callbackURL_ != nullptr && this->eventTypeList_ != nullptr; };
    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string authKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline SetEventCallbackRequest& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


    // authSwitch Field Functions 
    bool hasAuthSwitch() const { return this->authSwitch_ != nullptr;};
    void deleteAuthSwitch() { this->authSwitch_ = nullptr;};
    inline string authSwitch() const { DARABONBA_PTR_GET_DEFAULT(authSwitch_, "") };
    inline SetEventCallbackRequest& setAuthSwitch(string authSwitch) { DARABONBA_PTR_SET_VALUE(authSwitch_, authSwitch) };


    // callbackQueueName Field Functions 
    bool hasCallbackQueueName() const { return this->callbackQueueName_ != nullptr;};
    void deleteCallbackQueueName() { this->callbackQueueName_ = nullptr;};
    inline string callbackQueueName() const { DARABONBA_PTR_GET_DEFAULT(callbackQueueName_, "") };
    inline SetEventCallbackRequest& setCallbackQueueName(string callbackQueueName) { DARABONBA_PTR_SET_VALUE(callbackQueueName_, callbackQueueName) };


    // callbackType Field Functions 
    bool hasCallbackType() const { return this->callbackType_ != nullptr;};
    void deleteCallbackType() { this->callbackType_ = nullptr;};
    inline string callbackType() const { DARABONBA_PTR_GET_DEFAULT(callbackType_, "") };
    inline SetEventCallbackRequest& setCallbackType(string callbackType) { DARABONBA_PTR_SET_VALUE(callbackType_, callbackType) };


    // callbackURL Field Functions 
    bool hasCallbackURL() const { return this->callbackURL_ != nullptr;};
    void deleteCallbackURL() { this->callbackURL_ = nullptr;};
    inline string callbackURL() const { DARABONBA_PTR_GET_DEFAULT(callbackURL_, "") };
    inline SetEventCallbackRequest& setCallbackURL(string callbackURL) { DARABONBA_PTR_SET_VALUE(callbackURL_, callbackURL) };


    // eventTypeList Field Functions 
    bool hasEventTypeList() const { return this->eventTypeList_ != nullptr;};
    void deleteEventTypeList() { this->eventTypeList_ = nullptr;};
    inline string eventTypeList() const { DARABONBA_PTR_GET_DEFAULT(eventTypeList_, "") };
    inline SetEventCallbackRequest& setEventTypeList(string eventTypeList) { DARABONBA_PTR_SET_VALUE(eventTypeList_, eventTypeList) };


  protected:
    // The authentication key. The key can be up to 32 characters in length and must contain uppercase letters, lowercase letters, and digits. This parameter takes effect only if you set CallbackType to **HTTP**.
    std::shared_ptr<string> authKey_ = nullptr;
    // Specifies whether to enable callback authentication. This parameter takes effect only if you set CallbackType to **HTTP**. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> authSwitch_ = nullptr;
    // The name of the Simple Message Queue (SMQ) queue in the region. The name must start with ice-callback-.
    std::shared_ptr<string> callbackQueueName_ = nullptr;
    // The callback method. Valid values:
    // 
    // *   **HTTP**
    // *   **MNS**
    std::shared_ptr<string> callbackType_ = nullptr;
    // The callback URL. This parameter is required if you set CallbackType to **HTTP**. The callback URL cannot exceed 256 bytes in length. You can specify only one callback URL.
    std::shared_ptr<string> callbackURL_ = nullptr;
    // The type of the callback event. You can specify multiple values separated with commas (,). ProduceMediaComplete: indicates that the editing and production task is complete.
    std::shared_ptr<string> eventTypeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
