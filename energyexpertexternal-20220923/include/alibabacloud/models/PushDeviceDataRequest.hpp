// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHDEVICEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHDEVICEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class PushDeviceDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushDeviceDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(deviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(devices, devices_);
    };
    friend void from_json(const Darabonba::Json& j, PushDeviceDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(deviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(devices, devices_);
    };
    PushDeviceDataRequest() = default ;
    PushDeviceDataRequest(const PushDeviceDataRequest &) = default ;
    PushDeviceDataRequest(PushDeviceDataRequest &&) = default ;
    PushDeviceDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushDeviceDataRequest() = default ;
    PushDeviceDataRequest& operator=(const PushDeviceDataRequest &) = default ;
    PushDeviceDataRequest& operator=(PushDeviceDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Devices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Devices& obj) { 
        DARABONBA_ANY_TO_JSON(data, data_);
        DARABONBA_PTR_TO_JSON(deviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(recordTime, recordTime_);
      };
      friend void from_json(const Darabonba::Json& j, Devices& obj) { 
        DARABONBA_ANY_FROM_JSON(data, data_);
        DARABONBA_PTR_FROM_JSON(deviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(recordTime, recordTime_);
      };
      Devices() = default ;
      Devices(const Devices &) = default ;
      Devices(Devices &&) = default ;
      Devices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Devices() = default ;
      Devices& operator=(const Devices &) = default ;
      Devices& operator=(Devices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->data_ == nullptr
        && this->deviceId_ == nullptr && this->recordTime_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline       const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
      Darabonba::Json & getData() { DARABONBA_GET(data_) };
      inline Devices& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
      inline Devices& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline Devices& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // recordTime Field Functions 
      bool hasRecordTime() const { return this->recordTime_ != nullptr;};
      void deleteRecordTime() { this->recordTime_ = nullptr;};
      inline string getRecordTime() const { DARABONBA_PTR_GET_DEFAULT(recordTime_, "") };
      inline Devices& setRecordTime(string recordTime) { DARABONBA_PTR_SET_VALUE(recordTime_, recordTime) };


    protected:
      // Measuring point information To avoid accuracy problems, the measurement point data is uniformly transmitted to the string. The function of missing required fields cannot be used normally. Some functions may be affected due to the lack of recommend fields. For details, please refer to the notes of equipment measuring points in the appendix. [Reference Point Definition](https://carbon-doc.oss-cn-hangzhou.aliyuncs.com/Deviceappendixes-en.pdf
      // )
      // 
      // This parameter is required.
      Darabonba::Json data_ {};
      // If the deviceType parameter is set to 12, 13, or 17, you must set the system_id parameter. The field name is still device_id. If the deviceType parameter is set to 15 or 16, no Other situations will be transmitted.
      // 
      // This parameter is required.
      shared_ptr<string> deviceId_ {};
      // Data generation time of measuring point.
      // 
      // This parameter is required.
      shared_ptr<string> recordTime_ {};
    };

    virtual bool empty() const override { return this->deviceType_ == nullptr
        && this->devices_ == nullptr; };
    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline PushDeviceDataRequest& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // devices Field Functions 
    bool hasDevices() const { return this->devices_ != nullptr;};
    void deleteDevices() { this->devices_ = nullptr;};
    inline const vector<PushDeviceDataRequest::Devices> & getDevices() const { DARABONBA_PTR_GET_CONST(devices_, vector<PushDeviceDataRequest::Devices>) };
    inline vector<PushDeviceDataRequest::Devices> getDevices() { DARABONBA_PTR_GET(devices_, vector<PushDeviceDataRequest::Devices>) };
    inline PushDeviceDataRequest& setDevices(const vector<PushDeviceDataRequest::Devices> & devices) { DARABONBA_PTR_SET_VALUE(devices_, devices) };
    inline PushDeviceDataRequest& setDevices(vector<PushDeviceDataRequest::Devices> && devices) { DARABONBA_PTR_SET_RVALUE(devices_, devices) };


  protected:
    // The type of the device. [View device type definitions](https://carbon-doc.oss-cn-hangzhou.aliyuncs.com/Deviceappendixes-en.pdf)
    // 
    // This parameter is required.
    shared_ptr<string> deviceType_ {};
    // List of devices to which data is pushed.
    // 
    // This parameter is required.
    shared_ptr<vector<PushDeviceDataRequest::Devices>> devices_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
