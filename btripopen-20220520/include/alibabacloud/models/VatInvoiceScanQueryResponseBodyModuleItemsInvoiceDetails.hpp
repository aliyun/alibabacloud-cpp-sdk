// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VATINVOICESCANQUERYRESPONSEBODYMODULEITEMSINVOICEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_VATINVOICESCANQUERYRESPONSEBODYMODULEITEMSINVOICEDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails& obj) { 
      DARABONBA_PTR_TO_JSON(amount, amount_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(item_name, itemName_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
      DARABONBA_PTR_TO_JSON(specification, specification_);
      DARABONBA_PTR_TO_JSON(tax, tax_);
      DARABONBA_PTR_TO_JSON(tax_rate, taxRate_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
      DARABONBA_PTR_TO_JSON(unit_price, unitPrice_);
    };
    friend void from_json(const Darabonba::Json& j, VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(amount, amount_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(item_name, itemName_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(specification, specification_);
      DARABONBA_PTR_FROM_JSON(tax, tax_);
      DARABONBA_PTR_FROM_JSON(tax_rate, taxRate_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
      DARABONBA_PTR_FROM_JSON(unit_price, unitPrice_);
    };
    VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails() = default ;
    VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails(const VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails &) = default ;
    VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails(VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails &&) = default ;
    VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails() = default ;
    VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails& operator=(const VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails &) = default ;
    VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails& operator=(VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->index_ != nullptr && this->itemName_ != nullptr && this->quantity_ != nullptr && this->specification_ != nullptr && this->tax_ != nullptr
        && this->taxRate_ != nullptr && this->unit_ != nullptr && this->unitPrice_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline string amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // itemName Field Functions 
    bool hasItemName() const { return this->itemName_ != nullptr;};
    void deleteItemName() { this->itemName_ = nullptr;};
    inline string itemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline string quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails& setQuantity(string quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string specification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


    // tax Field Functions 
    bool hasTax() const { return this->tax_ != nullptr;};
    void deleteTax() { this->tax_ = nullptr;};
    inline string tax() const { DARABONBA_PTR_GET_DEFAULT(tax_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails& setTax(string tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


    // taxRate Field Functions 
    bool hasTaxRate() const { return this->taxRate_ != nullptr;};
    void deleteTaxRate() { this->taxRate_ = nullptr;};
    inline string taxRate() const { DARABONBA_PTR_GET_DEFAULT(taxRate_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails& setTaxRate(string taxRate) { DARABONBA_PTR_SET_VALUE(taxRate_, taxRate) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // unitPrice Field Functions 
    bool hasUnitPrice() const { return this->unitPrice_ != nullptr;};
    void deleteUnitPrice() { this->unitPrice_ = nullptr;};
    inline string unitPrice() const { DARABONBA_PTR_GET_DEFAULT(unitPrice_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails& setUnitPrice(string unitPrice) { DARABONBA_PTR_SET_VALUE(unitPrice_, unitPrice) };


  protected:
    std::shared_ptr<string> amount_ = nullptr;
    // 行号
    std::shared_ptr<string> index_ = nullptr;
    std::shared_ptr<string> itemName_ = nullptr;
    std::shared_ptr<string> quantity_ = nullptr;
    std::shared_ptr<string> specification_ = nullptr;
    std::shared_ptr<string> tax_ = nullptr;
    std::shared_ptr<string> taxRate_ = nullptr;
    std::shared_ptr<string> unit_ = nullptr;
    std::shared_ptr<string> unitPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
