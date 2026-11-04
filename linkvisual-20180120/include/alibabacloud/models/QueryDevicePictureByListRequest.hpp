// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICEPICTUREBYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICEPICTUREBYLISTREQUEST_HPP_
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
  class QueryDevicePictureByListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDevicePictureByListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(IotId, iotId_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(PictureIdList, pictureIdList_);
      DARABONBA_PTR_TO_JSON(PictureType, pictureType_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
      DARABONBA_PTR_TO_JSON(ThumbWidth, thumbWidth_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDevicePictureByListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(IotId, iotId_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(PictureIdList, pictureIdList_);
      DARABONBA_PTR_FROM_JSON(PictureType, pictureType_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
      DARABONBA_PTR_FROM_JSON(ThumbWidth, thumbWidth_);
    };
    QueryDevicePictureByListRequest() = default ;
    QueryDevicePictureByListRequest(const QueryDevicePictureByListRequest &) = default ;
    QueryDevicePictureByListRequest(QueryDevicePictureByListRequest &&) = default ;
    QueryDevicePictureByListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDevicePictureByListRequest() = default ;
    QueryDevicePictureByListRequest& operator=(const QueryDevicePictureByListRequest &) = default ;
    QueryDevicePictureByListRequest& operator=(QueryDevicePictureByListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceName_ == nullptr
        && this->expireTime_ == nullptr && this->iotId_ == nullptr && this->iotInstanceId_ == nullptr && this->pictureIdList_ == nullptr && this->pictureType_ == nullptr
        && this->productKey_ == nullptr && this->thumbWidth_ == nullptr; };
    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline QueryDevicePictureByListRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int32_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0) };
    inline QueryDevicePictureByListRequest& setExpireTime(int32_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // iotId Field Functions 
    bool hasIotId() const { return this->iotId_ != nullptr;};
    void deleteIotId() { this->iotId_ = nullptr;};
    inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
    inline QueryDevicePictureByListRequest& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline QueryDevicePictureByListRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // pictureIdList Field Functions 
    bool hasPictureIdList() const { return this->pictureIdList_ != nullptr;};
    void deletePictureIdList() { this->pictureIdList_ = nullptr;};
    inline const vector<string> & getPictureIdList() const { DARABONBA_PTR_GET_CONST(pictureIdList_, vector<string>) };
    inline vector<string> getPictureIdList() { DARABONBA_PTR_GET(pictureIdList_, vector<string>) };
    inline QueryDevicePictureByListRequest& setPictureIdList(const vector<string> & pictureIdList) { DARABONBA_PTR_SET_VALUE(pictureIdList_, pictureIdList) };
    inline QueryDevicePictureByListRequest& setPictureIdList(vector<string> && pictureIdList) { DARABONBA_PTR_SET_RVALUE(pictureIdList_, pictureIdList) };


    // pictureType Field Functions 
    bool hasPictureType() const { return this->pictureType_ != nullptr;};
    void deletePictureType() { this->pictureType_ = nullptr;};
    inline int32_t getPictureType() const { DARABONBA_PTR_GET_DEFAULT(pictureType_, 0) };
    inline QueryDevicePictureByListRequest& setPictureType(int32_t pictureType) { DARABONBA_PTR_SET_VALUE(pictureType_, pictureType) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline QueryDevicePictureByListRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


    // thumbWidth Field Functions 
    bool hasThumbWidth() const { return this->thumbWidth_ != nullptr;};
    void deleteThumbWidth() { this->thumbWidth_ = nullptr;};
    inline int32_t getThumbWidth() const { DARABONBA_PTR_GET_DEFAULT(thumbWidth_, 0) };
    inline QueryDevicePictureByListRequest& setThumbWidth(int32_t thumbWidth) { DARABONBA_PTR_SET_VALUE(thumbWidth_, thumbWidth) };


  protected:
    // The DeviceName of the IP camera.
    // You can view the **DeviceName** on the **Devices** page in the IoT Platform console.
    // >Notice:  If you specify this parameter, you must also specify **ProductKey**.
    shared_ptr<string> deviceName_ {};
    // The expiration time of the image URL. Unit: minutes.
    shared_ptr<int32_t> expireTime_ {};
    // The ID of the IP camera. The ID is issued by IoT Platform and uniquely identifies the device. You can call the [QueryDeviceDetail](https://help.aliyun.com/document_detail/69594.html) operation of IoT Platform to query the ID.
    // 
    // >Notice:  If you specify this parameter, you do not need to specify **ProductKey** or **DeviceName**. **IotId** uniquely identifies the device and corresponds to the combination of **ProductKey** and **DeviceName**. If you specify both **IotId** and the combination of **ProductKey** and **DeviceName**, **IotId** takes precedence.
    shared_ptr<string> iotId_ {};
    // The instance ID.
    // 
    // <props="china">You can view the **ID** of the current instance on the **Instance Overview** page in the IoT Platform console. If the instance has an ID, you must specify the ID. Otherwise, the call fails.
    // 
    // <props="china">
    // > If the public instance does not have an ID, see [How to obtain an instance ID](https://help.aliyun.com/document_detail/267533.html).
    // 
    // <props="intl">You do not need to specify this parameter.
    shared_ptr<string> iotInstanceId_ {};
    // The list of image IDs. Image IDs are generated when you call the [TriggerCapturePicture](https://help.aliyun.com/document_detail/107914.html) operation.
    // 
    // > You can specify up to 50 image IDs in a single call.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> pictureIdList_ {};
    // The image type. Valid values:
    // 
    // - **0**: thumbnail.
    // - **1**: original image. 
    // - **2**: all. Default value.
    shared_ptr<int32_t> pictureType_ {};
    // The ProductKey of the product to which the IP camera belongs.
    // You can view the ProductKey on the **Products** page in the IoT Platform console or call the [QueryProductList](https://help.aliyun.com/document_detail/69271.html) operation to query the information about all products under the current account.
    // >Notice:  If you specify this parameter, you must also specify **DeviceName**.
    shared_ptr<string> productKey_ {};
    // Specifies the width of the target thumbnail. Unit: px. Valid values: 1 to 4096.
    shared_ptr<int32_t> thumbWidth_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
