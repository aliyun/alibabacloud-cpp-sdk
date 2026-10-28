// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVITESUBACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVITESUBACCOUNTREQUEST_HPP_
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
  class InviteSubAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InviteSubAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountInfoList, accountInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, InviteSubAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountInfoList, accountInfoList_);
    };
    InviteSubAccountRequest() = default ;
    InviteSubAccountRequest(const InviteSubAccountRequest &) = default ;
    InviteSubAccountRequest(InviteSubAccountRequest &&) = default ;
    InviteSubAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InviteSubAccountRequest() = default ;
    InviteSubAccountRequest& operator=(const InviteSubAccountRequest &) = default ;
    InviteSubAccountRequest& operator=(InviteSubAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccountInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccountInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(AccountNickname, accountNickname_);
        DARABONBA_PTR_TO_JSON(CreditLine, creditLine_);
        DARABONBA_PTR_TO_JSON(CustomerBd, customerBd_);
        DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
        DARABONBA_PTR_TO_JSON(EmailAddress, emailAddress_);
        DARABONBA_PTR_TO_JSON(NewBuyStatus, newBuyStatus_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(SubAccountType, subAccountType_);
        DARABONBA_PTR_TO_JSON(ZeroCreditShutdownPolicy, zeroCreditShutdownPolicy_);
      };
      friend void from_json(const Darabonba::Json& j, AccountInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountNickname, accountNickname_);
        DARABONBA_PTR_FROM_JSON(CreditLine, creditLine_);
        DARABONBA_PTR_FROM_JSON(CustomerBd, customerBd_);
        DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
        DARABONBA_PTR_FROM_JSON(EmailAddress, emailAddress_);
        DARABONBA_PTR_FROM_JSON(NewBuyStatus, newBuyStatus_);
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
        && this->creditLine_ == nullptr && this->customerBd_ == nullptr && this->customerId_ == nullptr && this->emailAddress_ == nullptr && this->newBuyStatus_ == nullptr
        && this->remark_ == nullptr && this->subAccountType_ == nullptr && this->zeroCreditShutdownPolicy_ == nullptr; };
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


      // customerBd Field Functions 
      bool hasCustomerBd() const { return this->customerBd_ != nullptr;};
      void deleteCustomerBd() { this->customerBd_ = nullptr;};
      inline string getCustomerBd() const { DARABONBA_PTR_GET_DEFAULT(customerBd_, "") };
      inline AccountInfoList& setCustomerBd(string customerBd) { DARABONBA_PTR_SET_VALUE(customerBd_, customerBd) };


      // customerId Field Functions 
      bool hasCustomerId() const { return this->customerId_ != nullptr;};
      void deleteCustomerId() { this->customerId_ = nullptr;};
      inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
      inline AccountInfoList& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


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
      // The name of the distribution customer. Valid values:
      // - If the distribution customer is an enterprise, this is the company name.
      // - If the distribution customer is a T2 reseller partner, this is the partner name.
      // 
      // This parameter is required.
      shared_ptr<string> accountNickname_ {};
      // The total budget quota that the partner allocates to the distribution customer.
      // 
      // This parameter is required.
      shared_ptr<string> creditLine_ {};
      // The account manager of the customer. Maximum length: 50 characters.
      shared_ptr<string> customerBd_ {};
      // The customer ID returned by the CreateCustomer API.
      // 
      // This parameter is required.
      shared_ptr<string> customerId_ {};
      // The email address of the distribution customer account. The invitation email is sent to this address.
      // 
      // This parameter is required.
      shared_ptr<string> emailAddress_ {};
      // The initial order placement status. Valid values:
      // 
      // - ban: Purchase is prohibited. After the customer is registered and associated, the customer cannot immediately place orders to purchase cloud resources. You must set the order control to normal before the customer can place orders.
      // - normal: Normal. After the customer is registered and associated, the customer can immediately place orders to purchase cloud resources.
      // 
      // This parameter is required.
      shared_ptr<string> newBuyStatus_ {};
      // The description of the distribution customer.
      shared_ptr<string> remark_ {};
      // The type of the sub-account. Valid values:
      // - 1: end user of Agency.
      // - 2: end user of Reseller. 
      // - 5: T2 partner of Reseller.
      // 
      // This parameter is required.
      shared_ptr<string> subAccountType_ {};
      // The shutdown policy that the partner manages for the distribution customer. Valid values:
      // 
      // - 1: delayStop. Alibaba Cloud takes over the resources and the customer enjoys a delayed shutdown quota. When the delayed shutdown quota is exhausted, instance shutdown is triggered. If payment is not made within 15 days, storage resources are released.
      // - 2: noStop. Manual management with no shutdown on overdue payment. The system does not manage the resource lifecycle of the non-trusteeship linked account. The partner must manually manage the instance shutdown status of the customer.
      // - 3: immediatelyStop. Instances are immediately shut down on overdue payment. When the available quota of the customer account is less than 0, the account enters the overdue payment status and instance shutdown is triggered.
      // 
      // This parameter is required.
      shared_ptr<string> zeroCreditShutdownPolicy_ {};
    };

    virtual bool empty() const override { return this->accountInfoList_ == nullptr; };
    // accountInfoList Field Functions 
    bool hasAccountInfoList() const { return this->accountInfoList_ != nullptr;};
    void deleteAccountInfoList() { this->accountInfoList_ = nullptr;};
    inline const vector<InviteSubAccountRequest::AccountInfoList> & getAccountInfoList() const { DARABONBA_PTR_GET_CONST(accountInfoList_, vector<InviteSubAccountRequest::AccountInfoList>) };
    inline vector<InviteSubAccountRequest::AccountInfoList> getAccountInfoList() { DARABONBA_PTR_GET(accountInfoList_, vector<InviteSubAccountRequest::AccountInfoList>) };
    inline InviteSubAccountRequest& setAccountInfoList(const vector<InviteSubAccountRequest::AccountInfoList> & accountInfoList) { DARABONBA_PTR_SET_VALUE(accountInfoList_, accountInfoList) };
    inline InviteSubAccountRequest& setAccountInfoList(vector<InviteSubAccountRequest::AccountInfoList> && accountInfoList) { DARABONBA_PTR_SET_RVALUE(accountInfoList_, accountInfoList) };


  protected:
    // The list of account information for the invitation. A maximum of five accounts can be invited at a time.
    // 
    // This parameter is required.
    shared_ptr<vector<InviteSubAccountRequest::AccountInfoList>> accountInfoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
