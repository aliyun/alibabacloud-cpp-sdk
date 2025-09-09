// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSTATISTICSSUMMARYRESPONSEBODYSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSTATISTICSSUMMARYRESPONSEBODYSTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainStatisticsSummaryResponseBodyStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainStatisticsSummaryResponseBodyStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(Statistic, statistic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainStatisticsSummaryResponseBodyStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(Statistic, statistic_);
    };
    DescribeDomainStatisticsSummaryResponseBodyStatistics() = default ;
    DescribeDomainStatisticsSummaryResponseBodyStatistics(const DescribeDomainStatisticsSummaryResponseBodyStatistics &) = default ;
    DescribeDomainStatisticsSummaryResponseBodyStatistics(DescribeDomainStatisticsSummaryResponseBodyStatistics &&) = default ;
    DescribeDomainStatisticsSummaryResponseBodyStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainStatisticsSummaryResponseBodyStatistics() = default ;
    DescribeDomainStatisticsSummaryResponseBodyStatistics& operator=(const DescribeDomainStatisticsSummaryResponseBodyStatistics &) = default ;
    DescribeDomainStatisticsSummaryResponseBodyStatistics& operator=(DescribeDomainStatisticsSummaryResponseBodyStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->statistic_ != nullptr; };
    // statistic Field Functions 
    bool hasStatistic() const { return this->statistic_ != nullptr;};
    void deleteStatistic() { this->statistic_ = nullptr;};
    inline const vector<Models::DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic> & statistic() const { DARABONBA_PTR_GET_CONST(statistic_, vector<Models::DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic>) };
    inline vector<Models::DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic> statistic() { DARABONBA_PTR_GET(statistic_, vector<Models::DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic>) };
    inline DescribeDomainStatisticsSummaryResponseBodyStatistics& setStatistic(const vector<Models::DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic> & statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };
    inline DescribeDomainStatisticsSummaryResponseBodyStatistics& setStatistic(vector<Models::DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic> && statistic) { DARABONBA_PTR_SET_RVALUE(statistic_, statistic) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic>> statistic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
