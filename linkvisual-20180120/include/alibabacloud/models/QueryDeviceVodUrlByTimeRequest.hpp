// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICEVODURLBYTIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICEVODURLBYTIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryDeviceVodUrlByTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDeviceVodUrlByTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(EnableStun, enableStun_);
      DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IotId, iotId_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(PlayUnLimited, playUnLimited_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
      DARABONBA_PTR_TO_JSON(Scheme, scheme_);
      DARABONBA_PTR_TO_JSON(SeekTime, seekTime_);
      DARABONBA_PTR_TO_JSON(ShouldEncrypt, shouldEncrypt_);
      DARABONBA_PTR_TO_JSON(UrlValidDuration, urlValidDuration_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDeviceVodUrlByTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(EnableStun, enableStun_);
      DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IotId, iotId_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(PlayUnLimited, playUnLimited_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
      DARABONBA_PTR_FROM_JSON(Scheme, scheme_);
      DARABONBA_PTR_FROM_JSON(SeekTime, seekTime_);
      DARABONBA_PTR_FROM_JSON(ShouldEncrypt, shouldEncrypt_);
      DARABONBA_PTR_FROM_JSON(UrlValidDuration, urlValidDuration_);
    };
    QueryDeviceVodUrlByTimeRequest() = default ;
    QueryDeviceVodUrlByTimeRequest(const QueryDeviceVodUrlByTimeRequest &) = default ;
    QueryDeviceVodUrlByTimeRequest(QueryDeviceVodUrlByTimeRequest &&) = default ;
    QueryDeviceVodUrlByTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDeviceVodUrlByTimeRequest() = default ;
    QueryDeviceVodUrlByTimeRequest& operator=(const QueryDeviceVodUrlByTimeRequest &) = default ;
    QueryDeviceVodUrlByTimeRequest& operator=(QueryDeviceVodUrlByTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->deviceName_ == nullptr && this->enableStun_ == nullptr && this->encryptType_ == nullptr && this->endTime_ == nullptr && this->iotId_ == nullptr
        && this->iotInstanceId_ == nullptr && this->playUnLimited_ == nullptr && this->productKey_ == nullptr && this->scheme_ == nullptr && this->seekTime_ == nullptr
        && this->shouldEncrypt_ == nullptr && this->urlValidDuration_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int32_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0) };
    inline QueryDeviceVodUrlByTimeRequest& setBeginTime(int32_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline QueryDeviceVodUrlByTimeRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // enableStun Field Functions 
    bool hasEnableStun() const { return this->enableStun_ != nullptr;};
    void deleteEnableStun() { this->enableStun_ = nullptr;};
    inline bool getEnableStun() const { DARABONBA_PTR_GET_DEFAULT(enableStun_, false) };
    inline QueryDeviceVodUrlByTimeRequest& setEnableStun(bool enableStun) { DARABONBA_PTR_SET_VALUE(enableStun_, enableStun) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline int32_t getEncryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, 0) };
    inline QueryDeviceVodUrlByTimeRequest& setEncryptType(int32_t encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline QueryDeviceVodUrlByTimeRequest& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // iotId Field Functions 
    bool hasIotId() const { return this->iotId_ != nullptr;};
    void deleteIotId() { this->iotId_ = nullptr;};
    inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
    inline QueryDeviceVodUrlByTimeRequest& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline QueryDeviceVodUrlByTimeRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // playUnLimited Field Functions 
    bool hasPlayUnLimited() const { return this->playUnLimited_ != nullptr;};
    void deletePlayUnLimited() { this->playUnLimited_ = nullptr;};
    inline bool getPlayUnLimited() const { DARABONBA_PTR_GET_DEFAULT(playUnLimited_, false) };
    inline QueryDeviceVodUrlByTimeRequest& setPlayUnLimited(bool playUnLimited) { DARABONBA_PTR_SET_VALUE(playUnLimited_, playUnLimited) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline QueryDeviceVodUrlByTimeRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


    // scheme Field Functions 
    bool hasScheme() const { return this->scheme_ != nullptr;};
    void deleteScheme() { this->scheme_ = nullptr;};
    inline string getScheme() const { DARABONBA_PTR_GET_DEFAULT(scheme_, "") };
    inline QueryDeviceVodUrlByTimeRequest& setScheme(string scheme) { DARABONBA_PTR_SET_VALUE(scheme_, scheme) };


    // seekTime Field Functions 
    bool hasSeekTime() const { return this->seekTime_ != nullptr;};
    void deleteSeekTime() { this->seekTime_ = nullptr;};
    inline int32_t getSeekTime() const { DARABONBA_PTR_GET_DEFAULT(seekTime_, 0) };
    inline QueryDeviceVodUrlByTimeRequest& setSeekTime(int32_t seekTime) { DARABONBA_PTR_SET_VALUE(seekTime_, seekTime) };


    // shouldEncrypt Field Functions 
    bool hasShouldEncrypt() const { return this->shouldEncrypt_ != nullptr;};
    void deleteShouldEncrypt() { this->shouldEncrypt_ = nullptr;};
    inline bool getShouldEncrypt() const { DARABONBA_PTR_GET_DEFAULT(shouldEncrypt_, false) };
    inline QueryDeviceVodUrlByTimeRequest& setShouldEncrypt(bool shouldEncrypt) { DARABONBA_PTR_SET_VALUE(shouldEncrypt_, shouldEncrypt) };


    // urlValidDuration Field Functions 
    bool hasUrlValidDuration() const { return this->urlValidDuration_ != nullptr;};
    void deleteUrlValidDuration() { this->urlValidDuration_ = nullptr;};
    inline int32_t getUrlValidDuration() const { DARABONBA_PTR_GET_DEFAULT(urlValidDuration_, 0) };
    inline QueryDeviceVodUrlByTimeRequest& setUrlValidDuration(int32_t urlValidDuration) { DARABONBA_PTR_SET_VALUE(urlValidDuration_, urlValidDuration) };


  protected:
    // The recording start time. The value must be a 10-digit UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<int32_t> beginTime_ {};
    // The DeviceName of the IPC device.
    // You can view the **DeviceName** on the **Devices** page in the IoT Platform console.
    // >Notice:  If you specify this parameter, you must also specify **ProductKey**.
    shared_ptr<string> deviceName_ {};
    shared_ptr<bool> enableStun_ {};
    // The encryption type. Only I-frame encryption is supported. Set the value to 0.
    shared_ptr<int32_t> encryptType_ {};
    // The recording end time. The value must be a 10-digit UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<int32_t> endTime_ {};
    // The ID of the IPC device. The ID is issued by IoT Platform and uniquely identifies the device. You can call the [QueryDeviceDetail](https://help.aliyun.com/document_detail/69594.html) operation of IoT Platform to query the ID.
    // 
    // >Notice:  If you specify this parameter, you do not need to specify **ProductKey** or **DeviceName**. The **IotId** uniquely identifies the device and has a one-to-one mapping with the combination of **ProductKey** and **DeviceName**. If you specify both **IotId** and the combination of **ProductKey** and **DeviceName**, **IotId** takes precedence.
    shared_ptr<string> iotId_ {};
    // The instance ID. You can view the **ID** of the current instance on the **Instance Overview** page in the IoT Platform console.
    // 
    // >Notice: 
    // - If the instance has an ID, you must specify this ID. Otherwise, the call fails.
    // - If the instance does not have an <props="intl"><ph>**Instance Overview** page or </ph>ID, you do not need to specify this parameter.
    // 
    // 
    // 
    // For more information about instances, see [Instance overview](https://help.aliyun.com/document_detail/356505.html).
    shared_ptr<string> iotInstanceId_ {};
    // Specifies whether the playback URL can be used an unlimited number of times. Valid values:
    // 
    // - **true**: The URL can be used an unlimited number of times within 10 seconds.
    // - **false**: The URL can be used only once. This is the default value.
    shared_ptr<bool> playUnLimited_ {};
    // The ProductKey of the product to which the IPC device belongs.
    // You can view the ProductKey on the **Products** page in the IoT Platform console or call the [QueryProductList](https://help.aliyun.com/document_detail/69271.html) operation to query the information about all products under the current account.
    // >Notice:  If you specify this parameter, you must also specify **DeviceName**.
    shared_ptr<string> productKey_ {};
    // The protocol type. Valid values:
    // - **rtmp**: RTMP.
    // - **flv**: HTTP-FLV.
    // - **hls**: HLS.
    //  > For more information about the limits of HLS, see [Cloud development](https://help.aliyun.com/document_detail/208584.html).
    shared_ptr<string> scheme_ {};
    // The offset relative to the recording start time specified by **BeginTime**. Unit: seconds. Default value: 0.
    shared_ptr<int32_t> seekTime_ {};
    // Specifies whether to encrypt the stream. Valid values:
    // - **true**: Encrypts the stream.
    // - **false**: Does not encrypt the stream. This is the default value.
    shared_ptr<bool> shouldEncrypt_ {};
    // The validity period of the URL. Valid values: 10 to 14400. Unit: seconds. Default value: 10.
    shared_ptr<int32_t> urlValidDuration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
