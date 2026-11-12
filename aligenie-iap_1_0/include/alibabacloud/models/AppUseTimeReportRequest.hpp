// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPUSETIMEREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPUSETIMEREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class AppUseTimeReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppUseTimeReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, AppUseTimeReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    AppUseTimeReportRequest() = default ;
    AppUseTimeReportRequest(const AppUseTimeReportRequest &) = default ;
    AppUseTimeReportRequest(AppUseTimeReportRequest &&) = default ;
    AppUseTimeReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppUseTimeReportRequest() = default ;
    AppUseTimeReportRequest& operator=(const AppUseTimeReportRequest &) = default ;
    AppUseTimeReportRequest& operator=(AppUseTimeReportRequest &&) = default ;
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
      // Value corresponding to the encoding type  
      // 
      // - When the encoding type is SKILL_ID, the value is the application\\"s Skill ID.  
      // - When the encoding type is PACKAGE_NAME, the value is the packageName of the corresponding client application.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the user identifier from Tmall Genie, and each method corresponds to a different encoding type.  
      // - PACKAGE_NAME: APK package name, used for the Android application customer flow.  
      // - SKILL_ID: Skill ID, used for the cloud-based flow.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // User identifier, set to either userOpenId or userUnionId.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // Type of User ID  
      // - OPEN_ID: Default User ID identifier.  
      // - UNION_ID: Organization-dimension User ID identifier. This value is available only after an organization has been requested on the Tmall Genie Skill Application Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required if IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    class Payload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Payload& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(IsPrivilege, isPrivilege_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(StepCode, stepCode_);
        DARABONBA_PTR_TO_JSON(VipType, vipType_);
        DARABONBA_PTR_TO_JSON(originUuid, originUuid_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(IsPrivilege, isPrivilege_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(StepCode, stepCode_);
        DARABONBA_PTR_FROM_JSON(VipType, vipType_);
        DARABONBA_PTR_FROM_JSON(originUuid, originUuid_);
      };
      Payload() = default ;
      Payload(const Payload &) = default ;
      Payload(Payload &&) = default ;
      Payload(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Payload() = default ;
      Payload& operator=(const Payload &) = default ;
      Payload& operator=(Payload &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->isPrivilege_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->stepCode_ == nullptr && this->vipType_ == nullptr
        && this->originUuid_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline Payload& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // isPrivilege Field Functions 
      bool hasIsPrivilege() const { return this->isPrivilege_ != nullptr;};
      void deleteIsPrivilege() { this->isPrivilege_ = nullptr;};
      inline int32_t getIsPrivilege() const { DARABONBA_PTR_GET_DEFAULT(isPrivilege_, 0) };
      inline Payload& setIsPrivilege(int32_t isPrivilege) { DARABONBA_PTR_SET_VALUE(isPrivilege_, isPrivilege) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Payload& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline int32_t getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0) };
      inline Payload& setResourceType(int32_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // stepCode Field Functions 
      bool hasStepCode() const { return this->stepCode_ != nullptr;};
      void deleteStepCode() { this->stepCode_ = nullptr;};
      inline string getStepCode() const { DARABONBA_PTR_GET_DEFAULT(stepCode_, "") };
      inline Payload& setStepCode(string stepCode) { DARABONBA_PTR_SET_VALUE(stepCode_, stepCode) };


      // vipType Field Functions 
      bool hasVipType() const { return this->vipType_ != nullptr;};
      void deleteVipType() { this->vipType_ = nullptr;};
      inline int32_t getVipType() const { DARABONBA_PTR_GET_DEFAULT(vipType_, 0) };
      inline Payload& setVipType(int32_t vipType) { DARABONBA_PTR_SET_VALUE(vipType_, vipType) };


      // originUuid Field Functions 
      bool hasOriginUuid() const { return this->originUuid_ != nullptr;};
      void deleteOriginUuid() { this->originUuid_ = nullptr;};
      inline string getOriginUuid() const { DARABONBA_PTR_GET_DEFAULT(originUuid_, "") };
      inline Payload& setOriginUuid(string originUuid) { DARABONBA_PTR_SET_VALUE(originUuid_, originUuid) };


    protected:
      // Action item
      // 
      // - start indicates Start
      // - end indicates End
      // 
      // This parameter is required.
      shared_ptr<string> action_ {};
      // Indicates whether the benefit is exclusive to members:
      // 
      // - 1 indicates Yes  
      // - 0 indicates No
      // 
      // This parameter is required.
      shared_ptr<int32_t> isPrivilege_ {};
      // Resource ID.
      // 
      // This parameter is required.
      shared_ptr<string> resourceId_ {};
      // Resource type:
      // 
      // - 0 indicates game
      // - 1 indicates audio
      // - 2 indicates video
      // 
      // This parameter is required.
      shared_ptr<int32_t> resourceType_ {};
      // Step code. The start and end actions must be uniquely matched.
      // 
      // This parameter is required.
      shared_ptr<string> stepCode_ {};
      // Membership type:
      // 
      // - 0 indicates Cat Spirit Membership
      // - 1 indicates third-party proprietary membership
      // 
      // This parameter is required.
      shared_ptr<int32_t> vipType_ {};
      // Plaintext UUID
      shared_ptr<string> originUuid_ {};
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
      // The value corresponding to the encoding type.
      // 
      // - When the encoding type is SKILL_ID, the value is the application\\"s Skill ID.
      // - When the encoding type is PACKAGE_NAME, the value is the packageName of the corresponding client application.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the device identity for Tmall Genie, and each method corresponds to a different encoding type.  
      // - PACKAGE_NAME: APK package name, used for Android application customer-side integration.  
      // - SKILL_ID: Skill ID, used for cloud-side integration.
      shared_ptr<string> encodeType_ {};
      // Device ID, set to deviceOpenId or deviceUnionId.
      shared_ptr<string> id_ {};
      // Type of device ID  
      // - OPEN_ID: Default device ID.  
      // - UNION_ID: Organization-dimension device ID, available only after an organization has been requested in the Tmall Genie Skill Application Open Platform.
      shared_ptr<string> idType_ {};
      // Organization ID, required if IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    virtual bool empty() const override { return this->deviceInfo_ == nullptr
        && this->payload_ == nullptr && this->userInfo_ == nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const AppUseTimeReportRequest::DeviceInfo & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, AppUseTimeReportRequest::DeviceInfo) };
    inline AppUseTimeReportRequest::DeviceInfo getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, AppUseTimeReportRequest::DeviceInfo) };
    inline AppUseTimeReportRequest& setDeviceInfo(const AppUseTimeReportRequest::DeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline AppUseTimeReportRequest& setDeviceInfo(AppUseTimeReportRequest::DeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const AppUseTimeReportRequest::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, AppUseTimeReportRequest::Payload) };
    inline AppUseTimeReportRequest::Payload getPayload() { DARABONBA_PTR_GET(payload_, AppUseTimeReportRequest::Payload) };
    inline AppUseTimeReportRequest& setPayload(const AppUseTimeReportRequest::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline AppUseTimeReportRequest& setPayload(AppUseTimeReportRequest::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const AppUseTimeReportRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, AppUseTimeReportRequest::UserInfo) };
    inline AppUseTimeReportRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, AppUseTimeReportRequest::UserInfo) };
    inline AppUseTimeReportRequest& setUserInfo(const AppUseTimeReportRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline AppUseTimeReportRequest& setUserInfo(AppUseTimeReportRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // Device identity information
    shared_ptr<AppUseTimeReportRequest::DeviceInfo> deviceInfo_ {};
    // Business parameters
    shared_ptr<AppUseTimeReportRequest::Payload> payload_ {};
    // User identifier information
    // 
    // This parameter is required.
    shared_ptr<AppUseTimeReportRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
