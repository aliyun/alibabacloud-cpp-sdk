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
      // The name of the distribution customer.
      // - If the distribution customer is an enterprise, this is the company name.
      // - If the distribution customer is a T2 Reseller partner, this is the partner name.
      shared_ptr<string> accountNickname_ {};
      // The total budget quota that the partner allocates to the distribution customer.
      shared_ptr<string> creditLine_ {};
      // The reason for applying for a cross-region association.
      shared_ptr<string> crossScopeRemark_ {};
      // The customer account manager. The value can be up to 50 characters in length.
      shared_ptr<string> customerBd_ {};
      // The email address to which the invitation email is sent.
      shared_ptr<string> emailAddress_ {};
      // The initial order placement status. Valid values:
      // 
      // - ban: Purchase is prohibited. After the customer is registered and associated, the customer cannot place orders to purchase cloud resources immediately. You must set the order control to Normal before the customer can place orders.
      // - normal: Normal. After the customer is registered and associated, the customer can place orders to purchase cloud resources immediately.
      shared_ptr<string> newBuyStatus_ {};
      // The country or region of the invited T2 Reseller. The value must comply with the ISO 3166-1 alpha-2 code. You can call the ListCountries operation to query the contract coverage area list of the current UID.
      // 
      // The system automatically determines whether the invitation is cross-region based on whether this parameter falls within the T1 contract coverage area.
      // 
      // - If the invitation is cross-region, a cross-region invitation approval process is initiated. After the approval is granted, an invitation registration email is sent to the specified email address.
      // - If the invitation is not cross-region, an invitation registration email is sent directly.
      shared_ptr<string> registerNation_ {};
      // The description of the distribution customer.
      shared_ptr<string> remark_ {};
      // This parameter is deprecated. You do not need to specify this parameter.
      shared_ptr<string> subAccountType_ {};
      // The shutdown policy that the partner sets for the distribution customer.
      // 
      // - 1: delayStop. The account uses the delayed shutdown quota for deferred instance shutdown. Alibaba Cloud takes over the resources. When the delayed shutdown quota is exhausted, instance shutdown is triggered. If the payment is not made within 15 days, storage resources are released.
      // - 2: noStop. Manual management with no shutdown on overdue payment. The system does not manage the resource lifecycle of the non-trusteeship linked account. The partner must manually manage the instance shutdown status of the customer.
      // - 3: immediatelyStop. Immediate shutdown on overdue payment. When the active quota of the customer account is less than 0, the account enters the overdue payment status and instance shutdown is triggered.
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
    // The list of account information for the invitation. A maximum of five accounts can be specified at a time.
    shared_ptr<vector<InviteSubResellerRequest::AccountInfoList>> accountInfoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
