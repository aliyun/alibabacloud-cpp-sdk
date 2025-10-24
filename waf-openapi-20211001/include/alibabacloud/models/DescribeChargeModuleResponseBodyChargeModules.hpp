// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARGEMODULERESPONSEBODYCHARGEMODULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARGEMODULERESPONSEBODYCHARGEMODULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeChargeModuleResponseBodyChargeModules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChargeModuleResponseBodyChargeModules& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeMode, chargeMode_);
      DARABONBA_PTR_TO_JSON(ChargeModeDetails, chargeModeDetails_);
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(PeriodType, periodType_);
      DARABONBA_PTR_TO_JSON(UsageType, usageType_);
      DARABONBA_PTR_TO_JSON(UsageUnitFactor, usageUnitFactor_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChargeModuleResponseBodyChargeModules& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeMode, chargeMode_);
      DARABONBA_PTR_FROM_JSON(ChargeModeDetails, chargeModeDetails_);
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(PeriodType, periodType_);
      DARABONBA_PTR_FROM_JSON(UsageType, usageType_);
      DARABONBA_PTR_FROM_JSON(UsageUnitFactor, usageUnitFactor_);
    };
    DescribeChargeModuleResponseBodyChargeModules() = default ;
    DescribeChargeModuleResponseBodyChargeModules(const DescribeChargeModuleResponseBodyChargeModules &) = default ;
    DescribeChargeModuleResponseBodyChargeModules(DescribeChargeModuleResponseBodyChargeModules &&) = default ;
    DescribeChargeModuleResponseBodyChargeModules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChargeModuleResponseBodyChargeModules() = default ;
    DescribeChargeModuleResponseBodyChargeModules& operator=(const DescribeChargeModuleResponseBodyChargeModules &) = default ;
    DescribeChargeModuleResponseBodyChargeModules& operator=(DescribeChargeModuleResponseBodyChargeModules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeMode_ == nullptr
        && return this->chargeModeDetails_ == nullptr && return this->moduleCode_ == nullptr && return this->periodType_ == nullptr && return this->usageType_ == nullptr && return this->usageUnitFactor_ == nullptr; };
    // chargeMode Field Functions 
    bool hasChargeMode() const { return this->chargeMode_ != nullptr;};
    void deleteChargeMode() { this->chargeMode_ = nullptr;};
    inline string chargeMode() const { DARABONBA_PTR_GET_DEFAULT(chargeMode_, "") };
    inline DescribeChargeModuleResponseBodyChargeModules& setChargeMode(string chargeMode) { DARABONBA_PTR_SET_VALUE(chargeMode_, chargeMode) };


    // chargeModeDetails Field Functions 
    bool hasChargeModeDetails() const { return this->chargeModeDetails_ != nullptr;};
    void deleteChargeModeDetails() { this->chargeModeDetails_ = nullptr;};
    inline const vector<string> & chargeModeDetails() const { DARABONBA_PTR_GET_CONST(chargeModeDetails_, vector<string>) };
    inline vector<string> chargeModeDetails() { DARABONBA_PTR_GET(chargeModeDetails_, vector<string>) };
    inline DescribeChargeModuleResponseBodyChargeModules& setChargeModeDetails(const vector<string> & chargeModeDetails) { DARABONBA_PTR_SET_VALUE(chargeModeDetails_, chargeModeDetails) };
    inline DescribeChargeModuleResponseBodyChargeModules& setChargeModeDetails(vector<string> && chargeModeDetails) { DARABONBA_PTR_SET_RVALUE(chargeModeDetails_, chargeModeDetails) };


    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline DescribeChargeModuleResponseBodyChargeModules& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // periodType Field Functions 
    bool hasPeriodType() const { return this->periodType_ != nullptr;};
    void deletePeriodType() { this->periodType_ = nullptr;};
    inline string periodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
    inline DescribeChargeModuleResponseBodyChargeModules& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


    // usageType Field Functions 
    bool hasUsageType() const { return this->usageType_ != nullptr;};
    void deleteUsageType() { this->usageType_ = nullptr;};
    inline string usageType() const { DARABONBA_PTR_GET_DEFAULT(usageType_, "") };
    inline DescribeChargeModuleResponseBodyChargeModules& setUsageType(string usageType) { DARABONBA_PTR_SET_VALUE(usageType_, usageType) };


    // usageUnitFactor Field Functions 
    bool hasUsageUnitFactor() const { return this->usageUnitFactor_ != nullptr;};
    void deleteUsageUnitFactor() { this->usageUnitFactor_ = nullptr;};
    inline int32_t usageUnitFactor() const { DARABONBA_PTR_GET_DEFAULT(usageUnitFactor_, 0) };
    inline DescribeChargeModuleResponseBodyChargeModules& setUsageUnitFactor(int32_t usageUnitFactor) { DARABONBA_PTR_SET_VALUE(usageUnitFactor_, usageUnitFactor) };


  protected:
    std::shared_ptr<string> chargeMode_ = nullptr;
    std::shared_ptr<vector<string>> chargeModeDetails_ = nullptr;
    std::shared_ptr<string> moduleCode_ = nullptr;
    std::shared_ptr<string> periodType_ = nullptr;
    std::shared_ptr<string> usageType_ = nullptr;
    std::shared_ptr<int32_t> usageUnitFactor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
