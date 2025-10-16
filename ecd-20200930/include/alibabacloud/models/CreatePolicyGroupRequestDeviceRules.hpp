// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYGROUPREQUESTDEVICERULES_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYGROUPREQUESTDEVICERULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreatePolicyGroupRequestDeviceRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyGroupRequestDeviceRules& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(DevicePid, devicePid_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(DeviceVid, deviceVid_);
      DARABONBA_PTR_TO_JSON(OptCommand, optCommand_);
      DARABONBA_PTR_TO_JSON(Platforms, platforms_);
      DARABONBA_PTR_TO_JSON(RedirectType, redirectType_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyGroupRequestDeviceRules& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(DevicePid, devicePid_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(DeviceVid, deviceVid_);
      DARABONBA_PTR_FROM_JSON(OptCommand, optCommand_);
      DARABONBA_PTR_FROM_JSON(Platforms, platforms_);
      DARABONBA_PTR_FROM_JSON(RedirectType, redirectType_);
    };
    CreatePolicyGroupRequestDeviceRules() = default ;
    CreatePolicyGroupRequestDeviceRules(const CreatePolicyGroupRequestDeviceRules &) = default ;
    CreatePolicyGroupRequestDeviceRules(CreatePolicyGroupRequestDeviceRules &&) = default ;
    CreatePolicyGroupRequestDeviceRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyGroupRequestDeviceRules() = default ;
    CreatePolicyGroupRequestDeviceRules& operator=(const CreatePolicyGroupRequestDeviceRules &) = default ;
    CreatePolicyGroupRequestDeviceRules& operator=(CreatePolicyGroupRequestDeviceRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceName_ == nullptr
        && return this->devicePid_ == nullptr && return this->deviceType_ == nullptr && return this->deviceVid_ == nullptr && return this->optCommand_ == nullptr && return this->platforms_ == nullptr
        && return this->redirectType_ == nullptr; };
    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string deviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline CreatePolicyGroupRequestDeviceRules& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // devicePid Field Functions 
    bool hasDevicePid() const { return this->devicePid_ != nullptr;};
    void deleteDevicePid() { this->devicePid_ = nullptr;};
    inline string devicePid() const { DARABONBA_PTR_GET_DEFAULT(devicePid_, "") };
    inline CreatePolicyGroupRequestDeviceRules& setDevicePid(string devicePid) { DARABONBA_PTR_SET_VALUE(devicePid_, devicePid) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline CreatePolicyGroupRequestDeviceRules& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // deviceVid Field Functions 
    bool hasDeviceVid() const { return this->deviceVid_ != nullptr;};
    void deleteDeviceVid() { this->deviceVid_ = nullptr;};
    inline string deviceVid() const { DARABONBA_PTR_GET_DEFAULT(deviceVid_, "") };
    inline CreatePolicyGroupRequestDeviceRules& setDeviceVid(string deviceVid) { DARABONBA_PTR_SET_VALUE(deviceVid_, deviceVid) };


    // optCommand Field Functions 
    bool hasOptCommand() const { return this->optCommand_ != nullptr;};
    void deleteOptCommand() { this->optCommand_ = nullptr;};
    inline string optCommand() const { DARABONBA_PTR_GET_DEFAULT(optCommand_, "") };
    inline CreatePolicyGroupRequestDeviceRules& setOptCommand(string optCommand) { DARABONBA_PTR_SET_VALUE(optCommand_, optCommand) };


    // platforms Field Functions 
    bool hasPlatforms() const { return this->platforms_ != nullptr;};
    void deletePlatforms() { this->platforms_ = nullptr;};
    inline string platforms() const { DARABONBA_PTR_GET_DEFAULT(platforms_, "") };
    inline CreatePolicyGroupRequestDeviceRules& setPlatforms(string platforms) { DARABONBA_PTR_SET_VALUE(platforms_, platforms) };


    // redirectType Field Functions 
    bool hasRedirectType() const { return this->redirectType_ != nullptr;};
    void deleteRedirectType() { this->redirectType_ = nullptr;};
    inline string redirectType() const { DARABONBA_PTR_GET_DEFAULT(redirectType_, "") };
    inline CreatePolicyGroupRequestDeviceRules& setRedirectType(string redirectType) { DARABONBA_PTR_SET_VALUE(redirectType_, redirectType) };


  protected:
    // The device name.
    std::shared_ptr<string> deviceName_ = nullptr;
    // The product ID (PID).
    std::shared_ptr<string> devicePid_ = nullptr;
    // The peripheral type.
    // 
    // Valid values:
    // 
    // *   usbKey: UKeys.
    // *   other: other peripheral devices.
    // *   graphicsTablet: graphics tablets.
    // *   printer: printers.
    // *   cardReader: card readers.
    // *   scanner: scanners.
    // *   storage: storage devices.
    // *   camera: web cameras.
    // *   adb: Android Debug Bridge (ADB) devices.
    // *   networkInterfaceCard: NIC devices.
    std::shared_ptr<string> deviceType_ = nullptr;
    // The vendor ID (VID). For more information, see [Valid USB VIDs](https://www.usb.org/sites/default/files/vendor_ids032322.pdf_1.pdf).
    std::shared_ptr<string> deviceVid_ = nullptr;
    // The link optimization command.
    std::shared_ptr<string> optCommand_ = nullptr;
    std::shared_ptr<string> platforms_ = nullptr;
    // The redirection type.
    // 
    // Valid values:
    // 
    // *   deviceRedirect: device redirection
    // *   usbRedirect: USB redirection
    // *   off: redirection disabled
    std::shared_ptr<string> redirectType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
