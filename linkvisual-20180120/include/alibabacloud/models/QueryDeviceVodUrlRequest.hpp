// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICEVODURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICEVODURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryDeviceVodUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDeviceVodUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(EnableStun, enableStun_);
      DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(IotId, iotId_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(PlayUnLimited, playUnLimited_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
      DARABONBA_PTR_TO_JSON(Scheme, scheme_);
      DARABONBA_PTR_TO_JSON(SeekTime, seekTime_);
      DARABONBA_PTR_TO_JSON(ShouldEncrypt, shouldEncrypt_);
      DARABONBA_PTR_TO_JSON(UrlValidDuration, urlValidDuration_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDeviceVodUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(EnableStun, enableStun_);
      DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(IotId, iotId_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(PlayUnLimited, playUnLimited_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
      DARABONBA_PTR_FROM_JSON(Scheme, scheme_);
      DARABONBA_PTR_FROM_JSON(SeekTime, seekTime_);
      DARABONBA_PTR_FROM_JSON(ShouldEncrypt, shouldEncrypt_);
      DARABONBA_PTR_FROM_JSON(UrlValidDuration, urlValidDuration_);
    };
    QueryDeviceVodUrlRequest() = default ;
    QueryDeviceVodUrlRequest(const QueryDeviceVodUrlRequest &) = default ;
    QueryDeviceVodUrlRequest(QueryDeviceVodUrlRequest &&) = default ;
    QueryDeviceVodUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDeviceVodUrlRequest() = default ;
    QueryDeviceVodUrlRequest& operator=(const QueryDeviceVodUrlRequest &) = default ;
    QueryDeviceVodUrlRequest& operator=(QueryDeviceVodUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceName_ == nullptr
        && this->enableStun_ == nullptr && this->encryptType_ == nullptr && this->fileName_ == nullptr && this->iotId_ == nullptr && this->iotInstanceId_ == nullptr
        && this->playUnLimited_ == nullptr && this->productKey_ == nullptr && this->scheme_ == nullptr && this->seekTime_ == nullptr && this->shouldEncrypt_ == nullptr
        && this->urlValidDuration_ == nullptr; };
    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline QueryDeviceVodUrlRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // enableStun Field Functions 
    bool hasEnableStun() const { return this->enableStun_ != nullptr;};
    void deleteEnableStun() { this->enableStun_ = nullptr;};
    inline bool getEnableStun() const { DARABONBA_PTR_GET_DEFAULT(enableStun_, false) };
    inline QueryDeviceVodUrlRequest& setEnableStun(bool enableStun) { DARABONBA_PTR_SET_VALUE(enableStun_, enableStun) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline int32_t getEncryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, 0) };
    inline QueryDeviceVodUrlRequest& setEncryptType(int32_t encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline QueryDeviceVodUrlRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // iotId Field Functions 
    bool hasIotId() const { return this->iotId_ != nullptr;};
    void deleteIotId() { this->iotId_ = nullptr;};
    inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
    inline QueryDeviceVodUrlRequest& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline QueryDeviceVodUrlRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // playUnLimited Field Functions 
    bool hasPlayUnLimited() const { return this->playUnLimited_ != nullptr;};
    void deletePlayUnLimited() { this->playUnLimited_ = nullptr;};
    inline bool getPlayUnLimited() const { DARABONBA_PTR_GET_DEFAULT(playUnLimited_, false) };
    inline QueryDeviceVodUrlRequest& setPlayUnLimited(bool playUnLimited) { DARABONBA_PTR_SET_VALUE(playUnLimited_, playUnLimited) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline QueryDeviceVodUrlRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


    // scheme Field Functions 
    bool hasScheme() const { return this->scheme_ != nullptr;};
    void deleteScheme() { this->scheme_ = nullptr;};
    inline string getScheme() const { DARABONBA_PTR_GET_DEFAULT(scheme_, "") };
    inline QueryDeviceVodUrlRequest& setScheme(string scheme) { DARABONBA_PTR_SET_VALUE(scheme_, scheme) };


    // seekTime Field Functions 
    bool hasSeekTime() const { return this->seekTime_ != nullptr;};
    void deleteSeekTime() { this->seekTime_ = nullptr;};
    inline int32_t getSeekTime() const { DARABONBA_PTR_GET_DEFAULT(seekTime_, 0) };
    inline QueryDeviceVodUrlRequest& setSeekTime(int32_t seekTime) { DARABONBA_PTR_SET_VALUE(seekTime_, seekTime) };


    // shouldEncrypt Field Functions 
    bool hasShouldEncrypt() const { return this->shouldEncrypt_ != nullptr;};
    void deleteShouldEncrypt() { this->shouldEncrypt_ = nullptr;};
    inline bool getShouldEncrypt() const { DARABONBA_PTR_GET_DEFAULT(shouldEncrypt_, false) };
    inline QueryDeviceVodUrlRequest& setShouldEncrypt(bool shouldEncrypt) { DARABONBA_PTR_SET_VALUE(shouldEncrypt_, shouldEncrypt) };


    // urlValidDuration Field Functions 
    bool hasUrlValidDuration() const { return this->urlValidDuration_ != nullptr;};
    void deleteUrlValidDuration() { this->urlValidDuration_ = nullptr;};
    inline int32_t getUrlValidDuration() const { DARABONBA_PTR_GET_DEFAULT(urlValidDuration_, 0) };
    inline QueryDeviceVodUrlRequest& setUrlValidDuration(int32_t urlValidDuration) { DARABONBA_PTR_SET_VALUE(urlValidDuration_, urlValidDuration) };


  protected:
    // The DeviceName of the IP camera.
    // You can view the **DeviceName** on the **Devices** page in the IoT Platform console.
    // >Notice:  If you specify this parameter, you must also specify **ProductKey**.
    shared_ptr<string> deviceName_ {};
    shared_ptr<bool> enableStun_ {};
    // The encryption type. Only I-frame encryption is supported. Set the value to 0.
    shared_ptr<int32_t> encryptType_ {};
    // The name of the recording file. You can call the [InvokeThingService](https://help.aliyun.com/document_detail/69584.html) operation provided by IoT Platform to query the name. For request parameter examples, see **Supplementary description of request parameters** below.
    // 
    // > The name of the recording file cannot exceed 180 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The ID of the IP camera. The ID is issued by IoT Platform and uniquely identifies the device. You can call the [QueryDeviceDetail](https://help.aliyun.com/document_detail/69594.html) operation of IoT Platform to query the ID.
    // 
    // >Notice:  If you specify this parameter, you do not need to specify **ProductKey** or **DeviceName**. The **IotId** parameter uniquely identifies the device and has a one-to-one mapping with the combination of **ProductKey** and **DeviceName**. If you specify both **IotId** and the combination of **ProductKey** and **DeviceName**, **IotId** takes precedence.
    shared_ptr<string> iotId_ {};
    // The instance ID. You can view the **ID** of the current instance on the **Instance Overview** page in the IoT Platform console.
    // 
    // >Notice: 
    // - If an instance ID is specified, you must specify this parameter. Otherwise, the call fails.
    // - If no <props="intl"><ph>**Instance Overview** page or </ph>instance ID is available, you do not need to specify this parameter.
    // 
    // 
    // 
    // For more information about instances, see [Instance overview](https://help.aliyun.com/document_detail/356505.html).
    shared_ptr<string> iotInstanceId_ {};
    // Specifies whether the playback URL can be used an unlimited number of times. Valid values:
    // - **true**: The URL can be used an unlimited number of times within 10 seconds.
    // - **false**: The URL can be used only once. This is the default value.
    shared_ptr<bool> playUnLimited_ {};
    // The ProductKey of the product to which the IP camera belongs.
    // You can view the ProductKey on the **Products** page in the IoT Platform console or call the [QueryProductList](https://help.aliyun.com/document_detail/69271.html) operation to query the information about all products under the current account.
    // >Notice:  If you specify this parameter, you must also specify **DeviceName**.
    shared_ptr<string> productKey_ {};
    // The protocol type. Valid values:
    // - **rtmp**: RTMP.
    // - **flv**: HTTP-FLV.
    // - **hls**: HLS.
    //  > For more information about the limits of HLS, see [Cloud development](https://help.aliyun.com/document_detail/208584.html).
    shared_ptr<string> scheme_ {};
    // The offset relative to the **BeginTime** parameter, which specifies the start time of the recording. Unit: seconds. Default value: 0.
    shared_ptr<int32_t> seekTime_ {};
    // Specifies whether to encrypt the recording file. Valid values:
    // - **true**: Encrypts the recording file.
    // - **false**: Does not encrypt the recording file. This is the default value.
    shared_ptr<bool> shouldEncrypt_ {};
    // The validity period of the URL. Valid values: 10 to 14400. Unit: seconds. Default value: 10.
    shared_ptr<int32_t> urlValidDuration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
