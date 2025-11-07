// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASOSSTATISTICSRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASOSSTATISTICSRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyPersonasOsStatisticsResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyPersonasOsStatisticsResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(AllDeviceCnt, allDeviceCnt_);
      DARABONBA_PTR_TO_JSON(DeviceAndroidCnt, deviceAndroidCnt_);
      DARABONBA_PTR_TO_JSON(DeviceAndroidRate, deviceAndroidRate_);
      DARABONBA_PTR_TO_JSON(DeviceIosCnt, deviceIosCnt_);
      DARABONBA_PTR_TO_JSON(DeviceIosRate, deviceIosRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyPersonasOsStatisticsResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(AllDeviceCnt, allDeviceCnt_);
      DARABONBA_PTR_FROM_JSON(DeviceAndroidCnt, deviceAndroidCnt_);
      DARABONBA_PTR_FROM_JSON(DeviceAndroidRate, deviceAndroidRate_);
      DARABONBA_PTR_FROM_JSON(DeviceIosCnt, deviceIosCnt_);
      DARABONBA_PTR_FROM_JSON(DeviceIosRate, deviceIosRate_);
    };
    DescribeVerifyPersonasOsStatisticsResponseBodyResultObject() = default ;
    DescribeVerifyPersonasOsStatisticsResponseBodyResultObject(const DescribeVerifyPersonasOsStatisticsResponseBodyResultObject &) = default ;
    DescribeVerifyPersonasOsStatisticsResponseBodyResultObject(DescribeVerifyPersonasOsStatisticsResponseBodyResultObject &&) = default ;
    DescribeVerifyPersonasOsStatisticsResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyPersonasOsStatisticsResponseBodyResultObject() = default ;
    DescribeVerifyPersonasOsStatisticsResponseBodyResultObject& operator=(const DescribeVerifyPersonasOsStatisticsResponseBodyResultObject &) = default ;
    DescribeVerifyPersonasOsStatisticsResponseBodyResultObject& operator=(DescribeVerifyPersonasOsStatisticsResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allDeviceCnt_ == nullptr
        && return this->deviceAndroidCnt_ == nullptr && return this->deviceAndroidRate_ == nullptr && return this->deviceIosCnt_ == nullptr && return this->deviceIosRate_ == nullptr; };
    // allDeviceCnt Field Functions 
    bool hasAllDeviceCnt() const { return this->allDeviceCnt_ != nullptr;};
    void deleteAllDeviceCnt() { this->allDeviceCnt_ = nullptr;};
    inline int64_t allDeviceCnt() const { DARABONBA_PTR_GET_DEFAULT(allDeviceCnt_, 0L) };
    inline DescribeVerifyPersonasOsStatisticsResponseBodyResultObject& setAllDeviceCnt(int64_t allDeviceCnt) { DARABONBA_PTR_SET_VALUE(allDeviceCnt_, allDeviceCnt) };


    // deviceAndroidCnt Field Functions 
    bool hasDeviceAndroidCnt() const { return this->deviceAndroidCnt_ != nullptr;};
    void deleteDeviceAndroidCnt() { this->deviceAndroidCnt_ = nullptr;};
    inline int64_t deviceAndroidCnt() const { DARABONBA_PTR_GET_DEFAULT(deviceAndroidCnt_, 0L) };
    inline DescribeVerifyPersonasOsStatisticsResponseBodyResultObject& setDeviceAndroidCnt(int64_t deviceAndroidCnt) { DARABONBA_PTR_SET_VALUE(deviceAndroidCnt_, deviceAndroidCnt) };


    // deviceAndroidRate Field Functions 
    bool hasDeviceAndroidRate() const { return this->deviceAndroidRate_ != nullptr;};
    void deleteDeviceAndroidRate() { this->deviceAndroidRate_ = nullptr;};
    inline string deviceAndroidRate() const { DARABONBA_PTR_GET_DEFAULT(deviceAndroidRate_, "") };
    inline DescribeVerifyPersonasOsStatisticsResponseBodyResultObject& setDeviceAndroidRate(string deviceAndroidRate) { DARABONBA_PTR_SET_VALUE(deviceAndroidRate_, deviceAndroidRate) };


    // deviceIosCnt Field Functions 
    bool hasDeviceIosCnt() const { return this->deviceIosCnt_ != nullptr;};
    void deleteDeviceIosCnt() { this->deviceIosCnt_ = nullptr;};
    inline int64_t deviceIosCnt() const { DARABONBA_PTR_GET_DEFAULT(deviceIosCnt_, 0L) };
    inline DescribeVerifyPersonasOsStatisticsResponseBodyResultObject& setDeviceIosCnt(int64_t deviceIosCnt) { DARABONBA_PTR_SET_VALUE(deviceIosCnt_, deviceIosCnt) };


    // deviceIosRate Field Functions 
    bool hasDeviceIosRate() const { return this->deviceIosRate_ != nullptr;};
    void deleteDeviceIosRate() { this->deviceIosRate_ = nullptr;};
    inline string deviceIosRate() const { DARABONBA_PTR_GET_DEFAULT(deviceIosRate_, "") };
    inline DescribeVerifyPersonasOsStatisticsResponseBodyResultObject& setDeviceIosRate(string deviceIosRate) { DARABONBA_PTR_SET_VALUE(deviceIosRate_, deviceIosRate) };


  protected:
    // Total number of authenticated devices.
    std::shared_ptr<int64_t> allDeviceCnt_ = nullptr;
    // Number of authenticated Android devices.
    std::shared_ptr<int64_t> deviceAndroidCnt_ = nullptr;
    // Proportion of Android devices.
    std::shared_ptr<string> deviceAndroidRate_ = nullptr;
    // Number of authenticated iOS devices.
    std::shared_ptr<int64_t> deviceIosCnt_ = nullptr;
    // Proportion of iOS devices.
    std::shared_ptr<string> deviceIosRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
