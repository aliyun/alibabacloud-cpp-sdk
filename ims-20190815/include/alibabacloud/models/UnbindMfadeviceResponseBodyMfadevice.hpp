// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDMFADEVICERESPONSEBODYMFADEVICE_HPP_
#define ALIBABACLOUD_MODELS_UNBINDMFADEVICERESPONSEBODYMFADEVICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class UnbindMFADeviceResponseBodyMFADevice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindMFADeviceResponseBodyMFADevice& obj) { 
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindMFADeviceResponseBodyMFADevice& obj) { 
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
    };
    UnbindMFADeviceResponseBodyMFADevice() = default ;
    UnbindMFADeviceResponseBodyMFADevice(const UnbindMFADeviceResponseBodyMFADevice &) = default ;
    UnbindMFADeviceResponseBodyMFADevice(UnbindMFADeviceResponseBodyMFADevice &&) = default ;
    UnbindMFADeviceResponseBodyMFADevice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindMFADeviceResponseBodyMFADevice() = default ;
    UnbindMFADeviceResponseBodyMFADevice& operator=(const UnbindMFADeviceResponseBodyMFADevice &) = default ;
    UnbindMFADeviceResponseBodyMFADevice& operator=(UnbindMFADeviceResponseBodyMFADevice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serialNumber_ != nullptr; };
    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline UnbindMFADeviceResponseBodyMFADevice& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


  protected:
    // The serial number of the MFA device.
    std::shared_ptr<string> serialNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
