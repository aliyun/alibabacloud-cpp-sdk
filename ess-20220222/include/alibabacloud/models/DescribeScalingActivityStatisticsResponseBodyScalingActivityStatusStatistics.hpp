// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITYSTATISTICSRESPONSEBODYSCALINGACTIVITYSTATUSSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITYSTATISTICSRESPONSEBODYSCALINGACTIVITYSTATUSSTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(Statistic, statistic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(Statistic, statistic_);
    };
    DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics() = default ;
    DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics(const DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics &) = default ;
    DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics(DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics &&) = default ;
    DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics() = default ;
    DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics& operator=(const DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics &) = default ;
    DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics& operator=(DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->statistic_ == nullptr; };
    // statistic Field Functions 
    bool hasStatistic() const { return this->statistic_ != nullptr;};
    void deleteStatistic() { this->statistic_ = nullptr;};
    inline const vector<Models::DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic> & statistic() const { DARABONBA_PTR_GET_CONST(statistic_, vector<Models::DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic>) };
    inline vector<Models::DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic> statistic() { DARABONBA_PTR_GET(statistic_, vector<Models::DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic>) };
    inline DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics& setStatistic(const vector<Models::DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic> & statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };
    inline DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics& setStatistic(vector<Models::DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic> && statistic) { DARABONBA_PTR_SET_RVALUE(statistic_, statistic) };


  protected:
    std::shared_ptr<vector<Models::DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic>> statistic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
