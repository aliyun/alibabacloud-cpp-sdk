// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PULLCASHIERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PULLCASHIERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class PullCashierRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PullCashierRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, PullCashierRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    PullCashierRequest() = default ;
    PullCashierRequest(const PullCashierRequest &) = default ;
    PullCashierRequest(PullCashierRequest &&) = default ;
    PullCashierRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PullCashierRequest() = default ;
    PullCashierRequest& operator=(const PullCashierRequest &) = default ;
    PullCashierRequest& operator=(PullCashierRequest &&) = default ;
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
      // The value corresponding to the encoding type.
      // 
      // - When the encoding type is SKILL_ID, the value is the application\\"s Skill ID.
      // - When the encoding type is PACKAGE_NAME, the value is the packageName of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the user identifier from Tmall Genie, and each method corresponds to a different encoding type.
      // - PACKAGE_NAME: APK package name, used for the Android application customer ingest endpoint.
      // - SKILL_ID: Skill ID, used for the cloud-based ingest endpoint.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // User identifier, set to either userOpenId or userUnionId.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // Type of the User ID.
      // 
      // - OPEN_ID: The default User ID identity.
      // - UNION_ID: Organization-dimension User ID identity. This value is available only after an organization has been requested on the Tmall Genie Skill Application Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required if IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    class Payload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Payload& obj) { 
        DARABONBA_PTR_TO_JSON(originUuid, originUuid_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
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
      virtual bool empty() const override { return this->originUuid_ == nullptr; };
      // originUuid Field Functions 
      bool hasOriginUuid() const { return this->originUuid_ != nullptr;};
      void deleteOriginUuid() { this->originUuid_ = nullptr;};
      inline string getOriginUuid() const { DARABONBA_PTR_GET_DEFAULT(originUuid_, "") };
      inline Payload& setOriginUuid(string originUuid) { DARABONBA_PTR_SET_VALUE(originUuid_, originUuid) };


    protected:
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
      // - When the encoding type is SKILL_ID, the value is the Skill ID of the application.
      // - When the encoding type is PACKAGE_NAME, the value is the packageName of the corresponding client app.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the device ID of Tmall Genie, and each method corresponds to a different encoding type.  
      // - PACKAGE_NAME: APK package name, used in the Android application customer flow.  
      // - SKILL_ID: Skill ID, used in the cloud-based flow.
      shared_ptr<string> encodeType_ {};
      // Device ID, set to deviceOpenId or deviceUnionId.
      shared_ptr<string> id_ {};
      // Type of device ID  
      // - OPEN_ID: The default device ID.  
      // - UNION_ID: Organization-level device ID. This value is available only after an organization has been requested on the Tmall Genie skill application Open Platform.
      shared_ptr<string> idType_ {};
      // Organization ID. Required if IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    virtual bool empty() const override { return this->deviceInfo_ == nullptr
        && this->payload_ == nullptr && this->userInfo_ == nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const PullCashierRequest::DeviceInfo & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, PullCashierRequest::DeviceInfo) };
    inline PullCashierRequest::DeviceInfo getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, PullCashierRequest::DeviceInfo) };
    inline PullCashierRequest& setDeviceInfo(const PullCashierRequest::DeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline PullCashierRequest& setDeviceInfo(PullCashierRequest::DeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const PullCashierRequest::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, PullCashierRequest::Payload) };
    inline PullCashierRequest::Payload getPayload() { DARABONBA_PTR_GET(payload_, PullCashierRequest::Payload) };
    inline PullCashierRequest& setPayload(const PullCashierRequest::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline PullCashierRequest& setPayload(PullCashierRequest::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const PullCashierRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, PullCashierRequest::UserInfo) };
    inline PullCashierRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, PullCashierRequest::UserInfo) };
    inline PullCashierRequest& setUserInfo(const PullCashierRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline PullCashierRequest& setUserInfo(PullCashierRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // device ID information
    shared_ptr<PullCashierRequest::DeviceInfo> deviceInfo_ {};
    // Business parameters
    shared_ptr<PullCashierRequest::Payload> payload_ {};
    // User identifier information
    // 
    // This parameter is required.
    shared_ptr<PullCashierRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
