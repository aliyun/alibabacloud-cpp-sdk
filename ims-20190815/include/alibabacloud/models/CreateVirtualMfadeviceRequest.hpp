// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIRTUALMFADEVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIRTUALMFADEVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class CreateVirtualMFADeviceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVirtualMFADeviceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VirtualMFADeviceName, virtualMFADeviceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVirtualMFADeviceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VirtualMFADeviceName, virtualMFADeviceName_);
    };
    CreateVirtualMFADeviceRequest() = default ;
    CreateVirtualMFADeviceRequest(const CreateVirtualMFADeviceRequest &) = default ;
    CreateVirtualMFADeviceRequest(CreateVirtualMFADeviceRequest &&) = default ;
    CreateVirtualMFADeviceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVirtualMFADeviceRequest() = default ;
    CreateVirtualMFADeviceRequest& operator=(const CreateVirtualMFADeviceRequest &) = default ;
    CreateVirtualMFADeviceRequest& operator=(CreateVirtualMFADeviceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->virtualMFADeviceName_ != nullptr; };
    // virtualMFADeviceName Field Functions 
    bool hasVirtualMFADeviceName() const { return this->virtualMFADeviceName_ != nullptr;};
    void deleteVirtualMFADeviceName() { this->virtualMFADeviceName_ = nullptr;};
    inline string virtualMFADeviceName() const { DARABONBA_PTR_GET_DEFAULT(virtualMFADeviceName_, "") };
    inline CreateVirtualMFADeviceRequest& setVirtualMFADeviceName(string virtualMFADeviceName) { DARABONBA_PTR_SET_VALUE(virtualMFADeviceName_, virtualMFADeviceName) };


  protected:
    // The name of the MFA device.
    // 
    // The name must be 1 to 64 characters in length and can contain letters, digits, and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> virtualMFADeviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
