// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOCALRECORDDOWNLOADBYTIMEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOCALRECORDDOWNLOADBYTIMEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class CreateLocalRecordDownloadByTimeJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLocalRecordDownloadByTimeJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IotId, iotId_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
      DARABONBA_PTR_TO_JSON(Speed, speed_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLocalRecordDownloadByTimeJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IotId, iotId_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
      DARABONBA_PTR_FROM_JSON(Speed, speed_);
    };
    CreateLocalRecordDownloadByTimeJobRequest() = default ;
    CreateLocalRecordDownloadByTimeJobRequest(const CreateLocalRecordDownloadByTimeJobRequest &) = default ;
    CreateLocalRecordDownloadByTimeJobRequest(CreateLocalRecordDownloadByTimeJobRequest &&) = default ;
    CreateLocalRecordDownloadByTimeJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLocalRecordDownloadByTimeJobRequest() = default ;
    CreateLocalRecordDownloadByTimeJobRequest& operator=(const CreateLocalRecordDownloadByTimeJobRequest &) = default ;
    CreateLocalRecordDownloadByTimeJobRequest& operator=(CreateLocalRecordDownloadByTimeJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->deviceName_ == nullptr && this->endTime_ == nullptr && this->iotId_ == nullptr && this->iotInstanceId_ == nullptr && this->productKey_ == nullptr
        && this->speed_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int32_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0) };
    inline CreateLocalRecordDownloadByTimeJobRequest& setBeginTime(int32_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline CreateLocalRecordDownloadByTimeJobRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline CreateLocalRecordDownloadByTimeJobRequest& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // iotId Field Functions 
    bool hasIotId() const { return this->iotId_ != nullptr;};
    void deleteIotId() { this->iotId_ = nullptr;};
    inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
    inline CreateLocalRecordDownloadByTimeJobRequest& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline CreateLocalRecordDownloadByTimeJobRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline CreateLocalRecordDownloadByTimeJobRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline float getSpeed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0.0) };
    inline CreateLocalRecordDownloadByTimeJobRequest& setSpeed(float speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


  protected:
    // The start time. The value must be a 10-digit timestamp in seconds. Valid values: 0 to 2147483647.
    // 
    // This parameter is required.
    shared_ptr<int32_t> beginTime_ {};
    // The DeviceName of the video device. You can view the **DeviceName** of a device under a specified product on the **Devices** page in the IoT Platform console or by calling the [QueryDevice](https://help.aliyun.com/document_detail/69905.html) operation.
    // 
    // >Notice: If you specify this parameter, you must also specify **ProductKey**.
    shared_ptr<string> deviceName_ {};
    // The end time. The value must be a 10-digit timestamp in seconds. Valid values: 0 to 2147483647. The value must be greater than the start time specified by **BeginTime**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> endTime_ {};
    // The ID of the video device. You can call the [QueryDeviceDetail](https://help.aliyun.com/document_detail/69594.html) operation to query the ID.
    // 
    // >Notice: 
    // **IotId** is the unique identifier of the device and corresponds to the combination of **ProductKey** and **DeviceName**. If you specify this parameter, you do not need to specify **ProductKey** or **DeviceName**. If you specify both **IotId** and the combination of **ProductKey** and **DeviceName**, **IotId** takes precedence.
    shared_ptr<string> iotId_ {};
    // The instance ID. You can view the ID of the current instance on the **Instance Overview** tab in the IoT Platform console.
    // 
    // This parameter is required.
    shared_ptr<string> iotInstanceId_ {};
    // The **ProductKey** of the product to which the video device belongs.
    // 
    // You can view the information of all products under the current instance on the **Products** page in the IoT Platform console or by calling the [QueryProductList](https://help.aliyun.com/document_detail/69271.html) operation.
    // 
    // >Notice: If you specify this parameter, you must also specify **DeviceName**.
    shared_ptr<string> productKey_ {};
    // The upload speed multiplier of the device. Default value: **1.0**. Valid values: **0.125** to **8.0**.
    shared_ptr<float> speed_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
