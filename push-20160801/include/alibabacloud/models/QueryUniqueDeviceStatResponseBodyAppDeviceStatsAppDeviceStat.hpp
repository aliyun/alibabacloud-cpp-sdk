// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUNIQUEDEVICESTATRESPONSEBODYAPPDEVICESTATSAPPDEVICESTAT_HPP_
#define ALIBABACLOUD_MODELS_QUERYUNIQUEDEVICESTATRESPONSEBODYAPPDEVICESTATSAPPDEVICESTAT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat() = default ;
    QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat(const QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat &) = default ;
    QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat(QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat &&) = default ;
    QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat() = default ;
    QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat& operator=(const QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat &) = default ;
    QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat& operator=(QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->time_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
