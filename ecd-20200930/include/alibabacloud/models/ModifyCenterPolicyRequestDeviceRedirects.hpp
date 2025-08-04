// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCENTERPOLICYREQUESTDEVICEREDIRECTS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCENTERPOLICYREQUESTDEVICEREDIRECTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyCenterPolicyRequestDeviceRedirects : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCenterPolicyRequestDeviceRedirects& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(RedirectType, redirectType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCenterPolicyRequestDeviceRedirects& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(RedirectType, redirectType_);
    };
    ModifyCenterPolicyRequestDeviceRedirects() = default ;
    ModifyCenterPolicyRequestDeviceRedirects(const ModifyCenterPolicyRequestDeviceRedirects &) = default ;
    ModifyCenterPolicyRequestDeviceRedirects(ModifyCenterPolicyRequestDeviceRedirects &&) = default ;
    ModifyCenterPolicyRequestDeviceRedirects(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCenterPolicyRequestDeviceRedirects() = default ;
    ModifyCenterPolicyRequestDeviceRedirects& operator=(const ModifyCenterPolicyRequestDeviceRedirects &) = default ;
    ModifyCenterPolicyRequestDeviceRedirects& operator=(ModifyCenterPolicyRequestDeviceRedirects &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceType_ != nullptr
        && this->redirectType_ != nullptr; };
    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline ModifyCenterPolicyRequestDeviceRedirects& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // redirectType Field Functions 
    bool hasRedirectType() const { return this->redirectType_ != nullptr;};
    void deleteRedirectType() { this->redirectType_ = nullptr;};
    inline string redirectType() const { DARABONBA_PTR_GET_DEFAULT(redirectType_, "") };
    inline ModifyCenterPolicyRequestDeviceRedirects& setRedirectType(string redirectType) { DARABONBA_PTR_SET_VALUE(redirectType_, redirectType) };


  protected:
    // The peripheral type.
    // 
    // Valid values:
    // 
    // *   printer
    // *   scanner
    // *   serialport
    // *   camera
    // *   adb
    std::shared_ptr<string> deviceType_ = nullptr;
    // The redirection type.
    // 
    // Valid values:
    // 
    // *   deviceRedirect: device redirection
    // *   usbRedirect: USB redirection.
    // *   off: any type of redirection.
    std::shared_ptr<string> redirectType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
