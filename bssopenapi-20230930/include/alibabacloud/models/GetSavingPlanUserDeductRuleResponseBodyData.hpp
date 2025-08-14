// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAVINGPLANUSERDEDUCTRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSAVINGPLANUSERDEDUCTRULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetSavingPlanUserDeductRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSavingPlanUserDeductRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_TO_JSON(SkipDeduct, skipDeduct_);
    };
    friend void from_json(const Darabonba::Json& j, GetSavingPlanUserDeductRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(SkipDeduct, skipDeduct_);
    };
    GetSavingPlanUserDeductRuleResponseBodyData() = default ;
    GetSavingPlanUserDeductRuleResponseBodyData(const GetSavingPlanUserDeductRuleResponseBodyData &) = default ;
    GetSavingPlanUserDeductRuleResponseBodyData(GetSavingPlanUserDeductRuleResponseBodyData &&) = default ;
    GetSavingPlanUserDeductRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSavingPlanUserDeductRuleResponseBodyData() = default ;
    GetSavingPlanUserDeductRuleResponseBodyData& operator=(const GetSavingPlanUserDeductRuleResponseBodyData &) = default ;
    GetSavingPlanUserDeductRuleResponseBodyData& operator=(GetSavingPlanUserDeductRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityCode_ != nullptr
        && this->commodityName_ != nullptr && this->moduleCode_ != nullptr && this->moduleName_ != nullptr && this->skipDeduct_ != nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline GetSavingPlanUserDeductRuleResponseBodyData& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // commodityName Field Functions 
    bool hasCommodityName() const { return this->commodityName_ != nullptr;};
    void deleteCommodityName() { this->commodityName_ = nullptr;};
    inline string commodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
    inline GetSavingPlanUserDeductRuleResponseBodyData& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline GetSavingPlanUserDeductRuleResponseBodyData& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline GetSavingPlanUserDeductRuleResponseBodyData& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // skipDeduct Field Functions 
    bool hasSkipDeduct() const { return this->skipDeduct_ != nullptr;};
    void deleteSkipDeduct() { this->skipDeduct_ = nullptr;};
    inline bool skipDeduct() const { DARABONBA_PTR_GET_DEFAULT(skipDeduct_, false) };
    inline GetSavingPlanUserDeductRuleResponseBodyData& setSkipDeduct(bool skipDeduct) { DARABONBA_PTR_SET_VALUE(skipDeduct_, skipDeduct) };


  protected:
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<string> commodityName_ = nullptr;
    std::shared_ptr<string> moduleCode_ = nullptr;
    std::shared_ptr<string> moduleName_ = nullptr;
    std::shared_ptr<bool> skipDeduct_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
