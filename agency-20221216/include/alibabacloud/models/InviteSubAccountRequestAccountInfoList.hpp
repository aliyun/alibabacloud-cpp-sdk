// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVITESUBACCOUNTREQUESTACCOUNTINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_INVITESUBACCOUNTREQUESTACCOUNTINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class InviteSubAccountRequestAccountInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InviteSubAccountRequestAccountInfoList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, InviteSubAccountRequestAccountInfoList& obj) { 
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
    InviteSubAccountRequestAccountInfoList() = default ;
    InviteSubAccountRequestAccountInfoList(const InviteSubAccountRequestAccountInfoList &) = default ;
    InviteSubAccountRequestAccountInfoList(InviteSubAccountRequestAccountInfoList &&) = default ;
    InviteSubAccountRequestAccountInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InviteSubAccountRequestAccountInfoList() = default ;
    InviteSubAccountRequestAccountInfoList& operator=(const InviteSubAccountRequestAccountInfoList &) = default ;
    InviteSubAccountRequestAccountInfoList& operator=(InviteSubAccountRequestAccountInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNickname_ == nullptr
        && return this->creditLine_ == nullptr && return this->customerBd_ == nullptr && return this->customerId_ == nullptr && return this->emailAddress_ == nullptr && return this->newBuyStatus_ == nullptr
        && return this->remark_ == nullptr && return this->subAccountType_ == nullptr && return this->zeroCreditShutdownPolicy_ == nullptr; };
    // accountNickname Field Functions 
    bool hasAccountNickname() const { return this->accountNickname_ != nullptr;};
    void deleteAccountNickname() { this->accountNickname_ = nullptr;};
    inline string accountNickname() const { DARABONBA_PTR_GET_DEFAULT(accountNickname_, "") };
    inline InviteSubAccountRequestAccountInfoList& setAccountNickname(string accountNickname) { DARABONBA_PTR_SET_VALUE(accountNickname_, accountNickname) };


    // creditLine Field Functions 
    bool hasCreditLine() const { return this->creditLine_ != nullptr;};
    void deleteCreditLine() { this->creditLine_ = nullptr;};
    inline string creditLine() const { DARABONBA_PTR_GET_DEFAULT(creditLine_, "") };
    inline InviteSubAccountRequestAccountInfoList& setCreditLine(string creditLine) { DARABONBA_PTR_SET_VALUE(creditLine_, creditLine) };


    // customerBd Field Functions 
    bool hasCustomerBd() const { return this->customerBd_ != nullptr;};
    void deleteCustomerBd() { this->customerBd_ = nullptr;};
    inline string customerBd() const { DARABONBA_PTR_GET_DEFAULT(customerBd_, "") };
    inline InviteSubAccountRequestAccountInfoList& setCustomerBd(string customerBd) { DARABONBA_PTR_SET_VALUE(customerBd_, customerBd) };


    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline string customerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
    inline InviteSubAccountRequestAccountInfoList& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // emailAddress Field Functions 
    bool hasEmailAddress() const { return this->emailAddress_ != nullptr;};
    void deleteEmailAddress() { this->emailAddress_ = nullptr;};
    inline string emailAddress() const { DARABONBA_PTR_GET_DEFAULT(emailAddress_, "") };
    inline InviteSubAccountRequestAccountInfoList& setEmailAddress(string emailAddress) { DARABONBA_PTR_SET_VALUE(emailAddress_, emailAddress) };


    // newBuyStatus Field Functions 
    bool hasNewBuyStatus() const { return this->newBuyStatus_ != nullptr;};
    void deleteNewBuyStatus() { this->newBuyStatus_ = nullptr;};
    inline string newBuyStatus() const { DARABONBA_PTR_GET_DEFAULT(newBuyStatus_, "") };
    inline InviteSubAccountRequestAccountInfoList& setNewBuyStatus(string newBuyStatus) { DARABONBA_PTR_SET_VALUE(newBuyStatus_, newBuyStatus) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline InviteSubAccountRequestAccountInfoList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // subAccountType Field Functions 
    bool hasSubAccountType() const { return this->subAccountType_ != nullptr;};
    void deleteSubAccountType() { this->subAccountType_ = nullptr;};
    inline string subAccountType() const { DARABONBA_PTR_GET_DEFAULT(subAccountType_, "") };
    inline InviteSubAccountRequestAccountInfoList& setSubAccountType(string subAccountType) { DARABONBA_PTR_SET_VALUE(subAccountType_, subAccountType) };


    // zeroCreditShutdownPolicy Field Functions 
    bool hasZeroCreditShutdownPolicy() const { return this->zeroCreditShutdownPolicy_ != nullptr;};
    void deleteZeroCreditShutdownPolicy() { this->zeroCreditShutdownPolicy_ = nullptr;};
    inline string zeroCreditShutdownPolicy() const { DARABONBA_PTR_GET_DEFAULT(zeroCreditShutdownPolicy_, "") };
    inline InviteSubAccountRequestAccountInfoList& setZeroCreditShutdownPolicy(string zeroCreditShutdownPolicy) { DARABONBA_PTR_SET_VALUE(zeroCreditShutdownPolicy_, zeroCreditShutdownPolicy) };


  protected:
    // The name of Sub Account:</br>
    // 1. Use the official name of Company, if Sub Account is an enterprise.</br>
    // 2. Use the official name of Partner, if Sub Account is a T2 reseller.</br>
    // 
    // This parameter is required.
    std::shared_ptr<string> accountNickname_ = nullptr;
    // The total budget Credit of Sub Account that distributed by Partner.
    // 
    // This parameter is required.
    std::shared_ptr<string> creditLine_ = nullptr;
    std::shared_ptr<string> customerBd_ = nullptr;
    // Customer ID, Returning ID from CreateCustomer API.
    // 
    // This parameter is required.
    std::shared_ptr<string> customerId_ = nullptr;
    // The email address of End User,  which will receive the invitation email.
    // 
    // This parameter is required.
    std::shared_ptr<string> emailAddress_ = nullptr;
    // Initial Order Status</br>
    // 1. ban：Ban the new purchase action--After End User finish registration and authorization, they can\\"t issue Cloud Resource order immediately. Partner should manually update the "Order Control" settings as "Normal" to enable new order.</br>
    // 2. normal：Normal--After End User finished registration and authorization, they can issue Cloud Resource order immediately.</br>
    // 
    // This parameter is required.
    std::shared_ptr<string> newBuyStatus_ = nullptr;
    // Description of Sub Account.
    std::shared_ptr<string> remark_ = nullptr;
    // The type of Sub Account</br>
    // 
    // 1 Agency\\"s End User</br>
    // 2 Reseller\\"s End user</br>
    // 5 Reseller\\"s T2 Partner</br>
    // 
    // This parameter is required.
    std::shared_ptr<string> subAccountType_ = nullptr;
    // Partner\\"s Shutdown Policy Management for Sub Account.</br>
    // 1: delayStop. The account have Shutdown-delay Privilege,  After Shutdown-delay Credit is ran out, Alibaba Cloud will take over resources and keep the instance for 15 days. In addition, the instance will be released if Sub Account failed to pay the bill within these 15 days.</br>
    // 2: noStop. Partner will manually manage Shutdown Status for Sub Account. Meanwhile, System would not manage the resource\\"s life-circle of Sub Account.</br>
    // 3: immediatelyStop. Once valid quota of Sub Account falls below 0 and be identified as defaulting account, it will trigger the instance shutdown immediately.</br>
    // 
    // This parameter is required.
    std::shared_ptr<string> zeroCreditShutdownPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
