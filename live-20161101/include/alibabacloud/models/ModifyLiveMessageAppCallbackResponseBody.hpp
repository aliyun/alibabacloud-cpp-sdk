// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEAPPCALLBACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEAPPCALLBACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyLiveMessageAppCallbackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLiveMessageAppCallbackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppSign, appSign_);
      DARABONBA_PTR_TO_JSON(EventCallbackNeedAuthentication, eventCallbackNeedAuthentication_);
      DARABONBA_PTR_TO_JSON(EventCallbackUrl, eventCallbackUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLiveMessageAppCallbackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppSign, appSign_);
      DARABONBA_PTR_FROM_JSON(EventCallbackNeedAuthentication, eventCallbackNeedAuthentication_);
      DARABONBA_PTR_FROM_JSON(EventCallbackUrl, eventCallbackUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyLiveMessageAppCallbackResponseBody() = default ;
    ModifyLiveMessageAppCallbackResponseBody(const ModifyLiveMessageAppCallbackResponseBody &) = default ;
    ModifyLiveMessageAppCallbackResponseBody(ModifyLiveMessageAppCallbackResponseBody &&) = default ;
    ModifyLiveMessageAppCallbackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLiveMessageAppCallbackResponseBody() = default ;
    ModifyLiveMessageAppCallbackResponseBody& operator=(const ModifyLiveMessageAppCallbackResponseBody &) = default ;
    ModifyLiveMessageAppCallbackResponseBody& operator=(ModifyLiveMessageAppCallbackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appSign_ != nullptr && this->eventCallbackNeedAuthentication_ != nullptr && this->eventCallbackUrl_ != nullptr && this->requestId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyLiveMessageAppCallbackResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appSign Field Functions 
    bool hasAppSign() const { return this->appSign_ != nullptr;};
    void deleteAppSign() { this->appSign_ = nullptr;};
    inline string appSign() const { DARABONBA_PTR_GET_DEFAULT(appSign_, "") };
    inline ModifyLiveMessageAppCallbackResponseBody& setAppSign(string appSign) { DARABONBA_PTR_SET_VALUE(appSign_, appSign) };


    // eventCallbackNeedAuthentication Field Functions 
    bool hasEventCallbackNeedAuthentication() const { return this->eventCallbackNeedAuthentication_ != nullptr;};
    void deleteEventCallbackNeedAuthentication() { this->eventCallbackNeedAuthentication_ = nullptr;};
    inline bool eventCallbackNeedAuthentication() const { DARABONBA_PTR_GET_DEFAULT(eventCallbackNeedAuthentication_, false) };
    inline ModifyLiveMessageAppCallbackResponseBody& setEventCallbackNeedAuthentication(bool eventCallbackNeedAuthentication) { DARABONBA_PTR_SET_VALUE(eventCallbackNeedAuthentication_, eventCallbackNeedAuthentication) };


    // eventCallbackUrl Field Functions 
    bool hasEventCallbackUrl() const { return this->eventCallbackUrl_ != nullptr;};
    void deleteEventCallbackUrl() { this->eventCallbackUrl_ = nullptr;};
    inline string eventCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(eventCallbackUrl_, "") };
    inline ModifyLiveMessageAppCallbackResponseBody& setEventCallbackUrl(string eventCallbackUrl) { DARABONBA_PTR_SET_VALUE(eventCallbackUrl_, eventCallbackUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyLiveMessageAppCallbackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the interactive messaging application.
    std::shared_ptr<string> appId_ = nullptr;
    // The signature of the interactive messaging application. It is required by the interactive messaging SDK.
    std::shared_ptr<string> appSign_ = nullptr;
    // Indicates whether authentication is required for event callbacks. Default value: true.
    std::shared_ptr<bool> eventCallbackNeedAuthentication_ = nullptr;
    // The callback URL for events such as user logon, logoff, joining a group, and leaving a group. This parameter is not returned if it has an empty value.
    std::shared_ptr<string> eventCallbackUrl_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
