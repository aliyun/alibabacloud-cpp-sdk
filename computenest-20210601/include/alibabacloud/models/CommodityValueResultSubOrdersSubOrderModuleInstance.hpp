// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMODITYVALUERESULTSUBORDERSSUBORDERMODULEINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_COMMODITYVALUERESULTSUBORDERSSUBORDERMODULEINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CommodityValueResultSubOrdersSubOrderModuleInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommodityValueResultSubOrdersSubOrderModuleInstance& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleId, moduleId_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(TotalProductFee, totalProductFee_);
      DARABONBA_PTR_TO_JSON(DiscountFee, discountFee_);
      DARABONBA_PTR_TO_JSON(PayFee, payFee_);
      DARABONBA_PTR_TO_JSON(PriceUnit, priceUnit_);
      DARABONBA_PTR_TO_JSON(IsPricingModule, isPricingModule_);
      DARABONBA_PTR_TO_JSON(NeedOrderPay, needOrderPay_);
      DARABONBA_PTR_TO_JSON(PriceType, priceType_);
      DARABONBA_PTR_TO_JSON(ModuleAttrs, moduleAttrs_);
      DARABONBA_PTR_TO_JSON(ModuleNameEn, moduleNameEn_);
      DARABONBA_PTR_TO_JSON(PriceUnitEn, priceUnitEn_);
    };
    friend void from_json(const Darabonba::Json& j, CommodityValueResultSubOrdersSubOrderModuleInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleId, moduleId_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(TotalProductFee, totalProductFee_);
      DARABONBA_PTR_FROM_JSON(DiscountFee, discountFee_);
      DARABONBA_PTR_FROM_JSON(PayFee, payFee_);
      DARABONBA_PTR_FROM_JSON(PriceUnit, priceUnit_);
      DARABONBA_PTR_FROM_JSON(IsPricingModule, isPricingModule_);
      DARABONBA_PTR_FROM_JSON(NeedOrderPay, needOrderPay_);
      DARABONBA_PTR_FROM_JSON(PriceType, priceType_);
      DARABONBA_PTR_FROM_JSON(ModuleAttrs, moduleAttrs_);
      DARABONBA_PTR_FROM_JSON(ModuleNameEn, moduleNameEn_);
      DARABONBA_PTR_FROM_JSON(PriceUnitEn, priceUnitEn_);
    };
    CommodityValueResultSubOrdersSubOrderModuleInstance() = default ;
    CommodityValueResultSubOrdersSubOrderModuleInstance(const CommodityValueResultSubOrdersSubOrderModuleInstance &) = default ;
    CommodityValueResultSubOrdersSubOrderModuleInstance(CommodityValueResultSubOrdersSubOrderModuleInstance &&) = default ;
    CommodityValueResultSubOrdersSubOrderModuleInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommodityValueResultSubOrdersSubOrderModuleInstance() = default ;
    CommodityValueResultSubOrdersSubOrderModuleInstance& operator=(const CommodityValueResultSubOrdersSubOrderModuleInstance &) = default ;
    CommodityValueResultSubOrdersSubOrderModuleInstance& operator=(CommodityValueResultSubOrdersSubOrderModuleInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->moduleId_ != nullptr
        && this->moduleName_ != nullptr && this->moduleCode_ != nullptr && this->totalProductFee_ != nullptr && this->discountFee_ != nullptr && this->payFee_ != nullptr
        && this->priceUnit_ != nullptr && this->isPricingModule_ != nullptr && this->needOrderPay_ != nullptr && this->priceType_ != nullptr && this->moduleAttrs_ != nullptr
        && this->moduleNameEn_ != nullptr && this->priceUnitEn_ != nullptr; };
    // moduleId Field Functions 
    bool hasModuleId() const { return this->moduleId_ != nullptr;};
    void deleteModuleId() { this->moduleId_ = nullptr;};
    inline int64_t moduleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, 0L) };
    inline CommodityValueResultSubOrdersSubOrderModuleInstance& setModuleId(int64_t moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline CommodityValueResultSubOrdersSubOrderModuleInstance& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline CommodityValueResultSubOrdersSubOrderModuleInstance& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // totalProductFee Field Functions 
    bool hasTotalProductFee() const { return this->totalProductFee_ != nullptr;};
    void deleteTotalProductFee() { this->totalProductFee_ = nullptr;};
    inline double totalProductFee() const { DARABONBA_PTR_GET_DEFAULT(totalProductFee_, 0.0) };
    inline CommodityValueResultSubOrdersSubOrderModuleInstance& setTotalProductFee(double totalProductFee) { DARABONBA_PTR_SET_VALUE(totalProductFee_, totalProductFee) };


    // discountFee Field Functions 
    bool hasDiscountFee() const { return this->discountFee_ != nullptr;};
    void deleteDiscountFee() { this->discountFee_ = nullptr;};
    inline double discountFee() const { DARABONBA_PTR_GET_DEFAULT(discountFee_, 0.0) };
    inline CommodityValueResultSubOrdersSubOrderModuleInstance& setDiscountFee(double discountFee) { DARABONBA_PTR_SET_VALUE(discountFee_, discountFee) };


    // payFee Field Functions 
    bool hasPayFee() const { return this->payFee_ != nullptr;};
    void deletePayFee() { this->payFee_ = nullptr;};
    inline double payFee() const { DARABONBA_PTR_GET_DEFAULT(payFee_, 0.0) };
    inline CommodityValueResultSubOrdersSubOrderModuleInstance& setPayFee(double payFee) { DARABONBA_PTR_SET_VALUE(payFee_, payFee) };


    // priceUnit Field Functions 
    bool hasPriceUnit() const { return this->priceUnit_ != nullptr;};
    void deletePriceUnit() { this->priceUnit_ = nullptr;};
    inline string priceUnit() const { DARABONBA_PTR_GET_DEFAULT(priceUnit_, "") };
    inline CommodityValueResultSubOrdersSubOrderModuleInstance& setPriceUnit(string priceUnit) { DARABONBA_PTR_SET_VALUE(priceUnit_, priceUnit) };


    // isPricingModule Field Functions 
    bool hasIsPricingModule() const { return this->isPricingModule_ != nullptr;};
    void deleteIsPricingModule() { this->isPricingModule_ = nullptr;};
    inline bool isPricingModule() const { DARABONBA_PTR_GET_DEFAULT(isPricingModule_, false) };
    inline CommodityValueResultSubOrdersSubOrderModuleInstance& setIsPricingModule(bool isPricingModule) { DARABONBA_PTR_SET_VALUE(isPricingModule_, isPricingModule) };


    // needOrderPay Field Functions 
    bool hasNeedOrderPay() const { return this->needOrderPay_ != nullptr;};
    void deleteNeedOrderPay() { this->needOrderPay_ = nullptr;};
    inline bool needOrderPay() const { DARABONBA_PTR_GET_DEFAULT(needOrderPay_, false) };
    inline CommodityValueResultSubOrdersSubOrderModuleInstance& setNeedOrderPay(bool needOrderPay) { DARABONBA_PTR_SET_VALUE(needOrderPay_, needOrderPay) };


    // priceType Field Functions 
    bool hasPriceType() const { return this->priceType_ != nullptr;};
    void deletePriceType() { this->priceType_ = nullptr;};
    inline string priceType() const { DARABONBA_PTR_GET_DEFAULT(priceType_, "") };
    inline CommodityValueResultSubOrdersSubOrderModuleInstance& setPriceType(string priceType) { DARABONBA_PTR_SET_VALUE(priceType_, priceType) };


    // moduleAttrs Field Functions 
    bool hasModuleAttrs() const { return this->moduleAttrs_ != nullptr;};
    void deleteModuleAttrs() { this->moduleAttrs_ = nullptr;};
    inline const vector<Models::CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs> & moduleAttrs() const { DARABONBA_PTR_GET_CONST(moduleAttrs_, vector<Models::CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs>) };
    inline vector<Models::CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs> moduleAttrs() { DARABONBA_PTR_GET(moduleAttrs_, vector<Models::CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs>) };
    inline CommodityValueResultSubOrdersSubOrderModuleInstance& setModuleAttrs(const vector<Models::CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs> & moduleAttrs) { DARABONBA_PTR_SET_VALUE(moduleAttrs_, moduleAttrs) };
    inline CommodityValueResultSubOrdersSubOrderModuleInstance& setModuleAttrs(vector<Models::CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs> && moduleAttrs) { DARABONBA_PTR_SET_RVALUE(moduleAttrs_, moduleAttrs) };


    // moduleNameEn Field Functions 
    bool hasModuleNameEn() const { return this->moduleNameEn_ != nullptr;};
    void deleteModuleNameEn() { this->moduleNameEn_ = nullptr;};
    inline string moduleNameEn() const { DARABONBA_PTR_GET_DEFAULT(moduleNameEn_, "") };
    inline CommodityValueResultSubOrdersSubOrderModuleInstance& setModuleNameEn(string moduleNameEn) { DARABONBA_PTR_SET_VALUE(moduleNameEn_, moduleNameEn) };


    // priceUnitEn Field Functions 
    bool hasPriceUnitEn() const { return this->priceUnitEn_ != nullptr;};
    void deletePriceUnitEn() { this->priceUnitEn_ = nullptr;};
    inline string priceUnitEn() const { DARABONBA_PTR_GET_DEFAULT(priceUnitEn_, "") };
    inline CommodityValueResultSubOrdersSubOrderModuleInstance& setPriceUnitEn(string priceUnitEn) { DARABONBA_PTR_SET_VALUE(priceUnitEn_, priceUnitEn) };


  protected:
    // The module ID.
    std::shared_ptr<int64_t> moduleId_ = nullptr;
    // The module name.
    std::shared_ptr<string> moduleName_ = nullptr;
    // The module code.
    std::shared_ptr<string> moduleCode_ = nullptr;
    // The original price (RMB).
    std::shared_ptr<double> totalProductFee_ = nullptr;
    // The discount amount (RMB).
    std::shared_ptr<double> discountFee_ = nullptr;
    // The amount actually paid (RMB).
    std::shared_ptr<double> payFee_ = nullptr;
    // The unit of the price.
    std::shared_ptr<string> priceUnit_ = nullptr;
    // Indicates whether the item is billed.
    std::shared_ptr<bool> isPricingModule_ = nullptr;
    // Indicates whether the order is paid.
    std::shared_ptr<bool> needOrderPay_ = nullptr;
    // The pricing type.
    std::shared_ptr<string> priceType_ = nullptr;
    // The module attributes.
    std::shared_ptr<vector<Models::CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs>> moduleAttrs_ = nullptr;
    // Module English name.
    std::shared_ptr<string> moduleNameEn_ = nullptr;
    // Price Unit English Name
    std::shared_ptr<string> priceUnitEn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
