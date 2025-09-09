// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDSTATISTICSSUMMARYRESPONSEBODYSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDSTATISTICSSUMMARYRESPONSEBODYSTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeRecordStatisticsSummaryResponseBodyStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordStatisticsSummaryResponseBodyStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(Statistic, statistic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordStatisticsSummaryResponseBodyStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(Statistic, statistic_);
    };
    DescribeRecordStatisticsSummaryResponseBodyStatistics() = default ;
    DescribeRecordStatisticsSummaryResponseBodyStatistics(const DescribeRecordStatisticsSummaryResponseBodyStatistics &) = default ;
    DescribeRecordStatisticsSummaryResponseBodyStatistics(DescribeRecordStatisticsSummaryResponseBodyStatistics &&) = default ;
    DescribeRecordStatisticsSummaryResponseBodyStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordStatisticsSummaryResponseBodyStatistics() = default ;
    DescribeRecordStatisticsSummaryResponseBodyStatistics& operator=(const DescribeRecordStatisticsSummaryResponseBodyStatistics &) = default ;
    DescribeRecordStatisticsSummaryResponseBodyStatistics& operator=(DescribeRecordStatisticsSummaryResponseBodyStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->statistic_ != nullptr; };
    // statistic Field Functions 
    bool hasStatistic() const { return this->statistic_ != nullptr;};
    void deleteStatistic() { this->statistic_ = nullptr;};
    inline const vector<Models::DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic> & statistic() const { DARABONBA_PTR_GET_CONST(statistic_, vector<Models::DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic>) };
    inline vector<Models::DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic> statistic() { DARABONBA_PTR_GET(statistic_, vector<Models::DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic>) };
    inline DescribeRecordStatisticsSummaryResponseBodyStatistics& setStatistic(const vector<Models::DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic> & statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };
    inline DescribeRecordStatisticsSummaryResponseBodyStatistics& setStatistic(vector<Models::DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic> && statistic) { DARABONBA_PTR_SET_RVALUE(statistic_, statistic) };


  protected:
    std::shared_ptr<vector<Models::DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic>> statistic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
