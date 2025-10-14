// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICSTATISTICSRESPONSEBODYTRAFFICSTATISTICSTRAFFICSTATISTICDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICSTATISTICSRESPONSEBODYTRAFFICSTATISTICSTRAFFICSTATISTICDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData& obj) { 
      DARABONBA_PTR_TO_JSON(TrafficStatisticTime, trafficStatisticTime_);
      DARABONBA_PTR_TO_JSON(TrafficStatisticValue, trafficStatisticValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData& obj) { 
      DARABONBA_PTR_FROM_JSON(TrafficStatisticTime, trafficStatisticTime_);
      DARABONBA_PTR_FROM_JSON(TrafficStatisticValue, trafficStatisticValue_);
    };
    ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData() = default ;
    ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData(const ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData &) = default ;
    ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData(ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData &&) = default ;
    ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData() = default ;
    ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData& operator=(const ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData &) = default ;
    ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData& operator=(ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->trafficStatisticTime_ == nullptr
        && return this->trafficStatisticValue_ == nullptr; };
    // trafficStatisticTime Field Functions 
    bool hasTrafficStatisticTime() const { return this->trafficStatisticTime_ != nullptr;};
    void deleteTrafficStatisticTime() { this->trafficStatisticTime_ = nullptr;};
    inline int64_t trafficStatisticTime() const { DARABONBA_PTR_GET_DEFAULT(trafficStatisticTime_, 0L) };
    inline ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData& setTrafficStatisticTime(int64_t trafficStatisticTime) { DARABONBA_PTR_SET_VALUE(trafficStatisticTime_, trafficStatisticTime) };


    // trafficStatisticValue Field Functions 
    bool hasTrafficStatisticValue() const { return this->trafficStatisticValue_ != nullptr;};
    void deleteTrafficStatisticValue() { this->trafficStatisticValue_ = nullptr;};
    inline double trafficStatisticValue() const { DARABONBA_PTR_GET_DEFAULT(trafficStatisticValue_, 0.0) };
    inline ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData& setTrafficStatisticValue(double trafficStatisticValue) { DARABONBA_PTR_SET_VALUE(trafficStatisticValue_, trafficStatisticValue) };


  protected:
    std::shared_ptr<int64_t> trafficStatisticTime_ = nullptr;
    std::shared_ptr<double> trafficStatisticValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
