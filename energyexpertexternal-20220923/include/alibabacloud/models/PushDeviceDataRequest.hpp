// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHDEVICEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHDEVICEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PushDeviceDataRequestDevices.hpp>
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
    virtual bool empty() const override { this->deviceType_ != nullptr
        && this->devices_ != nullptr; };
    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline PushDeviceDataRequest& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // devices Field Functions 
    bool hasDevices() const { return this->devices_ != nullptr;};
    void deleteDevices() { this->devices_ = nullptr;};
    inline const vector<PushDeviceDataRequestDevices> & devices() const { DARABONBA_PTR_GET_CONST(devices_, vector<PushDeviceDataRequestDevices>) };
    inline vector<PushDeviceDataRequestDevices> devices() { DARABONBA_PTR_GET(devices_, vector<PushDeviceDataRequestDevices>) };
    inline PushDeviceDataRequest& setDevices(const vector<PushDeviceDataRequestDevices> & devices) { DARABONBA_PTR_SET_VALUE(devices_, devices) };
    inline PushDeviceDataRequest& setDevices(vector<PushDeviceDataRequestDevices> && devices) { DARABONBA_PTR_SET_RVALUE(devices_, devices) };


  protected:
    // The type of the device. [View device type definitions](https://carbon-doc.oss-cn-hangzhou.aliyuncs.com/Deviceappendixes-en.pdf)
    // 
    // This parameter is required.
    std::shared_ptr<string> deviceType_ = nullptr;
    // List of devices to which data is pushed.
    // 
    // This parameter is required.
    std::shared_ptr<vector<PushDeviceDataRequestDevices>> devices_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
