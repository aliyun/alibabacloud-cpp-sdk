// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIPRICERESPONSEBODYPRICEINFOPRICEPRICEDETAILSMODULEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIPRICERESPONSEBODYPRICEINFOPRICEPRICEDETAILSMODULEDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails& obj) { 
      DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_TO_JSON(ModuleValue, moduleValue_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(SavingPlanDiscountPrice, savingPlanDiscountPrice_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(ModuleValue, moduleValue_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(SavingPlanDiscountPrice, savingPlanDiscountPrice_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails() = default ;
    DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails(const DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails &) = default ;
    DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails(DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails &&) = default ;
    DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails() = default ;
    DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails& operator=(const DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails &) = default ;
    DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails& operator=(DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->discountPrice_ == nullptr
        && return this->moduleCode_ == nullptr && return this->moduleName_ == nullptr && return this->moduleValue_ == nullptr && return this->originalPrice_ == nullptr && return this->savingPlanDiscountPrice_ == nullptr
        && return this->tradePrice_ == nullptr; };
    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline float discountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
    inline DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // moduleValue Field Functions 
    bool hasModuleValue() const { return this->moduleValue_ != nullptr;};
    void deleteModuleValue() { this->moduleValue_ = nullptr;};
    inline string moduleValue() const { DARABONBA_PTR_GET_DEFAULT(moduleValue_, "") };
    inline DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails& setModuleValue(string moduleValue) { DARABONBA_PTR_SET_VALUE(moduleValue_, moduleValue) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // savingPlanDiscountPrice Field Functions 
    bool hasSavingPlanDiscountPrice() const { return this->savingPlanDiscountPrice_ != nullptr;};
    void deleteSavingPlanDiscountPrice() { this->savingPlanDiscountPrice_ = nullptr;};
    inline float savingPlanDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(savingPlanDiscountPrice_, 0.0) };
    inline DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails& setSavingPlanDiscountPrice(float savingPlanDiscountPrice) { DARABONBA_PTR_SET_VALUE(savingPlanDiscountPrice_, savingPlanDiscountPrice) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    std::shared_ptr<float> discountPrice_ = nullptr;
    std::shared_ptr<string> moduleCode_ = nullptr;
    std::shared_ptr<string> moduleName_ = nullptr;
    std::shared_ptr<string> moduleValue_ = nullptr;
    std::shared_ptr<float> originalPrice_ = nullptr;
    std::shared_ptr<float> savingPlanDiscountPrice_ = nullptr;
    std::shared_ptr<float> tradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
