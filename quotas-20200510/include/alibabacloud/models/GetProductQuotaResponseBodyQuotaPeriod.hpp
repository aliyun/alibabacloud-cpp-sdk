// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRODUCTQUOTARESPONSEBODYQUOTAPERIOD_HPP_
#define ALIBABACLOUD_MODELS_GETPRODUCTQUOTARESPONSEBODYQUOTAPERIOD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class GetProductQuotaResponseBodyQuotaPeriod : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProductQuotaResponseBodyQuotaPeriod& obj) { 
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PeriodValue, periodValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetProductQuotaResponseBodyQuotaPeriod& obj) { 
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PeriodValue, periodValue_);
    };
    GetProductQuotaResponseBodyQuotaPeriod() = default ;
    GetProductQuotaResponseBodyQuotaPeriod(const GetProductQuotaResponseBodyQuotaPeriod &) = default ;
    GetProductQuotaResponseBodyQuotaPeriod(GetProductQuotaResponseBodyQuotaPeriod &&) = default ;
    GetProductQuotaResponseBodyQuotaPeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProductQuotaResponseBodyQuotaPeriod() = default ;
    GetProductQuotaResponseBodyQuotaPeriod& operator=(const GetProductQuotaResponseBodyQuotaPeriod &) = default ;
    GetProductQuotaResponseBodyQuotaPeriod& operator=(GetProductQuotaResponseBodyQuotaPeriod &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->periodUnit_ != nullptr
        && this->periodValue_ != nullptr; };
    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline GetProductQuotaResponseBodyQuotaPeriod& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // periodValue Field Functions 
    bool hasPeriodValue() const { return this->periodValue_ != nullptr;};
    void deletePeriodValue() { this->periodValue_ = nullptr;};
    inline int32_t periodValue() const { DARABONBA_PTR_GET_DEFAULT(periodValue_, 0) };
    inline GetProductQuotaResponseBodyQuotaPeriod& setPeriodValue(int32_t periodValue) { DARABONBA_PTR_SET_VALUE(periodValue_, periodValue) };


  protected:
    // The unit of the calculation cycle of the quota. Valid values:
    // 
    // *   second
    // *   minute
    // *   hour
    // *   day
    // *   week
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The value of the calculation cycle of the quota.
    std::shared_ptr<int32_t> periodValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
