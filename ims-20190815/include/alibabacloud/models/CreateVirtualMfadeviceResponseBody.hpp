// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIRTUALMFADEVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIRTUALMFADEVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateVirtualMFADeviceResponseBodyVirtualMFADevice.hpp>
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
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->virtualMFADevice_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVirtualMFADeviceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // virtualMFADevice Field Functions 
    bool hasVirtualMFADevice() const { return this->virtualMFADevice_ != nullptr;};
    void deleteVirtualMFADevice() { this->virtualMFADevice_ = nullptr;};
    inline const CreateVirtualMFADeviceResponseBodyVirtualMFADevice & virtualMFADevice() const { DARABONBA_PTR_GET_CONST(virtualMFADevice_, CreateVirtualMFADeviceResponseBodyVirtualMFADevice) };
    inline CreateVirtualMFADeviceResponseBodyVirtualMFADevice virtualMFADevice() { DARABONBA_PTR_GET(virtualMFADevice_, CreateVirtualMFADeviceResponseBodyVirtualMFADevice) };
    inline CreateVirtualMFADeviceResponseBody& setVirtualMFADevice(const CreateVirtualMFADeviceResponseBodyVirtualMFADevice & virtualMFADevice) { DARABONBA_PTR_SET_VALUE(virtualMFADevice_, virtualMFADevice) };
    inline CreateVirtualMFADeviceResponseBody& setVirtualMFADevice(CreateVirtualMFADeviceResponseBodyVirtualMFADevice && virtualMFADevice) { DARABONBA_PTR_SET_RVALUE(virtualMFADevice_, virtualMFADevice) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the MFA device.
    std::shared_ptr<CreateVirtualMFADeviceResponseBodyVirtualMFADevice> virtualMFADevice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
