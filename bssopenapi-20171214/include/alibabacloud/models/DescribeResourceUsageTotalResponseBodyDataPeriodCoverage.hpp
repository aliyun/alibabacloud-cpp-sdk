// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEUSAGETOTALRESPONSEBODYDATAPERIODCOVERAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEUSAGETOTALRESPONSEBODYDATAPERIODCOVERAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeResourceUsageTotalResponseBodyDataPeriodCoverage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceUsageTotalResponseBodyDataPeriodCoverage& obj) { 
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(UsagePercentage, usagePercentage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceUsageTotalResponseBodyDataPeriodCoverage& obj) { 
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(UsagePercentage, usagePercentage_);
    };
    DescribeResourceUsageTotalResponseBodyDataPeriodCoverage() = default ;
    DescribeResourceUsageTotalResponseBodyDataPeriodCoverage(const DescribeResourceUsageTotalResponseBodyDataPeriodCoverage &) = default ;
    DescribeResourceUsageTotalResponseBodyDataPeriodCoverage(DescribeResourceUsageTotalResponseBodyDataPeriodCoverage &&) = default ;
    DescribeResourceUsageTotalResponseBodyDataPeriodCoverage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceUsageTotalResponseBodyDataPeriodCoverage() = default ;
    DescribeResourceUsageTotalResponseBodyDataPeriodCoverage& operator=(const DescribeResourceUsageTotalResponseBodyDataPeriodCoverage &) = default ;
    DescribeResourceUsageTotalResponseBodyDataPeriodCoverage& operator=(DescribeResourceUsageTotalResponseBodyDataPeriodCoverage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->period_ != nullptr
        && this->usagePercentage_ != nullptr; };
    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeResourceUsageTotalResponseBodyDataPeriodCoverage& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // usagePercentage Field Functions 
    bool hasUsagePercentage() const { return this->usagePercentage_ != nullptr;};
    void deleteUsagePercentage() { this->usagePercentage_ = nullptr;};
    inline float usagePercentage() const { DARABONBA_PTR_GET_DEFAULT(usagePercentage_, 0.0) };
    inline DescribeResourceUsageTotalResponseBodyDataPeriodCoverage& setUsagePercentage(float usagePercentage) { DARABONBA_PTR_SET_VALUE(usagePercentage_, usagePercentage) };


  protected:
    // The period.
    std::shared_ptr<string> period_ = nullptr;
    // The usage of resource plans.
    std::shared_ptr<float> usagePercentage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
