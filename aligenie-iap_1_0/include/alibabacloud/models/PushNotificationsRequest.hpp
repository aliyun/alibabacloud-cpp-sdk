// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHNOTIFICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHNOTIFICATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class PushNotificationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushNotificationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NotificationUnicastRequest, notificationUnicastRequest_);
      DARABONBA_PTR_TO_JSON(TenantInfo, tenantInfo_);
    };
    friend void from_json(const Darabonba::Json& j, PushNotificationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NotificationUnicastRequest, notificationUnicastRequest_);
      DARABONBA_PTR_FROM_JSON(TenantInfo, tenantInfo_);
    };
    PushNotificationsRequest() = default ;
    PushNotificationsRequest(const PushNotificationsRequest &) = default ;
    PushNotificationsRequest(PushNotificationsRequest &&) = default ;
    PushNotificationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushNotificationsRequest() = default ;
    PushNotificationsRequest& operator=(const PushNotificationsRequest &) = default ;
    PushNotificationsRequest& operator=(PushNotificationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TenantInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantInfo& obj) { 
        (void)j; (void)obj; 
      };
      friend void from_json(const Darabonba::Json& j, TenantInfo& obj) { 
        (void)j; (void)obj; 
      };
      TenantInfo() = default ;
      TenantInfo(const TenantInfo &) = default ;
      TenantInfo(TenantInfo &&) = default ;
      TenantInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantInfo() = default ;
      TenantInfo& operator=(const TenantInfo &) = default ;
      TenantInfo& operator=(TenantInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return true; };
    };

    class NotificationUnicastRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NotificationUnicastRequest& obj) { 
        DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_TO_JSON(IsDebug, isDebug_);
        DARABONBA_PTR_TO_JSON(MessageTemplateId, messageTemplateId_);
        DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
        DARABONBA_PTR_TO_JSON(PlaceHolder, placeHolder_);
        DARABONBA_PTR_TO_JSON(SendTarget, sendTarget_);
      };
      friend void from_json(const Darabonba::Json& j, NotificationUnicastRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_FROM_JSON(IsDebug, isDebug_);
        DARABONBA_PTR_FROM_JSON(MessageTemplateId, messageTemplateId_);
        DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
        DARABONBA_PTR_FROM_JSON(PlaceHolder, placeHolder_);
        DARABONBA_PTR_FROM_JSON(SendTarget, sendTarget_);
      };
      NotificationUnicastRequest() = default ;
      NotificationUnicastRequest(const NotificationUnicastRequest &) = default ;
      NotificationUnicastRequest(NotificationUnicastRequest &&) = default ;
      NotificationUnicastRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NotificationUnicastRequest() = default ;
      NotificationUnicastRequest& operator=(const NotificationUnicastRequest &) = default ;
      NotificationUnicastRequest& operator=(NotificationUnicastRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SendTarget : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SendTarget& obj) { 
          DARABONBA_PTR_TO_JSON(TargetIdentity, targetIdentity_);
          DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        };
        friend void from_json(const Darabonba::Json& j, SendTarget& obj) { 
          DARABONBA_PTR_FROM_JSON(TargetIdentity, targetIdentity_);
          DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        };
        SendTarget() = default ;
        SendTarget(const SendTarget &) = default ;
        SendTarget(SendTarget &&) = default ;
        SendTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SendTarget() = default ;
        SendTarget& operator=(const SendTarget &) = default ;
        SendTarget& operator=(SendTarget &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->targetIdentity_ == nullptr
        && this->targetType_ == nullptr; };
        // targetIdentity Field Functions 
        bool hasTargetIdentity() const { return this->targetIdentity_ != nullptr;};
        void deleteTargetIdentity() { this->targetIdentity_ = nullptr;};
        inline string getTargetIdentity() const { DARABONBA_PTR_GET_DEFAULT(targetIdentity_, "") };
        inline SendTarget& setTargetIdentity(string targetIdentity) { DARABONBA_PTR_SET_VALUE(targetIdentity_, targetIdentity) };


        // targetType Field Functions 
        bool hasTargetType() const { return this->targetType_ != nullptr;};
        void deleteTargetType() { this->targetType_ = nullptr;};
        inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
        inline SendTarget& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      protected:
        // The identity value corresponding to the Push Target Type.
        shared_ptr<string> targetIdentity_ {};
        // The type of the Push Target, indicating the type when obtaining the corresponding device or User Identifier:  
        // - `DEVICE_UNION_ID`: device unionId  
        // - `DEVICE_OPEN_ID`: device openId  
        // - `USER_UNION_ID`: user unionId  
        // - `USER_OPEN_ID`: user openId
        shared_ptr<string> targetType_ {};
      };

      virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->isDebug_ == nullptr && this->messageTemplateId_ == nullptr && this->organizationId_ == nullptr && this->placeHolder_ == nullptr
        && this->sendTarget_ == nullptr; };
      // encodeKey Field Functions 
      bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
      void deleteEncodeKey() { this->encodeKey_ = nullptr;};
      inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
      inline NotificationUnicastRequest& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


      // encodeType Field Functions 
      bool hasEncodeType() const { return this->encodeType_ != nullptr;};
      void deleteEncodeType() { this->encodeType_ = nullptr;};
      inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
      inline NotificationUnicastRequest& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


      // isDebug Field Functions 
      bool hasIsDebug() const { return this->isDebug_ != nullptr;};
      void deleteIsDebug() { this->isDebug_ = nullptr;};
      inline bool getIsDebug() const { DARABONBA_PTR_GET_DEFAULT(isDebug_, false) };
      inline NotificationUnicastRequest& setIsDebug(bool isDebug) { DARABONBA_PTR_SET_VALUE(isDebug_, isDebug) };


      // messageTemplateId Field Functions 
      bool hasMessageTemplateId() const { return this->messageTemplateId_ != nullptr;};
      void deleteMessageTemplateId() { this->messageTemplateId_ = nullptr;};
      inline string getMessageTemplateId() const { DARABONBA_PTR_GET_DEFAULT(messageTemplateId_, "") };
      inline NotificationUnicastRequest& setMessageTemplateId(string messageTemplateId) { DARABONBA_PTR_SET_VALUE(messageTemplateId_, messageTemplateId) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline NotificationUnicastRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


      // placeHolder Field Functions 
      bool hasPlaceHolder() const { return this->placeHolder_ != nullptr;};
      void deletePlaceHolder() { this->placeHolder_ = nullptr;};
      inline const map<string, string> & getPlaceHolder() const { DARABONBA_PTR_GET_CONST(placeHolder_, map<string, string>) };
      inline map<string, string> getPlaceHolder() { DARABONBA_PTR_GET(placeHolder_, map<string, string>) };
      inline NotificationUnicastRequest& setPlaceHolder(const map<string, string> & placeHolder) { DARABONBA_PTR_SET_VALUE(placeHolder_, placeHolder) };
      inline NotificationUnicastRequest& setPlaceHolder(map<string, string> && placeHolder) { DARABONBA_PTR_SET_RVALUE(placeHolder_, placeHolder) };


      // sendTarget Field Functions 
      bool hasSendTarget() const { return this->sendTarget_ != nullptr;};
      void deleteSendTarget() { this->sendTarget_ = nullptr;};
      inline const NotificationUnicastRequest::SendTarget & getSendTarget() const { DARABONBA_PTR_GET_CONST(sendTarget_, NotificationUnicastRequest::SendTarget) };
      inline NotificationUnicastRequest::SendTarget getSendTarget() { DARABONBA_PTR_GET(sendTarget_, NotificationUnicastRequest::SendTarget) };
      inline NotificationUnicastRequest& setSendTarget(const NotificationUnicastRequest::SendTarget & sendTarget) { DARABONBA_PTR_SET_VALUE(sendTarget_, sendTarget) };
      inline NotificationUnicastRequest& setSendTarget(NotificationUnicastRequest::SendTarget && sendTarget) { DARABONBA_PTR_SET_RVALUE(sendTarget_, sendTarget) };


    protected:
      // The value corresponding to the encoding type.  
      // - When the encoding type is SKILL_ID, the value is the skill ID obtained from the webhook service.  
      // - When the encoding type is PACKAGE_NAME, the value is the packageName of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the Tmall Genie device ID, and each method corresponds to a different encoding type:  
      // - PACKAGE_NAME: APK package name  
      // - SKILL_ID: Skill ID
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // Debug flag. When the skill application is in the debug phase, setting this flag determines whether the retrieved skill application information is from the editing state or the online state.
      shared_ptr<bool> isDebug_ {};
      // Message template ID obtained when applying for a message template on the Tmall Genie Application Platform.
      // 
      // This parameter is required.
      shared_ptr<string> messageTemplateId_ {};
      // Organization Identifier. This parameter is required only when the push type is `XX_UNION_XX`. If you obtain CatGenie device or user identifiers through multiple channels and need interoperability among them, you must request an organization from the platform. After approval, the platform will assign an organization identifier.
      shared_ptr<string> organizationId_ {};
      // Placeholder information. For example, for the template ["Hello, {nick}!"], this could be {"nick":"Sweetie"}. Additionally, within the placeholder parameters, you can append parameters to the application launch link to support hyperlinking to a specific address, such as: `{"nick":"Sweetie","_URL_SUFFIX_":"xxx"}`. The hyperlink address in the message pop-up will then be: application launch link + `${_URL_SUFFIX_}`. This feature only works for applications that have configured a launch link.
      shared_ptr<map<string, string>> placeHolder_ {};
      // The target information for message push.
      // 
      // This parameter is required.
      shared_ptr<NotificationUnicastRequest::SendTarget> sendTarget_ {};
    };

    virtual bool empty() const override { return this->notificationUnicastRequest_ == nullptr
        && this->tenantInfo_ == nullptr; };
    // notificationUnicastRequest Field Functions 
    bool hasNotificationUnicastRequest() const { return this->notificationUnicastRequest_ != nullptr;};
    void deleteNotificationUnicastRequest() { this->notificationUnicastRequest_ = nullptr;};
    inline const PushNotificationsRequest::NotificationUnicastRequest & getNotificationUnicastRequest() const { DARABONBA_PTR_GET_CONST(notificationUnicastRequest_, PushNotificationsRequest::NotificationUnicastRequest) };
    inline PushNotificationsRequest::NotificationUnicastRequest getNotificationUnicastRequest() { DARABONBA_PTR_GET(notificationUnicastRequest_, PushNotificationsRequest::NotificationUnicastRequest) };
    inline PushNotificationsRequest& setNotificationUnicastRequest(const PushNotificationsRequest::NotificationUnicastRequest & notificationUnicastRequest) { DARABONBA_PTR_SET_VALUE(notificationUnicastRequest_, notificationUnicastRequest) };
    inline PushNotificationsRequest& setNotificationUnicastRequest(PushNotificationsRequest::NotificationUnicastRequest && notificationUnicastRequest) { DARABONBA_PTR_SET_RVALUE(notificationUnicastRequest_, notificationUnicastRequest) };


    // tenantInfo Field Functions 
    bool hasTenantInfo() const { return this->tenantInfo_ != nullptr;};
    void deleteTenantInfo() { this->tenantInfo_ = nullptr;};
    inline const PushNotificationsRequest::TenantInfo & getTenantInfo() const { DARABONBA_PTR_GET_CONST(tenantInfo_, PushNotificationsRequest::TenantInfo) };
    inline PushNotificationsRequest::TenantInfo getTenantInfo() { DARABONBA_PTR_GET(tenantInfo_, PushNotificationsRequest::TenantInfo) };
    inline PushNotificationsRequest& setTenantInfo(const PushNotificationsRequest::TenantInfo & tenantInfo) { DARABONBA_PTR_SET_VALUE(tenantInfo_, tenantInfo) };
    inline PushNotificationsRequest& setTenantInfo(PushNotificationsRequest::TenantInfo && tenantInfo) { DARABONBA_PTR_SET_RVALUE(tenantInfo_, tenantInfo) };


  protected:
    // Input parameter object for message push.
    // 
    // This parameter is required.
    shared_ptr<PushNotificationsRequest::NotificationUnicastRequest> notificationUnicastRequest_ {};
    // Identity information.
    shared_ptr<PushNotificationsRequest::TenantInfo> tenantInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
