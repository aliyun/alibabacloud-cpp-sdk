// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICESTATRESPONSEBODYAPPDEVICESTATSAPPDEVICESTAT_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICESTATRESPONSEBODYAPPDEVICESTATSAPPDEVICESTAT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat() = default ;
    QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat(const QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat &) = default ;
    QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat(QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat &&) = default ;
    QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat() = default ;
    QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat& operator=(const QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat &) = default ;
    QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat& operator=(QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->deviceType_ != nullptr && this->time_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<string> deviceType_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
