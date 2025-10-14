// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDSTATISTICSRESPONSEBODYSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDSTATISTICSRESPONSEBODYSTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRecordStatisticsResponseBodyStatisticsStatistic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeRecordStatisticsResponseBodyStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordStatisticsResponseBodyStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(Statistic, statistic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordStatisticsResponseBodyStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(Statistic, statistic_);
    };
    DescribeRecordStatisticsResponseBodyStatistics() = default ;
    DescribeRecordStatisticsResponseBodyStatistics(const DescribeRecordStatisticsResponseBodyStatistics &) = default ;
    DescribeRecordStatisticsResponseBodyStatistics(DescribeRecordStatisticsResponseBodyStatistics &&) = default ;
    DescribeRecordStatisticsResponseBodyStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordStatisticsResponseBodyStatistics() = default ;
    DescribeRecordStatisticsResponseBodyStatistics& operator=(const DescribeRecordStatisticsResponseBodyStatistics &) = default ;
    DescribeRecordStatisticsResponseBodyStatistics& operator=(DescribeRecordStatisticsResponseBodyStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->statistic_ == nullptr; };
    // statistic Field Functions 
    bool hasStatistic() const { return this->statistic_ != nullptr;};
    void deleteStatistic() { this->statistic_ = nullptr;};
    inline const vector<Models::DescribeRecordStatisticsResponseBodyStatisticsStatistic> & statistic() const { DARABONBA_PTR_GET_CONST(statistic_, vector<Models::DescribeRecordStatisticsResponseBodyStatisticsStatistic>) };
    inline vector<Models::DescribeRecordStatisticsResponseBodyStatisticsStatistic> statistic() { DARABONBA_PTR_GET(statistic_, vector<Models::DescribeRecordStatisticsResponseBodyStatisticsStatistic>) };
    inline DescribeRecordStatisticsResponseBodyStatistics& setStatistic(const vector<Models::DescribeRecordStatisticsResponseBodyStatisticsStatistic> & statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };
    inline DescribeRecordStatisticsResponseBodyStatistics& setStatistic(vector<Models::DescribeRecordStatisticsResponseBodyStatisticsStatistic> && statistic) { DARABONBA_PTR_SET_RVALUE(statistic_, statistic) };


  protected:
    std::shared_ptr<vector<Models::DescribeRecordStatisticsResponseBodyStatisticsStatistic>> statistic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
