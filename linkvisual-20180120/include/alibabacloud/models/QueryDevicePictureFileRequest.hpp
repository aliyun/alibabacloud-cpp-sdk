// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICEPICTUREFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICEPICTUREFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryDevicePictureFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDevicePictureFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaptureId, captureId_);
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(IotId, iotId_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(PictureType, pictureType_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
      DARABONBA_PTR_TO_JSON(ThumbWidth, thumbWidth_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDevicePictureFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaptureId, captureId_);
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(IotId, iotId_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(PictureType, pictureType_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
      DARABONBA_PTR_FROM_JSON(ThumbWidth, thumbWidth_);
    };
    QueryDevicePictureFileRequest() = default ;
    QueryDevicePictureFileRequest(const QueryDevicePictureFileRequest &) = default ;
    QueryDevicePictureFileRequest(QueryDevicePictureFileRequest &&) = default ;
    QueryDevicePictureFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDevicePictureFileRequest() = default ;
    QueryDevicePictureFileRequest& operator=(const QueryDevicePictureFileRequest &) = default ;
    QueryDevicePictureFileRequest& operator=(QueryDevicePictureFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->captureId_ == nullptr
        && this->deviceName_ == nullptr && this->expireTime_ == nullptr && this->iotId_ == nullptr && this->iotInstanceId_ == nullptr && this->pictureType_ == nullptr
        && this->productKey_ == nullptr && this->thumbWidth_ == nullptr; };
    // captureId Field Functions 
    bool hasCaptureId() const { return this->captureId_ != nullptr;};
    void deleteCaptureId() { this->captureId_ = nullptr;};
    inline string getCaptureId() const { DARABONBA_PTR_GET_DEFAULT(captureId_, "") };
    inline QueryDevicePictureFileRequest& setCaptureId(string captureId) { DARABONBA_PTR_SET_VALUE(captureId_, captureId) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline QueryDevicePictureFileRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int32_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0) };
    inline QueryDevicePictureFileRequest& setExpireTime(int32_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // iotId Field Functions 
    bool hasIotId() const { return this->iotId_ != nullptr;};
    void deleteIotId() { this->iotId_ = nullptr;};
    inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
    inline QueryDevicePictureFileRequest& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline QueryDevicePictureFileRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // pictureType Field Functions 
    bool hasPictureType() const { return this->pictureType_ != nullptr;};
    void deletePictureType() { this->pictureType_ = nullptr;};
    inline int32_t getPictureType() const { DARABONBA_PTR_GET_DEFAULT(pictureType_, 0) };
    inline QueryDevicePictureFileRequest& setPictureType(int32_t pictureType) { DARABONBA_PTR_SET_VALUE(pictureType_, pictureType) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline QueryDevicePictureFileRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


    // thumbWidth Field Functions 
    bool hasThumbWidth() const { return this->thumbWidth_ != nullptr;};
    void deleteThumbWidth() { this->thumbWidth_ = nullptr;};
    inline int32_t getThumbWidth() const { DARABONBA_PTR_GET_DEFAULT(thumbWidth_, 0) };
    inline QueryDevicePictureFileRequest& setThumbWidth(int32_t thumbWidth) { DARABONBA_PTR_SET_VALUE(thumbWidth_, thumbWidth) };


  protected:
    // The ID of the image generated when a snapshot capture event occurs:
    // - For active snapshot capture, see [TriggerCapturePicture](https://help.aliyun.com/document_detail/107914.html) for the image ID.
    // - For snapshot capture triggered by an intelligent alert event, see [QueryDeviceEvent](https://help.aliyun.com/document_detail/107916.html) for the image ID.
    // 
    // This parameter is required.
    shared_ptr<string> captureId_ {};
    // The DeviceName of the IPC device.
    // You can view the **DeviceName** on the **Devices** page in the IoT Platform console.
    // >Notice:  If you specify this parameter, you must also specify **ProductKey**.
    shared_ptr<string> deviceName_ {};
    // Specifies the expiration time of the image URL. Unit: minutes. Valid values: 1 to 43200.
    shared_ptr<int32_t> expireTime_ {};
    // The IotId of the IPC device. The IotId is the globally unique identifier (GUID) that is issued by IoT Platform to the device. You can call the [QueryDeviceDetail](https://help.aliyun.com/document_detail/69594.html) operation of IoT Platform to query the IotId.
    // 
    // >Notice:  If you specify this parameter, you do not need to specify **ProductKey** or **DeviceName**. The **IotId** is the globally unique identifier of the device and corresponds to the combination of **ProductKey** and **DeviceName**. If you specify both **IotId** and the combination of **ProductKey** and **DeviceName**, **IotId** takes precedence.
    shared_ptr<string> iotId_ {};
    // The instance ID. You can view the **ID** of the current instance on the **Overview** page in the IoT Platform console.
    // 
    // >Notice: 
    // - If the instance has an ID, you must specify the ID. Otherwise, the call fails.
    // - If the <props="intl"><ph>**Overview** page is not displayed or the instance does not have an </ph>ID, you do not need to specify this parameter.
    // 
    // 
    // 
    // For more information about instances, see [Instance overview](https://help.aliyun.com/document_detail/356505.html).
    shared_ptr<string> iotInstanceId_ {};
    // The image type. Valid values:
    // - **0**: thumbnail.
    // - **1**: original image.
    // - **2**: all images. This is the default value.
    shared_ptr<int32_t> pictureType_ {};
    // The ProductKey of the product to which the IPC device belongs.
    // You can view the ProductKey on the **Products** page in the IoT Platform console or call the [QueryProductList](https://help.aliyun.com/document_detail/69271.html) operation to query the information about all products under the current account.
    // >Notice:  If you specify this parameter, you must also specify **DeviceName**.
    shared_ptr<string> productKey_ {};
    // Specifies the width of the target scaled image. Unit: px. Valid values: 1 to 4096.
    shared_ptr<int32_t> thumbWidth_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
