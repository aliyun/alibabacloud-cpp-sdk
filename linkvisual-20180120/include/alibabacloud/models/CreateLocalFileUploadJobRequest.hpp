// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOCALFILEUPLOADJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOCALFILEUPLOADJOBREQUEST_HPP_
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
  class CreateLocalFileUploadJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLocalFileUploadJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(TimeSlot, timeSlot_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLocalFileUploadJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(TimeSlot, timeSlot_);
    };
    CreateLocalFileUploadJobRequest() = default ;
    CreateLocalFileUploadJobRequest(const CreateLocalFileUploadJobRequest &) = default ;
    CreateLocalFileUploadJobRequest(CreateLocalFileUploadJobRequest &&) = default ;
    CreateLocalFileUploadJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLocalFileUploadJobRequest() = default ;
    CreateLocalFileUploadJobRequest& operator=(const CreateLocalFileUploadJobRequest &) = default ;
    CreateLocalFileUploadJobRequest& operator=(CreateLocalFileUploadJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TimeSlot : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimeSlot& obj) { 
        DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(IotId, iotId_);
        DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, TimeSlot& obj) { 
        DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(IotId, iotId_);
        DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      TimeSlot() = default ;
      TimeSlot(const TimeSlot &) = default ;
      TimeSlot(TimeSlot &&) = default ;
      TimeSlot(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TimeSlot() = default ;
      TimeSlot& operator=(const TimeSlot &) = default ;
      TimeSlot& operator=(TimeSlot &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deviceName_ == nullptr
        && this->endTime_ == nullptr && this->iotId_ == nullptr && this->productKey_ == nullptr && this->startTime_ == nullptr; };
      // deviceName Field Functions 
      bool hasDeviceName() const { return this->deviceName_ != nullptr;};
      void deleteDeviceName() { this->deviceName_ = nullptr;};
      inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
      inline TimeSlot& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int32_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
      inline TimeSlot& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // iotId Field Functions 
      bool hasIotId() const { return this->iotId_ != nullptr;};
      void deleteIotId() { this->iotId_ = nullptr;};
      inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
      inline TimeSlot& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


      // productKey Field Functions 
      bool hasProductKey() const { return this->productKey_ != nullptr;};
      void deleteProductKey() { this->productKey_ = nullptr;};
      inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
      inline TimeSlot& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int32_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
      inline TimeSlot& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The name of the video device.
      // You can view the **DeviceName** on the **Devices** page in the IoT Platform console.
      // >Notice:  If you specify this parameter, you must also specify **ProductKey**.
      shared_ptr<string> deviceName_ {};
      // The end time for uploading the local video recording. The time is a 10-digit UNIX timestamp in seconds.
      // >The maximum time range for a single local video recording upload job is 1 hour.
      // 
      // This parameter is required.
      shared_ptr<int32_t> endTime_ {};
      // The ID of the video device. The ID is issued by IoT Platform and uniquely identifies the device. You can call the [QueryDeviceDetail](https://help.aliyun.com/document_detail/69594.html) operation of IoT Platform to query the ID.
      // 
      // >Notice:  If you specify this parameter, you do not need to specify **ProductKey** or **DeviceName**. The **IotId** uniquely identifies the device and has a one-to-one mapping with the combination of **ProductKey** and **DeviceName**. If you specify both **IotId** and the combination of **ProductKey** and **DeviceName**, **IotId** takes precedence.
      shared_ptr<string> iotId_ {};
      // The ProductKey of the product to which the video device belongs.
      // You can view the ProductKey on the **Products** page in the IoT Platform console or call the [QueryProductList](https://help.aliyun.com/document_detail/69271.html) operation to query the information about all products under the current account.
      // >Notice:  If you specify this parameter, you must also specify **DeviceName**.
      shared_ptr<string> productKey_ {};
      // The start time for uploading the local video recording. The time is a 10-digit UNIX timestamp in seconds.
      // >The maximum time range for a single local video recording upload job is 1 hour.
      // 
      // This parameter is required.
      shared_ptr<int32_t> startTime_ {};
    };

    virtual bool empty() const override { return this->iotInstanceId_ == nullptr
        && this->timeSlot_ == nullptr; };
    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline CreateLocalFileUploadJobRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // timeSlot Field Functions 
    bool hasTimeSlot() const { return this->timeSlot_ != nullptr;};
    void deleteTimeSlot() { this->timeSlot_ = nullptr;};
    inline const vector<CreateLocalFileUploadJobRequest::TimeSlot> & getTimeSlot() const { DARABONBA_PTR_GET_CONST(timeSlot_, vector<CreateLocalFileUploadJobRequest::TimeSlot>) };
    inline vector<CreateLocalFileUploadJobRequest::TimeSlot> getTimeSlot() { DARABONBA_PTR_GET(timeSlot_, vector<CreateLocalFileUploadJobRequest::TimeSlot>) };
    inline CreateLocalFileUploadJobRequest& setTimeSlot(const vector<CreateLocalFileUploadJobRequest::TimeSlot> & timeSlot) { DARABONBA_PTR_SET_VALUE(timeSlot_, timeSlot) };
    inline CreateLocalFileUploadJobRequest& setTimeSlot(vector<CreateLocalFileUploadJobRequest::TimeSlot> && timeSlot) { DARABONBA_PTR_SET_RVALUE(timeSlot_, timeSlot) };


  protected:
    // The instance ID. You can view the **ID** of the current instance on the **Instance Overview** page in the IoT Platform console.
    // 
    // >Notice: 
    // - If the instance has an ID, you must specify the ID. Otherwise, the call fails.
    // - If the instance does not have an <props="intl"><ph>**Instance Overview** page or </ph>ID, you do not need to specify this parameter.
    // 
    // 
    // 
    // For more information about instances, see [Instance overview](https://help.aliyun.com/document_detail/356505.html).
    shared_ptr<string> iotInstanceId_ {};
    // The list of time slots.
    shared_ptr<vector<CreateLocalFileUploadJobRequest::TimeSlot>> timeSlot_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
