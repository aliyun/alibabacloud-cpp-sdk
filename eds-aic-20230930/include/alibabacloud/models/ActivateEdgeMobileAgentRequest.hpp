// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVATEEDGEMOBILEAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACTIVATEEDGEMOBILEAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ActivateEdgeMobileAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActivateEdgeMobileAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceClass, deviceClass_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(DeviceMeta, deviceMeta_);
      DARABONBA_PTR_TO_JSON(LicenseKey, licenseKey_);
    };
    friend void from_json(const Darabonba::Json& j, ActivateEdgeMobileAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceClass, deviceClass_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(DeviceMeta, deviceMeta_);
      DARABONBA_PTR_FROM_JSON(LicenseKey, licenseKey_);
    };
    ActivateEdgeMobileAgentRequest() = default ;
    ActivateEdgeMobileAgentRequest(const ActivateEdgeMobileAgentRequest &) = default ;
    ActivateEdgeMobileAgentRequest(ActivateEdgeMobileAgentRequest &&) = default ;
    ActivateEdgeMobileAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActivateEdgeMobileAgentRequest() = default ;
    ActivateEdgeMobileAgentRequest& operator=(const ActivateEdgeMobileAgentRequest &) = default ;
    ActivateEdgeMobileAgentRequest& operator=(ActivateEdgeMobileAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceClass_ == nullptr
        && this->deviceId_ == nullptr && this->deviceMeta_ == nullptr && this->licenseKey_ == nullptr; };
    // deviceClass Field Functions 
    bool hasDeviceClass() const { return this->deviceClass_ != nullptr;};
    void deleteDeviceClass() { this->deviceClass_ = nullptr;};
    inline string getDeviceClass() const { DARABONBA_PTR_GET_DEFAULT(deviceClass_, "") };
    inline ActivateEdgeMobileAgentRequest& setDeviceClass(string deviceClass) { DARABONBA_PTR_SET_VALUE(deviceClass_, deviceClass) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline ActivateEdgeMobileAgentRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // deviceMeta Field Functions 
    bool hasDeviceMeta() const { return this->deviceMeta_ != nullptr;};
    void deleteDeviceMeta() { this->deviceMeta_ = nullptr;};
    inline string getDeviceMeta() const { DARABONBA_PTR_GET_DEFAULT(deviceMeta_, "") };
    inline ActivateEdgeMobileAgentRequest& setDeviceMeta(string deviceMeta) { DARABONBA_PTR_SET_VALUE(deviceMeta_, deviceMeta) };


    // licenseKey Field Functions 
    bool hasLicenseKey() const { return this->licenseKey_ != nullptr;};
    void deleteLicenseKey() { this->licenseKey_ = nullptr;};
    inline string getLicenseKey() const { DARABONBA_PTR_GET_DEFAULT(licenseKey_, "") };
    inline ActivateEdgeMobileAgentRequest& setLicenseKey(string licenseKey) { DARABONBA_PTR_SET_VALUE(licenseKey_, licenseKey) };


  protected:
    // The device form factor. Valid values:
    // - BOX
    // - PHONE
    // - PAD
    // - OTHER
    shared_ptr<string> deviceClass_ {};
    // The unique identifier of the device.
    // 
    // This parameter is required.
    shared_ptr<string> deviceId_ {};
    // The extended device metadata in JSON format. The string contains information such as fingerprint, deviceModel, and firmwareVersion.
    shared_ptr<string> deviceMeta_ {};
    // The license key.
    // 
    // This parameter is required.
    shared_ptr<string> licenseKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
