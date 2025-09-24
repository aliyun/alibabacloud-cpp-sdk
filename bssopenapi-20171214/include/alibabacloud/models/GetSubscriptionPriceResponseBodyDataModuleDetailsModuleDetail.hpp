// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIPTIONPRICERESPONSEBODYDATAMODULEDETAILSMODULEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIPTIONPRICERESPONSEBODYDATAMODULEDETAILSMODULEDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CostAfterDiscount, costAfterDiscount_);
      DARABONBA_PTR_TO_JSON(InvoiceDiscount, invoiceDiscount_);
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(OriginalCost, originalCost_);
      DARABONBA_PTR_TO_JSON(UnitPrice, unitPrice_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CostAfterDiscount, costAfterDiscount_);
      DARABONBA_PTR_FROM_JSON(InvoiceDiscount, invoiceDiscount_);
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(OriginalCost, originalCost_);
      DARABONBA_PTR_FROM_JSON(UnitPrice, unitPrice_);
    };
    GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail() = default ;
    GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail(const GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail &) = default ;
    GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail(GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail &&) = default ;
    GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail() = default ;
    GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail& operator=(const GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail &) = default ;
    GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail& operator=(GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costAfterDiscount_ != nullptr
        && this->invoiceDiscount_ != nullptr && this->moduleCode_ != nullptr && this->originalCost_ != nullptr && this->unitPrice_ != nullptr; };
    // costAfterDiscount Field Functions 
    bool hasCostAfterDiscount() const { return this->costAfterDiscount_ != nullptr;};
    void deleteCostAfterDiscount() { this->costAfterDiscount_ = nullptr;};
    inline float costAfterDiscount() const { DARABONBA_PTR_GET_DEFAULT(costAfterDiscount_, 0.0) };
    inline GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail& setCostAfterDiscount(float costAfterDiscount) { DARABONBA_PTR_SET_VALUE(costAfterDiscount_, costAfterDiscount) };


    // invoiceDiscount Field Functions 
    bool hasInvoiceDiscount() const { return this->invoiceDiscount_ != nullptr;};
    void deleteInvoiceDiscount() { this->invoiceDiscount_ = nullptr;};
    inline float invoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(invoiceDiscount_, 0.0) };
    inline GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail& setInvoiceDiscount(float invoiceDiscount) { DARABONBA_PTR_SET_VALUE(invoiceDiscount_, invoiceDiscount) };


    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // originalCost Field Functions 
    bool hasOriginalCost() const { return this->originalCost_ != nullptr;};
    void deleteOriginalCost() { this->originalCost_ = nullptr;};
    inline float originalCost() const { DARABONBA_PTR_GET_DEFAULT(originalCost_, 0.0) };
    inline GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail& setOriginalCost(float originalCost) { DARABONBA_PTR_SET_VALUE(originalCost_, originalCost) };


    // unitPrice Field Functions 
    bool hasUnitPrice() const { return this->unitPrice_ != nullptr;};
    void deleteUnitPrice() { this->unitPrice_ = nullptr;};
    inline float unitPrice() const { DARABONBA_PTR_GET_DEFAULT(unitPrice_, 0.0) };
    inline GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail& setUnitPrice(float unitPrice) { DARABONBA_PTR_SET_VALUE(unitPrice_, unitPrice) };


  protected:
    // The discount price.
    std::shared_ptr<float> costAfterDiscount_ = nullptr;
    // The discount that was applied.
    std::shared_ptr<float> invoiceDiscount_ = nullptr;
    // The identifier of the pricing module.
    std::shared_ptr<string> moduleCode_ = nullptr;
    // The original price of the service.
    std::shared_ptr<float> originalCost_ = nullptr;
    // The unit price.
    std::shared_ptr<float> unitPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
