// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICINGMODULERESPONSEBODYDATAMODULELISTMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICINGMODULERESPONSEBODYDATAMODULELISTMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePricingModuleResponseBodyDataModuleListModuleConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribePricingModuleResponseBodyDataModuleListModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePricingModuleResponseBodyDataModuleListModule& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_TO_JSON(PriceType, priceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePricingModuleResponseBodyDataModuleListModule& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(PriceType, priceType_);
    };
    DescribePricingModuleResponseBodyDataModuleListModule() = default ;
    DescribePricingModuleResponseBodyDataModuleListModule(const DescribePricingModuleResponseBodyDataModuleListModule &) = default ;
    DescribePricingModuleResponseBodyDataModuleListModule(DescribePricingModuleResponseBodyDataModuleListModule &&) = default ;
    DescribePricingModuleResponseBodyDataModuleListModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePricingModuleResponseBodyDataModuleListModule() = default ;
    DescribePricingModuleResponseBodyDataModuleListModule& operator=(const DescribePricingModuleResponseBodyDataModuleListModule &) = default ;
    DescribePricingModuleResponseBodyDataModuleListModule& operator=(DescribePricingModuleResponseBodyDataModuleListModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configList_ != nullptr
        && this->currency_ != nullptr && this->moduleCode_ != nullptr && this->moduleName_ != nullptr && this->priceType_ != nullptr; };
    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline const Models::DescribePricingModuleResponseBodyDataModuleListModuleConfigList & configList() const { DARABONBA_PTR_GET_CONST(configList_, Models::DescribePricingModuleResponseBodyDataModuleListModuleConfigList) };
    inline Models::DescribePricingModuleResponseBodyDataModuleListModuleConfigList configList() { DARABONBA_PTR_GET(configList_, Models::DescribePricingModuleResponseBodyDataModuleListModuleConfigList) };
    inline DescribePricingModuleResponseBodyDataModuleListModule& setConfigList(const Models::DescribePricingModuleResponseBodyDataModuleListModuleConfigList & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
    inline DescribePricingModuleResponseBodyDataModuleListModule& setConfigList(Models::DescribePricingModuleResponseBodyDataModuleListModuleConfigList && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribePricingModuleResponseBodyDataModuleListModule& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline DescribePricingModuleResponseBodyDataModuleListModule& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline DescribePricingModuleResponseBodyDataModuleListModule& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // priceType Field Functions 
    bool hasPriceType() const { return this->priceType_ != nullptr;};
    void deletePriceType() { this->priceType_ = nullptr;};
    inline string priceType() const { DARABONBA_PTR_GET_DEFAULT(priceType_, "") };
    inline DescribePricingModuleResponseBodyDataModuleListModule& setPriceType(string priceType) { DARABONBA_PTR_SET_VALUE(priceType_, priceType) };


  protected:
    std::shared_ptr<Models::DescribePricingModuleResponseBodyDataModuleListModuleConfigList> configList_ = nullptr;
    // The currency. Default value: CNY.
    std::shared_ptr<string> currency_ = nullptr;
    // The code of the pricing module.
    std::shared_ptr<string> moduleCode_ = nullptr;
    // The name of the pricing module.
    std::shared_ptr<string> moduleName_ = nullptr;
    // The price type. Valid values:
    // 
    // *   Usage: usage price
    // *   Hour: hourly price
    // *   Day: daily price
    // *   Week: weekly price
    // *   Month: monthly price
    // *   Year: annual price
    std::shared_ptr<string> priceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
