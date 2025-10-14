// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICSTATISTICSRESPONSEBODYTRAFFICSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICSTATISTICSRESPONSEBODYTRAFFICSTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListTrafficStatisticsResponseBodyTrafficStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficStatisticsResponseBodyTrafficStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(TrafficStatisticData, trafficStatisticData_);
      DARABONBA_PTR_TO_JSON(TrafficStatisticTarget, trafficStatisticTarget_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficStatisticsResponseBodyTrafficStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(TrafficStatisticData, trafficStatisticData_);
      DARABONBA_PTR_FROM_JSON(TrafficStatisticTarget, trafficStatisticTarget_);
    };
    ListTrafficStatisticsResponseBodyTrafficStatistics() = default ;
    ListTrafficStatisticsResponseBodyTrafficStatistics(const ListTrafficStatisticsResponseBodyTrafficStatistics &) = default ;
    ListTrafficStatisticsResponseBodyTrafficStatistics(ListTrafficStatisticsResponseBodyTrafficStatistics &&) = default ;
    ListTrafficStatisticsResponseBodyTrafficStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficStatisticsResponseBodyTrafficStatistics() = default ;
    ListTrafficStatisticsResponseBodyTrafficStatistics& operator=(const ListTrafficStatisticsResponseBodyTrafficStatistics &) = default ;
    ListTrafficStatisticsResponseBodyTrafficStatistics& operator=(ListTrafficStatisticsResponseBodyTrafficStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->trafficStatisticData_ == nullptr
        && return this->trafficStatisticTarget_ == nullptr; };
    // trafficStatisticData Field Functions 
    bool hasTrafficStatisticData() const { return this->trafficStatisticData_ != nullptr;};
    void deleteTrafficStatisticData() { this->trafficStatisticData_ = nullptr;};
    inline const vector<Models::ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData> & trafficStatisticData() const { DARABONBA_PTR_GET_CONST(trafficStatisticData_, vector<Models::ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData>) };
    inline vector<Models::ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData> trafficStatisticData() { DARABONBA_PTR_GET(trafficStatisticData_, vector<Models::ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData>) };
    inline ListTrafficStatisticsResponseBodyTrafficStatistics& setTrafficStatisticData(const vector<Models::ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData> & trafficStatisticData) { DARABONBA_PTR_SET_VALUE(trafficStatisticData_, trafficStatisticData) };
    inline ListTrafficStatisticsResponseBodyTrafficStatistics& setTrafficStatisticData(vector<Models::ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData> && trafficStatisticData) { DARABONBA_PTR_SET_RVALUE(trafficStatisticData_, trafficStatisticData) };


    // trafficStatisticTarget Field Functions 
    bool hasTrafficStatisticTarget() const { return this->trafficStatisticTarget_ != nullptr;};
    void deleteTrafficStatisticTarget() { this->trafficStatisticTarget_ = nullptr;};
    inline string trafficStatisticTarget() const { DARABONBA_PTR_GET_DEFAULT(trafficStatisticTarget_, "") };
    inline ListTrafficStatisticsResponseBodyTrafficStatistics& setTrafficStatisticTarget(string trafficStatisticTarget) { DARABONBA_PTR_SET_VALUE(trafficStatisticTarget_, trafficStatisticTarget) };


  protected:
    std::shared_ptr<vector<Models::ListTrafficStatisticsResponseBodyTrafficStatisticsTrafficStatisticData>> trafficStatisticData_ = nullptr;
    std::shared_ptr<string> trafficStatisticTarget_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
