// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFACEDEVICETODEVICEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFACEDEVICETODEVICEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class AddFaceDeviceToDeviceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFaceDeviceToDeviceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
    };
    friend void from_json(const Darabonba::Json& j, AddFaceDeviceToDeviceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
    };
    AddFaceDeviceToDeviceGroupRequest() = default ;
    AddFaceDeviceToDeviceGroupRequest(const AddFaceDeviceToDeviceGroupRequest &) = default ;
    AddFaceDeviceToDeviceGroupRequest(AddFaceDeviceToDeviceGroupRequest &&) = default ;
    AddFaceDeviceToDeviceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFaceDeviceToDeviceGroupRequest() = default ;
    AddFaceDeviceToDeviceGroupRequest& operator=(const AddFaceDeviceToDeviceGroupRequest &) = default ;
    AddFaceDeviceToDeviceGroupRequest& operator=(AddFaceDeviceToDeviceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceGroupId_ == nullptr
        && this->deviceName_ == nullptr && this->iotInstanceId_ == nullptr && this->isolationId_ == nullptr && this->productKey_ == nullptr; };
    // deviceGroupId Field Functions 
    bool hasDeviceGroupId() const { return this->deviceGroupId_ != nullptr;};
    void deleteDeviceGroupId() { this->deviceGroupId_ = nullptr;};
    inline string getDeviceGroupId() const { DARABONBA_PTR_GET_DEFAULT(deviceGroupId_, "") };
    inline AddFaceDeviceToDeviceGroupRequest& setDeviceGroupId(string deviceGroupId) { DARABONBA_PTR_SET_VALUE(deviceGroupId_, deviceGroupId) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline AddFaceDeviceToDeviceGroupRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline AddFaceDeviceToDeviceGroupRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // isolationId Field Functions 
    bool hasIsolationId() const { return this->isolationId_ != nullptr;};
    void deleteIsolationId() { this->isolationId_ = nullptr;};
    inline string getIsolationId() const { DARABONBA_PTR_GET_DEFAULT(isolationId_, "") };
    inline AddFaceDeviceToDeviceGroupRequest& setIsolationId(string isolationId) { DARABONBA_PTR_SET_VALUE(isolationId_, isolationId) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline AddFaceDeviceToDeviceGroupRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


  protected:
    // The device group ID. You can obtain the ID by calling the AddFaceDeviceGroup operation.
    // 
    // This parameter is required.
    shared_ptr<string> deviceGroupId_ {};
    // The device name.
    // 
    // This parameter is required.
    shared_ptr<string> deviceName_ {};
    // The IoT instance ID.
    shared_ptr<string> iotInstanceId_ {};
    // The isolation ID.
    // 
    // This parameter is required.
    shared_ptr<string> isolationId_ {};
    // The product key.
    // 
    // This parameter is required.
    shared_ptr<string> productKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
