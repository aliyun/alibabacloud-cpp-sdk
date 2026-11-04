// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDEVICEPICTURELIFECYCLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDEVICEPICTURELIFECYCLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class SetDevicePictureLifeCycleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDevicePictureLifeCycleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Day, day_);
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(IotId, iotId_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
    };
    friend void from_json(const Darabonba::Json& j, SetDevicePictureLifeCycleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Day, day_);
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(IotId, iotId_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
    };
    SetDevicePictureLifeCycleRequest() = default ;
    SetDevicePictureLifeCycleRequest(const SetDevicePictureLifeCycleRequest &) = default ;
    SetDevicePictureLifeCycleRequest(SetDevicePictureLifeCycleRequest &&) = default ;
    SetDevicePictureLifeCycleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDevicePictureLifeCycleRequest() = default ;
    SetDevicePictureLifeCycleRequest& operator=(const SetDevicePictureLifeCycleRequest &) = default ;
    SetDevicePictureLifeCycleRequest& operator=(SetDevicePictureLifeCycleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->day_ == nullptr
        && this->deviceName_ == nullptr && this->iotId_ == nullptr && this->iotInstanceId_ == nullptr && this->productKey_ == nullptr; };
    // day Field Functions 
    bool hasDay() const { return this->day_ != nullptr;};
    void deleteDay() { this->day_ = nullptr;};
    inline int32_t getDay() const { DARABONBA_PTR_GET_DEFAULT(day_, 0) };
    inline SetDevicePictureLifeCycleRequest& setDay(int32_t day) { DARABONBA_PTR_SET_VALUE(day_, day) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline SetDevicePictureLifeCycleRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // iotId Field Functions 
    bool hasIotId() const { return this->iotId_ != nullptr;};
    void deleteIotId() { this->iotId_ = nullptr;};
    inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
    inline SetDevicePictureLifeCycleRequest& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline SetDevicePictureLifeCycleRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline SetDevicePictureLifeCycleRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


  protected:
    // The storage period of images in the cloud. Unit: days.
    // 
    // This parameter is required.
    shared_ptr<int32_t> day_ {};
    // The DeviceName of the IPC device.
    // You can view the **DeviceName** on the **Devices** page in the IoT Platform console.
    // >Notice:  If you specify this parameter, you must also specify **ProductKey**.
    shared_ptr<string> deviceName_ {};
    // The IotId of the IPC device. The IotId is the unique identifier that is issued by IoT Platform for the device. You can call the [QueryDeviceDetail](https://help.aliyun.com/document_detail/69594.html) operation of IoT Platform to query the IotId.
    // 
    // >Notice:  If you specify this parameter, you do not need to specify **ProductKey** or **DeviceName**. The **IotId** is the unique identifier of the device and corresponds to the combination of **ProductKey** and **DeviceName**. If you specify both **IotId** and the combination of **ProductKey** and **DeviceName**, **IotId** takes precedence.
    shared_ptr<string> iotId_ {};
    // The instance ID.
    // 
    // You can view the **ID** of the current instance on the **Instance Overview** page in the IoT Platform console. If the instance has an ID, you must specify the ID. Otherwise, the call fails.
    // 
    // > If the public instance does not have an ID, see [How to obtain an instance ID](https://help.aliyun.com/document_detail/267533.html).
    shared_ptr<string> iotInstanceId_ {};
    // The ProductKey of the product to which the IPC device belongs.
    // 
    // You can view the ProductKey on the **Products** page in the IoT Platform console or call the [QueryProductList](https://help.aliyun.com/document_detail/69271.html) operation to query all products under the current account.
    // 
    // >Notice:  If you specify this parameter, you must also specify **DeviceName**.
    shared_ptr<string> productKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
