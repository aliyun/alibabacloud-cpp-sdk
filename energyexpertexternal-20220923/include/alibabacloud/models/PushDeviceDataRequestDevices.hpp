// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHDEVICEDATAREQUESTDEVICES_HPP_
#define ALIBABACLOUD_MODELS_PUSHDEVICEDATAREQUESTDEVICES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class PushDeviceDataRequestDevices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushDeviceDataRequestDevices& obj) { 
      DARABONBA_ANY_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(deviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(recordTime, recordTime_);
    };
    friend void from_json(const Darabonba::Json& j, PushDeviceDataRequestDevices& obj) { 
      DARABONBA_ANY_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(deviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(recordTime, recordTime_);
    };
    PushDeviceDataRequestDevices() = default ;
    PushDeviceDataRequestDevices(const PushDeviceDataRequestDevices &) = default ;
    PushDeviceDataRequestDevices(PushDeviceDataRequestDevices &&) = default ;
    PushDeviceDataRequestDevices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushDeviceDataRequestDevices() = default ;
    PushDeviceDataRequestDevices& operator=(const PushDeviceDataRequestDevices &) = default ;
    PushDeviceDataRequestDevices& operator=(PushDeviceDataRequestDevices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->deviceId_ != nullptr && this->recordTime_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & data() const { DARABONBA_GET(data_) };
    Darabonba::Json & data() { DARABONBA_GET(data_) };
    inline PushDeviceDataRequestDevices& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline PushDeviceDataRequestDevices& setData(Darabonba::Json & data) { DARABONBA_SET_RVALUE(data_, data) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline PushDeviceDataRequestDevices& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // recordTime Field Functions 
    bool hasRecordTime() const { return this->recordTime_ != nullptr;};
    void deleteRecordTime() { this->recordTime_ = nullptr;};
    inline string recordTime() const { DARABONBA_PTR_GET_DEFAULT(recordTime_, "") };
    inline PushDeviceDataRequestDevices& setRecordTime(string recordTime) { DARABONBA_PTR_SET_VALUE(recordTime_, recordTime) };


  protected:
    // Measuring point information To avoid accuracy problems, the measurement point data is uniformly transmitted to the string. The function of missing required fields cannot be used normally. Some functions may be affected due to the lack of recommend fields. For details, please refer to the notes of equipment measuring points in the appendix. [Reference Point Definition](https://carbon-doc.oss-cn-hangzhou.aliyuncs.com/Deviceappendixes-en.pdf
    // )
    // 
    // This parameter is required.
    Darabonba::Json data_ = nullptr;
    // If the deviceType parameter is set to 12, 13, or 17, you must set the system_id parameter. The field name is still device_id. If the deviceType parameter is set to 15 or 16, no Other situations will be transmitted.
    // 
    // This parameter is required.
    std::shared_ptr<string> deviceId_ = nullptr;
    // Data generation time of measuring point.
    // 
    // This parameter is required.
    std::shared_ptr<string> recordTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
