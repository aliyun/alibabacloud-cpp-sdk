// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLICENSEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLICENSEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ModifyLicenseInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLicenseInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(ContractNo, contractNo_);
      DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
      DARABONBA_PTR_TO_JSON(ExpiredOn, expiredOn_);
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(LicenseId, licenseId_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLicenseInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(ContractNo, contractNo_);
      DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
      DARABONBA_PTR_FROM_JSON(ExpiredOn, expiredOn_);
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(LicenseId, licenseId_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ModifyLicenseInfoRequest() = default ;
    ModifyLicenseInfoRequest(const ModifyLicenseInfoRequest &) = default ;
    ModifyLicenseInfoRequest(ModifyLicenseInfoRequest &&) = default ;
    ModifyLicenseInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLicenseInfoRequest() = default ;
    ModifyLicenseInfoRequest& operator=(const ModifyLicenseInfoRequest &) = default ;
    ModifyLicenseInfoRequest& operator=(ModifyLicenseInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->beginTime_ != nullptr && this->businessType_ != nullptr && this->contractNo_ != nullptr && this->customerId_ != nullptr && this->expiredOn_ != nullptr
        && this->extraInfo_ != nullptr && this->licenseId_ != nullptr && this->operator_ != nullptr && this->type_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline ModifyLicenseInfoRequest& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline ModifyLicenseInfoRequest& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline ModifyLicenseInfoRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // contractNo Field Functions 
    bool hasContractNo() const { return this->contractNo_ != nullptr;};
    void deleteContractNo() { this->contractNo_ = nullptr;};
    inline string contractNo() const { DARABONBA_PTR_GET_DEFAULT(contractNo_, "") };
    inline ModifyLicenseInfoRequest& setContractNo(string contractNo) { DARABONBA_PTR_SET_VALUE(contractNo_, contractNo) };


    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline int64_t customerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, 0L) };
    inline ModifyLicenseInfoRequest& setCustomerId(int64_t customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // expiredOn Field Functions 
    bool hasExpiredOn() const { return this->expiredOn_ != nullptr;};
    void deleteExpiredOn() { this->expiredOn_ = nullptr;};
    inline string expiredOn() const { DARABONBA_PTR_GET_DEFAULT(expiredOn_, "") };
    inline ModifyLicenseInfoRequest& setExpiredOn(string expiredOn) { DARABONBA_PTR_SET_VALUE(expiredOn_, expiredOn) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string extraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline ModifyLicenseInfoRequest& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // licenseId Field Functions 
    bool hasLicenseId() const { return this->licenseId_ != nullptr;};
    void deleteLicenseId() { this->licenseId_ = nullptr;};
    inline string licenseId() const { DARABONBA_PTR_GET_DEFAULT(licenseId_, "") };
    inline ModifyLicenseInfoRequest& setLicenseId(string licenseId) { DARABONBA_PTR_SET_VALUE(licenseId_, licenseId) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ModifyLicenseInfoRequest& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifyLicenseInfoRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int64_t> accountId_ = nullptr;
    std::shared_ptr<string> beginTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> businessType_ = nullptr;
    std::shared_ptr<string> contractNo_ = nullptr;
    std::shared_ptr<int64_t> customerId_ = nullptr;
    std::shared_ptr<string> expiredOn_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> extraInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> licenseId_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
