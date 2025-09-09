// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSTATISTICSRESPONSEBODYSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSTATISTICSRESPONSEBODYSTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainStatisticsResponseBodyStatisticsStatistic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainStatisticsResponseBodyStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainStatisticsResponseBodyStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(Statistic, statistic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainStatisticsResponseBodyStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(Statistic, statistic_);
    };
    DescribeDomainStatisticsResponseBodyStatistics() = default ;
    DescribeDomainStatisticsResponseBodyStatistics(const DescribeDomainStatisticsResponseBodyStatistics &) = default ;
    DescribeDomainStatisticsResponseBodyStatistics(DescribeDomainStatisticsResponseBodyStatistics &&) = default ;
    DescribeDomainStatisticsResponseBodyStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainStatisticsResponseBodyStatistics() = default ;
    DescribeDomainStatisticsResponseBodyStatistics& operator=(const DescribeDomainStatisticsResponseBodyStatistics &) = default ;
    DescribeDomainStatisticsResponseBodyStatistics& operator=(DescribeDomainStatisticsResponseBodyStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->statistic_ != nullptr; };
    // statistic Field Functions 
    bool hasStatistic() const { return this->statistic_ != nullptr;};
    void deleteStatistic() { this->statistic_ = nullptr;};
    inline const vector<Models::DescribeDomainStatisticsResponseBodyStatisticsStatistic> & statistic() const { DARABONBA_PTR_GET_CONST(statistic_, vector<Models::DescribeDomainStatisticsResponseBodyStatisticsStatistic>) };
    inline vector<Models::DescribeDomainStatisticsResponseBodyStatisticsStatistic> statistic() { DARABONBA_PTR_GET(statistic_, vector<Models::DescribeDomainStatisticsResponseBodyStatisticsStatistic>) };
    inline DescribeDomainStatisticsResponseBodyStatistics& setStatistic(const vector<Models::DescribeDomainStatisticsResponseBodyStatisticsStatistic> & statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };
    inline DescribeDomainStatisticsResponseBodyStatistics& setStatistic(vector<Models::DescribeDomainStatisticsResponseBodyStatisticsStatistic> && statistic) { DARABONBA_PTR_SET_RVALUE(statistic_, statistic) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainStatisticsResponseBodyStatisticsStatistic>> statistic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
