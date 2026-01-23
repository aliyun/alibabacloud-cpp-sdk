// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetAccountInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountInfoList, accountInfoList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountInfoList, accountInfoList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAccountInfoResponseBody() = default ;
    GetAccountInfoResponseBody(const GetAccountInfoResponseBody &) = default ;
    GetAccountInfoResponseBody(GetAccountInfoResponseBody &&) = default ;
    GetAccountInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountInfoResponseBody() = default ;
    GetAccountInfoResponseBody& operator=(const GetAccountInfoResponseBody &) = default ;
    GetAccountInfoResponseBody& operator=(GetAccountInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->page_ == nullptr
        && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline PageInfo& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline PageInfo& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // Pagination, current page.
      shared_ptr<int32_t> page_ {};
      // Pagination, record number on each page.
      shared_ptr<int32_t> pageSize_ {};
      // Pagination, page volume in total.
      shared_ptr<int32_t> total_ {};
    };

    class AccountInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccountInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(AccountInfo, accountInfo_);
      };
      friend void from_json(const Darabonba::Json& j, AccountInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountInfo, accountInfo_);
      };
      AccountInfoList() = default ;
      AccountInfoList(const AccountInfoList &) = default ;
      AccountInfoList(AccountInfoList &&) = default ;
      AccountInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccountInfoList() = default ;
      AccountInfoList& operator=(const AccountInfoList &) = default ;
      AccountInfoList& operator=(AccountInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AccountInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccountInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AccountNickname, accountNickname_);
          DARABONBA_PTR_TO_JSON(AliyunId, aliyunId_);
          DARABONBA_PTR_TO_JSON(AssociationSuccessTime, associationSuccessTime_);
          DARABONBA_PTR_TO_JSON(Cid, cid_);
          DARABONBA_PTR_TO_JSON(CustomerAccountType, customerAccountType_);
          DARABONBA_PTR_TO_JSON(CustomerBd, customerBd_);
          DARABONBA_PTR_TO_JSON(CustomerEnterpriseCertified, customerEnterpriseCertified_);
          DARABONBA_PTR_TO_JSON(DelayAmount, delayAmount_);
          DARABONBA_PTR_TO_JSON(DelayStatus, delayStatus_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(Mobile, mobile_);
          DARABONBA_PTR_TO_JSON(NewBuyStatus, newBuyStatus_);
          DARABONBA_PTR_TO_JSON(RegisterCountryCode, registerCountryCode_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(SubAccountType, subAccountType_);
          DARABONBA_PTR_TO_JSON(Uid, uid_);
        };
        friend void from_json(const Darabonba::Json& j, AccountInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountNickname, accountNickname_);
          DARABONBA_PTR_FROM_JSON(AliyunId, aliyunId_);
          DARABONBA_PTR_FROM_JSON(AssociationSuccessTime, associationSuccessTime_);
          DARABONBA_PTR_FROM_JSON(Cid, cid_);
          DARABONBA_PTR_FROM_JSON(CustomerAccountType, customerAccountType_);
          DARABONBA_PTR_FROM_JSON(CustomerBd, customerBd_);
          DARABONBA_PTR_FROM_JSON(CustomerEnterpriseCertified, customerEnterpriseCertified_);
          DARABONBA_PTR_FROM_JSON(DelayAmount, delayAmount_);
          DARABONBA_PTR_FROM_JSON(DelayStatus, delayStatus_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
          DARABONBA_PTR_FROM_JSON(NewBuyStatus, newBuyStatus_);
          DARABONBA_PTR_FROM_JSON(RegisterCountryCode, registerCountryCode_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(SubAccountType, subAccountType_);
          DARABONBA_PTR_FROM_JSON(Uid, uid_);
        };
        AccountInfo() = default ;
        AccountInfo(const AccountInfo &) = default ;
        AccountInfo(AccountInfo &&) = default ;
        AccountInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccountInfo() = default ;
        AccountInfo& operator=(const AccountInfo &) = default ;
        AccountInfo& operator=(AccountInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountNickname_ == nullptr
        && this->aliyunId_ == nullptr && this->associationSuccessTime_ == nullptr && this->cid_ == nullptr && this->customerAccountType_ == nullptr && this->customerBd_ == nullptr
        && this->customerEnterpriseCertified_ == nullptr && this->delayAmount_ == nullptr && this->delayStatus_ == nullptr && this->email_ == nullptr && this->mobile_ == nullptr
        && this->newBuyStatus_ == nullptr && this->registerCountryCode_ == nullptr && this->remark_ == nullptr && this->subAccountType_ == nullptr && this->uid_ == nullptr; };
        // accountNickname Field Functions 
        bool hasAccountNickname() const { return this->accountNickname_ != nullptr;};
        void deleteAccountNickname() { this->accountNickname_ = nullptr;};
        inline string getAccountNickname() const { DARABONBA_PTR_GET_DEFAULT(accountNickname_, "") };
        inline AccountInfo& setAccountNickname(string accountNickname) { DARABONBA_PTR_SET_VALUE(accountNickname_, accountNickname) };


        // aliyunId Field Functions 
        bool hasAliyunId() const { return this->aliyunId_ != nullptr;};
        void deleteAliyunId() { this->aliyunId_ = nullptr;};
        inline string getAliyunId() const { DARABONBA_PTR_GET_DEFAULT(aliyunId_, "") };
        inline AccountInfo& setAliyunId(string aliyunId) { DARABONBA_PTR_SET_VALUE(aliyunId_, aliyunId) };


        // associationSuccessTime Field Functions 
        bool hasAssociationSuccessTime() const { return this->associationSuccessTime_ != nullptr;};
        void deleteAssociationSuccessTime() { this->associationSuccessTime_ = nullptr;};
        inline string getAssociationSuccessTime() const { DARABONBA_PTR_GET_DEFAULT(associationSuccessTime_, "") };
        inline AccountInfo& setAssociationSuccessTime(string associationSuccessTime) { DARABONBA_PTR_SET_VALUE(associationSuccessTime_, associationSuccessTime) };


        // cid Field Functions 
        bool hasCid() const { return this->cid_ != nullptr;};
        void deleteCid() { this->cid_ = nullptr;};
        inline int64_t getCid() const { DARABONBA_PTR_GET_DEFAULT(cid_, 0L) };
        inline AccountInfo& setCid(int64_t cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


        // customerAccountType Field Functions 
        bool hasCustomerAccountType() const { return this->customerAccountType_ != nullptr;};
        void deleteCustomerAccountType() { this->customerAccountType_ = nullptr;};
        inline int32_t getCustomerAccountType() const { DARABONBA_PTR_GET_DEFAULT(customerAccountType_, 0) };
        inline AccountInfo& setCustomerAccountType(int32_t customerAccountType) { DARABONBA_PTR_SET_VALUE(customerAccountType_, customerAccountType) };


        // customerBd Field Functions 
        bool hasCustomerBd() const { return this->customerBd_ != nullptr;};
        void deleteCustomerBd() { this->customerBd_ = nullptr;};
        inline string getCustomerBd() const { DARABONBA_PTR_GET_DEFAULT(customerBd_, "") };
        inline AccountInfo& setCustomerBd(string customerBd) { DARABONBA_PTR_SET_VALUE(customerBd_, customerBd) };


        // customerEnterpriseCertified Field Functions 
        bool hasCustomerEnterpriseCertified() const { return this->customerEnterpriseCertified_ != nullptr;};
        void deleteCustomerEnterpriseCertified() { this->customerEnterpriseCertified_ = nullptr;};
        inline int32_t getCustomerEnterpriseCertified() const { DARABONBA_PTR_GET_DEFAULT(customerEnterpriseCertified_, 0) };
        inline AccountInfo& setCustomerEnterpriseCertified(int32_t customerEnterpriseCertified) { DARABONBA_PTR_SET_VALUE(customerEnterpriseCertified_, customerEnterpriseCertified) };


        // delayAmount Field Functions 
        bool hasDelayAmount() const { return this->delayAmount_ != nullptr;};
        void deleteDelayAmount() { this->delayAmount_ = nullptr;};
        inline string getDelayAmount() const { DARABONBA_PTR_GET_DEFAULT(delayAmount_, "") };
        inline AccountInfo& setDelayAmount(string delayAmount) { DARABONBA_PTR_SET_VALUE(delayAmount_, delayAmount) };


        // delayStatus Field Functions 
        bool hasDelayStatus() const { return this->delayStatus_ != nullptr;};
        void deleteDelayStatus() { this->delayStatus_ = nullptr;};
        inline string getDelayStatus() const { DARABONBA_PTR_GET_DEFAULT(delayStatus_, "") };
        inline AccountInfo& setDelayStatus(string delayStatus) { DARABONBA_PTR_SET_VALUE(delayStatus_, delayStatus) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline AccountInfo& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // mobile Field Functions 
        bool hasMobile() const { return this->mobile_ != nullptr;};
        void deleteMobile() { this->mobile_ = nullptr;};
        inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
        inline AccountInfo& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


        // newBuyStatus Field Functions 
        bool hasNewBuyStatus() const { return this->newBuyStatus_ != nullptr;};
        void deleteNewBuyStatus() { this->newBuyStatus_ = nullptr;};
        inline string getNewBuyStatus() const { DARABONBA_PTR_GET_DEFAULT(newBuyStatus_, "") };
        inline AccountInfo& setNewBuyStatus(string newBuyStatus) { DARABONBA_PTR_SET_VALUE(newBuyStatus_, newBuyStatus) };


        // registerCountryCode Field Functions 
        bool hasRegisterCountryCode() const { return this->registerCountryCode_ != nullptr;};
        void deleteRegisterCountryCode() { this->registerCountryCode_ = nullptr;};
        inline string getRegisterCountryCode() const { DARABONBA_PTR_GET_DEFAULT(registerCountryCode_, "") };
        inline AccountInfo& setRegisterCountryCode(string registerCountryCode) { DARABONBA_PTR_SET_VALUE(registerCountryCode_, registerCountryCode) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline AccountInfo& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // subAccountType Field Functions 
        bool hasSubAccountType() const { return this->subAccountType_ != nullptr;};
        void deleteSubAccountType() { this->subAccountType_ = nullptr;};
        inline int32_t getSubAccountType() const { DARABONBA_PTR_GET_DEFAULT(subAccountType_, 0) };
        inline AccountInfo& setSubAccountType(int32_t subAccountType) { DARABONBA_PTR_SET_VALUE(subAccountType_, subAccountType) };


        // uid Field Functions 
        bool hasUid() const { return this->uid_ != nullptr;};
        void deleteUid() { this->uid_ = nullptr;};
        inline int64_t getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
        inline AccountInfo& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      protected:
        // The name of Sub Account.
        // - Enterprise Customer: Name of Company
        // - T2 Reseller: Name of Partner
        shared_ptr<string> accountNickname_ {};
        // Alibaba Cloud Login name of Distribution Customer.
        shared_ptr<string> aliyunId_ {};
        // The time that Distribution Customer successfully associated with Distributor.
        shared_ptr<string> associationSuccessTime_ {};
        // Account CID of Distribution Customer.
        shared_ptr<int64_t> cid_ {};
        // Type of customer\\"s account, 0 Individual, 1 Enterprise
        shared_ptr<int32_t> customerAccountType_ {};
        // Customer\\"s Sales Manager
        shared_ptr<string> customerBd_ {};
        // Whether the customer has completed Enterprise Real-name Authentication, 0 No, 1 Yes
        shared_ptr<int32_t> customerEnterpriseCertified_ {};
        // When Shutdown Policy is delayStop, this number refer to Shutdown-delay Credit (overdraft limit).
        shared_ptr<string> delayAmount_ {};
        // There are a value for Shutdown Policy Management towards Sub Account.
        // - 1 immediatelyStop,  immediately shutdown the instance once customer\\"s quota is ran out.
        // - 2 delayStop, delay shutdown the instance until customer\\"s Shutdown-delay Credit is ran out. Please refer to DelayAmount.
        // - 3 noStop, customer\\"s instance status is rely on manual control instead of auto setting.
        shared_ptr<string> delayStatus_ {};
        // The E-mail of Distribution Customer.
        shared_ptr<string> email_ {};
        // The contact number of Distribution Customer.
        shared_ptr<string> mobile_ {};
        // Purchase Control, Value Range:
        // - Purchase Forbidden
        // - Normal (Purchase is allowed)
        shared_ptr<string> newBuyStatus_ {};
        // The Country Code where the customer\\"s account is registered.
        shared_ptr<string> registerCountryCode_ {};
        // Description of Distribution Customer.
        shared_ptr<string> remark_ {};
        // Account Type:
        // - 1 Agency\\"s End User
        // - 2 Reseller\\"s End User
        // - 3 Enterprise
        // - 4 T2 Agency Partner
        // - 5 T2 Reseller Partner
        // - 6 T2 Agency+Reseller Partner
        shared_ptr<int32_t> subAccountType_ {};
        // Account UID of Distribution Customer.
        shared_ptr<int64_t> uid_ {};
      };

      virtual bool empty() const override { return this->accountInfo_ == nullptr; };
      // accountInfo Field Functions 
      bool hasAccountInfo() const { return this->accountInfo_ != nullptr;};
      void deleteAccountInfo() { this->accountInfo_ = nullptr;};
      inline const vector<AccountInfoList::AccountInfo> & getAccountInfo() const { DARABONBA_PTR_GET_CONST(accountInfo_, vector<AccountInfoList::AccountInfo>) };
      inline vector<AccountInfoList::AccountInfo> getAccountInfo() { DARABONBA_PTR_GET(accountInfo_, vector<AccountInfoList::AccountInfo>) };
      inline AccountInfoList& setAccountInfo(const vector<AccountInfoList::AccountInfo> & accountInfo) { DARABONBA_PTR_SET_VALUE(accountInfo_, accountInfo) };
      inline AccountInfoList& setAccountInfo(vector<AccountInfoList::AccountInfo> && accountInfo) { DARABONBA_PTR_SET_RVALUE(accountInfo_, accountInfo) };


    protected:
      shared_ptr<vector<AccountInfoList::AccountInfo>> accountInfo_ {};
    };

    virtual bool empty() const override { return this->accountInfoList_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accountInfoList Field Functions 
    bool hasAccountInfoList() const { return this->accountInfoList_ != nullptr;};
    void deleteAccountInfoList() { this->accountInfoList_ = nullptr;};
    inline const GetAccountInfoResponseBody::AccountInfoList & getAccountInfoList() const { DARABONBA_PTR_GET_CONST(accountInfoList_, GetAccountInfoResponseBody::AccountInfoList) };
    inline GetAccountInfoResponseBody::AccountInfoList getAccountInfoList() { DARABONBA_PTR_GET(accountInfoList_, GetAccountInfoResponseBody::AccountInfoList) };
    inline GetAccountInfoResponseBody& setAccountInfoList(const GetAccountInfoResponseBody::AccountInfoList & accountInfoList) { DARABONBA_PTR_SET_VALUE(accountInfoList_, accountInfoList) };
    inline GetAccountInfoResponseBody& setAccountInfoList(GetAccountInfoResponseBody::AccountInfoList && accountInfoList) { DARABONBA_PTR_SET_RVALUE(accountInfoList_, accountInfoList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAccountInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAccountInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const GetAccountInfoResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, GetAccountInfoResponseBody::PageInfo) };
    inline GetAccountInfoResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, GetAccountInfoResponseBody::PageInfo) };
    inline GetAccountInfoResponseBody& setPageInfo(const GetAccountInfoResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline GetAccountInfoResponseBody& setPageInfo(GetAccountInfoResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAccountInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // List of Account Information
    shared_ptr<GetAccountInfoResponseBody::AccountInfoList> accountInfoList_ {};
    // Result Code - Error Code. Value Range:
    // - 200 OK
    // - 1109 System Error
    // - 3029: Invalid UID
    // - 3062: UID and UserType are both empty.
    // - 3063: UserType value out of range.
    shared_ptr<string> code_ {};
    // message
    shared_ptr<string> message_ {};
    // Pagination Information
    shared_ptr<GetAccountInfoResponseBody::PageInfo> pageInfo_ {};
    // Request id, a unique identifier generated by Alibaba Cloud for the request.
    shared_ptr<string> requestId_ {};
    // Candidate Value: True/False, which indicates whether the current API call itself is successful. It does not guarantee the success of subsequent business operations.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
