// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINVOICINGCUSTOMERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYINVOICINGCUSTOMERLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryInvoicingCustomerListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInvoicingCustomerListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInvoicingCustomerListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryInvoicingCustomerListResponseBody() = default ;
    QueryInvoicingCustomerListResponseBody(const QueryInvoicingCustomerListResponseBody &) = default ;
    QueryInvoicingCustomerListResponseBody(QueryInvoicingCustomerListResponseBody &&) = default ;
    QueryInvoicingCustomerListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInvoicingCustomerListResponseBody() = default ;
    QueryInvoicingCustomerListResponseBody& operator=(const QueryInvoicingCustomerListResponseBody &) = default ;
    QueryInvoicingCustomerListResponseBody& operator=(QueryInvoicingCustomerListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CustomerInvoiceList, customerInvoiceList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomerInvoiceList, customerInvoiceList_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CustomerInvoiceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomerInvoiceList& obj) { 
          DARABONBA_PTR_TO_JSON(CustomerInvoice, customerInvoice_);
        };
        friend void from_json(const Darabonba::Json& j, CustomerInvoiceList& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomerInvoice, customerInvoice_);
        };
        CustomerInvoiceList() = default ;
        CustomerInvoiceList(const CustomerInvoiceList &) = default ;
        CustomerInvoiceList(CustomerInvoiceList &&) = default ;
        CustomerInvoiceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomerInvoiceList() = default ;
        CustomerInvoiceList& operator=(const CustomerInvoiceList &) = default ;
        CustomerInvoiceList& operator=(CustomerInvoiceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CustomerInvoice : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CustomerInvoice& obj) { 
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
          friend void from_json(const Darabonba::Json& j, CustomerInvoice& obj) { 
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
          CustomerInvoice() = default ;
          CustomerInvoice(const CustomerInvoice &) = default ;
          CustomerInvoice(CustomerInvoice &&) = default ;
          CustomerInvoice(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CustomerInvoice() = default ;
          CustomerInvoice& operator=(const CustomerInvoice &) = default ;
          CustomerInvoice& operator=(CustomerInvoice &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->adjustType_ == nullptr
        && this->bank_ == nullptr && this->bankNo_ == nullptr && this->customerType_ == nullptr && this->defaultRemark_ == nullptr && this->endCycle_ == nullptr
        && this->gmtCreate_ == nullptr && this->id_ == nullptr && this->invoiceTitle_ == nullptr && this->issueType_ == nullptr && this->operatingLicenseAddress_ == nullptr
        && this->operatingLicensePhone_ == nullptr && this->registerNo_ == nullptr && this->startCycle_ == nullptr && this->status_ == nullptr && this->taxationLicense_ == nullptr
        && this->taxpayerType_ == nullptr && this->titleChangeInstructions_ == nullptr && this->type_ == nullptr && this->userId_ == nullptr && this->userNick_ == nullptr; };
          // adjustType Field Functions 
          bool hasAdjustType() const { return this->adjustType_ != nullptr;};
          void deleteAdjustType() { this->adjustType_ = nullptr;};
          inline int64_t getAdjustType() const { DARABONBA_PTR_GET_DEFAULT(adjustType_, 0L) };
          inline CustomerInvoice& setAdjustType(int64_t adjustType) { DARABONBA_PTR_SET_VALUE(adjustType_, adjustType) };


          // bank Field Functions 
          bool hasBank() const { return this->bank_ != nullptr;};
          void deleteBank() { this->bank_ = nullptr;};
          inline string getBank() const { DARABONBA_PTR_GET_DEFAULT(bank_, "") };
          inline CustomerInvoice& setBank(string bank) { DARABONBA_PTR_SET_VALUE(bank_, bank) };


          // bankNo Field Functions 
          bool hasBankNo() const { return this->bankNo_ != nullptr;};
          void deleteBankNo() { this->bankNo_ = nullptr;};
          inline string getBankNo() const { DARABONBA_PTR_GET_DEFAULT(bankNo_, "") };
          inline CustomerInvoice& setBankNo(string bankNo) { DARABONBA_PTR_SET_VALUE(bankNo_, bankNo) };


          // customerType Field Functions 
          bool hasCustomerType() const { return this->customerType_ != nullptr;};
          void deleteCustomerType() { this->customerType_ = nullptr;};
          inline int64_t getCustomerType() const { DARABONBA_PTR_GET_DEFAULT(customerType_, 0L) };
          inline CustomerInvoice& setCustomerType(int64_t customerType) { DARABONBA_PTR_SET_VALUE(customerType_, customerType) };


          // defaultRemark Field Functions 
          bool hasDefaultRemark() const { return this->defaultRemark_ != nullptr;};
          void deleteDefaultRemark() { this->defaultRemark_ = nullptr;};
          inline string getDefaultRemark() const { DARABONBA_PTR_GET_DEFAULT(defaultRemark_, "") };
          inline CustomerInvoice& setDefaultRemark(string defaultRemark) { DARABONBA_PTR_SET_VALUE(defaultRemark_, defaultRemark) };


          // endCycle Field Functions 
          bool hasEndCycle() const { return this->endCycle_ != nullptr;};
          void deleteEndCycle() { this->endCycle_ = nullptr;};
          inline int64_t getEndCycle() const { DARABONBA_PTR_GET_DEFAULT(endCycle_, 0L) };
          inline CustomerInvoice& setEndCycle(int64_t endCycle) { DARABONBA_PTR_SET_VALUE(endCycle_, endCycle) };


          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
          inline CustomerInvoice& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline CustomerInvoice& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // invoiceTitle Field Functions 
          bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
          void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
          inline string getInvoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
          inline CustomerInvoice& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


          // issueType Field Functions 
          bool hasIssueType() const { return this->issueType_ != nullptr;};
          void deleteIssueType() { this->issueType_ = nullptr;};
          inline int64_t getIssueType() const { DARABONBA_PTR_GET_DEFAULT(issueType_, 0L) };
          inline CustomerInvoice& setIssueType(int64_t issueType) { DARABONBA_PTR_SET_VALUE(issueType_, issueType) };


          // operatingLicenseAddress Field Functions 
          bool hasOperatingLicenseAddress() const { return this->operatingLicenseAddress_ != nullptr;};
          void deleteOperatingLicenseAddress() { this->operatingLicenseAddress_ = nullptr;};
          inline string getOperatingLicenseAddress() const { DARABONBA_PTR_GET_DEFAULT(operatingLicenseAddress_, "") };
          inline CustomerInvoice& setOperatingLicenseAddress(string operatingLicenseAddress) { DARABONBA_PTR_SET_VALUE(operatingLicenseAddress_, operatingLicenseAddress) };


          // operatingLicensePhone Field Functions 
          bool hasOperatingLicensePhone() const { return this->operatingLicensePhone_ != nullptr;};
          void deleteOperatingLicensePhone() { this->operatingLicensePhone_ = nullptr;};
          inline string getOperatingLicensePhone() const { DARABONBA_PTR_GET_DEFAULT(operatingLicensePhone_, "") };
          inline CustomerInvoice& setOperatingLicensePhone(string operatingLicensePhone) { DARABONBA_PTR_SET_VALUE(operatingLicensePhone_, operatingLicensePhone) };


          // registerNo Field Functions 
          bool hasRegisterNo() const { return this->registerNo_ != nullptr;};
          void deleteRegisterNo() { this->registerNo_ = nullptr;};
          inline string getRegisterNo() const { DARABONBA_PTR_GET_DEFAULT(registerNo_, "") };
          inline CustomerInvoice& setRegisterNo(string registerNo) { DARABONBA_PTR_SET_VALUE(registerNo_, registerNo) };


          // startCycle Field Functions 
          bool hasStartCycle() const { return this->startCycle_ != nullptr;};
          void deleteStartCycle() { this->startCycle_ = nullptr;};
          inline int64_t getStartCycle() const { DARABONBA_PTR_GET_DEFAULT(startCycle_, 0L) };
          inline CustomerInvoice& setStartCycle(int64_t startCycle) { DARABONBA_PTR_SET_VALUE(startCycle_, startCycle) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
          inline CustomerInvoice& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // taxationLicense Field Functions 
          bool hasTaxationLicense() const { return this->taxationLicense_ != nullptr;};
          void deleteTaxationLicense() { this->taxationLicense_ = nullptr;};
          inline string getTaxationLicense() const { DARABONBA_PTR_GET_DEFAULT(taxationLicense_, "") };
          inline CustomerInvoice& setTaxationLicense(string taxationLicense) { DARABONBA_PTR_SET_VALUE(taxationLicense_, taxationLicense) };


          // taxpayerType Field Functions 
          bool hasTaxpayerType() const { return this->taxpayerType_ != nullptr;};
          void deleteTaxpayerType() { this->taxpayerType_ = nullptr;};
          inline int64_t getTaxpayerType() const { DARABONBA_PTR_GET_DEFAULT(taxpayerType_, 0L) };
          inline CustomerInvoice& setTaxpayerType(int64_t taxpayerType) { DARABONBA_PTR_SET_VALUE(taxpayerType_, taxpayerType) };


          // titleChangeInstructions Field Functions 
          bool hasTitleChangeInstructions() const { return this->titleChangeInstructions_ != nullptr;};
          void deleteTitleChangeInstructions() { this->titleChangeInstructions_ = nullptr;};
          inline string getTitleChangeInstructions() const { DARABONBA_PTR_GET_DEFAULT(titleChangeInstructions_, "") };
          inline CustomerInvoice& setTitleChangeInstructions(string titleChangeInstructions) { DARABONBA_PTR_SET_VALUE(titleChangeInstructions_, titleChangeInstructions) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
          inline CustomerInvoice& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
          inline CustomerInvoice& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


          // userNick Field Functions 
          bool hasUserNick() const { return this->userNick_ != nullptr;};
          void deleteUserNick() { this->userNick_ = nullptr;};
          inline string getUserNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
          inline CustomerInvoice& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


        protected:
          // The type of invoice that was changed to.
          shared_ptr<int64_t> adjustType_ {};
          // The bank that issues the invoice.
          shared_ptr<string> bank_ {};
          // The bank account number.
          shared_ptr<string> bankNo_ {};
          // The authentication type of Alipay. Valid values:
          // 
          // *   1: individual
          // *   2: company
          shared_ptr<int64_t> customerType_ {};
          // The default note that is attached when the title is specified.
          shared_ptr<string> defaultRemark_ {};
          // The time when the payment ended.
          shared_ptr<int64_t> endCycle_ {};
          // The time when the invoice was created. The time was in the yyyy-mm-dd hh:mm:ss format.
          shared_ptr<string> gmtCreate_ {};
          // The ID of the invoice.
          shared_ptr<int64_t> id_ {};
          // The company name in the invoice title.
          shared_ptr<string> invoiceTitle_ {};
          // The type of issue.
          shared_ptr<int64_t> issueType_ {};
          // The address of the business license.
          shared_ptr<string> operatingLicenseAddress_ {};
          // The phone number of the business license.
          shared_ptr<string> operatingLicensePhone_ {};
          // The tax registration number.
          shared_ptr<string> registerNo_ {};
          // The time when the payment started.
          shared_ptr<int64_t> startCycle_ {};
          // The status of the invoice title.
          shared_ptr<int64_t> status_ {};
          // The path and file name of the scanned copy of the tax registration certificate.
          shared_ptr<string> taxationLicense_ {};
          // The type of the taxpayer. Valid values:
          // 
          // *   1: general taxpayer
          // *   2: special taxpayer
          shared_ptr<int64_t> taxpayerType_ {};
          // The instruction document of the invoice title change.
          shared_ptr<string> titleChangeInstructions_ {};
          // The type of the invoice. Valid values:
          // 
          // *   0: plain value-added tax (VAT) invoice
          // *   1: special VAT invoice
          shared_ptr<int64_t> type_ {};
          // The ID of the user.
          shared_ptr<int64_t> userId_ {};
          // The nickname of the user.
          shared_ptr<string> userNick_ {};
        };

        virtual bool empty() const override { return this->customerInvoice_ == nullptr; };
        // customerInvoice Field Functions 
        bool hasCustomerInvoice() const { return this->customerInvoice_ != nullptr;};
        void deleteCustomerInvoice() { this->customerInvoice_ = nullptr;};
        inline const vector<CustomerInvoiceList::CustomerInvoice> & getCustomerInvoice() const { DARABONBA_PTR_GET_CONST(customerInvoice_, vector<CustomerInvoiceList::CustomerInvoice>) };
        inline vector<CustomerInvoiceList::CustomerInvoice> getCustomerInvoice() { DARABONBA_PTR_GET(customerInvoice_, vector<CustomerInvoiceList::CustomerInvoice>) };
        inline CustomerInvoiceList& setCustomerInvoice(const vector<CustomerInvoiceList::CustomerInvoice> & customerInvoice) { DARABONBA_PTR_SET_VALUE(customerInvoice_, customerInvoice) };
        inline CustomerInvoiceList& setCustomerInvoice(vector<CustomerInvoiceList::CustomerInvoice> && customerInvoice) { DARABONBA_PTR_SET_RVALUE(customerInvoice_, customerInvoice) };


      protected:
        shared_ptr<vector<CustomerInvoiceList::CustomerInvoice>> customerInvoice_ {};
      };

      virtual bool empty() const override { return this->customerInvoiceList_ == nullptr; };
      // customerInvoiceList Field Functions 
      bool hasCustomerInvoiceList() const { return this->customerInvoiceList_ != nullptr;};
      void deleteCustomerInvoiceList() { this->customerInvoiceList_ = nullptr;};
      inline const Data::CustomerInvoiceList & getCustomerInvoiceList() const { DARABONBA_PTR_GET_CONST(customerInvoiceList_, Data::CustomerInvoiceList) };
      inline Data::CustomerInvoiceList getCustomerInvoiceList() { DARABONBA_PTR_GET(customerInvoiceList_, Data::CustomerInvoiceList) };
      inline Data& setCustomerInvoiceList(const Data::CustomerInvoiceList & customerInvoiceList) { DARABONBA_PTR_SET_VALUE(customerInvoiceList_, customerInvoiceList) };
      inline Data& setCustomerInvoiceList(Data::CustomerInvoiceList && customerInvoiceList) { DARABONBA_PTR_SET_RVALUE(customerInvoiceList_, customerInvoiceList) };


    protected:
      // The information about the invoice.
      shared_ptr<Data::CustomerInvoiceList> customerInvoiceList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryInvoicingCustomerListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryInvoicingCustomerListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryInvoicingCustomerListResponseBody::Data) };
    inline QueryInvoicingCustomerListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryInvoicingCustomerListResponseBody::Data) };
    inline QueryInvoicingCustomerListResponseBody& setData(const QueryInvoicingCustomerListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryInvoicingCustomerListResponseBody& setData(QueryInvoicingCustomerListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryInvoicingCustomerListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryInvoicingCustomerListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryInvoicingCustomerListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<QueryInvoicingCustomerListResponseBody::Data> data_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
