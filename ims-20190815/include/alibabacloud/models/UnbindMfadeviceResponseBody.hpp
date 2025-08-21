// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDMFADEVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNBINDMFADEVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UnbindMFADeviceResponseBodyMFADevice.hpp>
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
    virtual bool empty() const override { this->MFADevice_ != nullptr
        && this->requestId_ != nullptr; };
    // MFADevice Field Functions 
    bool hasMFADevice() const { return this->MFADevice_ != nullptr;};
    void deleteMFADevice() { this->MFADevice_ = nullptr;};
    inline const UnbindMFADeviceResponseBodyMFADevice & MFADevice() const { DARABONBA_PTR_GET_CONST(MFADevice_, UnbindMFADeviceResponseBodyMFADevice) };
    inline UnbindMFADeviceResponseBodyMFADevice MFADevice() { DARABONBA_PTR_GET(MFADevice_, UnbindMFADeviceResponseBodyMFADevice) };
    inline UnbindMFADeviceResponseBody& setMFADevice(const UnbindMFADeviceResponseBodyMFADevice & MFADevice) { DARABONBA_PTR_SET_VALUE(MFADevice_, MFADevice) };
    inline UnbindMFADeviceResponseBody& setMFADevice(UnbindMFADeviceResponseBodyMFADevice && MFADevice) { DARABONBA_PTR_SET_RVALUE(MFADevice_, MFADevice) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UnbindMFADeviceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the MFA device.
    std::shared_ptr<UnbindMFADeviceResponseBodyMFADevice> MFADevice_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
