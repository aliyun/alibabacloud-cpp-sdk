// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATEACCOUNTCOMPLIANCEBYPACKRESPONSEBODYACCOUNTCOMPLIANCERESULTACCOUNTCOMPLIANCES_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATEACCOUNTCOMPLIANCEBYPACKRESPONSEBODYACCOUNTCOMPLIANCERESULTACCOUNTCOMPLIANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
    };
    GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances() = default ;
    GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances(const GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances &) = default ;
    GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances(GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances &&) = default ;
    GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances() = default ;
    GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances& operator=(const GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances &) = default ;
    GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances& operator=(GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->accountName_ == nullptr && return this->complianceType_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // complianceType Field Functions 
    bool hasComplianceType() const { return this->complianceType_ != nullptr;};
    void deleteComplianceType() { this->complianceType_ = nullptr;};
    inline string complianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
    inline GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


  protected:
    // The ID of the member account in the account group.
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The name of the member account in the account group.
    std::shared_ptr<string> accountName_ = nullptr;
    // The compliance evaluation result. Valid values:
    // 
    // *   COMPLIANT: The resource was evaluated as compliant.
    // *   NON_COMPLIANT: The resource was evaluated as incompliant.
    // *   NOT_APPLICABLE: The rule did not apply to your resource.
    // *   INSUFFICIENT_DATA: No resource data was available.
    std::shared_ptr<string> complianceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
