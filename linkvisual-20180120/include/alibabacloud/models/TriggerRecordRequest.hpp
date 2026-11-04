// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class TriggerRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(IotId, iotId_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(PreRecordDuration, preRecordDuration_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
      DARABONBA_PTR_TO_JSON(RecordDuration, recordDuration_);
      DARABONBA_PTR_TO_JSON(StreamType, streamType_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(IotId, iotId_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(PreRecordDuration, preRecordDuration_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
      DARABONBA_PTR_FROM_JSON(RecordDuration, recordDuration_);
      DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
    };
    TriggerRecordRequest() = default ;
    TriggerRecordRequest(const TriggerRecordRequest &) = default ;
    TriggerRecordRequest(TriggerRecordRequest &&) = default ;
    TriggerRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerRecordRequest() = default ;
    TriggerRecordRequest& operator=(const TriggerRecordRequest &) = default ;
    TriggerRecordRequest& operator=(TriggerRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceName_ == nullptr
        && this->iotId_ == nullptr && this->iotInstanceId_ == nullptr && this->preRecordDuration_ == nullptr && this->productKey_ == nullptr && this->recordDuration_ == nullptr
        && this->streamType_ == nullptr; };
    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline TriggerRecordRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // iotId Field Functions 
    bool hasIotId() const { return this->iotId_ != nullptr;};
    void deleteIotId() { this->iotId_ = nullptr;};
    inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
    inline TriggerRecordRequest& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline TriggerRecordRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // preRecordDuration Field Functions 
    bool hasPreRecordDuration() const { return this->preRecordDuration_ != nullptr;};
    void deletePreRecordDuration() { this->preRecordDuration_ = nullptr;};
    inline int32_t getPreRecordDuration() const { DARABONBA_PTR_GET_DEFAULT(preRecordDuration_, 0) };
    inline TriggerRecordRequest& setPreRecordDuration(int32_t preRecordDuration) { DARABONBA_PTR_SET_VALUE(preRecordDuration_, preRecordDuration) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline TriggerRecordRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


    // recordDuration Field Functions 
    bool hasRecordDuration() const { return this->recordDuration_ != nullptr;};
    void deleteRecordDuration() { this->recordDuration_ = nullptr;};
    inline int32_t getRecordDuration() const { DARABONBA_PTR_GET_DEFAULT(recordDuration_, 0) };
    inline TriggerRecordRequest& setRecordDuration(int32_t recordDuration) { DARABONBA_PTR_SET_VALUE(recordDuration_, recordDuration) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline int32_t getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0) };
    inline TriggerRecordRequest& setStreamType(int32_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


  protected:
    // The DeviceName of the IPC device. You can view the **DeviceName** on the **Devices** page in the IoT Platform console.
    // >Notice:  If you specify this parameter, you must also specify **ProductKey**.
    shared_ptr<string> deviceName_ {};
    // The IotId of the IPC device. The IotId is the unique identifier that is issued by IoT Platform to the device. You can call the [QueryDeviceDetail](https://help.aliyun.com/document_detail/69594.html) operation of IoT Platform to query the IotId.
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
    // The pre-recording duration. Valid values: 0 to 10. Unit: seconds.
    // 
    // >The pre-recording duration is generated only when the device supports the pre-recording feature. Otherwise, the pre-recording duration is 0.
    shared_ptr<int32_t> preRecordDuration_ {};
    // The ProductKey of the product to which the IPC device belongs. You can view the ProductKey on the **Products** page in the IoT Platform console or call the [QueryProductList](https://help.aliyun.com/document_detail/69271.html) operation to query all products under the current account.
    // >Notice:  If you specify this parameter, you must also specify **DeviceName**.
    shared_ptr<string> productKey_ {};
    // The recording duration, including the pre-recording duration. Valid values: 10 to 7200. Unit: seconds.
    // 
    // > The maximum length of a single recording file is 30 minutes. If the recording duration exceeds 30 minutes, the recording is automatically split into multiple recording files.
    // 
    // This parameter is required.
    shared_ptr<int32_t> recordDuration_ {};
    // The stream type. Valid values:
    // - **0** (default): main stream.
    // - **1**: sub stream.
    shared_ptr<int32_t> streamType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
