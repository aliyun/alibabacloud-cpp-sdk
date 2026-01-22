// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIRTUALMFADEVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIRTUALMFADEVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class CreateVirtualMFADeviceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVirtualMFADeviceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VirtualMFADevice, virtualMFADevice_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVirtualMFADeviceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VirtualMFADevice, virtualMFADevice_);
    };
    CreateVirtualMFADeviceResponseBody() = default ;
    CreateVirtualMFADeviceResponseBody(const CreateVirtualMFADeviceResponseBody &) = default ;
    CreateVirtualMFADeviceResponseBody(CreateVirtualMFADeviceResponseBody &&) = default ;
    CreateVirtualMFADeviceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVirtualMFADeviceResponseBody() = default ;
    CreateVirtualMFADeviceResponseBody& operator=(const CreateVirtualMFADeviceResponseBody &) = default ;
    CreateVirtualMFADeviceResponseBody& operator=(CreateVirtualMFADeviceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VirtualMFADevice : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VirtualMFADevice& obj) { 
        DARABONBA_PTR_TO_JSON(Base32StringSeed, base32StringSeed_);
        DARABONBA_PTR_TO_JSON(QRCodePNG, QRCodePNG_);
        DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      };
      friend void from_json(const Darabonba::Json& j, VirtualMFADevice& obj) { 
        DARABONBA_PTR_FROM_JSON(Base32StringSeed, base32StringSeed_);
        DARABONBA_PTR_FROM_JSON(QRCodePNG, QRCodePNG_);
        DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      };
      VirtualMFADevice() = default ;
      VirtualMFADevice(const VirtualMFADevice &) = default ;
      VirtualMFADevice(VirtualMFADevice &&) = default ;
      VirtualMFADevice(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VirtualMFADevice() = default ;
      VirtualMFADevice& operator=(const VirtualMFADevice &) = default ;
      VirtualMFADevice& operator=(VirtualMFADevice &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->base32StringSeed_ == nullptr
        && this->QRCodePNG_ == nullptr && this->serialNumber_ == nullptr; };
      // base32StringSeed Field Functions 
      bool hasBase32StringSeed() const { return this->base32StringSeed_ != nullptr;};
      void deleteBase32StringSeed() { this->base32StringSeed_ = nullptr;};
      inline string getBase32StringSeed() const { DARABONBA_PTR_GET_DEFAULT(base32StringSeed_, "") };
      inline VirtualMFADevice& setBase32StringSeed(string base32StringSeed) { DARABONBA_PTR_SET_VALUE(base32StringSeed_, base32StringSeed) };


      // QRCodePNG Field Functions 
      bool hasQRCodePNG() const { return this->QRCodePNG_ != nullptr;};
      void deleteQRCodePNG() { this->QRCodePNG_ = nullptr;};
      inline string getQRCodePNG() const { DARABONBA_PTR_GET_DEFAULT(QRCodePNG_, "") };
      inline VirtualMFADevice& setQRCodePNG(string QRCodePNG) { DARABONBA_PTR_SET_VALUE(QRCodePNG_, QRCodePNG) };


      // serialNumber Field Functions 
      bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
      void deleteSerialNumber() { this->serialNumber_ = nullptr;};
      inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
      inline VirtualMFADevice& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    protected:
      // The key of the MFA device.
      shared_ptr<string> base32StringSeed_ {};
      // The Base64-encoded QR code of the key.
      shared_ptr<string> QRCodePNG_ {};
      // The serial number of the MFA device.
      shared_ptr<string> serialNumber_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->virtualMFADevice_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVirtualMFADeviceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // virtualMFADevice Field Functions 
    bool hasVirtualMFADevice() const { return this->virtualMFADevice_ != nullptr;};
    void deleteVirtualMFADevice() { this->virtualMFADevice_ = nullptr;};
    inline const CreateVirtualMFADeviceResponseBody::VirtualMFADevice & getVirtualMFADevice() const { DARABONBA_PTR_GET_CONST(virtualMFADevice_, CreateVirtualMFADeviceResponseBody::VirtualMFADevice) };
    inline CreateVirtualMFADeviceResponseBody::VirtualMFADevice getVirtualMFADevice() { DARABONBA_PTR_GET(virtualMFADevice_, CreateVirtualMFADeviceResponseBody::VirtualMFADevice) };
    inline CreateVirtualMFADeviceResponseBody& setVirtualMFADevice(const CreateVirtualMFADeviceResponseBody::VirtualMFADevice & virtualMFADevice) { DARABONBA_PTR_SET_VALUE(virtualMFADevice_, virtualMFADevice) };
    inline CreateVirtualMFADeviceResponseBody& setVirtualMFADevice(CreateVirtualMFADeviceResponseBody::VirtualMFADevice && virtualMFADevice) { DARABONBA_PTR_SET_RVALUE(virtualMFADevice_, virtualMFADevice) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the MFA device.
    shared_ptr<CreateVirtualMFADeviceResponseBody::VirtualMFADevice> virtualMFADevice_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
