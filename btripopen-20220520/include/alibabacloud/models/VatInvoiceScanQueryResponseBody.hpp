// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VATINVOICESCANQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VATINVOICESCANQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class VatInvoiceScanQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VatInvoiceScanQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, VatInvoiceScanQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    VatInvoiceScanQueryResponseBody() = default ;
    VatInvoiceScanQueryResponseBody(const VatInvoiceScanQueryResponseBody &) = default ;
    VatInvoiceScanQueryResponseBody(VatInvoiceScanQueryResponseBody &&) = default ;
    VatInvoiceScanQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VatInvoiceScanQueryResponseBody() = default ;
    VatInvoiceScanQueryResponseBody& operator=(const VatInvoiceScanQueryResponseBody &) = default ;
    VatInvoiceScanQueryResponseBody& operator=(VatInvoiceScanQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(page_no, pageNo_);
        DARABONBA_PTR_TO_JSON(page_size, pageSize_);
        DARABONBA_PTR_TO_JSON(total_page, totalPage_);
        DARABONBA_PTR_TO_JSON(total_size, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(page_no, pageNo_);
        DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
        DARABONBA_PTR_FROM_JSON(total_page, totalPage_);
        DARABONBA_PTR_FROM_JSON(total_size, totalSize_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(amount_with_tax, amountWithTax_);
          DARABONBA_PTR_TO_JSON(amount_without_tax, amountWithoutTax_);
          DARABONBA_PTR_TO_JSON(bill_date, billDate_);
          DARABONBA_PTR_TO_JSON(changed, changed_);
          DARABONBA_PTR_TO_JSON(check_code, checkCode_);
          DARABONBA_PTR_TO_JSON(drawer, drawer_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(invoice_code, invoiceCode_);
          DARABONBA_PTR_TO_JSON(invoice_day, invoiceDay_);
          DARABONBA_PTR_TO_JSON(invoice_detail, invoiceDetail_);
          DARABONBA_PTR_TO_JSON(invoice_details, invoiceDetails_);
          DARABONBA_PTR_TO_JSON(invoice_location, invoiceLocation_);
          DARABONBA_PTR_TO_JSON(invoice_no, invoiceNo_);
          DARABONBA_PTR_TO_JSON(invoice_sub_task_id, invoiceSubTaskId_);
          DARABONBA_PTR_TO_JSON(invoice_type, invoiceType_);
          DARABONBA_PTR_TO_JSON(invoice_type_desc, invoiceTypeDesc_);
          DARABONBA_PTR_TO_JSON(machine_code, machineCode_);
          DARABONBA_PTR_TO_JSON(ofd_oss_url, ofdOssUrl_);
          DARABONBA_PTR_TO_JSON(oss_url, ossUrl_);
          DARABONBA_PTR_TO_JSON(password_area, passwordArea_);
          DARABONBA_PTR_TO_JSON(pdf_oss_url, pdfOssUrl_);
          DARABONBA_PTR_TO_JSON(purchaser_bank_account_info, purchaserBankAccountInfo_);
          DARABONBA_PTR_TO_JSON(purchaser_contact_info, purchaserContactInfo_);
          DARABONBA_PTR_TO_JSON(purchaser_name, purchaserName_);
          DARABONBA_PTR_TO_JSON(purchaser_tax_no, purchaserTaxNo_);
          DARABONBA_PTR_TO_JSON(recipient, recipient_);
          DARABONBA_PTR_TO_JSON(remarks, remarks_);
          DARABONBA_PTR_TO_JSON(reviewer, reviewer_);
          DARABONBA_PTR_TO_JSON(seller_bank_account_info, sellerBankAccountInfo_);
          DARABONBA_PTR_TO_JSON(seller_contact_info, sellerContactInfo_);
          DARABONBA_PTR_TO_JSON(seller_name, sellerName_);
          DARABONBA_PTR_TO_JSON(seller_tax_no, sellerTaxNo_);
          DARABONBA_PTR_TO_JSON(smart_check_code, smartCheckCode_);
          DARABONBA_PTR_TO_JSON(tax_amount, taxAmount_);
          DARABONBA_PTR_TO_JSON(tax_rate, taxRate_);
          DARABONBA_PTR_TO_JSON(total_amount_in_words, totalAmountInWords_);
          DARABONBA_PTR_TO_JSON(xml_oss_url, xmlOssUrl_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(amount_with_tax, amountWithTax_);
          DARABONBA_PTR_FROM_JSON(amount_without_tax, amountWithoutTax_);
          DARABONBA_PTR_FROM_JSON(bill_date, billDate_);
          DARABONBA_PTR_FROM_JSON(changed, changed_);
          DARABONBA_PTR_FROM_JSON(check_code, checkCode_);
          DARABONBA_PTR_FROM_JSON(drawer, drawer_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(invoice_code, invoiceCode_);
          DARABONBA_PTR_FROM_JSON(invoice_day, invoiceDay_);
          DARABONBA_PTR_FROM_JSON(invoice_detail, invoiceDetail_);
          DARABONBA_PTR_FROM_JSON(invoice_details, invoiceDetails_);
          DARABONBA_PTR_FROM_JSON(invoice_location, invoiceLocation_);
          DARABONBA_PTR_FROM_JSON(invoice_no, invoiceNo_);
          DARABONBA_PTR_FROM_JSON(invoice_sub_task_id, invoiceSubTaskId_);
          DARABONBA_PTR_FROM_JSON(invoice_type, invoiceType_);
          DARABONBA_PTR_FROM_JSON(invoice_type_desc, invoiceTypeDesc_);
          DARABONBA_PTR_FROM_JSON(machine_code, machineCode_);
          DARABONBA_PTR_FROM_JSON(ofd_oss_url, ofdOssUrl_);
          DARABONBA_PTR_FROM_JSON(oss_url, ossUrl_);
          DARABONBA_PTR_FROM_JSON(password_area, passwordArea_);
          DARABONBA_PTR_FROM_JSON(pdf_oss_url, pdfOssUrl_);
          DARABONBA_PTR_FROM_JSON(purchaser_bank_account_info, purchaserBankAccountInfo_);
          DARABONBA_PTR_FROM_JSON(purchaser_contact_info, purchaserContactInfo_);
          DARABONBA_PTR_FROM_JSON(purchaser_name, purchaserName_);
          DARABONBA_PTR_FROM_JSON(purchaser_tax_no, purchaserTaxNo_);
          DARABONBA_PTR_FROM_JSON(recipient, recipient_);
          DARABONBA_PTR_FROM_JSON(remarks, remarks_);
          DARABONBA_PTR_FROM_JSON(reviewer, reviewer_);
          DARABONBA_PTR_FROM_JSON(seller_bank_account_info, sellerBankAccountInfo_);
          DARABONBA_PTR_FROM_JSON(seller_contact_info, sellerContactInfo_);
          DARABONBA_PTR_FROM_JSON(seller_name, sellerName_);
          DARABONBA_PTR_FROM_JSON(seller_tax_no, sellerTaxNo_);
          DARABONBA_PTR_FROM_JSON(smart_check_code, smartCheckCode_);
          DARABONBA_PTR_FROM_JSON(tax_amount, taxAmount_);
          DARABONBA_PTR_FROM_JSON(tax_rate, taxRate_);
          DARABONBA_PTR_FROM_JSON(total_amount_in_words, totalAmountInWords_);
          DARABONBA_PTR_FROM_JSON(xml_oss_url, xmlOssUrl_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InvoiceDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InvoiceDetails& obj) { 
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
          friend void from_json(const Darabonba::Json& j, InvoiceDetails& obj) { 
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
          InvoiceDetails() = default ;
          InvoiceDetails(const InvoiceDetails &) = default ;
          InvoiceDetails(InvoiceDetails &&) = default ;
          InvoiceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InvoiceDetails() = default ;
          InvoiceDetails& operator=(const InvoiceDetails &) = default ;
          InvoiceDetails& operator=(InvoiceDetails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->amount_ == nullptr
        && this->index_ == nullptr && this->itemName_ == nullptr && this->quantity_ == nullptr && this->specification_ == nullptr && this->tax_ == nullptr
        && this->taxRate_ == nullptr && this->unit_ == nullptr && this->unitPrice_ == nullptr; };
          // amount Field Functions 
          bool hasAmount() const { return this->amount_ != nullptr;};
          void deleteAmount() { this->amount_ = nullptr;};
          inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
          inline InvoiceDetails& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // index Field Functions 
          bool hasIndex() const { return this->index_ != nullptr;};
          void deleteIndex() { this->index_ = nullptr;};
          inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
          inline InvoiceDetails& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


          // itemName Field Functions 
          bool hasItemName() const { return this->itemName_ != nullptr;};
          void deleteItemName() { this->itemName_ = nullptr;};
          inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
          inline InvoiceDetails& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


          // quantity Field Functions 
          bool hasQuantity() const { return this->quantity_ != nullptr;};
          void deleteQuantity() { this->quantity_ = nullptr;};
          inline string getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, "") };
          inline InvoiceDetails& setQuantity(string quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


          // specification Field Functions 
          bool hasSpecification() const { return this->specification_ != nullptr;};
          void deleteSpecification() { this->specification_ = nullptr;};
          inline string getSpecification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
          inline InvoiceDetails& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


          // tax Field Functions 
          bool hasTax() const { return this->tax_ != nullptr;};
          void deleteTax() { this->tax_ = nullptr;};
          inline string getTax() const { DARABONBA_PTR_GET_DEFAULT(tax_, "") };
          inline InvoiceDetails& setTax(string tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


          // taxRate Field Functions 
          bool hasTaxRate() const { return this->taxRate_ != nullptr;};
          void deleteTaxRate() { this->taxRate_ = nullptr;};
          inline string getTaxRate() const { DARABONBA_PTR_GET_DEFAULT(taxRate_, "") };
          inline InvoiceDetails& setTaxRate(string taxRate) { DARABONBA_PTR_SET_VALUE(taxRate_, taxRate) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline InvoiceDetails& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // unitPrice Field Functions 
          bool hasUnitPrice() const { return this->unitPrice_ != nullptr;};
          void deleteUnitPrice() { this->unitPrice_ = nullptr;};
          inline string getUnitPrice() const { DARABONBA_PTR_GET_DEFAULT(unitPrice_, "") };
          inline InvoiceDetails& setUnitPrice(string unitPrice) { DARABONBA_PTR_SET_VALUE(unitPrice_, unitPrice) };


        protected:
          // The amount.
          shared_ptr<string> amount_ {};
          // The line number.
          shared_ptr<string> index_ {};
          // The name of the goods, taxable services, or service name.
          shared_ptr<string> itemName_ {};
          // The quantity.
          shared_ptr<string> quantity_ {};
          // The specification and model.
          shared_ptr<string> specification_ {};
          // The tax amount.
          shared_ptr<string> tax_ {};
          // The tax rate.
          shared_ptr<string> taxRate_ {};
          // The unit of measurement.
          shared_ptr<string> unit_ {};
          // The unit price.
          shared_ptr<string> unitPrice_ {};
        };

        virtual bool empty() const override { return this->amountWithTax_ == nullptr
        && this->amountWithoutTax_ == nullptr && this->billDate_ == nullptr && this->changed_ == nullptr && this->checkCode_ == nullptr && this->drawer_ == nullptr
        && this->id_ == nullptr && this->invoiceCode_ == nullptr && this->invoiceDay_ == nullptr && this->invoiceDetail_ == nullptr && this->invoiceDetails_ == nullptr
        && this->invoiceLocation_ == nullptr && this->invoiceNo_ == nullptr && this->invoiceSubTaskId_ == nullptr && this->invoiceType_ == nullptr && this->invoiceTypeDesc_ == nullptr
        && this->machineCode_ == nullptr && this->ofdOssUrl_ == nullptr && this->ossUrl_ == nullptr && this->passwordArea_ == nullptr && this->pdfOssUrl_ == nullptr
        && this->purchaserBankAccountInfo_ == nullptr && this->purchaserContactInfo_ == nullptr && this->purchaserName_ == nullptr && this->purchaserTaxNo_ == nullptr && this->recipient_ == nullptr
        && this->remarks_ == nullptr && this->reviewer_ == nullptr && this->sellerBankAccountInfo_ == nullptr && this->sellerContactInfo_ == nullptr && this->sellerName_ == nullptr
        && this->sellerTaxNo_ == nullptr && this->smartCheckCode_ == nullptr && this->taxAmount_ == nullptr && this->taxRate_ == nullptr && this->totalAmountInWords_ == nullptr
        && this->xmlOssUrl_ == nullptr; };
        // amountWithTax Field Functions 
        bool hasAmountWithTax() const { return this->amountWithTax_ != nullptr;};
        void deleteAmountWithTax() { this->amountWithTax_ = nullptr;};
        inline string getAmountWithTax() const { DARABONBA_PTR_GET_DEFAULT(amountWithTax_, "") };
        inline Items& setAmountWithTax(string amountWithTax) { DARABONBA_PTR_SET_VALUE(amountWithTax_, amountWithTax) };


        // amountWithoutTax Field Functions 
        bool hasAmountWithoutTax() const { return this->amountWithoutTax_ != nullptr;};
        void deleteAmountWithoutTax() { this->amountWithoutTax_ = nullptr;};
        inline string getAmountWithoutTax() const { DARABONBA_PTR_GET_DEFAULT(amountWithoutTax_, "") };
        inline Items& setAmountWithoutTax(string amountWithoutTax) { DARABONBA_PTR_SET_VALUE(amountWithoutTax_, amountWithoutTax) };


        // billDate Field Functions 
        bool hasBillDate() const { return this->billDate_ != nullptr;};
        void deleteBillDate() { this->billDate_ = nullptr;};
        inline string getBillDate() const { DARABONBA_PTR_GET_DEFAULT(billDate_, "") };
        inline Items& setBillDate(string billDate) { DARABONBA_PTR_SET_VALUE(billDate_, billDate) };


        // changed Field Functions 
        bool hasChanged() const { return this->changed_ != nullptr;};
        void deleteChanged() { this->changed_ = nullptr;};
        inline bool getChanged() const { DARABONBA_PTR_GET_DEFAULT(changed_, false) };
        inline Items& setChanged(bool changed) { DARABONBA_PTR_SET_VALUE(changed_, changed) };


        // checkCode Field Functions 
        bool hasCheckCode() const { return this->checkCode_ != nullptr;};
        void deleteCheckCode() { this->checkCode_ = nullptr;};
        inline string getCheckCode() const { DARABONBA_PTR_GET_DEFAULT(checkCode_, "") };
        inline Items& setCheckCode(string checkCode) { DARABONBA_PTR_SET_VALUE(checkCode_, checkCode) };


        // drawer Field Functions 
        bool hasDrawer() const { return this->drawer_ != nullptr;};
        void deleteDrawer() { this->drawer_ = nullptr;};
        inline string getDrawer() const { DARABONBA_PTR_GET_DEFAULT(drawer_, "") };
        inline Items& setDrawer(string drawer) { DARABONBA_PTR_SET_VALUE(drawer_, drawer) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Items& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // invoiceCode Field Functions 
        bool hasInvoiceCode() const { return this->invoiceCode_ != nullptr;};
        void deleteInvoiceCode() { this->invoiceCode_ = nullptr;};
        inline string getInvoiceCode() const { DARABONBA_PTR_GET_DEFAULT(invoiceCode_, "") };
        inline Items& setInvoiceCode(string invoiceCode) { DARABONBA_PTR_SET_VALUE(invoiceCode_, invoiceCode) };


        // invoiceDay Field Functions 
        bool hasInvoiceDay() const { return this->invoiceDay_ != nullptr;};
        void deleteInvoiceDay() { this->invoiceDay_ = nullptr;};
        inline string getInvoiceDay() const { DARABONBA_PTR_GET_DEFAULT(invoiceDay_, "") };
        inline Items& setInvoiceDay(string invoiceDay) { DARABONBA_PTR_SET_VALUE(invoiceDay_, invoiceDay) };


        // invoiceDetail Field Functions 
        bool hasInvoiceDetail() const { return this->invoiceDetail_ != nullptr;};
        void deleteInvoiceDetail() { this->invoiceDetail_ = nullptr;};
        inline string getInvoiceDetail() const { DARABONBA_PTR_GET_DEFAULT(invoiceDetail_, "") };
        inline Items& setInvoiceDetail(string invoiceDetail) { DARABONBA_PTR_SET_VALUE(invoiceDetail_, invoiceDetail) };


        // invoiceDetails Field Functions 
        bool hasInvoiceDetails() const { return this->invoiceDetails_ != nullptr;};
        void deleteInvoiceDetails() { this->invoiceDetails_ = nullptr;};
        inline const vector<Items::InvoiceDetails> & getInvoiceDetails() const { DARABONBA_PTR_GET_CONST(invoiceDetails_, vector<Items::InvoiceDetails>) };
        inline vector<Items::InvoiceDetails> getInvoiceDetails() { DARABONBA_PTR_GET(invoiceDetails_, vector<Items::InvoiceDetails>) };
        inline Items& setInvoiceDetails(const vector<Items::InvoiceDetails> & invoiceDetails) { DARABONBA_PTR_SET_VALUE(invoiceDetails_, invoiceDetails) };
        inline Items& setInvoiceDetails(vector<Items::InvoiceDetails> && invoiceDetails) { DARABONBA_PTR_SET_RVALUE(invoiceDetails_, invoiceDetails) };


        // invoiceLocation Field Functions 
        bool hasInvoiceLocation() const { return this->invoiceLocation_ != nullptr;};
        void deleteInvoiceLocation() { this->invoiceLocation_ = nullptr;};
        inline string getInvoiceLocation() const { DARABONBA_PTR_GET_DEFAULT(invoiceLocation_, "") };
        inline Items& setInvoiceLocation(string invoiceLocation) { DARABONBA_PTR_SET_VALUE(invoiceLocation_, invoiceLocation) };


        // invoiceNo Field Functions 
        bool hasInvoiceNo() const { return this->invoiceNo_ != nullptr;};
        void deleteInvoiceNo() { this->invoiceNo_ = nullptr;};
        inline string getInvoiceNo() const { DARABONBA_PTR_GET_DEFAULT(invoiceNo_, "") };
        inline Items& setInvoiceNo(string invoiceNo) { DARABONBA_PTR_SET_VALUE(invoiceNo_, invoiceNo) };


        // invoiceSubTaskId Field Functions 
        bool hasInvoiceSubTaskId() const { return this->invoiceSubTaskId_ != nullptr;};
        void deleteInvoiceSubTaskId() { this->invoiceSubTaskId_ = nullptr;};
        inline int64_t getInvoiceSubTaskId() const { DARABONBA_PTR_GET_DEFAULT(invoiceSubTaskId_, 0L) };
        inline Items& setInvoiceSubTaskId(int64_t invoiceSubTaskId) { DARABONBA_PTR_SET_VALUE(invoiceSubTaskId_, invoiceSubTaskId) };


        // invoiceType Field Functions 
        bool hasInvoiceType() const { return this->invoiceType_ != nullptr;};
        void deleteInvoiceType() { this->invoiceType_ = nullptr;};
        inline int32_t getInvoiceType() const { DARABONBA_PTR_GET_DEFAULT(invoiceType_, 0) };
        inline Items& setInvoiceType(int32_t invoiceType) { DARABONBA_PTR_SET_VALUE(invoiceType_, invoiceType) };


        // invoiceTypeDesc Field Functions 
        bool hasInvoiceTypeDesc() const { return this->invoiceTypeDesc_ != nullptr;};
        void deleteInvoiceTypeDesc() { this->invoiceTypeDesc_ = nullptr;};
        inline string getInvoiceTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(invoiceTypeDesc_, "") };
        inline Items& setInvoiceTypeDesc(string invoiceTypeDesc) { DARABONBA_PTR_SET_VALUE(invoiceTypeDesc_, invoiceTypeDesc) };


        // machineCode Field Functions 
        bool hasMachineCode() const { return this->machineCode_ != nullptr;};
        void deleteMachineCode() { this->machineCode_ = nullptr;};
        inline string getMachineCode() const { DARABONBA_PTR_GET_DEFAULT(machineCode_, "") };
        inline Items& setMachineCode(string machineCode) { DARABONBA_PTR_SET_VALUE(machineCode_, machineCode) };


        // ofdOssUrl Field Functions 
        bool hasOfdOssUrl() const { return this->ofdOssUrl_ != nullptr;};
        void deleteOfdOssUrl() { this->ofdOssUrl_ = nullptr;};
        inline string getOfdOssUrl() const { DARABONBA_PTR_GET_DEFAULT(ofdOssUrl_, "") };
        inline Items& setOfdOssUrl(string ofdOssUrl) { DARABONBA_PTR_SET_VALUE(ofdOssUrl_, ofdOssUrl) };


        // ossUrl Field Functions 
        bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
        void deleteOssUrl() { this->ossUrl_ = nullptr;};
        inline string getOssUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
        inline Items& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


        // passwordArea Field Functions 
        bool hasPasswordArea() const { return this->passwordArea_ != nullptr;};
        void deletePasswordArea() { this->passwordArea_ = nullptr;};
        inline string getPasswordArea() const { DARABONBA_PTR_GET_DEFAULT(passwordArea_, "") };
        inline Items& setPasswordArea(string passwordArea) { DARABONBA_PTR_SET_VALUE(passwordArea_, passwordArea) };


        // pdfOssUrl Field Functions 
        bool hasPdfOssUrl() const { return this->pdfOssUrl_ != nullptr;};
        void deletePdfOssUrl() { this->pdfOssUrl_ = nullptr;};
        inline string getPdfOssUrl() const { DARABONBA_PTR_GET_DEFAULT(pdfOssUrl_, "") };
        inline Items& setPdfOssUrl(string pdfOssUrl) { DARABONBA_PTR_SET_VALUE(pdfOssUrl_, pdfOssUrl) };


        // purchaserBankAccountInfo Field Functions 
        bool hasPurchaserBankAccountInfo() const { return this->purchaserBankAccountInfo_ != nullptr;};
        void deletePurchaserBankAccountInfo() { this->purchaserBankAccountInfo_ = nullptr;};
        inline string getPurchaserBankAccountInfo() const { DARABONBA_PTR_GET_DEFAULT(purchaserBankAccountInfo_, "") };
        inline Items& setPurchaserBankAccountInfo(string purchaserBankAccountInfo) { DARABONBA_PTR_SET_VALUE(purchaserBankAccountInfo_, purchaserBankAccountInfo) };


        // purchaserContactInfo Field Functions 
        bool hasPurchaserContactInfo() const { return this->purchaserContactInfo_ != nullptr;};
        void deletePurchaserContactInfo() { this->purchaserContactInfo_ = nullptr;};
        inline string getPurchaserContactInfo() const { DARABONBA_PTR_GET_DEFAULT(purchaserContactInfo_, "") };
        inline Items& setPurchaserContactInfo(string purchaserContactInfo) { DARABONBA_PTR_SET_VALUE(purchaserContactInfo_, purchaserContactInfo) };


        // purchaserName Field Functions 
        bool hasPurchaserName() const { return this->purchaserName_ != nullptr;};
        void deletePurchaserName() { this->purchaserName_ = nullptr;};
        inline string getPurchaserName() const { DARABONBA_PTR_GET_DEFAULT(purchaserName_, "") };
        inline Items& setPurchaserName(string purchaserName) { DARABONBA_PTR_SET_VALUE(purchaserName_, purchaserName) };


        // purchaserTaxNo Field Functions 
        bool hasPurchaserTaxNo() const { return this->purchaserTaxNo_ != nullptr;};
        void deletePurchaserTaxNo() { this->purchaserTaxNo_ = nullptr;};
        inline string getPurchaserTaxNo() const { DARABONBA_PTR_GET_DEFAULT(purchaserTaxNo_, "") };
        inline Items& setPurchaserTaxNo(string purchaserTaxNo) { DARABONBA_PTR_SET_VALUE(purchaserTaxNo_, purchaserTaxNo) };


        // recipient Field Functions 
        bool hasRecipient() const { return this->recipient_ != nullptr;};
        void deleteRecipient() { this->recipient_ = nullptr;};
        inline string getRecipient() const { DARABONBA_PTR_GET_DEFAULT(recipient_, "") };
        inline Items& setRecipient(string recipient) { DARABONBA_PTR_SET_VALUE(recipient_, recipient) };


        // remarks Field Functions 
        bool hasRemarks() const { return this->remarks_ != nullptr;};
        void deleteRemarks() { this->remarks_ = nullptr;};
        inline string getRemarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
        inline Items& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


        // reviewer Field Functions 
        bool hasReviewer() const { return this->reviewer_ != nullptr;};
        void deleteReviewer() { this->reviewer_ = nullptr;};
        inline string getReviewer() const { DARABONBA_PTR_GET_DEFAULT(reviewer_, "") };
        inline Items& setReviewer(string reviewer) { DARABONBA_PTR_SET_VALUE(reviewer_, reviewer) };


        // sellerBankAccountInfo Field Functions 
        bool hasSellerBankAccountInfo() const { return this->sellerBankAccountInfo_ != nullptr;};
        void deleteSellerBankAccountInfo() { this->sellerBankAccountInfo_ = nullptr;};
        inline string getSellerBankAccountInfo() const { DARABONBA_PTR_GET_DEFAULT(sellerBankAccountInfo_, "") };
        inline Items& setSellerBankAccountInfo(string sellerBankAccountInfo) { DARABONBA_PTR_SET_VALUE(sellerBankAccountInfo_, sellerBankAccountInfo) };


        // sellerContactInfo Field Functions 
        bool hasSellerContactInfo() const { return this->sellerContactInfo_ != nullptr;};
        void deleteSellerContactInfo() { this->sellerContactInfo_ = nullptr;};
        inline string getSellerContactInfo() const { DARABONBA_PTR_GET_DEFAULT(sellerContactInfo_, "") };
        inline Items& setSellerContactInfo(string sellerContactInfo) { DARABONBA_PTR_SET_VALUE(sellerContactInfo_, sellerContactInfo) };


        // sellerName Field Functions 
        bool hasSellerName() const { return this->sellerName_ != nullptr;};
        void deleteSellerName() { this->sellerName_ = nullptr;};
        inline string getSellerName() const { DARABONBA_PTR_GET_DEFAULT(sellerName_, "") };
        inline Items& setSellerName(string sellerName) { DARABONBA_PTR_SET_VALUE(sellerName_, sellerName) };


        // sellerTaxNo Field Functions 
        bool hasSellerTaxNo() const { return this->sellerTaxNo_ != nullptr;};
        void deleteSellerTaxNo() { this->sellerTaxNo_ = nullptr;};
        inline string getSellerTaxNo() const { DARABONBA_PTR_GET_DEFAULT(sellerTaxNo_, "") };
        inline Items& setSellerTaxNo(string sellerTaxNo) { DARABONBA_PTR_SET_VALUE(sellerTaxNo_, sellerTaxNo) };


        // smartCheckCode Field Functions 
        bool hasSmartCheckCode() const { return this->smartCheckCode_ != nullptr;};
        void deleteSmartCheckCode() { this->smartCheckCode_ = nullptr;};
        inline string getSmartCheckCode() const { DARABONBA_PTR_GET_DEFAULT(smartCheckCode_, "") };
        inline Items& setSmartCheckCode(string smartCheckCode) { DARABONBA_PTR_SET_VALUE(smartCheckCode_, smartCheckCode) };


        // taxAmount Field Functions 
        bool hasTaxAmount() const { return this->taxAmount_ != nullptr;};
        void deleteTaxAmount() { this->taxAmount_ = nullptr;};
        inline string getTaxAmount() const { DARABONBA_PTR_GET_DEFAULT(taxAmount_, "") };
        inline Items& setTaxAmount(string taxAmount) { DARABONBA_PTR_SET_VALUE(taxAmount_, taxAmount) };


        // taxRate Field Functions 
        bool hasTaxRate() const { return this->taxRate_ != nullptr;};
        void deleteTaxRate() { this->taxRate_ = nullptr;};
        inline string getTaxRate() const { DARABONBA_PTR_GET_DEFAULT(taxRate_, "") };
        inline Items& setTaxRate(string taxRate) { DARABONBA_PTR_SET_VALUE(taxRate_, taxRate) };


        // totalAmountInWords Field Functions 
        bool hasTotalAmountInWords() const { return this->totalAmountInWords_ != nullptr;};
        void deleteTotalAmountInWords() { this->totalAmountInWords_ = nullptr;};
        inline string getTotalAmountInWords() const { DARABONBA_PTR_GET_DEFAULT(totalAmountInWords_, "") };
        inline Items& setTotalAmountInWords(string totalAmountInWords) { DARABONBA_PTR_SET_VALUE(totalAmountInWords_, totalAmountInWords) };


        // xmlOssUrl Field Functions 
        bool hasXmlOssUrl() const { return this->xmlOssUrl_ != nullptr;};
        void deleteXmlOssUrl() { this->xmlOssUrl_ = nullptr;};
        inline string getXmlOssUrl() const { DARABONBA_PTR_GET_DEFAULT(xmlOssUrl_, "") };
        inline Items& setXmlOssUrl(string xmlOssUrl) { DARABONBA_PTR_SET_VALUE(xmlOssUrl_, xmlOssUrl) };


      protected:
        // The tax-inclusive amount.
        shared_ptr<string> amountWithTax_ {};
        // The tax-exclusive amount.
        shared_ptr<string> amountWithoutTax_ {};
        // The billing date.
        shared_ptr<string> billDate_ {};
        // Indicates whether the invoice has been reissued. Valid values:
        // - true: Reissued.
        // - false: Not reissued.
        shared_ptr<bool> changed_ {};
        // The verification code.
        shared_ptr<string> checkCode_ {};
        // The invoice issuer.
        shared_ptr<string> drawer_ {};
        // The primary key ID.
        shared_ptr<string> id_ {};
        // The invoice code.
        shared_ptr<string> invoiceCode_ {};
        // The invoice date.
        shared_ptr<string> invoiceDay_ {};
        // The invoice details.
        shared_ptr<string> invoiceDetail_ {};
        // The invoice line items.
        shared_ptr<vector<Items::InvoiceDetails>> invoiceDetails_ {};
        // The invoice region.
        shared_ptr<string> invoiceLocation_ {};
        // The invoice number.
        shared_ptr<string> invoiceNo_ {};
        // The invoice subtask ID.
        shared_ptr<int64_t> invoiceSubTaskId_ {};
        // The invoice type.
        shared_ptr<int32_t> invoiceType_ {};
        // The invoice type description.
        shared_ptr<string> invoiceTypeDesc_ {};
        // The machine code.
        shared_ptr<string> machineCode_ {};
        // The URL for the VAT invoice file in OFD format. This URL is available only for digitalized electronic invoicing and electronic general VAT invoices.
        shared_ptr<string> ofdOssUrl_ {};
        // The URL for the VAT invoice file in image format.
        shared_ptr<string> ossUrl_ {};
        // The password area.
        shared_ptr<string> passwordArea_ {};
        // The URL for the VAT invoice file in PDF format. This URL is available only for digitalized electronic invoicing and electronic general VAT invoices.
        shared_ptr<string> pdfOssUrl_ {};
        // The purchaser bank account information.
        shared_ptr<string> purchaserBankAccountInfo_ {};
        // The purchaser contact information.
        shared_ptr<string> purchaserContactInfo_ {};
        // The purchaser name.
        shared_ptr<string> purchaserName_ {};
        // The purchaser tax number.
        shared_ptr<string> purchaserTaxNo_ {};
        // The payee.
        shared_ptr<string> recipient_ {};
        // The remarks.
        shared_ptr<string> remarks_ {};
        // The reviewer.
        shared_ptr<string> reviewer_ {};
        // The seller bank account information.
        shared_ptr<string> sellerBankAccountInfo_ {};
        // The seller contact information.
        shared_ptr<string> sellerContactInfo_ {};
        // The seller name.
        shared_ptr<string> sellerName_ {};
        // The seller tax number.
        shared_ptr<string> sellerTaxNo_ {};
        // The abbreviated verification code.
        shared_ptr<string> smartCheckCode_ {};
        // The tax amount.
        shared_ptr<string> taxAmount_ {};
        // The tax rate.
        shared_ptr<string> taxRate_ {};
        // The total amount in words.
        shared_ptr<string> totalAmountInWords_ {};
        // The URL for the VAT invoice file in XML format. This URL is available only for digitalized electronic invoicing.
        shared_ptr<string> xmlOssUrl_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->totalPage_ == nullptr && this->totalSize_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Module::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Module::Items>) };
      inline vector<Module::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Module::Items>) };
      inline Module& setItems(const vector<Module::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Module& setItems(vector<Module::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline Module& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Module& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalPage Field Functions 
      bool hasTotalPage() const { return this->totalPage_ != nullptr;};
      void deleteTotalPage() { this->totalPage_ = nullptr;};
      inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
      inline Module& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Module& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The paginated results.
      shared_ptr<vector<Module::Items>> items_ {};
      // The page number of this request.
      shared_ptr<int32_t> pageNo_ {};
      // The page size of this request.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of pages.
      shared_ptr<int32_t> totalPage_ {};
      // The total number of entries.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline VatInvoiceScanQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VatInvoiceScanQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const VatInvoiceScanQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, VatInvoiceScanQueryResponseBody::Module) };
    inline VatInvoiceScanQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, VatInvoiceScanQueryResponseBody::Module) };
    inline VatInvoiceScanQueryResponseBody& setModule(const VatInvoiceScanQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline VatInvoiceScanQueryResponseBody& setModule(VatInvoiceScanQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VatInvoiceScanQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline VatInvoiceScanQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline VatInvoiceScanQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The response data. This parameter is returned by the server. An empty value is returned if no result is found or an exception occurs.
    shared_ptr<VatInvoiceScanQueryResponseBody::Module> module_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // traceId
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
