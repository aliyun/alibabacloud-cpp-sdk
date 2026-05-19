// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVITESUBRESELLERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVITESUBRESELLERREQUEST_HPP_
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
  class InviteSubResellerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InviteSubResellerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountInfoList, accountInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, InviteSubResellerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountInfoList, accountInfoList_);
    };
    InviteSubResellerRequest() = default ;
    InviteSubResellerRequest(const InviteSubResellerRequest &) = default ;
    InviteSubResellerRequest(InviteSubResellerRequest &&) = default ;
    InviteSubResellerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InviteSubResellerRequest() = default ;
    InviteSubResellerRequest& operator=(const InviteSubResellerRequest &) = default ;
    InviteSubResellerRequest& operator=(InviteSubResellerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccountInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccountInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(AccountNickname, accountNickname_);
        DARABONBA_PTR_TO_JSON(CreditLine, creditLine_);
        DARABONBA_PTR_TO_JSON(CrossScopeRemark, crossScopeRemark_);
        DARABONBA_PTR_TO_JSON(CustomerBd, customerBd_);
        DARABONBA_PTR_TO_JSON(EmailAddress, emailAddress_);
        DARABONBA_PTR_TO_JSON(NewBuyStatus, newBuyStatus_);
        DARABONBA_PTR_TO_JSON(RegisterNation, registerNation_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(SubAccountType, subAccountType_);
        DARABONBA_PTR_TO_JSON(ZeroCreditShutdownPolicy, zeroCreditShutdownPolicy_);
      };
      friend void from_json(const Darabonba::Json& j, AccountInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountNickname, accountNickname_);
        DARABONBA_PTR_FROM_JSON(CreditLine, creditLine_);
        DARABONBA_PTR_FROM_JSON(CrossScopeRemark, crossScopeRemark_);
        DARABONBA_PTR_FROM_JSON(CustomerBd, customerBd_);
        DARABONBA_PTR_FROM_JSON(EmailAddress, emailAddress_);
        DARABONBA_PTR_FROM_JSON(NewBuyStatus, newBuyStatus_);
        DARABONBA_PTR_FROM_JSON(RegisterNation, registerNation_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(SubAccountType, subAccountType_);
        DARABONBA_PTR_FROM_JSON(ZeroCreditShutdownPolicy, zeroCreditShutdownPolicy_);
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
      virtual bool empty() const override { return this->accountNickname_ == nullptr
        && this->creditLine_ == nullptr && this->crossScopeRemark_ == nullptr && this->customerBd_ == nullptr && this->emailAddress_ == nullptr && this->newBuyStatus_ == nullptr
        && this->registerNation_ == nullptr && this->remark_ == nullptr && this->subAccountType_ == nullptr && this->zeroCreditShutdownPolicy_ == nullptr; };
      // accountNickname Field Functions 
      bool hasAccountNickname() const { return this->accountNickname_ != nullptr;};
      void deleteAccountNickname() { this->accountNickname_ = nullptr;};
      inline string getAccountNickname() const { DARABONBA_PTR_GET_DEFAULT(accountNickname_, "") };
      inline AccountInfoList& setAccountNickname(string accountNickname) { DARABONBA_PTR_SET_VALUE(accountNickname_, accountNickname) };


      // creditLine Field Functions 
      bool hasCreditLine() const { return this->creditLine_ != nullptr;};
      void deleteCreditLine() { this->creditLine_ = nullptr;};
      inline string getCreditLine() const { DARABONBA_PTR_GET_DEFAULT(creditLine_, "") };
      inline AccountInfoList& setCreditLine(string creditLine) { DARABONBA_PTR_SET_VALUE(creditLine_, creditLine) };


      // crossScopeRemark Field Functions 
      bool hasCrossScopeRemark() const { return this->crossScopeRemark_ != nullptr;};
      void deleteCrossScopeRemark() { this->crossScopeRemark_ = nullptr;};
      inline string getCrossScopeRemark() const { DARABONBA_PTR_GET_DEFAULT(crossScopeRemark_, "") };
      inline AccountInfoList& setCrossScopeRemark(string crossScopeRemark) { DARABONBA_PTR_SET_VALUE(crossScopeRemark_, crossScopeRemark) };


      // customerBd Field Functions 
      bool hasCustomerBd() const { return this->customerBd_ != nullptr;};
      void deleteCustomerBd() { this->customerBd_ = nullptr;};
      inline string getCustomerBd() const { DARABONBA_PTR_GET_DEFAULT(customerBd_, "") };
      inline AccountInfoList& setCustomerBd(string customerBd) { DARABONBA_PTR_SET_VALUE(customerBd_, customerBd) };


      // emailAddress Field Functions 
      bool hasEmailAddress() const { return this->emailAddress_ != nullptr;};
      void deleteEmailAddress() { this->emailAddress_ = nullptr;};
      inline string getEmailAddress() const { DARABONBA_PTR_GET_DEFAULT(emailAddress_, "") };
      inline AccountInfoList& setEmailAddress(string emailAddress) { DARABONBA_PTR_SET_VALUE(emailAddress_, emailAddress) };


      // newBuyStatus Field Functions 
      bool hasNewBuyStatus() const { return this->newBuyStatus_ != nullptr;};
      void deleteNewBuyStatus() { this->newBuyStatus_ = nullptr;};
      inline string getNewBuyStatus() const { DARABONBA_PTR_GET_DEFAULT(newBuyStatus_, "") };
      inline AccountInfoList& setNewBuyStatus(string newBuyStatus) { DARABONBA_PTR_SET_VALUE(newBuyStatus_, newBuyStatus) };


      // registerNation Field Functions 
      bool hasRegisterNation() const { return this->registerNation_ != nullptr;};
      void deleteRegisterNation() { this->registerNation_ = nullptr;};
      inline string getRegisterNation() const { DARABONBA_PTR_GET_DEFAULT(registerNation_, "") };
      inline AccountInfoList& setRegisterNation(string registerNation) { DARABONBA_PTR_SET_VALUE(registerNation_, registerNation) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline AccountInfoList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // subAccountType Field Functions 
      bool hasSubAccountType() const { return this->subAccountType_ != nullptr;};
      void deleteSubAccountType() { this->subAccountType_ = nullptr;};
      inline string getSubAccountType() const { DARABONBA_PTR_GET_DEFAULT(subAccountType_, "") };
      inline AccountInfoList& setSubAccountType(string subAccountType) { DARABONBA_PTR_SET_VALUE(subAccountType_, subAccountType) };


      // zeroCreditShutdownPolicy Field Functions 
      bool hasZeroCreditShutdownPolicy() const { return this->zeroCreditShutdownPolicy_ != nullptr;};
      void deleteZeroCreditShutdownPolicy() { this->zeroCreditShutdownPolicy_ = nullptr;};
      inline string getZeroCreditShutdownPolicy() const { DARABONBA_PTR_GET_DEFAULT(zeroCreditShutdownPolicy_, "") };
      inline AccountInfoList& setZeroCreditShutdownPolicy(string zeroCreditShutdownPolicy) { DARABONBA_PTR_SET_VALUE(zeroCreditShutdownPolicy_, zeroCreditShutdownPolicy) };


    protected:
      // Name of the distribution customer:
      // - If the distribution customer is a company, this is the company name.
      // - If the distribution customer is a T2 reseller partner, this is the partner name.
      shared_ptr<string> accountNickname_ {};
      // Total budget quota allocated by the partner to the distribution customer (quota).
      shared_ptr<string> creditLine_ {};
      // Reason for applying for cross-regional association.
      shared_ptr<string> crossScopeRemark_ {};
      // Customer Business Manager (limited to 50 characters).
      shared_ptr<string> customerBd_ {};
      // The email address to which the invitation email will be sent.
      shared_ptr<string> emailAddress_ {};
      // Initial order status:
      // 
      // - ban: Purchase Ban - The customer cannot place orders immediately after successful registration and association. The \\"Order Control\\" must be set to \\"Normal\\" before placing orders.
      // - normal: Normal - The customer can place orders immediately after successful registration and association.
      shared_ptr<string> newBuyStatus_ {};
      // Country or region of the invited T2 Reseller. The parameter should comply with the ISO 3166-1 two-letter code (Alpha-2). You can use the ListCountries API to get the current UID contract coverage area list.
      // 
      // The system will automatically determine if the invitation is cross-regional based on whether the `registerNation` parameter is within the T1 contract coverage area:
      // 
      // - If it\\"s a cross-regional invitation, a cross-regional approval process will be initiated. After approval by Alibaba Cloud, an invitation registration email will be sent to the invited email address.
      // - If it\\"s not a cross-regional invitation, an invitation registration email will be sent directly.
      shared_ptr<string> registerNation_ {};
      // Description of the distribution customer.
      shared_ptr<string> remark_ {};
      // Do not fill in, deprecated parameter.
      shared_ptr<string> subAccountType_ {};
      // Management of the shutdown policy for the distribution customer by the partner.
      // 
      // - 1: delayStop - Enjoy delayed shutdown with a grace period: Alibaba Cloud takes over the resources, and when the grace period quota is exhausted, the instance will be shut down. If payment is not made within 15 days, the storage resources will be released.
      // - 2: noStop - Manual management of overdue without stopping: The system does not manage the lifecycle of the sub-account\\"s resources. The partner needs to manually manage the shutdown status of the customer\\"s instances.
      // - 3: immediatelyStop - Immediate shutdown upon overdue: When the available quota of the customer\\"s account is less than 0, the account enters an overdue state, triggering the shutdown of the instance.
      shared_ptr<string> zeroCreditShutdownPolicy_ {};
    };

    virtual bool empty() const override { return this->accountInfoList_ == nullptr; };
    // accountInfoList Field Functions 
    bool hasAccountInfoList() const { return this->accountInfoList_ != nullptr;};
    void deleteAccountInfoList() { this->accountInfoList_ = nullptr;};
    inline const vector<InviteSubResellerRequest::AccountInfoList> & getAccountInfoList() const { DARABONBA_PTR_GET_CONST(accountInfoList_, vector<InviteSubResellerRequest::AccountInfoList>) };
    inline vector<InviteSubResellerRequest::AccountInfoList> getAccountInfoList() { DARABONBA_PTR_GET(accountInfoList_, vector<InviteSubResellerRequest::AccountInfoList>) };
    inline InviteSubResellerRequest& setAccountInfoList(const vector<InviteSubResellerRequest::AccountInfoList> & accountInfoList) { DARABONBA_PTR_SET_VALUE(accountInfoList_, accountInfoList) };
    inline InviteSubResellerRequest& setAccountInfoList(vector<InviteSubResellerRequest::AccountInfoList> && accountInfoList) { DARABONBA_PTR_SET_RVALUE(accountInfoList_, accountInfoList) };


  protected:
    // List of invited account information, up to 5 at a time.
    shared_ptr<vector<InviteSubResellerRequest::AccountInfoList>> accountInfoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
