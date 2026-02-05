// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIRTCAUTHCODEDTO_HPP_
#define ALIBABACLOUD_MODELS_AIRTCAUTHCODEDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AiRtcAuthCodeDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiRtcAuthCodeDTO& obj) { 
      DARABONBA_PTR_TO_JSON(ActivatedTime, activatedTime_);
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(License, license_);
      DARABONBA_PTR_TO_JSON(LicenseItemId, licenseItemId_);
      DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AiRtcAuthCodeDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivatedTime, activatedTime_);
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(License, license_);
      DARABONBA_PTR_FROM_JSON(LicenseItemId, licenseItemId_);
      DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AiRtcAuthCodeDTO() = default ;
    AiRtcAuthCodeDTO(const AiRtcAuthCodeDTO &) = default ;
    AiRtcAuthCodeDTO(AiRtcAuthCodeDTO &&) = default ;
    AiRtcAuthCodeDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiRtcAuthCodeDTO() = default ;
    AiRtcAuthCodeDTO& operator=(const AiRtcAuthCodeDTO &) = default ;
    AiRtcAuthCodeDTO& operator=(AiRtcAuthCodeDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activatedTime_ == nullptr
        && this->authCode_ == nullptr && this->creationTime_ == nullptr && this->deviceId_ == nullptr && this->license_ == nullptr && this->licenseItemId_ == nullptr
        && this->modificationTime_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
    // activatedTime Field Functions 
    bool hasActivatedTime() const { return this->activatedTime_ != nullptr;};
    void deleteActivatedTime() { this->activatedTime_ = nullptr;};
    inline string getActivatedTime() const { DARABONBA_PTR_GET_DEFAULT(activatedTime_, "") };
    inline AiRtcAuthCodeDTO& setActivatedTime(string activatedTime) { DARABONBA_PTR_SET_VALUE(activatedTime_, activatedTime) };


    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline AiRtcAuthCodeDTO& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline AiRtcAuthCodeDTO& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline AiRtcAuthCodeDTO& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // license Field Functions 
    bool hasLicense() const { return this->license_ != nullptr;};
    void deleteLicense() { this->license_ = nullptr;};
    inline string getLicense() const { DARABONBA_PTR_GET_DEFAULT(license_, "") };
    inline AiRtcAuthCodeDTO& setLicense(string license) { DARABONBA_PTR_SET_VALUE(license_, license) };


    // licenseItemId Field Functions 
    bool hasLicenseItemId() const { return this->licenseItemId_ != nullptr;};
    void deleteLicenseItemId() { this->licenseItemId_ = nullptr;};
    inline string getLicenseItemId() const { DARABONBA_PTR_GET_DEFAULT(licenseItemId_, "") };
    inline AiRtcAuthCodeDTO& setLicenseItemId(string licenseItemId) { DARABONBA_PTR_SET_VALUE(licenseItemId_, licenseItemId) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline AiRtcAuthCodeDTO& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline AiRtcAuthCodeDTO& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline AiRtcAuthCodeDTO& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> activatedTime_ {};
    shared_ptr<string> authCode_ {};
    shared_ptr<string> creationTime_ {};
    shared_ptr<string> deviceId_ {};
    shared_ptr<string> license_ {};
    shared_ptr<string> licenseItemId_ {};
    shared_ptr<string> modificationTime_ {};
    shared_ptr<int32_t> status_ {};
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
