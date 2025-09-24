// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSUSAGETOTALRESPONSEBODYDATAPERIODCOVERAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSUSAGETOTALRESPONSEBODYDATAPERIODCOVERAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage& obj) { 
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
      DARABONBA_PTR_TO_JSON(Period, period_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage& obj) { 
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
    };
    DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage() = default ;
    DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage(const DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage &) = default ;
    DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage(DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage &&) = default ;
    DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage() = default ;
    DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage& operator=(const DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage &) = default ;
    DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage& operator=(DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->percentage_ != nullptr
        && this->period_ != nullptr; };
    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline float percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0.0) };
    inline DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage& setPercentage(float percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


  protected:
    // The usage.
    std::shared_ptr<float> percentage_ = nullptr;
    // The period.
    // 
    // The value is in the format of yyyyMMddHH.
    std::shared_ptr<string> period_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
