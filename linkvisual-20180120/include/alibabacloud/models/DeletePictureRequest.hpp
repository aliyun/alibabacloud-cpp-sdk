// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPICTUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPICTUREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class DeletePictureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePictureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(IotId, iotId_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(PictureIdList, pictureIdList_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePictureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(IotId, iotId_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(PictureIdList, pictureIdList_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
    };
    DeletePictureRequest() = default ;
    DeletePictureRequest(const DeletePictureRequest &) = default ;
    DeletePictureRequest(DeletePictureRequest &&) = default ;
    DeletePictureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePictureRequest() = default ;
    DeletePictureRequest& operator=(const DeletePictureRequest &) = default ;
    DeletePictureRequest& operator=(DeletePictureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceName_ == nullptr
        && this->iotId_ == nullptr && this->iotInstanceId_ == nullptr && this->pictureIdList_ == nullptr && this->productKey_ == nullptr; };
    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline DeletePictureRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // iotId Field Functions 
    bool hasIotId() const { return this->iotId_ != nullptr;};
    void deleteIotId() { this->iotId_ = nullptr;};
    inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
    inline DeletePictureRequest& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline DeletePictureRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // pictureIdList Field Functions 
    bool hasPictureIdList() const { return this->pictureIdList_ != nullptr;};
    void deletePictureIdList() { this->pictureIdList_ = nullptr;};
    inline const vector<string> & getPictureIdList() const { DARABONBA_PTR_GET_CONST(pictureIdList_, vector<string>) };
    inline vector<string> getPictureIdList() { DARABONBA_PTR_GET(pictureIdList_, vector<string>) };
    inline DeletePictureRequest& setPictureIdList(const vector<string> & pictureIdList) { DARABONBA_PTR_SET_VALUE(pictureIdList_, pictureIdList) };
    inline DeletePictureRequest& setPictureIdList(vector<string> && pictureIdList) { DARABONBA_PTR_SET_RVALUE(pictureIdList_, pictureIdList) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline DeletePictureRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


  protected:
    // The DeviceName of the IPC device.
    // You can view the **DeviceName** on the **Devices** page in the IoT Platform console.
    // >Notice:  If you specify this parameter, you must also specify **ProductKey**.
    shared_ptr<string> deviceName_ {};
    // The IotId of the IPC device. The IotId is a unique identifier issued by IoT Platform for the device. You can call the [QueryDeviceDetail](https://help.aliyun.com/document_detail/69594.html) operation of IoT Platform to query the IotId.
    // >Notice:  If you specify this parameter, you do not need to specify **ProductKey** or **DeviceName**. The **IotId** is a unique identifier for the device and has a one-to-one mapping with the combination of **ProductKey** and **DeviceName**. If you specify both **IotId** and the combination of **ProductKey** and **DeviceName**, **IotId** takes precedence.
    shared_ptr<string> iotId_ {};
    // The instance ID. You can view the **ID** of the current instance on the **Instance Overview** page in the IoT Platform console.
    // >Notice: 
    // - If the instance has an ID, you must specify the ID. Otherwise, the call fails.
    // - If the instance does not have an <props="intl"><ph>**Instance Overview** page or an </ph>ID, you do not need to specify this parameter.
    // 
    // 
    // For more information about instances, see [Instance overview](https://help.aliyun.com/document_detail/356505.html).
    shared_ptr<string> iotInstanceId_ {};
    // The list of picture IDs. Picture IDs are generated when you call the [TriggerCapturePicture](https://help.aliyun.com/document_detail/107914.html) operation.
    // > You can specify up to 50 picture IDs in a single call.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> pictureIdList_ {};
    // The ProductKey of the product to which the IPC device belongs.
    // You can view the ProductKey on the **Products** page in the IoT Platform console or call the [QueryProductList](https://help.aliyun.com/document_detail/69271.html) operation to query the information about all products under the current account.
    // >Notice:  If you specify this parameter, you must also specify **DeviceName**.
    shared_ptr<string> productKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
