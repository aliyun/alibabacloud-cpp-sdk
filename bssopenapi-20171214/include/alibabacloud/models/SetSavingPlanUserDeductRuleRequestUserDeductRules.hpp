// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSAVINGPLANUSERDEDUCTRULEREQUESTUSERDEDUCTRULES_HPP_
#define ALIBABACLOUD_MODELS_SETSAVINGPLANUSERDEDUCTRULEREQUESTUSERDEDUCTRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class SetSavingPlanUserDeductRuleRequestUserDeductRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSavingPlanUserDeductRuleRequestUserDeductRules& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(SkipDeduct, skipDeduct_);
    };
    friend void from_json(const Darabonba::Json& j, SetSavingPlanUserDeductRuleRequestUserDeductRules& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(SkipDeduct, skipDeduct_);
    };
    SetSavingPlanUserDeductRuleRequestUserDeductRules() = default ;
    SetSavingPlanUserDeductRuleRequestUserDeductRules(const SetSavingPlanUserDeductRuleRequestUserDeductRules &) = default ;
    SetSavingPlanUserDeductRuleRequestUserDeductRules(SetSavingPlanUserDeductRuleRequestUserDeductRules &&) = default ;
    SetSavingPlanUserDeductRuleRequestUserDeductRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSavingPlanUserDeductRuleRequestUserDeductRules() = default ;
    SetSavingPlanUserDeductRuleRequestUserDeductRules& operator=(const SetSavingPlanUserDeductRuleRequestUserDeductRules &) = default ;
    SetSavingPlanUserDeductRuleRequestUserDeductRules& operator=(SetSavingPlanUserDeductRuleRequestUserDeductRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityCode_ != nullptr
        && this->moduleCode_ != nullptr && this->skipDeduct_ != nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline SetSavingPlanUserDeductRuleRequestUserDeductRules& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline SetSavingPlanUserDeductRuleRequestUserDeductRules& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // skipDeduct Field Functions 
    bool hasSkipDeduct() const { return this->skipDeduct_ != nullptr;};
    void deleteSkipDeduct() { this->skipDeduct_ = nullptr;};
    inline bool skipDeduct() const { DARABONBA_PTR_GET_DEFAULT(skipDeduct_, false) };
    inline SetSavingPlanUserDeductRuleRequestUserDeductRules& setSkipDeduct(bool skipDeduct) { DARABONBA_PTR_SET_VALUE(skipDeduct_, skipDeduct) };


  protected:
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<string> moduleCode_ = nullptr;
    std::shared_ptr<bool> skipDeduct_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
