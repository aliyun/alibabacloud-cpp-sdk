// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINVOICINGCUSTOMERLISTRESPONSEBODYDATACUSTOMERINVOICELISTCUSTOMERINVOICE_HPP_
#define ALIBABACLOUD_MODELS_QUERYINVOICINGCUSTOMERLISTRESPONSEBODYDATACUSTOMERINVOICELISTCUSTOMERINVOICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& obj) { 
      DARABONBA_PTR_TO_JSON(AdjustType, adjustType_);
      DARABONBA_PTR_TO_JSON(Bank, bank_);
      DARABONBA_PTR_TO_JSON(BankNo, bankNo_);
      DARABONBA_PTR_TO_JSON(CustomerType, customerType_);
      DARABONBA_PTR_TO_JSON(DefaultRemark, defaultRemark_);
      DARABONBA_PTR_TO_JSON(EndCycle, endCycle_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InvoiceTitle, invoiceTitle_);
      DARABONBA_PTR_TO_JSON(IssueType, issueType_);
      DARABONBA_PTR_TO_JSON(OperatingLicenseAddress, operatingLicenseAddress_);
      DARABONBA_PTR_TO_JSON(OperatingLicensePhone, operatingLicensePhone_);
      DARABONBA_PTR_TO_JSON(RegisterNo, registerNo_);
      DARABONBA_PTR_TO_JSON(StartCycle, startCycle_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaxationLicense, taxationLicense_);
      DARABONBA_PTR_TO_JSON(TaxpayerType, taxpayerType_);
      DARABONBA_PTR_TO_JSON(TitleChangeInstructions, titleChangeInstructions_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserNick, userNick_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& obj) { 
      DARABONBA_PTR_FROM_JSON(AdjustType, adjustType_);
      DARABONBA_PTR_FROM_JSON(Bank, bank_);
      DARABONBA_PTR_FROM_JSON(BankNo, bankNo_);
      DARABONBA_PTR_FROM_JSON(CustomerType, customerType_);
      DARABONBA_PTR_FROM_JSON(DefaultRemark, defaultRemark_);
      DARABONBA_PTR_FROM_JSON(EndCycle, endCycle_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InvoiceTitle, invoiceTitle_);
      DARABONBA_PTR_FROM_JSON(IssueType, issueType_);
      DARABONBA_PTR_FROM_JSON(OperatingLicenseAddress, operatingLicenseAddress_);
      DARABONBA_PTR_FROM_JSON(OperatingLicensePhone, operatingLicensePhone_);
      DARABONBA_PTR_FROM_JSON(RegisterNo, registerNo_);
      DARABONBA_PTR_FROM_JSON(StartCycle, startCycle_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaxationLicense, taxationLicense_);
      DARABONBA_PTR_FROM_JSON(TaxpayerType, taxpayerType_);
      DARABONBA_PTR_FROM_JSON(TitleChangeInstructions, titleChangeInstructions_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserNick, userNick_);
    };
    QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice() = default ;
    QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice(const QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice &) = default ;
    QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice(QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice &&) = default ;
    QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice() = default ;
    QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& operator=(const QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice &) = default ;
    QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& operator=(QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adjustType_ != nullptr
        && this->bank_ != nullptr && this->bankNo_ != nullptr && this->customerType_ != nullptr && this->defaultRemark_ != nullptr && this->endCycle_ != nullptr
        && this->gmtCreate_ != nullptr && this->id_ != nullptr && this->invoiceTitle_ != nullptr && this->issueType_ != nullptr && this->operatingLicenseAddress_ != nullptr
        && this->operatingLicensePhone_ != nullptr && this->registerNo_ != nullptr && this->startCycle_ != nullptr && this->status_ != nullptr && this->taxationLicense_ != nullptr
        && this->taxpayerType_ != nullptr && this->titleChangeInstructions_ != nullptr && this->type_ != nullptr && this->userId_ != nullptr && this->userNick_ != nullptr; };
    // adjustType Field Functions 
    bool hasAdjustType() const { return this->adjustType_ != nullptr;};
    void deleteAdjustType() { this->adjustType_ = nullptr;};
    inline int64_t adjustType() const { DARABONBA_PTR_GET_DEFAULT(adjustType_, 0L) };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& setAdjustType(int64_t adjustType) { DARABONBA_PTR_SET_VALUE(adjustType_, adjustType) };


    // bank Field Functions 
    bool hasBank() const { return this->bank_ != nullptr;};
    void deleteBank() { this->bank_ = nullptr;};
    inline string bank() const { DARABONBA_PTR_GET_DEFAULT(bank_, "") };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& setBank(string bank) { DARABONBA_PTR_SET_VALUE(bank_, bank) };


    // bankNo Field Functions 
    bool hasBankNo() const { return this->bankNo_ != nullptr;};
    void deleteBankNo() { this->bankNo_ = nullptr;};
    inline string bankNo() const { DARABONBA_PTR_GET_DEFAULT(bankNo_, "") };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& setBankNo(string bankNo) { DARABONBA_PTR_SET_VALUE(bankNo_, bankNo) };


    // customerType Field Functions 
    bool hasCustomerType() const { return this->customerType_ != nullptr;};
    void deleteCustomerType() { this->customerType_ = nullptr;};
    inline int64_t customerType() const { DARABONBA_PTR_GET_DEFAULT(customerType_, 0L) };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& setCustomerType(int64_t customerType) { DARABONBA_PTR_SET_VALUE(customerType_, customerType) };


    // defaultRemark Field Functions 
    bool hasDefaultRemark() const { return this->defaultRemark_ != nullptr;};
    void deleteDefaultRemark() { this->defaultRemark_ = nullptr;};
    inline string defaultRemark() const { DARABONBA_PTR_GET_DEFAULT(defaultRemark_, "") };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& setDefaultRemark(string defaultRemark) { DARABONBA_PTR_SET_VALUE(defaultRemark_, defaultRemark) };


    // endCycle Field Functions 
    bool hasEndCycle() const { return this->endCycle_ != nullptr;};
    void deleteEndCycle() { this->endCycle_ = nullptr;};
    inline int64_t endCycle() const { DARABONBA_PTR_GET_DEFAULT(endCycle_, 0L) };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& setEndCycle(int64_t endCycle) { DARABONBA_PTR_SET_VALUE(endCycle_, endCycle) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // invoiceTitle Field Functions 
    bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
    void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
    inline string invoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


    // issueType Field Functions 
    bool hasIssueType() const { return this->issueType_ != nullptr;};
    void deleteIssueType() { this->issueType_ = nullptr;};
    inline int64_t issueType() const { DARABONBA_PTR_GET_DEFAULT(issueType_, 0L) };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& setIssueType(int64_t issueType) { DARABONBA_PTR_SET_VALUE(issueType_, issueType) };


    // operatingLicenseAddress Field Functions 
    bool hasOperatingLicenseAddress() const { return this->operatingLicenseAddress_ != nullptr;};
    void deleteOperatingLicenseAddress() { this->operatingLicenseAddress_ = nullptr;};
    inline string operatingLicenseAddress() const { DARABONBA_PTR_GET_DEFAULT(operatingLicenseAddress_, "") };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& setOperatingLicenseAddress(string operatingLicenseAddress) { DARABONBA_PTR_SET_VALUE(operatingLicenseAddress_, operatingLicenseAddress) };


    // operatingLicensePhone Field Functions 
    bool hasOperatingLicensePhone() const { return this->operatingLicensePhone_ != nullptr;};
    void deleteOperatingLicensePhone() { this->operatingLicensePhone_ = nullptr;};
    inline string operatingLicensePhone() const { DARABONBA_PTR_GET_DEFAULT(operatingLicensePhone_, "") };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& setOperatingLicensePhone(string operatingLicensePhone) { DARABONBA_PTR_SET_VALUE(operatingLicensePhone_, operatingLicensePhone) };


    // registerNo Field Functions 
    bool hasRegisterNo() const { return this->registerNo_ != nullptr;};
    void deleteRegisterNo() { this->registerNo_ = nullptr;};
    inline string registerNo() const { DARABONBA_PTR_GET_DEFAULT(registerNo_, "") };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& setRegisterNo(string registerNo) { DARABONBA_PTR_SET_VALUE(registerNo_, registerNo) };


    // startCycle Field Functions 
    bool hasStartCycle() const { return this->startCycle_ != nullptr;};
    void deleteStartCycle() { this->startCycle_ = nullptr;};
    inline int64_t startCycle() const { DARABONBA_PTR_GET_DEFAULT(startCycle_, 0L) };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& setStartCycle(int64_t startCycle) { DARABONBA_PTR_SET_VALUE(startCycle_, startCycle) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taxationLicense Field Functions 
    bool hasTaxationLicense() const { return this->taxationLicense_ != nullptr;};
    void deleteTaxationLicense() { this->taxationLicense_ = nullptr;};
    inline string taxationLicense() const { DARABONBA_PTR_GET_DEFAULT(taxationLicense_, "") };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& setTaxationLicense(string taxationLicense) { DARABONBA_PTR_SET_VALUE(taxationLicense_, taxationLicense) };


    // taxpayerType Field Functions 
    bool hasTaxpayerType() const { return this->taxpayerType_ != nullptr;};
    void deleteTaxpayerType() { this->taxpayerType_ = nullptr;};
    inline int64_t taxpayerType() const { DARABONBA_PTR_GET_DEFAULT(taxpayerType_, 0L) };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& setTaxpayerType(int64_t taxpayerType) { DARABONBA_PTR_SET_VALUE(taxpayerType_, taxpayerType) };


    // titleChangeInstructions Field Functions 
    bool hasTitleChangeInstructions() const { return this->titleChangeInstructions_ != nullptr;};
    void deleteTitleChangeInstructions() { this->titleChangeInstructions_ = nullptr;};
    inline string titleChangeInstructions() const { DARABONBA_PTR_GET_DEFAULT(titleChangeInstructions_, "") };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& setTitleChangeInstructions(string titleChangeInstructions) { DARABONBA_PTR_SET_VALUE(titleChangeInstructions_, titleChangeInstructions) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int64_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string userNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline QueryInvoicingCustomerListResponseBodyDataCustomerInvoiceListCustomerInvoice& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


  protected:
    // The type of invoice that was changed to.
    std::shared_ptr<int64_t> adjustType_ = nullptr;
    // The bank that issues the invoice.
    std::shared_ptr<string> bank_ = nullptr;
    // The bank account number.
    std::shared_ptr<string> bankNo_ = nullptr;
    // The authentication type of Alipay. Valid values:
    // 
    // *   1: individual
    // *   2: company
    std::shared_ptr<int64_t> customerType_ = nullptr;
    // The default note that is attached when the title is specified.
    std::shared_ptr<string> defaultRemark_ = nullptr;
    // The time when the payment ended.
    std::shared_ptr<int64_t> endCycle_ = nullptr;
    // The time when the invoice was created. The time was in the yyyy-mm-dd hh:mm:ss format.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The ID of the invoice.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The company name in the invoice title.
    std::shared_ptr<string> invoiceTitle_ = nullptr;
    // The type of issue.
    std::shared_ptr<int64_t> issueType_ = nullptr;
    // The address of the business license.
    std::shared_ptr<string> operatingLicenseAddress_ = nullptr;
    // The phone number of the business license.
    std::shared_ptr<string> operatingLicensePhone_ = nullptr;
    // The tax registration number.
    std::shared_ptr<string> registerNo_ = nullptr;
    // The time when the payment started.
    std::shared_ptr<int64_t> startCycle_ = nullptr;
    // The status of the invoice title.
    std::shared_ptr<int64_t> status_ = nullptr;
    // The path and file name of the scanned copy of the tax registration certificate.
    std::shared_ptr<string> taxationLicense_ = nullptr;
    // The type of the taxpayer. Valid values:
    // 
    // *   1: general taxpayer
    // *   2: special taxpayer
    std::shared_ptr<int64_t> taxpayerType_ = nullptr;
    // The instruction document of the invoice title change.
    std::shared_ptr<string> titleChangeInstructions_ = nullptr;
    // The type of the invoice. Valid values:
    // 
    // *   0: plain value-added tax (VAT) invoice
    // *   1: special VAT invoice
    std::shared_ptr<int64_t> type_ = nullptr;
    // The ID of the user.
    std::shared_ptr<int64_t> userId_ = nullptr;
    // The nickname of the user.
    std::shared_ptr<string> userNick_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
