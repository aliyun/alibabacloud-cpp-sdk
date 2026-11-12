// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDNOTIFICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDNOTIFICATIONSREQUEST_HPP_
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
  class SendNotificationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendNotificationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(NotificationUnicastRequest, notificationUnicastRequest_);
      DARABONBA_PTR_TO_JSON(TenantInfo, tenantInfo_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, SendNotificationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(NotificationUnicastRequest, notificationUnicastRequest_);
      DARABONBA_PTR_FROM_JSON(TenantInfo, tenantInfo_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    SendNotificationsRequest() = default ;
    SendNotificationsRequest(const SendNotificationsRequest &) = default ;
    SendNotificationsRequest(SendNotificationsRequest &&) = default ;
    SendNotificationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendNotificationsRequest() = default ;
    SendNotificationsRequest& operator=(const SendNotificationsRequest &) = default ;
    SendNotificationsRequest& operator=(SendNotificationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
        DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IdType, idType_);
        DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      };
      friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IdType, idType_);
        DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      };
      UserInfo() = default ;
      UserInfo(const UserInfo &) = default ;
      UserInfo(UserInfo &&) = default ;
      UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserInfo() = default ;
      UserInfo& operator=(const UserInfo &) = default ;
      UserInfo& operator=(UserInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->id_ == nullptr && this->idType_ == nullptr && this->organizationId_ == nullptr; };
      // encodeKey Field Functions 
      bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
      void deleteEncodeKey() { this->encodeKey_ = nullptr;};
      inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
      inline UserInfo& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


      // encodeType Field Functions 
      bool hasEncodeType() const { return this->encodeType_ != nullptr;};
      void deleteEncodeType() { this->encodeType_ = nullptr;};
      inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
      inline UserInfo& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline UserInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // idType Field Functions 
      bool hasIdType() const { return this->idType_ != nullptr;};
      void deleteIdType() { this->idType_ = nullptr;};
      inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
      inline UserInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline UserInfo& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    protected:
      // Value corresponding to the encoding type. If the encoding type is SKILL_ID, the value is the application\\"s Skill ID. If the encoding type is PACKAGE_NAME, the value is the packageName of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the Maojing User Identifier, and each method corresponds to a different encoding type:  
      // - PACKAGE_NAME: APK package name, used for the Android application customer link  
      // - SKILL_ID: Skill ID, used for the cloud-based link
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // User Identifier (userOpenId or userUnionId)
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // Type of the User ID:  
      // - OPEN_ID: Default User ID identifier  
      // - UNION_ID: Organization-dimension User ID identifier, available only after an organization has been requested on the Maojing Skill Application Open Platform
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required if IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

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
        DARABONBA_PTR_TO_JSON(IsDebug, isDebug_);
        DARABONBA_PTR_TO_JSON(MessageTemplateId, messageTemplateId_);
        DARABONBA_PTR_TO_JSON(PlaceHolder, placeHolder_);
        DARABONBA_PTR_TO_JSON(SendTarget, sendTarget_);
      };
      friend void from_json(const Darabonba::Json& j, NotificationUnicastRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(IsDebug, isDebug_);
        DARABONBA_PTR_FROM_JSON(MessageTemplateId, messageTemplateId_);
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
          (void)j; (void)obj; 
        };
        friend void from_json(const Darabonba::Json& j, SendTarget& obj) { 
          (void)j; (void)obj; 
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
        virtual bool empty() const override { return true; };
      };

      virtual bool empty() const override { return this->isDebug_ == nullptr
        && this->messageTemplateId_ == nullptr && this->placeHolder_ == nullptr && this->sendTarget_ == nullptr; };
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
      // Debug flag. When the skill application is in the debugging phase, setting this flag determines whether the retrieved skill application information is from the editing state or the online state.
      shared_ptr<bool> isDebug_ {};
      // Message template ID obtained when requesting a message template in the Tmall Genie Application Platform.
      // 
      // This parameter is required.
      shared_ptr<string> messageTemplateId_ {};
      // Placeholder information. For example, for the template ["Hello, {nick}!"], this can be: {"nick":"Xiao Tian Tian"}. Additionally, within the placeholder parameters, you can append parameters to the application launch link to support hyperlinking to a specific address, such as: `{"nick":"Xiao Tian Tian","_URL_SUFFIX_":"xxx"}`. The hyperlink address in the message pop-up will then be: application launch link + `${_URL_SUFFIX_}`. This feature is only effective for applications that have configured a launch link.
      shared_ptr<map<string, string>> placeHolder_ {};
      // Target information for message push.
      // 
      // This parameter is required.
      shared_ptr<NotificationUnicastRequest::SendTarget> sendTarget_ {};
    };

    class DeviceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeviceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IdType, idType_);
        DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      };
      friend void from_json(const Darabonba::Json& j, DeviceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IdType, idType_);
        DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      };
      DeviceInfo() = default ;
      DeviceInfo(const DeviceInfo &) = default ;
      DeviceInfo(DeviceInfo &&) = default ;
      DeviceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeviceInfo() = default ;
      DeviceInfo& operator=(const DeviceInfo &) = default ;
      DeviceInfo& operator=(DeviceInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->id_ == nullptr && this->idType_ == nullptr && this->organizationId_ == nullptr; };
      // encodeKey Field Functions 
      bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
      void deleteEncodeKey() { this->encodeKey_ = nullptr;};
      inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
      inline DeviceInfo& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


      // encodeType Field Functions 
      bool hasEncodeType() const { return this->encodeType_ != nullptr;};
      void deleteEncodeType() { this->encodeType_ = nullptr;};
      inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
      inline DeviceInfo& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline DeviceInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // idType Field Functions 
      bool hasIdType() const { return this->idType_ != nullptr;};
      void deleteIdType() { this->idType_ = nullptr;};
      inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
      inline DeviceInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline DeviceInfo& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    protected:
      // Value corresponding to the encoding type. If the encoding type is SKILL_ID, the value is the application\\"s Skill ID. If the encoding type is PACKAGE_NAME, the value is the packageName of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the device ID for Maojing, and each method corresponds to a different encoding type:  
      //  - PACKAGE_NAME: APK package name, used for the Android application customer link  
      //  - SKILL_ID: Skill ID, used for the cloud link
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // Device ID (deviceOpenId or deviceUnionId)
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // Type of device ID:  
      //  - OPEN_ID: Default device ID  
      //  - UNION_ID: Organization-dimension device ID, available only after an organization has been requested on the Maojing Skill Application Open Platform
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required if IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    virtual bool empty() const override { return this->deviceInfo_ == nullptr
        && this->notificationUnicastRequest_ == nullptr && this->tenantInfo_ == nullptr && this->userInfo_ == nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const SendNotificationsRequest::DeviceInfo & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, SendNotificationsRequest::DeviceInfo) };
    inline SendNotificationsRequest::DeviceInfo getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, SendNotificationsRequest::DeviceInfo) };
    inline SendNotificationsRequest& setDeviceInfo(const SendNotificationsRequest::DeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline SendNotificationsRequest& setDeviceInfo(SendNotificationsRequest::DeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // notificationUnicastRequest Field Functions 
    bool hasNotificationUnicastRequest() const { return this->notificationUnicastRequest_ != nullptr;};
    void deleteNotificationUnicastRequest() { this->notificationUnicastRequest_ = nullptr;};
    inline const SendNotificationsRequest::NotificationUnicastRequest & getNotificationUnicastRequest() const { DARABONBA_PTR_GET_CONST(notificationUnicastRequest_, SendNotificationsRequest::NotificationUnicastRequest) };
    inline SendNotificationsRequest::NotificationUnicastRequest getNotificationUnicastRequest() { DARABONBA_PTR_GET(notificationUnicastRequest_, SendNotificationsRequest::NotificationUnicastRequest) };
    inline SendNotificationsRequest& setNotificationUnicastRequest(const SendNotificationsRequest::NotificationUnicastRequest & notificationUnicastRequest) { DARABONBA_PTR_SET_VALUE(notificationUnicastRequest_, notificationUnicastRequest) };
    inline SendNotificationsRequest& setNotificationUnicastRequest(SendNotificationsRequest::NotificationUnicastRequest && notificationUnicastRequest) { DARABONBA_PTR_SET_RVALUE(notificationUnicastRequest_, notificationUnicastRequest) };


    // tenantInfo Field Functions 
    bool hasTenantInfo() const { return this->tenantInfo_ != nullptr;};
    void deleteTenantInfo() { this->tenantInfo_ = nullptr;};
    inline const SendNotificationsRequest::TenantInfo & getTenantInfo() const { DARABONBA_PTR_GET_CONST(tenantInfo_, SendNotificationsRequest::TenantInfo) };
    inline SendNotificationsRequest::TenantInfo getTenantInfo() { DARABONBA_PTR_GET(tenantInfo_, SendNotificationsRequest::TenantInfo) };
    inline SendNotificationsRequest& setTenantInfo(const SendNotificationsRequest::TenantInfo & tenantInfo) { DARABONBA_PTR_SET_VALUE(tenantInfo_, tenantInfo) };
    inline SendNotificationsRequest& setTenantInfo(SendNotificationsRequest::TenantInfo && tenantInfo) { DARABONBA_PTR_SET_RVALUE(tenantInfo_, tenantInfo) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const SendNotificationsRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, SendNotificationsRequest::UserInfo) };
    inline SendNotificationsRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, SendNotificationsRequest::UserInfo) };
    inline SendNotificationsRequest& setUserInfo(const SendNotificationsRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline SendNotificationsRequest& setUserInfo(SendNotificationsRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // Device identity information
    // 
    // This parameter is required.
    shared_ptr<SendNotificationsRequest::DeviceInfo> deviceInfo_ {};
    // Input parameter object for message push.
    // 
    // This parameter is required.
    shared_ptr<SendNotificationsRequest::NotificationUnicastRequest> notificationUnicastRequest_ {};
    // Identity information.
    shared_ptr<SendNotificationsRequest::TenantInfo> tenantInfo_ {};
    // User Identifier information
    // 
    // This parameter is required.
    shared_ptr<SendNotificationsRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
