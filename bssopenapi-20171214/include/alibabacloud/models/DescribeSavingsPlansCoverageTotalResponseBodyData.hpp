// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSCOVERAGETOTALRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSCOVERAGETOTALRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSavingsPlansCoverageTotalResponseBodyDataPeriodCoverage.hpp>
#include <alibabacloud/models/DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeSavingsPlansCoverageTotalResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSavingsPlansCoverageTotalResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PeriodCoverage, periodCoverage_);
      DARABONBA_PTR_TO_JSON(TotalCoverage, totalCoverage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSavingsPlansCoverageTotalResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PeriodCoverage, periodCoverage_);
      DARABONBA_PTR_FROM_JSON(TotalCoverage, totalCoverage_);
    };
    DescribeSavingsPlansCoverageTotalResponseBodyData() = default ;
    DescribeSavingsPlansCoverageTotalResponseBodyData(const DescribeSavingsPlansCoverageTotalResponseBodyData &) = default ;
    DescribeSavingsPlansCoverageTotalResponseBodyData(DescribeSavingsPlansCoverageTotalResponseBodyData &&) = default ;
    DescribeSavingsPlansCoverageTotalResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSavingsPlansCoverageTotalResponseBodyData() = default ;
    DescribeSavingsPlansCoverageTotalResponseBodyData& operator=(const DescribeSavingsPlansCoverageTotalResponseBodyData &) = default ;
    DescribeSavingsPlansCoverageTotalResponseBodyData& operator=(DescribeSavingsPlansCoverageTotalResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->periodCoverage_ != nullptr
        && this->totalCoverage_ != nullptr; };
    // periodCoverage Field Functions 
    bool hasPeriodCoverage() const { return this->periodCoverage_ != nullptr;};
    void deletePeriodCoverage() { this->periodCoverage_ = nullptr;};
    inline const vector<Models::DescribeSavingsPlansCoverageTotalResponseBodyDataPeriodCoverage> & periodCoverage() const { DARABONBA_PTR_GET_CONST(periodCoverage_, vector<Models::DescribeSavingsPlansCoverageTotalResponseBodyDataPeriodCoverage>) };
    inline vector<Models::DescribeSavingsPlansCoverageTotalResponseBodyDataPeriodCoverage> periodCoverage() { DARABONBA_PTR_GET(periodCoverage_, vector<Models::DescribeSavingsPlansCoverageTotalResponseBodyDataPeriodCoverage>) };
    inline DescribeSavingsPlansCoverageTotalResponseBodyData& setPeriodCoverage(const vector<Models::DescribeSavingsPlansCoverageTotalResponseBodyDataPeriodCoverage> & periodCoverage) { DARABONBA_PTR_SET_VALUE(periodCoverage_, periodCoverage) };
    inline DescribeSavingsPlansCoverageTotalResponseBodyData& setPeriodCoverage(vector<Models::DescribeSavingsPlansCoverageTotalResponseBodyDataPeriodCoverage> && periodCoverage) { DARABONBA_PTR_SET_RVALUE(periodCoverage_, periodCoverage) };


    // totalCoverage Field Functions 
    bool hasTotalCoverage() const { return this->totalCoverage_ != nullptr;};
    void deleteTotalCoverage() { this->totalCoverage_ = nullptr;};
    inline const Models::DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage & totalCoverage() const { DARABONBA_PTR_GET_CONST(totalCoverage_, Models::DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage) };
    inline Models::DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage totalCoverage() { DARABONBA_PTR_GET(totalCoverage_, Models::DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage) };
    inline DescribeSavingsPlansCoverageTotalResponseBodyData& setTotalCoverage(const Models::DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage & totalCoverage) { DARABONBA_PTR_SET_VALUE(totalCoverage_, totalCoverage) };
    inline DescribeSavingsPlansCoverageTotalResponseBodyData& setTotalCoverage(Models::DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage && totalCoverage) { DARABONBA_PTR_SET_RVALUE(totalCoverage_, totalCoverage) };


  protected:
    // The coverage in different periods.
    std::shared_ptr<vector<Models::DescribeSavingsPlansCoverageTotalResponseBodyDataPeriodCoverage>> periodCoverage_ = nullptr;
    // The coverage summary.
    std::shared_ptr<Models::DescribeSavingsPlansCoverageTotalResponseBodyDataTotalCoverage> totalCoverage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
