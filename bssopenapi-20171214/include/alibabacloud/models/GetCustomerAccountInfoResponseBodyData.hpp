// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMERACCOUNTINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMERACCOUNTINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetCustomerAccountInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomerAccountInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(CreditLimitStatus, creditLimitStatus_);
      DARABONBA_PTR_TO_JSON(HostingStatus, hostingStatus_);
      DARABONBA_PTR_TO_JSON(IsCertified, isCertified_);
      DARABONBA_PTR_TO_JSON(LoginEmail, loginEmail_);
      DARABONBA_PTR_TO_JSON(Mpk, mpk_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomerAccountInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(CreditLimitStatus, creditLimitStatus_);
      DARABONBA_PTR_FROM_JSON(HostingStatus, hostingStatus_);
      DARABONBA_PTR_FROM_JSON(IsCertified, isCertified_);
      DARABONBA_PTR_FROM_JSON(LoginEmail, loginEmail_);
      DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
    };
    GetCustomerAccountInfoResponseBodyData() = default ;
    GetCustomerAccountInfoResponseBodyData(const GetCustomerAccountInfoResponseBodyData &) = default ;
    GetCustomerAccountInfoResponseBodyData(GetCustomerAccountInfoResponseBodyData &&) = default ;
    GetCustomerAccountInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomerAccountInfoResponseBodyData() = default ;
    GetCustomerAccountInfoResponseBodyData& operator=(const GetCustomerAccountInfoResponseBodyData &) = default ;
    GetCustomerAccountInfoResponseBodyData& operator=(GetCustomerAccountInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountType_ != nullptr
        && this->creditLimitStatus_ != nullptr && this->hostingStatus_ != nullptr && this->isCertified_ != nullptr && this->loginEmail_ != nullptr && this->mpk_ != nullptr; };
    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline GetCustomerAccountInfoResponseBodyData& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // creditLimitStatus Field Functions 
    bool hasCreditLimitStatus() const { return this->creditLimitStatus_ != nullptr;};
    void deleteCreditLimitStatus() { this->creditLimitStatus_ = nullptr;};
    inline string creditLimitStatus() const { DARABONBA_PTR_GET_DEFAULT(creditLimitStatus_, "") };
    inline GetCustomerAccountInfoResponseBodyData& setCreditLimitStatus(string creditLimitStatus) { DARABONBA_PTR_SET_VALUE(creditLimitStatus_, creditLimitStatus) };


    // hostingStatus Field Functions 
    bool hasHostingStatus() const { return this->hostingStatus_ != nullptr;};
    void deleteHostingStatus() { this->hostingStatus_ = nullptr;};
    inline string hostingStatus() const { DARABONBA_PTR_GET_DEFAULT(hostingStatus_, "") };
    inline GetCustomerAccountInfoResponseBodyData& setHostingStatus(string hostingStatus) { DARABONBA_PTR_SET_VALUE(hostingStatus_, hostingStatus) };


    // isCertified Field Functions 
    bool hasIsCertified() const { return this->isCertified_ != nullptr;};
    void deleteIsCertified() { this->isCertified_ = nullptr;};
    inline bool isCertified() const { DARABONBA_PTR_GET_DEFAULT(isCertified_, false) };
    inline GetCustomerAccountInfoResponseBodyData& setIsCertified(bool isCertified) { DARABONBA_PTR_SET_VALUE(isCertified_, isCertified) };


    // loginEmail Field Functions 
    bool hasLoginEmail() const { return this->loginEmail_ != nullptr;};
    void deleteLoginEmail() { this->loginEmail_ = nullptr;};
    inline string loginEmail() const { DARABONBA_PTR_GET_DEFAULT(loginEmail_, "") };
    inline GetCustomerAccountInfoResponseBodyData& setLoginEmail(string loginEmail) { DARABONBA_PTR_SET_VALUE(loginEmail_, loginEmail) };


    // mpk Field Functions 
    bool hasMpk() const { return this->mpk_ != nullptr;};
    void deleteMpk() { this->mpk_ = nullptr;};
    inline int64_t mpk() const { DARABONBA_PTR_GET_DEFAULT(mpk_, 0L) };
    inline GetCustomerAccountInfoResponseBodyData& setMpk(int64_t mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


  protected:
    // The type of the account. A value of 1 indicates an enterprise account. A value of 0 indicates an individual account.
    std::shared_ptr<string> accountType_ = nullptr;
    // The business status of the customer. Valid values:
    // 
    // Freeze: The business is frozen.
    // 
    // Thaw: The business is unfrozen.
    // 
    // Trusteeship: The business is hosted.
    // 
    // TrusteeshipCancel: The business is not hosted.
    std::shared_ptr<string> creditLimitStatus_ = nullptr;
    // The hosting status of the credit information and instances of the customer. If the credit information and instances of the customer are managed on Alibaba Cloud, Alibaba Cloud suspends a customer service upon overdue payment. Valid values:
    // 
    // FREEZE: The business of the customer is frozen.
    // 
    // TRUSTEESHIP: The business of the customer is hosted.
    std::shared_ptr<string> hostingStatus_ = nullptr;
    // Indicates whether the account passes the real-name verification.
    std::shared_ptr<bool> isCertified_ = nullptr;
    // The email address of the customer.
    std::shared_ptr<string> loginEmail_ = nullptr;
    // The ID of the management account.
    std::shared_ptr<int64_t> mpk_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
