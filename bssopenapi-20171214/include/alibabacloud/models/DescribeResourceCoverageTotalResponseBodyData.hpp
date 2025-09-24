// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCECOVERAGETOTALRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCECOVERAGETOTALRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage.hpp>
#include <alibabacloud/models/DescribeResourceCoverageTotalResponseBodyDataTotalCoverage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeResourceCoverageTotalResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceCoverageTotalResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PeriodCoverage, periodCoverage_);
      DARABONBA_PTR_TO_JSON(TotalCoverage, totalCoverage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceCoverageTotalResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PeriodCoverage, periodCoverage_);
      DARABONBA_PTR_FROM_JSON(TotalCoverage, totalCoverage_);
    };
    DescribeResourceCoverageTotalResponseBodyData() = default ;
    DescribeResourceCoverageTotalResponseBodyData(const DescribeResourceCoverageTotalResponseBodyData &) = default ;
    DescribeResourceCoverageTotalResponseBodyData(DescribeResourceCoverageTotalResponseBodyData &&) = default ;
    DescribeResourceCoverageTotalResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceCoverageTotalResponseBodyData() = default ;
    DescribeResourceCoverageTotalResponseBodyData& operator=(const DescribeResourceCoverageTotalResponseBodyData &) = default ;
    DescribeResourceCoverageTotalResponseBodyData& operator=(DescribeResourceCoverageTotalResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->periodCoverage_ != nullptr
        && this->totalCoverage_ != nullptr; };
    // periodCoverage Field Functions 
    bool hasPeriodCoverage() const { return this->periodCoverage_ != nullptr;};
    void deletePeriodCoverage() { this->periodCoverage_ = nullptr;};
    inline const vector<Models::DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage> & periodCoverage() const { DARABONBA_PTR_GET_CONST(periodCoverage_, vector<Models::DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage>) };
    inline vector<Models::DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage> periodCoverage() { DARABONBA_PTR_GET(periodCoverage_, vector<Models::DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage>) };
    inline DescribeResourceCoverageTotalResponseBodyData& setPeriodCoverage(const vector<Models::DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage> & periodCoverage) { DARABONBA_PTR_SET_VALUE(periodCoverage_, periodCoverage) };
    inline DescribeResourceCoverageTotalResponseBodyData& setPeriodCoverage(vector<Models::DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage> && periodCoverage) { DARABONBA_PTR_SET_RVALUE(periodCoverage_, periodCoverage) };


    // totalCoverage Field Functions 
    bool hasTotalCoverage() const { return this->totalCoverage_ != nullptr;};
    void deleteTotalCoverage() { this->totalCoverage_ = nullptr;};
    inline const Models::DescribeResourceCoverageTotalResponseBodyDataTotalCoverage & totalCoverage() const { DARABONBA_PTR_GET_CONST(totalCoverage_, Models::DescribeResourceCoverageTotalResponseBodyDataTotalCoverage) };
    inline Models::DescribeResourceCoverageTotalResponseBodyDataTotalCoverage totalCoverage() { DARABONBA_PTR_GET(totalCoverage_, Models::DescribeResourceCoverageTotalResponseBodyDataTotalCoverage) };
    inline DescribeResourceCoverageTotalResponseBodyData& setTotalCoverage(const Models::DescribeResourceCoverageTotalResponseBodyDataTotalCoverage & totalCoverage) { DARABONBA_PTR_SET_VALUE(totalCoverage_, totalCoverage) };
    inline DescribeResourceCoverageTotalResponseBodyData& setTotalCoverage(Models::DescribeResourceCoverageTotalResponseBodyDataTotalCoverage && totalCoverage) { DARABONBA_PTR_SET_RVALUE(totalCoverage_, totalCoverage) };


  protected:
    // The information about the coverage rate of deduction plans within a period.
    std::shared_ptr<vector<Models::DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage>> periodCoverage_ = nullptr;
    // The information about the total coverage data of deduction plans.
    std::shared_ptr<Models::DescribeResourceCoverageTotalResponseBodyDataTotalCoverage> totalCoverage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
