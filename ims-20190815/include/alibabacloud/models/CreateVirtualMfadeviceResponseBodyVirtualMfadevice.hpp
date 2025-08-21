// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIRTUALMFADEVICERESPONSEBODYVIRTUALMFADEVICE_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIRTUALMFADEVICERESPONSEBODYVIRTUALMFADEVICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class CreateVirtualMFADeviceResponseBodyVirtualMFADevice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVirtualMFADeviceResponseBodyVirtualMFADevice& obj) { 
      DARABONBA_PTR_TO_JSON(Base32StringSeed, base32StringSeed_);
      DARABONBA_PTR_TO_JSON(QRCodePNG, QRCodePNG_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVirtualMFADeviceResponseBodyVirtualMFADevice& obj) { 
      DARABONBA_PTR_FROM_JSON(Base32StringSeed, base32StringSeed_);
      DARABONBA_PTR_FROM_JSON(QRCodePNG, QRCodePNG_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
    };
    CreateVirtualMFADeviceResponseBodyVirtualMFADevice() = default ;
    CreateVirtualMFADeviceResponseBodyVirtualMFADevice(const CreateVirtualMFADeviceResponseBodyVirtualMFADevice &) = default ;
    CreateVirtualMFADeviceResponseBodyVirtualMFADevice(CreateVirtualMFADeviceResponseBodyVirtualMFADevice &&) = default ;
    CreateVirtualMFADeviceResponseBodyVirtualMFADevice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVirtualMFADeviceResponseBodyVirtualMFADevice() = default ;
    CreateVirtualMFADeviceResponseBodyVirtualMFADevice& operator=(const CreateVirtualMFADeviceResponseBodyVirtualMFADevice &) = default ;
    CreateVirtualMFADeviceResponseBodyVirtualMFADevice& operator=(CreateVirtualMFADeviceResponseBodyVirtualMFADevice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->base32StringSeed_ != nullptr
        && this->QRCodePNG_ != nullptr && this->serialNumber_ != nullptr; };
    // base32StringSeed Field Functions 
    bool hasBase32StringSeed() const { return this->base32StringSeed_ != nullptr;};
    void deleteBase32StringSeed() { this->base32StringSeed_ = nullptr;};
    inline string base32StringSeed() const { DARABONBA_PTR_GET_DEFAULT(base32StringSeed_, "") };
    inline CreateVirtualMFADeviceResponseBodyVirtualMFADevice& setBase32StringSeed(string base32StringSeed) { DARABONBA_PTR_SET_VALUE(base32StringSeed_, base32StringSeed) };


    // QRCodePNG Field Functions 
    bool hasQRCodePNG() const { return this->QRCodePNG_ != nullptr;};
    void deleteQRCodePNG() { this->QRCodePNG_ = nullptr;};
    inline string QRCodePNG() const { DARABONBA_PTR_GET_DEFAULT(QRCodePNG_, "") };
    inline CreateVirtualMFADeviceResponseBodyVirtualMFADevice& setQRCodePNG(string QRCodePNG) { DARABONBA_PTR_SET_VALUE(QRCodePNG_, QRCodePNG) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline CreateVirtualMFADeviceResponseBodyVirtualMFADevice& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


  protected:
    // The key of the MFA device.
    std::shared_ptr<string> base32StringSeed_ = nullptr;
    // The Base64-encoded QR code of the key.
    std::shared_ptr<string> QRCodePNG_ = nullptr;
    // The serial number of the MFA device.
    std::shared_ptr<string> serialNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
