// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATEACCOUNTCOMPLIANCEBYPACKRESPONSEBODYACCOUNTCOMPLIANCERESULT_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATEACCOUNTCOMPLIANCEBYPACKRESPONSEBODYACCOUNTCOMPLIANCERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult& obj) { 
      DARABONBA_PTR_TO_JSON(AccountCompliances, accountCompliances_);
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(NonCompliantCount, nonCompliantCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountCompliances, accountCompliances_);
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(NonCompliantCount, nonCompliantCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult() = default ;
    GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult(const GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult &) = default ;
    GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult(GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult &&) = default ;
    GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult() = default ;
    GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult& operator=(const GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult &) = default ;
    GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult& operator=(GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountCompliances_ == nullptr
        && return this->compliancePackId_ == nullptr && return this->nonCompliantCount_ == nullptr && return this->totalCount_ == nullptr; };
    // accountCompliances Field Functions 
    bool hasAccountCompliances() const { return this->accountCompliances_ != nullptr;};
    void deleteAccountCompliances() { this->accountCompliances_ = nullptr;};
    inline const vector<Models::GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances> & accountCompliances() const { DARABONBA_PTR_GET_CONST(accountCompliances_, vector<Models::GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances>) };
    inline vector<Models::GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances> accountCompliances() { DARABONBA_PTR_GET(accountCompliances_, vector<Models::GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances>) };
    inline GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult& setAccountCompliances(const vector<Models::GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances> & accountCompliances) { DARABONBA_PTR_SET_VALUE(accountCompliances_, accountCompliances) };
    inline GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult& setAccountCompliances(vector<Models::GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances> && accountCompliances) { DARABONBA_PTR_SET_RVALUE(accountCompliances_, accountCompliances) };


    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string compliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // nonCompliantCount Field Functions 
    bool hasNonCompliantCount() const { return this->nonCompliantCount_ != nullptr;};
    void deleteNonCompliantCount() { this->nonCompliantCount_ = nullptr;};
    inline int32_t nonCompliantCount() const { DARABONBA_PTR_GET_DEFAULT(nonCompliantCount_, 0) };
    inline GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult& setNonCompliantCount(int32_t nonCompliantCount) { DARABONBA_PTR_SET_VALUE(nonCompliantCount_, nonCompliantCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The compliance evaluation result of member accounts.
    std::shared_ptr<vector<Models::GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances>> accountCompliances_ = nullptr;
    // The ID of the compliance package.
    std::shared_ptr<string> compliancePackId_ = nullptr;
    // The number of non-compliant member accounts.
    std::shared_ptr<int32_t> nonCompliantCount_ = nullptr;
    // The total number of member accounts.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
