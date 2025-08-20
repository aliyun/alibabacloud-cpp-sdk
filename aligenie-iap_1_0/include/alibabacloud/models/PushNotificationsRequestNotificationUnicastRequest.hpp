// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHNOTIFICATIONSREQUESTNOTIFICATIONUNICASTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHNOTIFICATIONSREQUESTNOTIFICATIONUNICASTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/PushNotificationsRequestNotificationUnicastRequestSendTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class PushNotificationsRequestNotificationUnicastRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushNotificationsRequestNotificationUnicastRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_TO_JSON(IsDebug, isDebug_);
      DARABONBA_PTR_TO_JSON(MessageTemplateId, messageTemplateId_);
      DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(PlaceHolder, placeHolder_);
      DARABONBA_PTR_TO_JSON(SendTarget, sendTarget_);
    };
    friend void from_json(const Darabonba::Json& j, PushNotificationsRequestNotificationUnicastRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_FROM_JSON(IsDebug, isDebug_);
      DARABONBA_PTR_FROM_JSON(MessageTemplateId, messageTemplateId_);
      DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(PlaceHolder, placeHolder_);
      DARABONBA_PTR_FROM_JSON(SendTarget, sendTarget_);
    };
    PushNotificationsRequestNotificationUnicastRequest() = default ;
    PushNotificationsRequestNotificationUnicastRequest(const PushNotificationsRequestNotificationUnicastRequest &) = default ;
    PushNotificationsRequestNotificationUnicastRequest(PushNotificationsRequestNotificationUnicastRequest &&) = default ;
    PushNotificationsRequestNotificationUnicastRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushNotificationsRequestNotificationUnicastRequest() = default ;
    PushNotificationsRequestNotificationUnicastRequest& operator=(const PushNotificationsRequestNotificationUnicastRequest &) = default ;
    PushNotificationsRequestNotificationUnicastRequest& operator=(PushNotificationsRequestNotificationUnicastRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encodeKey_ != nullptr
        && this->encodeType_ != nullptr && this->isDebug_ != nullptr && this->messageTemplateId_ != nullptr && this->organizationId_ != nullptr && this->placeHolder_ != nullptr
        && this->sendTarget_ != nullptr; };
    // encodeKey Field Functions 
    bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
    void deleteEncodeKey() { this->encodeKey_ = nullptr;};
    inline string encodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
    inline PushNotificationsRequestNotificationUnicastRequest& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


    // encodeType Field Functions 
    bool hasEncodeType() const { return this->encodeType_ != nullptr;};
    void deleteEncodeType() { this->encodeType_ = nullptr;};
    inline string encodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
    inline PushNotificationsRequestNotificationUnicastRequest& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


    // isDebug Field Functions 
    bool hasIsDebug() const { return this->isDebug_ != nullptr;};
    void deleteIsDebug() { this->isDebug_ = nullptr;};
    inline bool isDebug() const { DARABONBA_PTR_GET_DEFAULT(isDebug_, false) };
    inline PushNotificationsRequestNotificationUnicastRequest& setIsDebug(bool isDebug) { DARABONBA_PTR_SET_VALUE(isDebug_, isDebug) };


    // messageTemplateId Field Functions 
    bool hasMessageTemplateId() const { return this->messageTemplateId_ != nullptr;};
    void deleteMessageTemplateId() { this->messageTemplateId_ = nullptr;};
    inline string messageTemplateId() const { DARABONBA_PTR_GET_DEFAULT(messageTemplateId_, "") };
    inline PushNotificationsRequestNotificationUnicastRequest& setMessageTemplateId(string messageTemplateId) { DARABONBA_PTR_SET_VALUE(messageTemplateId_, messageTemplateId) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline PushNotificationsRequestNotificationUnicastRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // placeHolder Field Functions 
    bool hasPlaceHolder() const { return this->placeHolder_ != nullptr;};
    void deletePlaceHolder() { this->placeHolder_ = nullptr;};
    inline const map<string, string> & placeHolder() const { DARABONBA_PTR_GET_CONST(placeHolder_, map<string, string>) };
    inline map<string, string> placeHolder() { DARABONBA_PTR_GET(placeHolder_, map<string, string>) };
    inline PushNotificationsRequestNotificationUnicastRequest& setPlaceHolder(const map<string, string> & placeHolder) { DARABONBA_PTR_SET_VALUE(placeHolder_, placeHolder) };
    inline PushNotificationsRequestNotificationUnicastRequest& setPlaceHolder(map<string, string> && placeHolder) { DARABONBA_PTR_SET_RVALUE(placeHolder_, placeHolder) };


    // sendTarget Field Functions 
    bool hasSendTarget() const { return this->sendTarget_ != nullptr;};
    void deleteSendTarget() { this->sendTarget_ = nullptr;};
    inline const Models::PushNotificationsRequestNotificationUnicastRequestSendTarget & sendTarget() const { DARABONBA_PTR_GET_CONST(sendTarget_, Models::PushNotificationsRequestNotificationUnicastRequestSendTarget) };
    inline Models::PushNotificationsRequestNotificationUnicastRequestSendTarget sendTarget() { DARABONBA_PTR_GET(sendTarget_, Models::PushNotificationsRequestNotificationUnicastRequestSendTarget) };
    inline PushNotificationsRequestNotificationUnicastRequest& setSendTarget(const Models::PushNotificationsRequestNotificationUnicastRequestSendTarget & sendTarget) { DARABONBA_PTR_SET_VALUE(sendTarget_, sendTarget) };
    inline PushNotificationsRequestNotificationUnicastRequest& setSendTarget(Models::PushNotificationsRequestNotificationUnicastRequestSendTarget && sendTarget) { DARABONBA_PTR_SET_RVALUE(sendTarget_, sendTarget) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> encodeKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> encodeType_ = nullptr;
    std::shared_ptr<bool> isDebug_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> messageTemplateId_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<map<string, string>> placeHolder_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::PushNotificationsRequestNotificationUnicastRequestSendTarget> sendTarget_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
