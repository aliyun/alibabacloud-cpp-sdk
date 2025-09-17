// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRICERESPONSEBODYPRICEMODULEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETPRICERESPONSEBODYPRICEMODULEDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetPriceResponseBodyPriceModuleDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPriceResponseBodyPriceModuleDetails& obj) { 
      DARABONBA_PTR_TO_JSON(costAfterDiscount, costAfterDiscount_);
      DARABONBA_PTR_TO_JSON(invoiceDiscount, invoiceDiscount_);
      DARABONBA_PTR_TO_JSON(moduleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(moduleName, moduleName_);
      DARABONBA_PTR_TO_JSON(originalCost, originalCost_);
      DARABONBA_PTR_TO_JSON(priceType, priceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetPriceResponseBodyPriceModuleDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(costAfterDiscount, costAfterDiscount_);
      DARABONBA_PTR_FROM_JSON(invoiceDiscount, invoiceDiscount_);
      DARABONBA_PTR_FROM_JSON(moduleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(moduleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(originalCost, originalCost_);
      DARABONBA_PTR_FROM_JSON(priceType, priceType_);
    };
    GetPriceResponseBodyPriceModuleDetails() = default ;
    GetPriceResponseBodyPriceModuleDetails(const GetPriceResponseBodyPriceModuleDetails &) = default ;
    GetPriceResponseBodyPriceModuleDetails(GetPriceResponseBodyPriceModuleDetails &&) = default ;
    GetPriceResponseBodyPriceModuleDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPriceResponseBodyPriceModuleDetails() = default ;
    GetPriceResponseBodyPriceModuleDetails& operator=(const GetPriceResponseBodyPriceModuleDetails &) = default ;
    GetPriceResponseBodyPriceModuleDetails& operator=(GetPriceResponseBodyPriceModuleDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costAfterDiscount_ != nullptr
        && this->invoiceDiscount_ != nullptr && this->moduleCode_ != nullptr && this->moduleName_ != nullptr && this->originalCost_ != nullptr && this->priceType_ != nullptr; };
    // costAfterDiscount Field Functions 
    bool hasCostAfterDiscount() const { return this->costAfterDiscount_ != nullptr;};
    void deleteCostAfterDiscount() { this->costAfterDiscount_ = nullptr;};
    inline float costAfterDiscount() const { DARABONBA_PTR_GET_DEFAULT(costAfterDiscount_, 0.0) };
    inline GetPriceResponseBodyPriceModuleDetails& setCostAfterDiscount(float costAfterDiscount) { DARABONBA_PTR_SET_VALUE(costAfterDiscount_, costAfterDiscount) };


    // invoiceDiscount Field Functions 
    bool hasInvoiceDiscount() const { return this->invoiceDiscount_ != nullptr;};
    void deleteInvoiceDiscount() { this->invoiceDiscount_ = nullptr;};
    inline float invoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(invoiceDiscount_, 0.0) };
    inline GetPriceResponseBodyPriceModuleDetails& setInvoiceDiscount(float invoiceDiscount) { DARABONBA_PTR_SET_VALUE(invoiceDiscount_, invoiceDiscount) };


    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline GetPriceResponseBodyPriceModuleDetails& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline GetPriceResponseBodyPriceModuleDetails& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // originalCost Field Functions 
    bool hasOriginalCost() const { return this->originalCost_ != nullptr;};
    void deleteOriginalCost() { this->originalCost_ = nullptr;};
    inline float originalCost() const { DARABONBA_PTR_GET_DEFAULT(originalCost_, 0.0) };
    inline GetPriceResponseBodyPriceModuleDetails& setOriginalCost(float originalCost) { DARABONBA_PTR_SET_VALUE(originalCost_, originalCost) };


    // priceType Field Functions 
    bool hasPriceType() const { return this->priceType_ != nullptr;};
    void deletePriceType() { this->priceType_ = nullptr;};
    inline string priceType() const { DARABONBA_PTR_GET_DEFAULT(priceType_, "") };
    inline GetPriceResponseBodyPriceModuleDetails& setPriceType(string priceType) { DARABONBA_PTR_SET_VALUE(priceType_, priceType) };


  protected:
    // The discount price.
    std::shared_ptr<float> costAfterDiscount_ = nullptr;
    // The discount.
    std::shared_ptr<float> invoiceDiscount_ = nullptr;
    // The code of the pricing module.
    std::shared_ptr<string> moduleCode_ = nullptr;
    // The name of the pricing module.
    std::shared_ptr<string> moduleName_ = nullptr;
    // The original price.
    std::shared_ptr<float> originalCost_ = nullptr;
    // The price type.
    std::shared_ptr<string> priceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
