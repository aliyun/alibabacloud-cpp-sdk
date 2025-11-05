// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTINFORESPONSEBODYACCOUNTINFOLISTACCOUNTINFO_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTINFORESPONSEBODYACCOUNTINFOLISTACCOUNTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetAccountInfoResponseBodyAccountInfoListAccountInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountInfoResponseBodyAccountInfoListAccountInfo& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetAccountInfoResponseBodyAccountInfoListAccountInfo& obj) { 
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
    GetAccountInfoResponseBodyAccountInfoListAccountInfo() = default ;
    GetAccountInfoResponseBodyAccountInfoListAccountInfo(const GetAccountInfoResponseBodyAccountInfoListAccountInfo &) = default ;
    GetAccountInfoResponseBodyAccountInfoListAccountInfo(GetAccountInfoResponseBodyAccountInfoListAccountInfo &&) = default ;
    GetAccountInfoResponseBodyAccountInfoListAccountInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountInfoResponseBodyAccountInfoListAccountInfo() = default ;
    GetAccountInfoResponseBodyAccountInfoListAccountInfo& operator=(const GetAccountInfoResponseBodyAccountInfoListAccountInfo &) = default ;
    GetAccountInfoResponseBodyAccountInfoListAccountInfo& operator=(GetAccountInfoResponseBodyAccountInfoListAccountInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNickname_ == nullptr
        && return this->aliyunId_ == nullptr && return this->associationSuccessTime_ == nullptr && return this->cid_ == nullptr && return this->customerAccountType_ == nullptr && return this->customerBd_ == nullptr
        && return this->customerEnterpriseCertified_ == nullptr && return this->delayAmount_ == nullptr && return this->delayStatus_ == nullptr && return this->email_ == nullptr && return this->mobile_ == nullptr
        && return this->newBuyStatus_ == nullptr && return this->registerCountryCode_ == nullptr && return this->remark_ == nullptr && return this->subAccountType_ == nullptr && return this->uid_ == nullptr; };
    // accountNickname Field Functions 
    bool hasAccountNickname() const { return this->accountNickname_ != nullptr;};
    void deleteAccountNickname() { this->accountNickname_ = nullptr;};
    inline string accountNickname() const { DARABONBA_PTR_GET_DEFAULT(accountNickname_, "") };
    inline GetAccountInfoResponseBodyAccountInfoListAccountInfo& setAccountNickname(string accountNickname) { DARABONBA_PTR_SET_VALUE(accountNickname_, accountNickname) };


    // aliyunId Field Functions 
    bool hasAliyunId() const { return this->aliyunId_ != nullptr;};
    void deleteAliyunId() { this->aliyunId_ = nullptr;};
    inline string aliyunId() const { DARABONBA_PTR_GET_DEFAULT(aliyunId_, "") };
    inline GetAccountInfoResponseBodyAccountInfoListAccountInfo& setAliyunId(string aliyunId) { DARABONBA_PTR_SET_VALUE(aliyunId_, aliyunId) };


    // associationSuccessTime Field Functions 
    bool hasAssociationSuccessTime() const { return this->associationSuccessTime_ != nullptr;};
    void deleteAssociationSuccessTime() { this->associationSuccessTime_ = nullptr;};
    inline string associationSuccessTime() const { DARABONBA_PTR_GET_DEFAULT(associationSuccessTime_, "") };
    inline GetAccountInfoResponseBodyAccountInfoListAccountInfo& setAssociationSuccessTime(string associationSuccessTime) { DARABONBA_PTR_SET_VALUE(associationSuccessTime_, associationSuccessTime) };


    // cid Field Functions 
    bool hasCid() const { return this->cid_ != nullptr;};
    void deleteCid() { this->cid_ = nullptr;};
    inline int64_t cid() const { DARABONBA_PTR_GET_DEFAULT(cid_, 0L) };
    inline GetAccountInfoResponseBodyAccountInfoListAccountInfo& setCid(int64_t cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


    // customerAccountType Field Functions 
    bool hasCustomerAccountType() const { return this->customerAccountType_ != nullptr;};
    void deleteCustomerAccountType() { this->customerAccountType_ = nullptr;};
    inline int32_t customerAccountType() const { DARABONBA_PTR_GET_DEFAULT(customerAccountType_, 0) };
    inline GetAccountInfoResponseBodyAccountInfoListAccountInfo& setCustomerAccountType(int32_t customerAccountType) { DARABONBA_PTR_SET_VALUE(customerAccountType_, customerAccountType) };


    // customerBd Field Functions 
    bool hasCustomerBd() const { return this->customerBd_ != nullptr;};
    void deleteCustomerBd() { this->customerBd_ = nullptr;};
    inline string customerBd() const { DARABONBA_PTR_GET_DEFAULT(customerBd_, "") };
    inline GetAccountInfoResponseBodyAccountInfoListAccountInfo& setCustomerBd(string customerBd) { DARABONBA_PTR_SET_VALUE(customerBd_, customerBd) };


    // customerEnterpriseCertified Field Functions 
    bool hasCustomerEnterpriseCertified() const { return this->customerEnterpriseCertified_ != nullptr;};
    void deleteCustomerEnterpriseCertified() { this->customerEnterpriseCertified_ = nullptr;};
    inline int32_t customerEnterpriseCertified() const { DARABONBA_PTR_GET_DEFAULT(customerEnterpriseCertified_, 0) };
    inline GetAccountInfoResponseBodyAccountInfoListAccountInfo& setCustomerEnterpriseCertified(int32_t customerEnterpriseCertified) { DARABONBA_PTR_SET_VALUE(customerEnterpriseCertified_, customerEnterpriseCertified) };


    // delayAmount Field Functions 
    bool hasDelayAmount() const { return this->delayAmount_ != nullptr;};
    void deleteDelayAmount() { this->delayAmount_ = nullptr;};
    inline string delayAmount() const { DARABONBA_PTR_GET_DEFAULT(delayAmount_, "") };
    inline GetAccountInfoResponseBodyAccountInfoListAccountInfo& setDelayAmount(string delayAmount) { DARABONBA_PTR_SET_VALUE(delayAmount_, delayAmount) };


    // delayStatus Field Functions 
    bool hasDelayStatus() const { return this->delayStatus_ != nullptr;};
    void deleteDelayStatus() { this->delayStatus_ = nullptr;};
    inline string delayStatus() const { DARABONBA_PTR_GET_DEFAULT(delayStatus_, "") };
    inline GetAccountInfoResponseBodyAccountInfoListAccountInfo& setDelayStatus(string delayStatus) { DARABONBA_PTR_SET_VALUE(delayStatus_, delayStatus) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetAccountInfoResponseBodyAccountInfoListAccountInfo& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline GetAccountInfoResponseBodyAccountInfoListAccountInfo& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // newBuyStatus Field Functions 
    bool hasNewBuyStatus() const { return this->newBuyStatus_ != nullptr;};
    void deleteNewBuyStatus() { this->newBuyStatus_ = nullptr;};
    inline string newBuyStatus() const { DARABONBA_PTR_GET_DEFAULT(newBuyStatus_, "") };
    inline GetAccountInfoResponseBodyAccountInfoListAccountInfo& setNewBuyStatus(string newBuyStatus) { DARABONBA_PTR_SET_VALUE(newBuyStatus_, newBuyStatus) };


    // registerCountryCode Field Functions 
    bool hasRegisterCountryCode() const { return this->registerCountryCode_ != nullptr;};
    void deleteRegisterCountryCode() { this->registerCountryCode_ = nullptr;};
    inline string registerCountryCode() const { DARABONBA_PTR_GET_DEFAULT(registerCountryCode_, "") };
    inline GetAccountInfoResponseBodyAccountInfoListAccountInfo& setRegisterCountryCode(string registerCountryCode) { DARABONBA_PTR_SET_VALUE(registerCountryCode_, registerCountryCode) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetAccountInfoResponseBodyAccountInfoListAccountInfo& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // subAccountType Field Functions 
    bool hasSubAccountType() const { return this->subAccountType_ != nullptr;};
    void deleteSubAccountType() { this->subAccountType_ = nullptr;};
    inline int32_t subAccountType() const { DARABONBA_PTR_GET_DEFAULT(subAccountType_, 0) };
    inline GetAccountInfoResponseBodyAccountInfoListAccountInfo& setSubAccountType(int32_t subAccountType) { DARABONBA_PTR_SET_VALUE(subAccountType_, subAccountType) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline GetAccountInfoResponseBodyAccountInfoListAccountInfo& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // The name of Sub Account.
    // - Enterprise Customer: Name of Company
    // - T2 Reseller: Name of Partner
    std::shared_ptr<string> accountNickname_ = nullptr;
    // Alibaba Cloud Login name of Distribution Customer.
    std::shared_ptr<string> aliyunId_ = nullptr;
    // The time that Distribution Customer successfully associated with Distributor.
    std::shared_ptr<string> associationSuccessTime_ = nullptr;
    // Account CID of Distribution Customer.
    std::shared_ptr<int64_t> cid_ = nullptr;
    // Type of customer\\"s account, 0 Individual, 1 Enterprise
    std::shared_ptr<int32_t> customerAccountType_ = nullptr;
    // Customer\\"s Sales Manager
    std::shared_ptr<string> customerBd_ = nullptr;
    // Whether the customer has completed Enterprise Real-name Authentication, 0 No, 1 Yes
    std::shared_ptr<int32_t> customerEnterpriseCertified_ = nullptr;
    // When Shutdown Policy is delayStop, this number refer to Shutdown-delay Credit (overdraft limit).
    std::shared_ptr<string> delayAmount_ = nullptr;
    // There are a value for Shutdown Policy Management towards Sub Account.
    // - 1 immediatelyStop,  immediately shutdown the instance once customer\\"s quota is ran out.
    // - 2 delayStop, delay shutdown the instance until customer\\"s Shutdown-delay Credit is ran out. Please refer to DelayAmount.
    // - 3 noStop, customer\\"s instance status is rely on manual control instead of auto setting.
    std::shared_ptr<string> delayStatus_ = nullptr;
    // The E-mail of Distribution Customer.
    std::shared_ptr<string> email_ = nullptr;
    // The contact number of Distribution Customer.
    std::shared_ptr<string> mobile_ = nullptr;
    // Purchase Control, Value Range:
    // - Purchase Forbidden
    // - Normal (Purchase is allowed)
    std::shared_ptr<string> newBuyStatus_ = nullptr;
    // The Country Code where the customer\\"s account is registered.
    std::shared_ptr<string> registerCountryCode_ = nullptr;
    // Description of Distribution Customer.
    std::shared_ptr<string> remark_ = nullptr;
    // Account Type:
    // - 1 Agency\\"s End User
    // - 2 Reseller\\"s End User
    // - 3 Enterprise
    // - 4 T2 Agency Partner
    // - 5 T2 Reseller Partner
    // - 6 T2 Agency+Reseller Partner
    std::shared_ptr<int32_t> subAccountType_ = nullptr;
    // Account UID of Distribution Customer.
    std::shared_ptr<int64_t> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
