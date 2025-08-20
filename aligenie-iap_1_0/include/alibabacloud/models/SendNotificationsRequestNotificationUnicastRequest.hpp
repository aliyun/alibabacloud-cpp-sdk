// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDNOTIFICATIONSREQUESTNOTIFICATIONUNICASTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDNOTIFICATIONSREQUESTNOTIFICATIONUNICASTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/SendNotificationsRequestNotificationUnicastRequestSendTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class SendNotificationsRequestNotificationUnicastRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendNotificationsRequestNotificationUnicastRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsDebug, isDebug_);
      DARABONBA_PTR_TO_JSON(MessageTemplateId, messageTemplateId_);
      DARABONBA_PTR_TO_JSON(PlaceHolder, placeHolder_);
      DARABONBA_PTR_TO_JSON(SendTarget, sendTarget_);
    };
    friend void from_json(const Darabonba::Json& j, SendNotificationsRequestNotificationUnicastRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsDebug, isDebug_);
      DARABONBA_PTR_FROM_JSON(MessageTemplateId, messageTemplateId_);
      DARABONBA_PTR_FROM_JSON(PlaceHolder, placeHolder_);
      DARABONBA_PTR_FROM_JSON(SendTarget, sendTarget_);
    };
    SendNotificationsRequestNotificationUnicastRequest() = default ;
    SendNotificationsRequestNotificationUnicastRequest(const SendNotificationsRequestNotificationUnicastRequest &) = default ;
    SendNotificationsRequestNotificationUnicastRequest(SendNotificationsRequestNotificationUnicastRequest &&) = default ;
    SendNotificationsRequestNotificationUnicastRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendNotificationsRequestNotificationUnicastRequest() = default ;
    SendNotificationsRequestNotificationUnicastRequest& operator=(const SendNotificationsRequestNotificationUnicastRequest &) = default ;
    SendNotificationsRequestNotificationUnicastRequest& operator=(SendNotificationsRequestNotificationUnicastRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isDebug_ != nullptr
        && this->messageTemplateId_ != nullptr && this->placeHolder_ != nullptr && this->sendTarget_ != nullptr; };
    // isDebug Field Functions 
    bool hasIsDebug() const { return this->isDebug_ != nullptr;};
    void deleteIsDebug() { this->isDebug_ = nullptr;};
    inline bool isDebug() const { DARABONBA_PTR_GET_DEFAULT(isDebug_, false) };
    inline SendNotificationsRequestNotificationUnicastRequest& setIsDebug(bool isDebug) { DARABONBA_PTR_SET_VALUE(isDebug_, isDebug) };


    // messageTemplateId Field Functions 
    bool hasMessageTemplateId() const { return this->messageTemplateId_ != nullptr;};
    void deleteMessageTemplateId() { this->messageTemplateId_ = nullptr;};
    inline string messageTemplateId() const { DARABONBA_PTR_GET_DEFAULT(messageTemplateId_, "") };
    inline SendNotificationsRequestNotificationUnicastRequest& setMessageTemplateId(string messageTemplateId) { DARABONBA_PTR_SET_VALUE(messageTemplateId_, messageTemplateId) };


    // placeHolder Field Functions 
    bool hasPlaceHolder() const { return this->placeHolder_ != nullptr;};
    void deletePlaceHolder() { this->placeHolder_ = nullptr;};
    inline const map<string, string> & placeHolder() const { DARABONBA_PTR_GET_CONST(placeHolder_, map<string, string>) };
    inline map<string, string> placeHolder() { DARABONBA_PTR_GET(placeHolder_, map<string, string>) };
    inline SendNotificationsRequestNotificationUnicastRequest& setPlaceHolder(const map<string, string> & placeHolder) { DARABONBA_PTR_SET_VALUE(placeHolder_, placeHolder) };
    inline SendNotificationsRequestNotificationUnicastRequest& setPlaceHolder(map<string, string> && placeHolder) { DARABONBA_PTR_SET_RVALUE(placeHolder_, placeHolder) };


    // sendTarget Field Functions 
    bool hasSendTarget() const { return this->sendTarget_ != nullptr;};
    void deleteSendTarget() { this->sendTarget_ = nullptr;};
    inline const Models::SendNotificationsRequestNotificationUnicastRequestSendTarget & sendTarget() const { DARABONBA_PTR_GET_CONST(sendTarget_, Models::SendNotificationsRequestNotificationUnicastRequestSendTarget) };
    inline Models::SendNotificationsRequestNotificationUnicastRequestSendTarget sendTarget() { DARABONBA_PTR_GET(sendTarget_, Models::SendNotificationsRequestNotificationUnicastRequestSendTarget) };
    inline SendNotificationsRequestNotificationUnicastRequest& setSendTarget(const Models::SendNotificationsRequestNotificationUnicastRequestSendTarget & sendTarget) { DARABONBA_PTR_SET_VALUE(sendTarget_, sendTarget) };
    inline SendNotificationsRequestNotificationUnicastRequest& setSendTarget(Models::SendNotificationsRequestNotificationUnicastRequestSendTarget && sendTarget) { DARABONBA_PTR_SET_RVALUE(sendTarget_, sendTarget) };


  protected:
    std::shared_ptr<bool> isDebug_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> messageTemplateId_ = nullptr;
    std::shared_ptr<map<string, string>> placeHolder_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::SendNotificationsRequestNotificationUnicastRequestSendTarget> sendTarget_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
