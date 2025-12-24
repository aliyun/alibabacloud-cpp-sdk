// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITYSTATISTICSRESPONSEBODYSCALINGACTIVITYERRORCODESTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITYSTATISTICSRESPONSEBODYSCALINGACTIVITYERRORCODESTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatisticsErrorStatistic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorStatistic, errorStatistic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorStatistic, errorStatistic_);
    };
    DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics() = default ;
    DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics(const DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics &) = default ;
    DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics(DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics &&) = default ;
    DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics() = default ;
    DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics& operator=(const DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics &) = default ;
    DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics& operator=(DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorStatistic_ == nullptr; };
    // errorStatistic Field Functions 
    bool hasErrorStatistic() const { return this->errorStatistic_ != nullptr;};
    void deleteErrorStatistic() { this->errorStatistic_ = nullptr;};
    inline const vector<Models::DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatisticsErrorStatistic> & errorStatistic() const { DARABONBA_PTR_GET_CONST(errorStatistic_, vector<Models::DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatisticsErrorStatistic>) };
    inline vector<Models::DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatisticsErrorStatistic> errorStatistic() { DARABONBA_PTR_GET(errorStatistic_, vector<Models::DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatisticsErrorStatistic>) };
    inline DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics& setErrorStatistic(const vector<Models::DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatisticsErrorStatistic> & errorStatistic) { DARABONBA_PTR_SET_VALUE(errorStatistic_, errorStatistic) };
    inline DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics& setErrorStatistic(vector<Models::DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatisticsErrorStatistic> && errorStatistic) { DARABONBA_PTR_SET_RVALUE(errorStatistic_, errorStatistic) };


  protected:
    std::shared_ptr<vector<Models::DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatisticsErrorStatistic>> errorStatistic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
