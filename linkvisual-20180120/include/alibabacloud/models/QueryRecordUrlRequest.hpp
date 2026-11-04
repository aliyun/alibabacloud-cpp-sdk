// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECORDURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECORDURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryRecordUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRecordUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(IotId, iotId_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
      DARABONBA_PTR_TO_JSON(SeekTime, seekTime_);
      DARABONBA_PTR_TO_JSON(UrlValidDuration, urlValidDuration_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRecordUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(IotId, iotId_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
      DARABONBA_PTR_FROM_JSON(SeekTime, seekTime_);
      DARABONBA_PTR_FROM_JSON(UrlValidDuration, urlValidDuration_);
    };
    QueryRecordUrlRequest() = default ;
    QueryRecordUrlRequest(const QueryRecordUrlRequest &) = default ;
    QueryRecordUrlRequest(QueryRecordUrlRequest &&) = default ;
    QueryRecordUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRecordUrlRequest() = default ;
    QueryRecordUrlRequest& operator=(const QueryRecordUrlRequest &) = default ;
    QueryRecordUrlRequest& operator=(QueryRecordUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceName_ == nullptr
        && this->fileName_ == nullptr && this->iotId_ == nullptr && this->iotInstanceId_ == nullptr && this->productKey_ == nullptr && this->seekTime_ == nullptr
        && this->urlValidDuration_ == nullptr; };
    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline QueryRecordUrlRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline QueryRecordUrlRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // iotId Field Functions 
    bool hasIotId() const { return this->iotId_ != nullptr;};
    void deleteIotId() { this->iotId_ = nullptr;};
    inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
    inline QueryRecordUrlRequest& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline QueryRecordUrlRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline QueryRecordUrlRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


    // seekTime Field Functions 
    bool hasSeekTime() const { return this->seekTime_ != nullptr;};
    void deleteSeekTime() { this->seekTime_ = nullptr;};
    inline int32_t getSeekTime() const { DARABONBA_PTR_GET_DEFAULT(seekTime_, 0) };
    inline QueryRecordUrlRequest& setSeekTime(int32_t seekTime) { DARABONBA_PTR_SET_VALUE(seekTime_, seekTime) };


    // urlValidDuration Field Functions 
    bool hasUrlValidDuration() const { return this->urlValidDuration_ != nullptr;};
    void deleteUrlValidDuration() { this->urlValidDuration_ = nullptr;};
    inline int32_t getUrlValidDuration() const { DARABONBA_PTR_GET_DEFAULT(urlValidDuration_, 0) };
    inline QueryRecordUrlRequest& setUrlValidDuration(int32_t urlValidDuration) { DARABONBA_PTR_SET_VALUE(urlValidDuration_, urlValidDuration) };


  protected:
    // The DeviceName of the IP camera.
    // You can view the **DeviceName** on the **Devices** page in the IoT Platform console.
    // >Notice:  If you specify this parameter, you must also specify **ProductKey**.
    shared_ptr<string> deviceName_ {};
    // The name of the cloud recording file. You can call the [QueryRecord](https://help.aliyun.com/document_detail/107922.html) operation to query the file name.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The IotId of the IP camera. The IotId is the unique identifier that is issued by IoT Platform to the device. You can call the IoT Platform [QueryDeviceDetail](https://help.aliyun.com/document_detail/69594.html) operation to query the IotId.
    // 
    // >Notice:  If you specify this parameter, you do not need to specify **ProductKey** or **DeviceName**. The **IotId** is the unique identifier of the device and corresponds to the combination of **ProductKey** and **DeviceName**. If you specify both **IotId** and the combination of **ProductKey** and **DeviceName**, **IotId** takes precedence.
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
    // The ProductKey of the product to which the IP camera belongs.
    // You can view the ProductKey on the **Products** page in the IoT Platform console or call the [QueryProductList](https://help.aliyun.com/document_detail/69271.html) operation to query the information about all products under the current account.
    // >Notice:  If you specify this parameter, you must also specify **DeviceName**.
    shared_ptr<string> productKey_ {};
    // The playback offset time of the recording, in seconds. Default value: 0.
    shared_ptr<int32_t> seekTime_ {};
    // The validity period of the URL, in seconds. Valid values: 10 to 3600.
    shared_ptr<int32_t> urlValidDuration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
