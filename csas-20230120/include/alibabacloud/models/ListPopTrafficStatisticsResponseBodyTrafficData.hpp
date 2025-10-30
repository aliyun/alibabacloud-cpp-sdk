// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOPTRAFFICSTATISTICSRESPONSEBODYTRAFFICDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPOPTRAFFICSTATISTICSRESPONSEBODYTRAFFICDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPopTrafficStatisticsResponseBodyTrafficData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPopTrafficStatisticsResponseBodyTrafficData& obj) { 
      DARABONBA_PTR_TO_JSON(Datapoints, datapoints_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
    };
    friend void from_json(const Darabonba::Json& j, ListPopTrafficStatisticsResponseBodyTrafficData& obj) { 
      DARABONBA_PTR_FROM_JSON(Datapoints, datapoints_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
    };
    ListPopTrafficStatisticsResponseBodyTrafficData() = default ;
    ListPopTrafficStatisticsResponseBodyTrafficData(const ListPopTrafficStatisticsResponseBodyTrafficData &) = default ;
    ListPopTrafficStatisticsResponseBodyTrafficData(ListPopTrafficStatisticsResponseBodyTrafficData &&) = default ;
    ListPopTrafficStatisticsResponseBodyTrafficData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPopTrafficStatisticsResponseBodyTrafficData() = default ;
    ListPopTrafficStatisticsResponseBodyTrafficData& operator=(const ListPopTrafficStatisticsResponseBodyTrafficData &) = default ;
    ListPopTrafficStatisticsResponseBodyTrafficData& operator=(ListPopTrafficStatisticsResponseBodyTrafficData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datapoints_ == nullptr
        && return this->metricName_ == nullptr; };
    // datapoints Field Functions 
    bool hasDatapoints() const { return this->datapoints_ != nullptr;};
    void deleteDatapoints() { this->datapoints_ = nullptr;};
    inline const vector<Models::ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints> & datapoints() const { DARABONBA_PTR_GET_CONST(datapoints_, vector<Models::ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints>) };
    inline vector<Models::ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints> datapoints() { DARABONBA_PTR_GET(datapoints_, vector<Models::ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints>) };
    inline ListPopTrafficStatisticsResponseBodyTrafficData& setDatapoints(const vector<Models::ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints> & datapoints) { DARABONBA_PTR_SET_VALUE(datapoints_, datapoints) };
    inline ListPopTrafficStatisticsResponseBodyTrafficData& setDatapoints(vector<Models::ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints> && datapoints) { DARABONBA_PTR_SET_RVALUE(datapoints_, datapoints) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline ListPopTrafficStatisticsResponseBodyTrafficData& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


  protected:
    std::shared_ptr<vector<Models::ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints>> datapoints_ = nullptr;
    std::shared_ptr<string> metricName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
