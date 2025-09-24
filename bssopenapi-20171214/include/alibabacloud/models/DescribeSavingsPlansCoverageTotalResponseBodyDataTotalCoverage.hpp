// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSCOVERAGETOTALRESPONSEBODYDATATOTALCOVERAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSCOVERAGETOTALRESPONSEBODYDATATOTALCOVERAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage& obj) { 
      DARABONBA_PTR_TO_JSON(CoveragePercentage, coveragePercentage_);
      DARABONBA_PTR_TO_JSON(DeductAmount, deductAmount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage& obj) { 
      DARABONBA_PTR_FROM_JSON(CoveragePercentage, coveragePercentage_);
      DARABONBA_PTR_FROM_JSON(DeductAmount, deductAmount_);
    };
    DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage() = default ;
    DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage(const DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage &) = default ;
    DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage(DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage &&) = default ;
    DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage() = default ;
    DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage& operator=(const DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage &) = default ;
    DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage& operator=(DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coveragePercentage_ != nullptr
        && this->deductAmount_ != nullptr; };
    // coveragePercentage Field Functions 
    bool hasCoveragePercentage() const { return this->coveragePercentage_ != nullptr;};
    void deleteCoveragePercentage() { this->coveragePercentage_ = nullptr;};
    inline float coveragePercentage() const { DARABONBA_PTR_GET_DEFAULT(coveragePercentage_, 0.0) };
    inline DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage& setCoveragePercentage(float coveragePercentage) { DARABONBA_PTR_SET_VALUE(coveragePercentage_, coveragePercentage) };


    // deductAmount Field Functions 
    bool hasDeductAmount() const { return this->deductAmount_ != nullptr;};
    void deleteDeductAmount() { this->deductAmount_ = nullptr;};
    inline float deductAmount() const { DARABONBA_PTR_GET_DEFAULT(deductAmount_, 0.0) };
    inline DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage& setDeductAmount(float deductAmount) { DARABONBA_PTR_SET_VALUE(deductAmount_, deductAmount) };


  protected:
    // The total coverage.
    std::shared_ptr<float> coveragePercentage_ = nullptr;
    // The total deducted amount.
    std::shared_ptr<float> deductAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
