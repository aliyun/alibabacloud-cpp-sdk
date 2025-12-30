// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNLOCKVIRTUALMFADEVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNLOCKVIRTUALMFADEVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class UnlockVirtualMFADeviceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnlockVirtualMFADeviceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
    };
    friend void from_json(const Darabonba::Json& j, UnlockVirtualMFADeviceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
    };
    UnlockVirtualMFADeviceRequest() = default ;
    UnlockVirtualMFADeviceRequest(const UnlockVirtualMFADeviceRequest &) = default ;
    UnlockVirtualMFADeviceRequest(UnlockVirtualMFADeviceRequest &&) = default ;
    UnlockVirtualMFADeviceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnlockVirtualMFADeviceRequest() = default ;
    UnlockVirtualMFADeviceRequest& operator=(const UnlockVirtualMFADeviceRequest &) = default ;
    UnlockVirtualMFADeviceRequest& operator=(UnlockVirtualMFADeviceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->serialNumber_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UnlockVirtualMFADeviceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline UnlockVirtualMFADeviceRequest& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


  protected:
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The serial number of the virtual MFA device, which is a unique identifier.
    // 
    // You can call the [DescribeVirtualMFADevices](https://help.aliyun.com/document_detail/206210.html) operation to query the serial number of the virtual MFA device bound to Active Directory (AD) users.
    // 
    // This parameter is required.
    shared_ptr<string> serialNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
