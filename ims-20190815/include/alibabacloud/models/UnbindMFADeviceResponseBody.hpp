// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDMFADEVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNBINDMFADEVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class UnbindMFADeviceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindMFADeviceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MFADevice, MFADevice_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindMFADeviceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MFADevice, MFADevice_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UnbindMFADeviceResponseBody() = default ;
    UnbindMFADeviceResponseBody(const UnbindMFADeviceResponseBody &) = default ;
    UnbindMFADeviceResponseBody(UnbindMFADeviceResponseBody &&) = default ;
    UnbindMFADeviceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindMFADeviceResponseBody() = default ;
    UnbindMFADeviceResponseBody& operator=(const UnbindMFADeviceResponseBody &) = default ;
    UnbindMFADeviceResponseBody& operator=(UnbindMFADeviceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MFADevice : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MFADevice& obj) { 
        DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      };
      friend void from_json(const Darabonba::Json& j, MFADevice& obj) { 
        DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      };
      MFADevice() = default ;
      MFADevice(const MFADevice &) = default ;
      MFADevice(MFADevice &&) = default ;
      MFADevice(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MFADevice() = default ;
      MFADevice& operator=(const MFADevice &) = default ;
      MFADevice& operator=(MFADevice &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->serialNumber_ == nullptr; };
      // serialNumber Field Functions 
      bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
      void deleteSerialNumber() { this->serialNumber_ = nullptr;};
      inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
      inline MFADevice& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    protected:
      // The serial number of the MFA device.
      shared_ptr<string> serialNumber_ {};
    };

    virtual bool empty() const override { return this->MFADevice_ == nullptr
        && this->requestId_ == nullptr; };
    // MFADevice Field Functions 
    bool hasMFADevice() const { return this->MFADevice_ != nullptr;};
    void deleteMFADevice() { this->MFADevice_ = nullptr;};
    inline const UnbindMFADeviceResponseBody::MFADevice & getMFADevice() const { DARABONBA_PTR_GET_CONST(MFADevice_, UnbindMFADeviceResponseBody::MFADevice) };
    inline UnbindMFADeviceResponseBody::MFADevice getMFADevice() { DARABONBA_PTR_GET(MFADevice_, UnbindMFADeviceResponseBody::MFADevice) };
    inline UnbindMFADeviceResponseBody& setMFADevice(const UnbindMFADeviceResponseBody::MFADevice & mFADevice) { DARABONBA_PTR_SET_VALUE(MFADevice_, mFADevice) };
    inline UnbindMFADeviceResponseBody& setMFADevice(UnbindMFADeviceResponseBody::MFADevice && mFADevice) { DARABONBA_PTR_SET_RVALUE(MFADevice_, mFADevice) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UnbindMFADeviceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the MFA device.
    shared_ptr<UnbindMFADeviceResponseBody::MFADevice> MFADevice_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
