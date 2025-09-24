// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCECOVERAGETOTALRESPONSEBODYDATAPERIODCOVERAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCECOVERAGETOTALRESPONSEBODYDATAPERIODCOVERAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage& obj) { 
      DARABONBA_PTR_TO_JSON(CoveragePercentage, coveragePercentage_);
      DARABONBA_PTR_TO_JSON(Period, period_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage& obj) { 
      DARABONBA_PTR_FROM_JSON(CoveragePercentage, coveragePercentage_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
    };
    DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage() = default ;
    DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage(const DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage &) = default ;
    DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage(DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage &&) = default ;
    DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage() = default ;
    DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage& operator=(const DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage &) = default ;
    DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage& operator=(DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coveragePercentage_ != nullptr
        && this->period_ != nullptr; };
    // coveragePercentage Field Functions 
    bool hasCoveragePercentage() const { return this->coveragePercentage_ != nullptr;};
    void deleteCoveragePercentage() { this->coveragePercentage_ = nullptr;};
    inline float coveragePercentage() const { DARABONBA_PTR_GET_DEFAULT(coveragePercentage_, 0.0) };
    inline DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage& setCoveragePercentage(float coveragePercentage) { DARABONBA_PTR_SET_VALUE(coveragePercentage_, coveragePercentage) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeResourceCoverageTotalResponseBodyDataPeriodCoverage& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


  protected:
    // The coverage rate of deduction plans within the specified period.
    std::shared_ptr<float> coveragePercentage_ = nullptr;
    // The period.
    // 
    // The value is in the format of yyyyMMddHH.
    std::shared_ptr<string> period_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
