// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEUSAGETOTALRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEUSAGETOTALRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeResourceUsageTotalResponseBodyDataPeriodCoverage.hpp>
#include <alibabacloud/models/DescribeResourceUsageTotalResponseBodyDataTotalUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeResourceUsageTotalResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceUsageTotalResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PeriodCoverage, periodCoverage_);
      DARABONBA_PTR_TO_JSON(TotalUsage, totalUsage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceUsageTotalResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PeriodCoverage, periodCoverage_);
      DARABONBA_PTR_FROM_JSON(TotalUsage, totalUsage_);
    };
    DescribeResourceUsageTotalResponseBodyData() = default ;
    DescribeResourceUsageTotalResponseBodyData(const DescribeResourceUsageTotalResponseBodyData &) = default ;
    DescribeResourceUsageTotalResponseBodyData(DescribeResourceUsageTotalResponseBodyData &&) = default ;
    DescribeResourceUsageTotalResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceUsageTotalResponseBodyData() = default ;
    DescribeResourceUsageTotalResponseBodyData& operator=(const DescribeResourceUsageTotalResponseBodyData &) = default ;
    DescribeResourceUsageTotalResponseBodyData& operator=(DescribeResourceUsageTotalResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->periodCoverage_ != nullptr
        && this->totalUsage_ != nullptr; };
    // periodCoverage Field Functions 
    bool hasPeriodCoverage() const { return this->periodCoverage_ != nullptr;};
    void deletePeriodCoverage() { this->periodCoverage_ = nullptr;};
    inline const vector<Models::DescribeResourceUsageTotalResponseBodyDataPeriodCoverage> & periodCoverage() const { DARABONBA_PTR_GET_CONST(periodCoverage_, vector<Models::DescribeResourceUsageTotalResponseBodyDataPeriodCoverage>) };
    inline vector<Models::DescribeResourceUsageTotalResponseBodyDataPeriodCoverage> periodCoverage() { DARABONBA_PTR_GET(periodCoverage_, vector<Models::DescribeResourceUsageTotalResponseBodyDataPeriodCoverage>) };
    inline DescribeResourceUsageTotalResponseBodyData& setPeriodCoverage(const vector<Models::DescribeResourceUsageTotalResponseBodyDataPeriodCoverage> & periodCoverage) { DARABONBA_PTR_SET_VALUE(periodCoverage_, periodCoverage) };
    inline DescribeResourceUsageTotalResponseBodyData& setPeriodCoverage(vector<Models::DescribeResourceUsageTotalResponseBodyDataPeriodCoverage> && periodCoverage) { DARABONBA_PTR_SET_RVALUE(periodCoverage_, periodCoverage) };


    // totalUsage Field Functions 
    bool hasTotalUsage() const { return this->totalUsage_ != nullptr;};
    void deleteTotalUsage() { this->totalUsage_ = nullptr;};
    inline const Models::DescribeResourceUsageTotalResponseBodyDataTotalUsage & totalUsage() const { DARABONBA_PTR_GET_CONST(totalUsage_, Models::DescribeResourceUsageTotalResponseBodyDataTotalUsage) };
    inline Models::DescribeResourceUsageTotalResponseBodyDataTotalUsage totalUsage() { DARABONBA_PTR_GET(totalUsage_, Models::DescribeResourceUsageTotalResponseBodyDataTotalUsage) };
    inline DescribeResourceUsageTotalResponseBodyData& setTotalUsage(const Models::DescribeResourceUsageTotalResponseBodyDataTotalUsage & totalUsage) { DARABONBA_PTR_SET_VALUE(totalUsage_, totalUsage) };
    inline DescribeResourceUsageTotalResponseBodyData& setTotalUsage(Models::DescribeResourceUsageTotalResponseBodyDataTotalUsage && totalUsage) { DARABONBA_PTR_SET_RVALUE(totalUsage_, totalUsage) };


  protected:
    // The usage of resource plans in the specified period.
    std::shared_ptr<vector<Models::DescribeResourceUsageTotalResponseBodyDataPeriodCoverage>> periodCoverage_ = nullptr;
    // The total usage of resource plans.
    std::shared_ptr<Models::DescribeResourceUsageTotalResponseBodyDataTotalUsage> totalUsage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
