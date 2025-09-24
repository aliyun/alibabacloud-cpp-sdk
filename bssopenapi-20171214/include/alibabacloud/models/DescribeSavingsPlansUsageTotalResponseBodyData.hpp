// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSUSAGETOTALRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSUSAGETOTALRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage.hpp>
#include <alibabacloud/models/DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeSavingsPlansUsageTotalResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSavingsPlansUsageTotalResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PeriodCoverage, periodCoverage_);
      DARABONBA_PTR_TO_JSON(TotalUsage, totalUsage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSavingsPlansUsageTotalResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PeriodCoverage, periodCoverage_);
      DARABONBA_PTR_FROM_JSON(TotalUsage, totalUsage_);
    };
    DescribeSavingsPlansUsageTotalResponseBodyData() = default ;
    DescribeSavingsPlansUsageTotalResponseBodyData(const DescribeSavingsPlansUsageTotalResponseBodyData &) = default ;
    DescribeSavingsPlansUsageTotalResponseBodyData(DescribeSavingsPlansUsageTotalResponseBodyData &&) = default ;
    DescribeSavingsPlansUsageTotalResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSavingsPlansUsageTotalResponseBodyData() = default ;
    DescribeSavingsPlansUsageTotalResponseBodyData& operator=(const DescribeSavingsPlansUsageTotalResponseBodyData &) = default ;
    DescribeSavingsPlansUsageTotalResponseBodyData& operator=(DescribeSavingsPlansUsageTotalResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->periodCoverage_ != nullptr
        && this->totalUsage_ != nullptr; };
    // periodCoverage Field Functions 
    bool hasPeriodCoverage() const { return this->periodCoverage_ != nullptr;};
    void deletePeriodCoverage() { this->periodCoverage_ = nullptr;};
    inline const vector<Models::DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage> & periodCoverage() const { DARABONBA_PTR_GET_CONST(periodCoverage_, vector<Models::DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage>) };
    inline vector<Models::DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage> periodCoverage() { DARABONBA_PTR_GET(periodCoverage_, vector<Models::DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage>) };
    inline DescribeSavingsPlansUsageTotalResponseBodyData& setPeriodCoverage(const vector<Models::DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage> & periodCoverage) { DARABONBA_PTR_SET_VALUE(periodCoverage_, periodCoverage) };
    inline DescribeSavingsPlansUsageTotalResponseBodyData& setPeriodCoverage(vector<Models::DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage> && periodCoverage) { DARABONBA_PTR_SET_RVALUE(periodCoverage_, periodCoverage) };


    // totalUsage Field Functions 
    bool hasTotalUsage() const { return this->totalUsage_ != nullptr;};
    void deleteTotalUsage() { this->totalUsage_ = nullptr;};
    inline const Models::DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage & totalUsage() const { DARABONBA_PTR_GET_CONST(totalUsage_, Models::DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage) };
    inline Models::DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage totalUsage() { DARABONBA_PTR_GET(totalUsage_, Models::DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage) };
    inline DescribeSavingsPlansUsageTotalResponseBodyData& setTotalUsage(const Models::DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage & totalUsage) { DARABONBA_PTR_SET_VALUE(totalUsage_, totalUsage) };
    inline DescribeSavingsPlansUsageTotalResponseBodyData& setTotalUsage(Models::DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage && totalUsage) { DARABONBA_PTR_SET_RVALUE(totalUsage_, totalUsage) };


  protected:
    // The usage in different periods.
    std::shared_ptr<vector<Models::DescribeSavingsPlansUsageTotalResponseBodyDataPeriodCoverage>> periodCoverage_ = nullptr;
    // The usage summary.
    std::shared_ptr<Models::DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage> totalUsage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
