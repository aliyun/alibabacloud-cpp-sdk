// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLIVESTREAMINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYLIVESTREAMINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryLiveStreamingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLiveStreamingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CacheDuration, cacheDuration_);
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(EnableStun, enableStun_);
      DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_TO_JSON(ForceIFrame, forceIFrame_);
      DARABONBA_PTR_TO_JSON(IotId, iotId_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(PlayUnLimited, playUnLimited_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
      DARABONBA_PTR_TO_JSON(Scheme, scheme_);
      DARABONBA_PTR_TO_JSON(ShouldEncrypt, shouldEncrypt_);
      DARABONBA_PTR_TO_JSON(StreamType, streamType_);
      DARABONBA_PTR_TO_JSON(UrlValidDuration, urlValidDuration_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLiveStreamingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheDuration, cacheDuration_);
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(EnableStun, enableStun_);
      DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_FROM_JSON(ForceIFrame, forceIFrame_);
      DARABONBA_PTR_FROM_JSON(IotId, iotId_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(PlayUnLimited, playUnLimited_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
      DARABONBA_PTR_FROM_JSON(Scheme, scheme_);
      DARABONBA_PTR_FROM_JSON(ShouldEncrypt, shouldEncrypt_);
      DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
      DARABONBA_PTR_FROM_JSON(UrlValidDuration, urlValidDuration_);
    };
    QueryLiveStreamingRequest() = default ;
    QueryLiveStreamingRequest(const QueryLiveStreamingRequest &) = default ;
    QueryLiveStreamingRequest(QueryLiveStreamingRequest &&) = default ;
    QueryLiveStreamingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLiveStreamingRequest() = default ;
    QueryLiveStreamingRequest& operator=(const QueryLiveStreamingRequest &) = default ;
    QueryLiveStreamingRequest& operator=(QueryLiveStreamingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cacheDuration_ == nullptr
        && this->deviceName_ == nullptr && this->enableStun_ == nullptr && this->encryptType_ == nullptr && this->forceIFrame_ == nullptr && this->iotId_ == nullptr
        && this->iotInstanceId_ == nullptr && this->playUnLimited_ == nullptr && this->productKey_ == nullptr && this->scheme_ == nullptr && this->shouldEncrypt_ == nullptr
        && this->streamType_ == nullptr && this->urlValidDuration_ == nullptr; };
    // cacheDuration Field Functions 
    bool hasCacheDuration() const { return this->cacheDuration_ != nullptr;};
    void deleteCacheDuration() { this->cacheDuration_ = nullptr;};
    inline int32_t getCacheDuration() const { DARABONBA_PTR_GET_DEFAULT(cacheDuration_, 0) };
    inline QueryLiveStreamingRequest& setCacheDuration(int32_t cacheDuration) { DARABONBA_PTR_SET_VALUE(cacheDuration_, cacheDuration) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline QueryLiveStreamingRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // enableStun Field Functions 
    bool hasEnableStun() const { return this->enableStun_ != nullptr;};
    void deleteEnableStun() { this->enableStun_ = nullptr;};
    inline bool getEnableStun() const { DARABONBA_PTR_GET_DEFAULT(enableStun_, false) };
    inline QueryLiveStreamingRequest& setEnableStun(bool enableStun) { DARABONBA_PTR_SET_VALUE(enableStun_, enableStun) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline int32_t getEncryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, 0) };
    inline QueryLiveStreamingRequest& setEncryptType(int32_t encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // forceIFrame Field Functions 
    bool hasForceIFrame() const { return this->forceIFrame_ != nullptr;};
    void deleteForceIFrame() { this->forceIFrame_ = nullptr;};
    inline bool getForceIFrame() const { DARABONBA_PTR_GET_DEFAULT(forceIFrame_, false) };
    inline QueryLiveStreamingRequest& setForceIFrame(bool forceIFrame) { DARABONBA_PTR_SET_VALUE(forceIFrame_, forceIFrame) };


    // iotId Field Functions 
    bool hasIotId() const { return this->iotId_ != nullptr;};
    void deleteIotId() { this->iotId_ = nullptr;};
    inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
    inline QueryLiveStreamingRequest& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline QueryLiveStreamingRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // playUnLimited Field Functions 
    bool hasPlayUnLimited() const { return this->playUnLimited_ != nullptr;};
    void deletePlayUnLimited() { this->playUnLimited_ = nullptr;};
    inline bool getPlayUnLimited() const { DARABONBA_PTR_GET_DEFAULT(playUnLimited_, false) };
    inline QueryLiveStreamingRequest& setPlayUnLimited(bool playUnLimited) { DARABONBA_PTR_SET_VALUE(playUnLimited_, playUnLimited) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline QueryLiveStreamingRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


    // scheme Field Functions 
    bool hasScheme() const { return this->scheme_ != nullptr;};
    void deleteScheme() { this->scheme_ = nullptr;};
    inline string getScheme() const { DARABONBA_PTR_GET_DEFAULT(scheme_, "") };
    inline QueryLiveStreamingRequest& setScheme(string scheme) { DARABONBA_PTR_SET_VALUE(scheme_, scheme) };


    // shouldEncrypt Field Functions 
    bool hasShouldEncrypt() const { return this->shouldEncrypt_ != nullptr;};
    void deleteShouldEncrypt() { this->shouldEncrypt_ = nullptr;};
    inline bool getShouldEncrypt() const { DARABONBA_PTR_GET_DEFAULT(shouldEncrypt_, false) };
    inline QueryLiveStreamingRequest& setShouldEncrypt(bool shouldEncrypt) { DARABONBA_PTR_SET_VALUE(shouldEncrypt_, shouldEncrypt) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline int32_t getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0) };
    inline QueryLiveStreamingRequest& setStreamType(int32_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


    // urlValidDuration Field Functions 
    bool hasUrlValidDuration() const { return this->urlValidDuration_ != nullptr;};
    void deleteUrlValidDuration() { this->urlValidDuration_ = nullptr;};
    inline int32_t getUrlValidDuration() const { DARABONBA_PTR_GET_DEFAULT(urlValidDuration_, 0) };
    inline QueryLiveStreamingRequest& setUrlValidDuration(int32_t urlValidDuration) { DARABONBA_PTR_SET_VALUE(urlValidDuration_, urlValidDuration) };


  protected:
    // The duration of video cached data. Valid values: 0 to 10000. Unit: milliseconds. Default value: 0.
    shared_ptr<int32_t> cacheDuration_ {};
    // The DeviceName of the IPC device. You can view the **DeviceName** on the **Devices** page in the IoT Platform console.
    // >Notice:  If you specify this parameter, you must also specify **ProductKey**.
    shared_ptr<string> deviceName_ {};
    shared_ptr<bool> enableStun_ {};
    // The encryption type. Valid values:
    // - **1** (default): Keyframe encryption.
    // - **0**: No encryption.
    shared_ptr<int32_t> encryptType_ {};
    // Specifies whether to send a force I-frame command to the device. Valid values:
    // 
    // - **true**: Sent.
    // - **false** (default): Not sent.
    shared_ptr<bool> forceIFrame_ {};
    // The IotId of the IPC device. The IotId is the globally unique identifier that is issued by IoT Platform to the device. You can call the [QueryDeviceDetail](https://help.aliyun.com/document_detail/69594.html) operation of IoT Platform to query the IotId.
    // 
    // >Notice:  If you specify this parameter, you do not need to specify **ProductKey** or **DeviceName**. The **IotId** is the globally unique identifier of the device and corresponds to the combination of **ProductKey** and **DeviceName**. If you specify both **IotId** and the combination of **ProductKey** and **DeviceName**, **IotId** takes precedence.
    shared_ptr<string> iotId_ {};
    // The instance ID. You can view the **ID** of the current instance on the **Instance Overview** page in the IoT Platform console.
    // 
    // >Notice: 
    // - If an ID value is displayed, you must specify this parameter. Otherwise, the call fails.
    // - If the <props="intl"><ph>**Instance Overview** page or </ph>ID value is not displayed, you do not need to specify this parameter.
    // 
    // 
    // 
    // For more information about instances, see [Instance overview](https://help.aliyun.com/document_detail/356505.html).
    shared_ptr<string> iotInstanceId_ {};
    // Specifies whether the playback URL can be used for an unlimited number of times within the validity period. Valid values:
    // - **true**: Allowed.
    // - **false** (default): Not allowed.
    shared_ptr<bool> playUnLimited_ {};
    // The ProductKey of the product to which the IPC device belongs. You can view the ProductKey on the **Products** page in the IoT Platform console or call the [QueryProductList](https://help.aliyun.com/document_detail/69271.html) operation to query the information about all products under the current account.
    // >Notice:  If you specify this parameter, you must also specify **DeviceName**.
    shared_ptr<string> productKey_ {};
    // The playback protocol type. Valid values:
    // 
    // - **rtmp** (default): RTMP.
    // - **hls**: HLS.
    // - **flv**: HTTP-FLV.
    shared_ptr<string> scheme_ {};
    // Specifies whether to encrypt the stream. Valid values:
    // 
    // - **true**: Encrypted.
    // - **false** (default): Not encrypted.
    shared_ptr<bool> shouldEncrypt_ {};
    // The stream type. Valid values:
    // - **0** (default): Main stream.
    // - **1**: Sub stream.
    shared_ptr<int32_t> streamType_ {};
    // The validity period of the URL. Valid values: 10 to 14400. Unit: seconds. Default value: 10.
    shared_ptr<int32_t> urlValidDuration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
