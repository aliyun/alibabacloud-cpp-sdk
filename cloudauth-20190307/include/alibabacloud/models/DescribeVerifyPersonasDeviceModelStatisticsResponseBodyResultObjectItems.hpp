// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASDEVICEMODELSTATISTICSRESPONSEBODYRESULTOBJECTITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASDEVICEMODELSTATISTICSRESPONSEBODYRESULTOBJECTITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceCnt, deviceCnt_);
      DARABONBA_PTR_TO_JSON(DeviceModel, deviceModel_);
      DARABONBA_PTR_TO_JSON(DeviceRate, deviceRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceCnt, deviceCnt_);
      DARABONBA_PTR_FROM_JSON(DeviceModel, deviceModel_);
      DARABONBA_PTR_FROM_JSON(DeviceRate, deviceRate_);
    };
    DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems() = default ;
    DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems(const DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems &) = default ;
    DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems(DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems &&) = default ;
    DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems() = default ;
    DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems& operator=(const DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems &) = default ;
    DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems& operator=(DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceCnt_ == nullptr
        && return this->deviceModel_ == nullptr && return this->deviceRate_ == nullptr; };
    // deviceCnt Field Functions 
    bool hasDeviceCnt() const { return this->deviceCnt_ != nullptr;};
    void deleteDeviceCnt() { this->deviceCnt_ = nullptr;};
    inline int64_t deviceCnt() const { DARABONBA_PTR_GET_DEFAULT(deviceCnt_, 0L) };
    inline DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems& setDeviceCnt(int64_t deviceCnt) { DARABONBA_PTR_SET_VALUE(deviceCnt_, deviceCnt) };


    // deviceModel Field Functions 
    bool hasDeviceModel() const { return this->deviceModel_ != nullptr;};
    void deleteDeviceModel() { this->deviceModel_ = nullptr;};
    inline string deviceModel() const { DARABONBA_PTR_GET_DEFAULT(deviceModel_, "") };
    inline DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems& setDeviceModel(string deviceModel) { DARABONBA_PTR_SET_VALUE(deviceModel_, deviceModel) };


    // deviceRate Field Functions 
    bool hasDeviceRate() const { return this->deviceRate_ != nullptr;};
    void deleteDeviceRate() { this->deviceRate_ = nullptr;};
    inline string deviceRate() const { DARABONBA_PTR_GET_DEFAULT(deviceRate_, "") };
    inline DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems& setDeviceRate(string deviceRate) { DARABONBA_PTR_SET_VALUE(deviceRate_, deviceRate) };


  protected:
    // Number of devices.
    std::shared_ptr<int64_t> deviceCnt_ = nullptr;
    // Device model
    std::shared_ptr<string> deviceModel_ = nullptr;
    // The ratio of this device model to the total number of devices.
    std::shared_ptr<string> deviceRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
