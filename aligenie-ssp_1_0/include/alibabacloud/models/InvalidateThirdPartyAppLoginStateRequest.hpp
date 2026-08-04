// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVALIDATETHIRDPARTYAPPLOGINSTATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVALIDATETHIRDPARTYAPPLOGINSTATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class InvalidateThirdPartyAppLoginStateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvalidateThirdPartyAppLoginStateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(ThirdPartyAppId, thirdPartyAppId_);
    };
    friend void from_json(const Darabonba::Json& j, InvalidateThirdPartyAppLoginStateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(ThirdPartyAppId, thirdPartyAppId_);
    };
    InvalidateThirdPartyAppLoginStateRequest() = default ;
    InvalidateThirdPartyAppLoginStateRequest(const InvalidateThirdPartyAppLoginStateRequest &) = default ;
    InvalidateThirdPartyAppLoginStateRequest(InvalidateThirdPartyAppLoginStateRequest &&) = default ;
    InvalidateThirdPartyAppLoginStateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvalidateThirdPartyAppLoginStateRequest() = default ;
    InvalidateThirdPartyAppLoginStateRequest& operator=(const InvalidateThirdPartyAppLoginStateRequest &) = default ;
    InvalidateThirdPartyAppLoginStateRequest& operator=(InvalidateThirdPartyAppLoginStateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // The value corresponding to the encoding type. When the encoding type is SKILL_ID, the value is the Skill ID of the application. When the encoding type is PACKAGE_NAME, the value is the packageName of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the Tmall Genie device ID, and each method corresponds to a different encoding type: PACKAGE_NAME refers to the APK package name, used in the Android application customer flow; SKILL_ID refers to the skill ID, used in the cloud-based flow.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // Device ID (deviceOpenId or deviceUnionId)
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // The type of Device ID. OPEN_ID: the default device identity. UNION_ID: the device identity at the organization dimension, which is available only after an organization has been requested on the Maojing Skills Application Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required if IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    virtual bool empty() const override { return this->deviceInfo_ == nullptr
        && this->thirdPartyAppId_ == nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const InvalidateThirdPartyAppLoginStateRequest::DeviceInfo & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, InvalidateThirdPartyAppLoginStateRequest::DeviceInfo) };
    inline InvalidateThirdPartyAppLoginStateRequest::DeviceInfo getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, InvalidateThirdPartyAppLoginStateRequest::DeviceInfo) };
    inline InvalidateThirdPartyAppLoginStateRequest& setDeviceInfo(const InvalidateThirdPartyAppLoginStateRequest::DeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline InvalidateThirdPartyAppLoginStateRequest& setDeviceInfo(InvalidateThirdPartyAppLoginStateRequest::DeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // thirdPartyAppId Field Functions 
    bool hasThirdPartyAppId() const { return this->thirdPartyAppId_ != nullptr;};
    void deleteThirdPartyAppId() { this->thirdPartyAppId_ = nullptr;};
    inline string getThirdPartyAppId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartyAppId_, "") };
    inline InvalidateThirdPartyAppLoginStateRequest& setThirdPartyAppId(string thirdPartyAppId) { DARABONBA_PTR_SET_VALUE(thirdPartyAppId_, thirdPartyAppId) };


  protected:
    // Device identification information
    // 
    // This parameter is required.
    shared_ptr<InvalidateThirdPartyAppLoginStateRequest::DeviceInfo> deviceInfo_ {};
    // Third-party application identity
    // 
    // This parameter is required.
    shared_ptr<string> thirdPartyAppId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
