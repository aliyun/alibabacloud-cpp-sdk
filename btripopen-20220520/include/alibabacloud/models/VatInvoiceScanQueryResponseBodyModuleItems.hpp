// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VATINVOICESCANQUERYRESPONSEBODYMODULEITEMS_HPP_
#define ALIBABACLOUD_MODELS_VATINVOICESCANQUERYRESPONSEBODYMODULEITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class VatInvoiceScanQueryResponseBodyModuleItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VatInvoiceScanQueryResponseBodyModuleItems& obj) { 
      DARABONBA_PTR_TO_JSON(amount_with_tax, amountWithTax_);
      DARABONBA_PTR_TO_JSON(amount_without_tax, amountWithoutTax_);
      DARABONBA_PTR_TO_JSON(bill_date, billDate_);
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
    friend void from_json(const Darabonba::Json& j, VatInvoiceScanQueryResponseBodyModuleItems& obj) { 
      DARABONBA_PTR_FROM_JSON(amount_with_tax, amountWithTax_);
      DARABONBA_PTR_FROM_JSON(amount_without_tax, amountWithoutTax_);
      DARABONBA_PTR_FROM_JSON(bill_date, billDate_);
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
    VatInvoiceScanQueryResponseBodyModuleItems() = default ;
    VatInvoiceScanQueryResponseBodyModuleItems(const VatInvoiceScanQueryResponseBodyModuleItems &) = default ;
    VatInvoiceScanQueryResponseBodyModuleItems(VatInvoiceScanQueryResponseBodyModuleItems &&) = default ;
    VatInvoiceScanQueryResponseBodyModuleItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VatInvoiceScanQueryResponseBodyModuleItems() = default ;
    VatInvoiceScanQueryResponseBodyModuleItems& operator=(const VatInvoiceScanQueryResponseBodyModuleItems &) = default ;
    VatInvoiceScanQueryResponseBodyModuleItems& operator=(VatInvoiceScanQueryResponseBodyModuleItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amountWithTax_ != nullptr
        && this->amountWithoutTax_ != nullptr && this->billDate_ != nullptr && this->checkCode_ != nullptr && this->drawer_ != nullptr && this->id_ != nullptr
        && this->invoiceCode_ != nullptr && this->invoiceDay_ != nullptr && this->invoiceDetail_ != nullptr && this->invoiceDetails_ != nullptr && this->invoiceLocation_ != nullptr
        && this->invoiceNo_ != nullptr && this->invoiceSubTaskId_ != nullptr && this->invoiceType_ != nullptr && this->invoiceTypeDesc_ != nullptr && this->machineCode_ != nullptr
        && this->ofdOssUrl_ != nullptr && this->ossUrl_ != nullptr && this->passwordArea_ != nullptr && this->pdfOssUrl_ != nullptr && this->purchaserBankAccountInfo_ != nullptr
        && this->purchaserContactInfo_ != nullptr && this->purchaserName_ != nullptr && this->purchaserTaxNo_ != nullptr && this->recipient_ != nullptr && this->remarks_ != nullptr
        && this->reviewer_ != nullptr && this->sellerBankAccountInfo_ != nullptr && this->sellerContactInfo_ != nullptr && this->sellerName_ != nullptr && this->sellerTaxNo_ != nullptr
        && this->smartCheckCode_ != nullptr && this->taxAmount_ != nullptr && this->taxRate_ != nullptr && this->totalAmountInWords_ != nullptr && this->xmlOssUrl_ != nullptr; };
    // amountWithTax Field Functions 
    bool hasAmountWithTax() const { return this->amountWithTax_ != nullptr;};
    void deleteAmountWithTax() { this->amountWithTax_ = nullptr;};
    inline string amountWithTax() const { DARABONBA_PTR_GET_DEFAULT(amountWithTax_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setAmountWithTax(string amountWithTax) { DARABONBA_PTR_SET_VALUE(amountWithTax_, amountWithTax) };


    // amountWithoutTax Field Functions 
    bool hasAmountWithoutTax() const { return this->amountWithoutTax_ != nullptr;};
    void deleteAmountWithoutTax() { this->amountWithoutTax_ = nullptr;};
    inline string amountWithoutTax() const { DARABONBA_PTR_GET_DEFAULT(amountWithoutTax_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setAmountWithoutTax(string amountWithoutTax) { DARABONBA_PTR_SET_VALUE(amountWithoutTax_, amountWithoutTax) };


    // billDate Field Functions 
    bool hasBillDate() const { return this->billDate_ != nullptr;};
    void deleteBillDate() { this->billDate_ = nullptr;};
    inline string billDate() const { DARABONBA_PTR_GET_DEFAULT(billDate_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setBillDate(string billDate) { DARABONBA_PTR_SET_VALUE(billDate_, billDate) };


    // checkCode Field Functions 
    bool hasCheckCode() const { return this->checkCode_ != nullptr;};
    void deleteCheckCode() { this->checkCode_ = nullptr;};
    inline string checkCode() const { DARABONBA_PTR_GET_DEFAULT(checkCode_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setCheckCode(string checkCode) { DARABONBA_PTR_SET_VALUE(checkCode_, checkCode) };


    // drawer Field Functions 
    bool hasDrawer() const { return this->drawer_ != nullptr;};
    void deleteDrawer() { this->drawer_ = nullptr;};
    inline string drawer() const { DARABONBA_PTR_GET_DEFAULT(drawer_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setDrawer(string drawer) { DARABONBA_PTR_SET_VALUE(drawer_, drawer) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // invoiceCode Field Functions 
    bool hasInvoiceCode() const { return this->invoiceCode_ != nullptr;};
    void deleteInvoiceCode() { this->invoiceCode_ = nullptr;};
    inline string invoiceCode() const { DARABONBA_PTR_GET_DEFAULT(invoiceCode_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setInvoiceCode(string invoiceCode) { DARABONBA_PTR_SET_VALUE(invoiceCode_, invoiceCode) };


    // invoiceDay Field Functions 
    bool hasInvoiceDay() const { return this->invoiceDay_ != nullptr;};
    void deleteInvoiceDay() { this->invoiceDay_ = nullptr;};
    inline string invoiceDay() const { DARABONBA_PTR_GET_DEFAULT(invoiceDay_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setInvoiceDay(string invoiceDay) { DARABONBA_PTR_SET_VALUE(invoiceDay_, invoiceDay) };


    // invoiceDetail Field Functions 
    bool hasInvoiceDetail() const { return this->invoiceDetail_ != nullptr;};
    void deleteInvoiceDetail() { this->invoiceDetail_ = nullptr;};
    inline string invoiceDetail() const { DARABONBA_PTR_GET_DEFAULT(invoiceDetail_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setInvoiceDetail(string invoiceDetail) { DARABONBA_PTR_SET_VALUE(invoiceDetail_, invoiceDetail) };


    // invoiceDetails Field Functions 
    bool hasInvoiceDetails() const { return this->invoiceDetails_ != nullptr;};
    void deleteInvoiceDetails() { this->invoiceDetails_ = nullptr;};
    inline const vector<Models::VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails> & invoiceDetails() const { DARABONBA_PTR_GET_CONST(invoiceDetails_, vector<Models::VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails>) };
    inline vector<Models::VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails> invoiceDetails() { DARABONBA_PTR_GET(invoiceDetails_, vector<Models::VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails>) };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setInvoiceDetails(const vector<Models::VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails> & invoiceDetails) { DARABONBA_PTR_SET_VALUE(invoiceDetails_, invoiceDetails) };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setInvoiceDetails(vector<Models::VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails> && invoiceDetails) { DARABONBA_PTR_SET_RVALUE(invoiceDetails_, invoiceDetails) };


    // invoiceLocation Field Functions 
    bool hasInvoiceLocation() const { return this->invoiceLocation_ != nullptr;};
    void deleteInvoiceLocation() { this->invoiceLocation_ = nullptr;};
    inline string invoiceLocation() const { DARABONBA_PTR_GET_DEFAULT(invoiceLocation_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setInvoiceLocation(string invoiceLocation) { DARABONBA_PTR_SET_VALUE(invoiceLocation_, invoiceLocation) };


    // invoiceNo Field Functions 
    bool hasInvoiceNo() const { return this->invoiceNo_ != nullptr;};
    void deleteInvoiceNo() { this->invoiceNo_ = nullptr;};
    inline string invoiceNo() const { DARABONBA_PTR_GET_DEFAULT(invoiceNo_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setInvoiceNo(string invoiceNo) { DARABONBA_PTR_SET_VALUE(invoiceNo_, invoiceNo) };


    // invoiceSubTaskId Field Functions 
    bool hasInvoiceSubTaskId() const { return this->invoiceSubTaskId_ != nullptr;};
    void deleteInvoiceSubTaskId() { this->invoiceSubTaskId_ = nullptr;};
    inline int64_t invoiceSubTaskId() const { DARABONBA_PTR_GET_DEFAULT(invoiceSubTaskId_, 0L) };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setInvoiceSubTaskId(int64_t invoiceSubTaskId) { DARABONBA_PTR_SET_VALUE(invoiceSubTaskId_, invoiceSubTaskId) };


    // invoiceType Field Functions 
    bool hasInvoiceType() const { return this->invoiceType_ != nullptr;};
    void deleteInvoiceType() { this->invoiceType_ = nullptr;};
    inline int32_t invoiceType() const { DARABONBA_PTR_GET_DEFAULT(invoiceType_, 0) };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setInvoiceType(int32_t invoiceType) { DARABONBA_PTR_SET_VALUE(invoiceType_, invoiceType) };


    // invoiceTypeDesc Field Functions 
    bool hasInvoiceTypeDesc() const { return this->invoiceTypeDesc_ != nullptr;};
    void deleteInvoiceTypeDesc() { this->invoiceTypeDesc_ = nullptr;};
    inline string invoiceTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(invoiceTypeDesc_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setInvoiceTypeDesc(string invoiceTypeDesc) { DARABONBA_PTR_SET_VALUE(invoiceTypeDesc_, invoiceTypeDesc) };


    // machineCode Field Functions 
    bool hasMachineCode() const { return this->machineCode_ != nullptr;};
    void deleteMachineCode() { this->machineCode_ = nullptr;};
    inline string machineCode() const { DARABONBA_PTR_GET_DEFAULT(machineCode_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setMachineCode(string machineCode) { DARABONBA_PTR_SET_VALUE(machineCode_, machineCode) };


    // ofdOssUrl Field Functions 
    bool hasOfdOssUrl() const { return this->ofdOssUrl_ != nullptr;};
    void deleteOfdOssUrl() { this->ofdOssUrl_ = nullptr;};
    inline string ofdOssUrl() const { DARABONBA_PTR_GET_DEFAULT(ofdOssUrl_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setOfdOssUrl(string ofdOssUrl) { DARABONBA_PTR_SET_VALUE(ofdOssUrl_, ofdOssUrl) };


    // ossUrl Field Functions 
    bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
    void deleteOssUrl() { this->ossUrl_ = nullptr;};
    inline string ossUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


    // passwordArea Field Functions 
    bool hasPasswordArea() const { return this->passwordArea_ != nullptr;};
    void deletePasswordArea() { this->passwordArea_ = nullptr;};
    inline string passwordArea() const { DARABONBA_PTR_GET_DEFAULT(passwordArea_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setPasswordArea(string passwordArea) { DARABONBA_PTR_SET_VALUE(passwordArea_, passwordArea) };


    // pdfOssUrl Field Functions 
    bool hasPdfOssUrl() const { return this->pdfOssUrl_ != nullptr;};
    void deletePdfOssUrl() { this->pdfOssUrl_ = nullptr;};
    inline string pdfOssUrl() const { DARABONBA_PTR_GET_DEFAULT(pdfOssUrl_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setPdfOssUrl(string pdfOssUrl) { DARABONBA_PTR_SET_VALUE(pdfOssUrl_, pdfOssUrl) };


    // purchaserBankAccountInfo Field Functions 
    bool hasPurchaserBankAccountInfo() const { return this->purchaserBankAccountInfo_ != nullptr;};
    void deletePurchaserBankAccountInfo() { this->purchaserBankAccountInfo_ = nullptr;};
    inline string purchaserBankAccountInfo() const { DARABONBA_PTR_GET_DEFAULT(purchaserBankAccountInfo_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setPurchaserBankAccountInfo(string purchaserBankAccountInfo) { DARABONBA_PTR_SET_VALUE(purchaserBankAccountInfo_, purchaserBankAccountInfo) };


    // purchaserContactInfo Field Functions 
    bool hasPurchaserContactInfo() const { return this->purchaserContactInfo_ != nullptr;};
    void deletePurchaserContactInfo() { this->purchaserContactInfo_ = nullptr;};
    inline string purchaserContactInfo() const { DARABONBA_PTR_GET_DEFAULT(purchaserContactInfo_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setPurchaserContactInfo(string purchaserContactInfo) { DARABONBA_PTR_SET_VALUE(purchaserContactInfo_, purchaserContactInfo) };


    // purchaserName Field Functions 
    bool hasPurchaserName() const { return this->purchaserName_ != nullptr;};
    void deletePurchaserName() { this->purchaserName_ = nullptr;};
    inline string purchaserName() const { DARABONBA_PTR_GET_DEFAULT(purchaserName_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setPurchaserName(string purchaserName) { DARABONBA_PTR_SET_VALUE(purchaserName_, purchaserName) };


    // purchaserTaxNo Field Functions 
    bool hasPurchaserTaxNo() const { return this->purchaserTaxNo_ != nullptr;};
    void deletePurchaserTaxNo() { this->purchaserTaxNo_ = nullptr;};
    inline string purchaserTaxNo() const { DARABONBA_PTR_GET_DEFAULT(purchaserTaxNo_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setPurchaserTaxNo(string purchaserTaxNo) { DARABONBA_PTR_SET_VALUE(purchaserTaxNo_, purchaserTaxNo) };


    // recipient Field Functions 
    bool hasRecipient() const { return this->recipient_ != nullptr;};
    void deleteRecipient() { this->recipient_ = nullptr;};
    inline string recipient() const { DARABONBA_PTR_GET_DEFAULT(recipient_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setRecipient(string recipient) { DARABONBA_PTR_SET_VALUE(recipient_, recipient) };


    // remarks Field Functions 
    bool hasRemarks() const { return this->remarks_ != nullptr;};
    void deleteRemarks() { this->remarks_ = nullptr;};
    inline string remarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


    // reviewer Field Functions 
    bool hasReviewer() const { return this->reviewer_ != nullptr;};
    void deleteReviewer() { this->reviewer_ = nullptr;};
    inline string reviewer() const { DARABONBA_PTR_GET_DEFAULT(reviewer_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setReviewer(string reviewer) { DARABONBA_PTR_SET_VALUE(reviewer_, reviewer) };


    // sellerBankAccountInfo Field Functions 
    bool hasSellerBankAccountInfo() const { return this->sellerBankAccountInfo_ != nullptr;};
    void deleteSellerBankAccountInfo() { this->sellerBankAccountInfo_ = nullptr;};
    inline string sellerBankAccountInfo() const { DARABONBA_PTR_GET_DEFAULT(sellerBankAccountInfo_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setSellerBankAccountInfo(string sellerBankAccountInfo) { DARABONBA_PTR_SET_VALUE(sellerBankAccountInfo_, sellerBankAccountInfo) };


    // sellerContactInfo Field Functions 
    bool hasSellerContactInfo() const { return this->sellerContactInfo_ != nullptr;};
    void deleteSellerContactInfo() { this->sellerContactInfo_ = nullptr;};
    inline string sellerContactInfo() const { DARABONBA_PTR_GET_DEFAULT(sellerContactInfo_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setSellerContactInfo(string sellerContactInfo) { DARABONBA_PTR_SET_VALUE(sellerContactInfo_, sellerContactInfo) };


    // sellerName Field Functions 
    bool hasSellerName() const { return this->sellerName_ != nullptr;};
    void deleteSellerName() { this->sellerName_ = nullptr;};
    inline string sellerName() const { DARABONBA_PTR_GET_DEFAULT(sellerName_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setSellerName(string sellerName) { DARABONBA_PTR_SET_VALUE(sellerName_, sellerName) };


    // sellerTaxNo Field Functions 
    bool hasSellerTaxNo() const { return this->sellerTaxNo_ != nullptr;};
    void deleteSellerTaxNo() { this->sellerTaxNo_ = nullptr;};
    inline string sellerTaxNo() const { DARABONBA_PTR_GET_DEFAULT(sellerTaxNo_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setSellerTaxNo(string sellerTaxNo) { DARABONBA_PTR_SET_VALUE(sellerTaxNo_, sellerTaxNo) };


    // smartCheckCode Field Functions 
    bool hasSmartCheckCode() const { return this->smartCheckCode_ != nullptr;};
    void deleteSmartCheckCode() { this->smartCheckCode_ = nullptr;};
    inline string smartCheckCode() const { DARABONBA_PTR_GET_DEFAULT(smartCheckCode_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setSmartCheckCode(string smartCheckCode) { DARABONBA_PTR_SET_VALUE(smartCheckCode_, smartCheckCode) };


    // taxAmount Field Functions 
    bool hasTaxAmount() const { return this->taxAmount_ != nullptr;};
    void deleteTaxAmount() { this->taxAmount_ = nullptr;};
    inline string taxAmount() const { DARABONBA_PTR_GET_DEFAULT(taxAmount_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setTaxAmount(string taxAmount) { DARABONBA_PTR_SET_VALUE(taxAmount_, taxAmount) };


    // taxRate Field Functions 
    bool hasTaxRate() const { return this->taxRate_ != nullptr;};
    void deleteTaxRate() { this->taxRate_ = nullptr;};
    inline string taxRate() const { DARABONBA_PTR_GET_DEFAULT(taxRate_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setTaxRate(string taxRate) { DARABONBA_PTR_SET_VALUE(taxRate_, taxRate) };


    // totalAmountInWords Field Functions 
    bool hasTotalAmountInWords() const { return this->totalAmountInWords_ != nullptr;};
    void deleteTotalAmountInWords() { this->totalAmountInWords_ = nullptr;};
    inline string totalAmountInWords() const { DARABONBA_PTR_GET_DEFAULT(totalAmountInWords_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setTotalAmountInWords(string totalAmountInWords) { DARABONBA_PTR_SET_VALUE(totalAmountInWords_, totalAmountInWords) };


    // xmlOssUrl Field Functions 
    bool hasXmlOssUrl() const { return this->xmlOssUrl_ != nullptr;};
    void deleteXmlOssUrl() { this->xmlOssUrl_ = nullptr;};
    inline string xmlOssUrl() const { DARABONBA_PTR_GET_DEFAULT(xmlOssUrl_, "") };
    inline VatInvoiceScanQueryResponseBodyModuleItems& setXmlOssUrl(string xmlOssUrl) { DARABONBA_PTR_SET_VALUE(xmlOssUrl_, xmlOssUrl) };


  protected:
    std::shared_ptr<string> amountWithTax_ = nullptr;
    std::shared_ptr<string> amountWithoutTax_ = nullptr;
    std::shared_ptr<string> billDate_ = nullptr;
    std::shared_ptr<string> checkCode_ = nullptr;
    std::shared_ptr<string> drawer_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> invoiceCode_ = nullptr;
    std::shared_ptr<string> invoiceDay_ = nullptr;
    std::shared_ptr<string> invoiceDetail_ = nullptr;
    std::shared_ptr<vector<Models::VatInvoiceScanQueryResponseBodyModuleItemsInvoiceDetails>> invoiceDetails_ = nullptr;
    std::shared_ptr<string> invoiceLocation_ = nullptr;
    std::shared_ptr<string> invoiceNo_ = nullptr;
    std::shared_ptr<int64_t> invoiceSubTaskId_ = nullptr;
    std::shared_ptr<int32_t> invoiceType_ = nullptr;
    std::shared_ptr<string> invoiceTypeDesc_ = nullptr;
    // 机器码
    std::shared_ptr<string> machineCode_ = nullptr;
    std::shared_ptr<string> ofdOssUrl_ = nullptr;
    std::shared_ptr<string> ossUrl_ = nullptr;
    std::shared_ptr<string> passwordArea_ = nullptr;
    std::shared_ptr<string> pdfOssUrl_ = nullptr;
    std::shared_ptr<string> purchaserBankAccountInfo_ = nullptr;
    std::shared_ptr<string> purchaserContactInfo_ = nullptr;
    std::shared_ptr<string> purchaserName_ = nullptr;
    std::shared_ptr<string> purchaserTaxNo_ = nullptr;
    std::shared_ptr<string> recipient_ = nullptr;
    std::shared_ptr<string> remarks_ = nullptr;
    std::shared_ptr<string> reviewer_ = nullptr;
    std::shared_ptr<string> sellerBankAccountInfo_ = nullptr;
    std::shared_ptr<string> sellerContactInfo_ = nullptr;
    std::shared_ptr<string> sellerName_ = nullptr;
    std::shared_ptr<string> sellerTaxNo_ = nullptr;
    std::shared_ptr<string> smartCheckCode_ = nullptr;
    std::shared_ptr<string> taxAmount_ = nullptr;
    std::shared_ptr<string> taxRate_ = nullptr;
    std::shared_ptr<string> totalAmountInWords_ = nullptr;
    std::shared_ptr<string> xmlOssUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
