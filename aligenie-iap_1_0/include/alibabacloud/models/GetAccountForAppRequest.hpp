// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTFORAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTFORAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class GetAccountForAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountForAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountForAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    GetAccountForAppRequest() = default ;
    GetAccountForAppRequest(const GetAccountForAppRequest &) = default ;
    GetAccountForAppRequest(GetAccountForAppRequest &&) = default ;
    GetAccountForAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountForAppRequest() = default ;
    GetAccountForAppRequest& operator=(const GetAccountForAppRequest &) = default ;
    GetAccountForAppRequest& operator=(GetAccountForAppRequest &&) = default ;
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
      // Value corresponding to the encoding type:  
      // - When the encoding type is SKILL_ID, the value is the application\\"s Skill ID.  
      // - When the encoding type is PACKAGE_NAME, the value is the packageName of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the user identifier for Tmall Genie, and each way corresponds to a different encoding type:  
      // - PACKAGE_NAME: APK package name, used for the Android application customer link.  
      // - SKILL_ID: Skill ID, used for the cloud-based link.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // User identifier, which can be set to userOpenId or userUnionId.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // Type of User ID:  
      // - OPEN_ID: The default user ID identity.  
      // - UNION_ID: Organization-dimension user ID identity. This value is available only after an organization has been requested on the Tmall Genie Skill Application Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. This field is required if IdType is set to UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    class Payload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Payload& obj) { 
        DARABONBA_PTR_TO_JSON(Phone, phone_);
        DARABONBA_PTR_TO_JSON(originUuid, originUuid_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
        DARABONBA_PTR_FROM_JSON(Phone, phone_);
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
      virtual bool empty() const override { return this->phone_ == nullptr
        && this->originUuid_ == nullptr; };
      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline Payload& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // originUuid Field Functions 
      bool hasOriginUuid() const { return this->originUuid_ != nullptr;};
      void deleteOriginUuid() { this->originUuid_ = nullptr;};
      inline string getOriginUuid() const { DARABONBA_PTR_GET_DEFAULT(originUuid_, "") };
      inline Payload& setOriginUuid(string originUuid) { DARABONBA_PTR_SET_VALUE(originUuid_, originUuid) };


    protected:
      // Phone number of the authorized membership user.
      shared_ptr<string> phone_ {};
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
      // Value corresponding to the encoding type:  
      // - When the encoding type is SKILL_ID, the value is the application\\"s Skill ID.  
      // - When the encoding type is PACKAGE_NAME, the value is the packageName of the corresponding client app.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the device ID for Tmall Genie, and each method corresponds to a different encoding type.
      // - PACKAGE_NAME: APK package name, used in the Android application customer flow.
      // - SKILL_ID: Skill ID, used in the cloud-based flow.
      shared_ptr<string> encodeType_ {};
      // Device ID, set to deviceOpenId or deviceUnionId.
      shared_ptr<string> id_ {};
      // Type of the device ID:  
      // - OPEN_ID: Default device ID identifier  
      // - UNION_ID: Device ID identifier at the organization dimension. This value is available only after an organization has been requested on the Tmall Genie Skill Application Open Platform.
      shared_ptr<string> idType_ {};
      // Organization ID. Required if IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    virtual bool empty() const override { return this->deviceInfo_ == nullptr
        && this->payload_ == nullptr && this->userInfo_ == nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const GetAccountForAppRequest::DeviceInfo & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, GetAccountForAppRequest::DeviceInfo) };
    inline GetAccountForAppRequest::DeviceInfo getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, GetAccountForAppRequest::DeviceInfo) };
    inline GetAccountForAppRequest& setDeviceInfo(const GetAccountForAppRequest::DeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline GetAccountForAppRequest& setDeviceInfo(GetAccountForAppRequest::DeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const GetAccountForAppRequest::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, GetAccountForAppRequest::Payload) };
    inline GetAccountForAppRequest::Payload getPayload() { DARABONBA_PTR_GET(payload_, GetAccountForAppRequest::Payload) };
    inline GetAccountForAppRequest& setPayload(const GetAccountForAppRequest::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline GetAccountForAppRequest& setPayload(GetAccountForAppRequest::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const GetAccountForAppRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, GetAccountForAppRequest::UserInfo) };
    inline GetAccountForAppRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, GetAccountForAppRequest::UserInfo) };
    inline GetAccountForAppRequest& setUserInfo(const GetAccountForAppRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline GetAccountForAppRequest& setUserInfo(GetAccountForAppRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // Device ID information
    shared_ptr<GetAccountForAppRequest::DeviceInfo> deviceInfo_ {};
    // Business parameters
    shared_ptr<GetAccountForAppRequest::Payload> payload_ {};
    // User identifier information
    // 
    // This parameter is required.
    shared_ptr<GetAccountForAppRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
