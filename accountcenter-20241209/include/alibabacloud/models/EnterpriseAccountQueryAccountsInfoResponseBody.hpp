// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTQUERYACCOUNTSINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTQUERYACCOUNTSINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseAccountQueryAccountsInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseAccountQueryAccountsInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountInfoDtoList, accountInfoDtoList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseAccountQueryAccountsInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountInfoDtoList, accountInfoDtoList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    EnterpriseAccountQueryAccountsInfoResponseBody() = default ;
    EnterpriseAccountQueryAccountsInfoResponseBody(const EnterpriseAccountQueryAccountsInfoResponseBody &) = default ;
    EnterpriseAccountQueryAccountsInfoResponseBody(EnterpriseAccountQueryAccountsInfoResponseBody &&) = default ;
    EnterpriseAccountQueryAccountsInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseAccountQueryAccountsInfoResponseBody() = default ;
    EnterpriseAccountQueryAccountsInfoResponseBody& operator=(const EnterpriseAccountQueryAccountsInfoResponseBody &) = default ;
    EnterpriseAccountQueryAccountsInfoResponseBody& operator=(EnterpriseAccountQueryAccountsInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccountInfoDtoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccountInfoDtoList& obj) { 
        DARABONBA_PTR_TO_JSON(Alias, alias_);
        DARABONBA_PTR_TO_JSON(BelongToMasterAccount, belongToMasterAccount_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(EnterpriseEcId, enterpriseEcId_);
        DARABONBA_PTR_TO_JSON(EnterpriseEntityId, enterpriseEntityId_);
        DARABONBA_PTR_TO_JSON(EnterpriseLicenseNo, enterpriseLicenseNo_);
        DARABONBA_PTR_TO_JSON(EnterpriseName, enterpriseName_);
        DARABONBA_PTR_TO_JSON(EnterpriseNbId, enterpriseNbId_);
        DARABONBA_PTR_TO_JSON(FreezeLogin, freezeLogin_);
        DARABONBA_PTR_TO_JSON(LoginId, loginId_);
        DARABONBA_PTR_TO_JSON(ManageInviteTimeStamp, manageInviteTimeStamp_);
        DARABONBA_PTR_TO_JSON(Pk, pk_);
        DARABONBA_PTR_TO_JSON(SecurityMobile, securityMobile_);
      };
      friend void from_json(const Darabonba::Json& j, AccountInfoDtoList& obj) { 
        DARABONBA_PTR_FROM_JSON(Alias, alias_);
        DARABONBA_PTR_FROM_JSON(BelongToMasterAccount, belongToMasterAccount_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(EnterpriseEcId, enterpriseEcId_);
        DARABONBA_PTR_FROM_JSON(EnterpriseEntityId, enterpriseEntityId_);
        DARABONBA_PTR_FROM_JSON(EnterpriseLicenseNo, enterpriseLicenseNo_);
        DARABONBA_PTR_FROM_JSON(EnterpriseName, enterpriseName_);
        DARABONBA_PTR_FROM_JSON(EnterpriseNbId, enterpriseNbId_);
        DARABONBA_PTR_FROM_JSON(FreezeLogin, freezeLogin_);
        DARABONBA_PTR_FROM_JSON(LoginId, loginId_);
        DARABONBA_PTR_FROM_JSON(ManageInviteTimeStamp, manageInviteTimeStamp_);
        DARABONBA_PTR_FROM_JSON(Pk, pk_);
        DARABONBA_PTR_FROM_JSON(SecurityMobile, securityMobile_);
      };
      AccountInfoDtoList() = default ;
      AccountInfoDtoList(const AccountInfoDtoList &) = default ;
      AccountInfoDtoList(AccountInfoDtoList &&) = default ;
      AccountInfoDtoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccountInfoDtoList() = default ;
      AccountInfoDtoList& operator=(const AccountInfoDtoList &) = default ;
      AccountInfoDtoList& operator=(AccountInfoDtoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alias_ == nullptr
        && this->belongToMasterAccount_ == nullptr && this->email_ == nullptr && this->enterpriseEcId_ == nullptr && this->enterpriseEntityId_ == nullptr && this->enterpriseLicenseNo_ == nullptr
        && this->enterpriseName_ == nullptr && this->enterpriseNbId_ == nullptr && this->freezeLogin_ == nullptr && this->loginId_ == nullptr && this->manageInviteTimeStamp_ == nullptr
        && this->pk_ == nullptr && this->securityMobile_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline AccountInfoDtoList& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // belongToMasterAccount Field Functions 
      bool hasBelongToMasterAccount() const { return this->belongToMasterAccount_ != nullptr;};
      void deleteBelongToMasterAccount() { this->belongToMasterAccount_ = nullptr;};
      inline bool getBelongToMasterAccount() const { DARABONBA_PTR_GET_DEFAULT(belongToMasterAccount_, false) };
      inline AccountInfoDtoList& setBelongToMasterAccount(bool belongToMasterAccount) { DARABONBA_PTR_SET_VALUE(belongToMasterAccount_, belongToMasterAccount) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline AccountInfoDtoList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // enterpriseEcId Field Functions 
      bool hasEnterpriseEcId() const { return this->enterpriseEcId_ != nullptr;};
      void deleteEnterpriseEcId() { this->enterpriseEcId_ = nullptr;};
      inline string getEnterpriseEcId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseEcId_, "") };
      inline AccountInfoDtoList& setEnterpriseEcId(string enterpriseEcId) { DARABONBA_PTR_SET_VALUE(enterpriseEcId_, enterpriseEcId) };


      // enterpriseEntityId Field Functions 
      bool hasEnterpriseEntityId() const { return this->enterpriseEntityId_ != nullptr;};
      void deleteEnterpriseEntityId() { this->enterpriseEntityId_ = nullptr;};
      inline string getEnterpriseEntityId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseEntityId_, "") };
      inline AccountInfoDtoList& setEnterpriseEntityId(string enterpriseEntityId) { DARABONBA_PTR_SET_VALUE(enterpriseEntityId_, enterpriseEntityId) };


      // enterpriseLicenseNo Field Functions 
      bool hasEnterpriseLicenseNo() const { return this->enterpriseLicenseNo_ != nullptr;};
      void deleteEnterpriseLicenseNo() { this->enterpriseLicenseNo_ = nullptr;};
      inline string getEnterpriseLicenseNo() const { DARABONBA_PTR_GET_DEFAULT(enterpriseLicenseNo_, "") };
      inline AccountInfoDtoList& setEnterpriseLicenseNo(string enterpriseLicenseNo) { DARABONBA_PTR_SET_VALUE(enterpriseLicenseNo_, enterpriseLicenseNo) };


      // enterpriseName Field Functions 
      bool hasEnterpriseName() const { return this->enterpriseName_ != nullptr;};
      void deleteEnterpriseName() { this->enterpriseName_ = nullptr;};
      inline string getEnterpriseName() const { DARABONBA_PTR_GET_DEFAULT(enterpriseName_, "") };
      inline AccountInfoDtoList& setEnterpriseName(string enterpriseName) { DARABONBA_PTR_SET_VALUE(enterpriseName_, enterpriseName) };


      // enterpriseNbId Field Functions 
      bool hasEnterpriseNbId() const { return this->enterpriseNbId_ != nullptr;};
      void deleteEnterpriseNbId() { this->enterpriseNbId_ = nullptr;};
      inline string getEnterpriseNbId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseNbId_, "") };
      inline AccountInfoDtoList& setEnterpriseNbId(string enterpriseNbId) { DARABONBA_PTR_SET_VALUE(enterpriseNbId_, enterpriseNbId) };


      // freezeLogin Field Functions 
      bool hasFreezeLogin() const { return this->freezeLogin_ != nullptr;};
      void deleteFreezeLogin() { this->freezeLogin_ = nullptr;};
      inline bool getFreezeLogin() const { DARABONBA_PTR_GET_DEFAULT(freezeLogin_, false) };
      inline AccountInfoDtoList& setFreezeLogin(bool freezeLogin) { DARABONBA_PTR_SET_VALUE(freezeLogin_, freezeLogin) };


      // loginId Field Functions 
      bool hasLoginId() const { return this->loginId_ != nullptr;};
      void deleteLoginId() { this->loginId_ = nullptr;};
      inline string getLoginId() const { DARABONBA_PTR_GET_DEFAULT(loginId_, "") };
      inline AccountInfoDtoList& setLoginId(string loginId) { DARABONBA_PTR_SET_VALUE(loginId_, loginId) };


      // manageInviteTimeStamp Field Functions 
      bool hasManageInviteTimeStamp() const { return this->manageInviteTimeStamp_ != nullptr;};
      void deleteManageInviteTimeStamp() { this->manageInviteTimeStamp_ = nullptr;};
      inline string getManageInviteTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(manageInviteTimeStamp_, "") };
      inline AccountInfoDtoList& setManageInviteTimeStamp(string manageInviteTimeStamp) { DARABONBA_PTR_SET_VALUE(manageInviteTimeStamp_, manageInviteTimeStamp) };


      // pk Field Functions 
      bool hasPk() const { return this->pk_ != nullptr;};
      void deletePk() { this->pk_ = nullptr;};
      inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
      inline AccountInfoDtoList& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


      // securityMobile Field Functions 
      bool hasSecurityMobile() const { return this->securityMobile_ != nullptr;};
      void deleteSecurityMobile() { this->securityMobile_ = nullptr;};
      inline string getSecurityMobile() const { DARABONBA_PTR_GET_DEFAULT(securityMobile_, "") };
      inline AccountInfoDtoList& setSecurityMobile(string securityMobile) { DARABONBA_PTR_SET_VALUE(securityMobile_, securityMobile) };


    protected:
      shared_ptr<string> alias_ {};
      shared_ptr<bool> belongToMasterAccount_ {};
      shared_ptr<string> email_ {};
      shared_ptr<string> enterpriseEcId_ {};
      shared_ptr<string> enterpriseEntityId_ {};
      shared_ptr<string> enterpriseLicenseNo_ {};
      shared_ptr<string> enterpriseName_ {};
      shared_ptr<string> enterpriseNbId_ {};
      shared_ptr<bool> freezeLogin_ {};
      shared_ptr<string> loginId_ {};
      shared_ptr<string> manageInviteTimeStamp_ {};
      shared_ptr<string> pk_ {};
      shared_ptr<string> securityMobile_ {};
    };

    virtual bool empty() const override { return this->accountInfoDtoList_ == nullptr
        && this->code_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // accountInfoDtoList Field Functions 
    bool hasAccountInfoDtoList() const { return this->accountInfoDtoList_ != nullptr;};
    void deleteAccountInfoDtoList() { this->accountInfoDtoList_ = nullptr;};
    inline const vector<EnterpriseAccountQueryAccountsInfoResponseBody::AccountInfoDtoList> & getAccountInfoDtoList() const { DARABONBA_PTR_GET_CONST(accountInfoDtoList_, vector<EnterpriseAccountQueryAccountsInfoResponseBody::AccountInfoDtoList>) };
    inline vector<EnterpriseAccountQueryAccountsInfoResponseBody::AccountInfoDtoList> getAccountInfoDtoList() { DARABONBA_PTR_GET(accountInfoDtoList_, vector<EnterpriseAccountQueryAccountsInfoResponseBody::AccountInfoDtoList>) };
    inline EnterpriseAccountQueryAccountsInfoResponseBody& setAccountInfoDtoList(const vector<EnterpriseAccountQueryAccountsInfoResponseBody::AccountInfoDtoList> & accountInfoDtoList) { DARABONBA_PTR_SET_VALUE(accountInfoDtoList_, accountInfoDtoList) };
    inline EnterpriseAccountQueryAccountsInfoResponseBody& setAccountInfoDtoList(vector<EnterpriseAccountQueryAccountsInfoResponseBody::AccountInfoDtoList> && accountInfoDtoList) { DARABONBA_PTR_SET_RVALUE(accountInfoDtoList_, accountInfoDtoList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EnterpriseAccountQueryAccountsInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline EnterpriseAccountQueryAccountsInfoResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EnterpriseAccountQueryAccountsInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline EnterpriseAccountQueryAccountsInfoResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnterpriseAccountQueryAccountsInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EnterpriseAccountQueryAccountsInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<EnterpriseAccountQueryAccountsInfoResponseBody::AccountInfoDtoList>> accountInfoDtoList_ {};
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
