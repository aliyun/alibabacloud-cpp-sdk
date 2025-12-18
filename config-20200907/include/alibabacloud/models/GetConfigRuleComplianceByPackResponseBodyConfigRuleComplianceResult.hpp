// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGRULECOMPLIANCEBYPACKRESPONSEBODYCONFIGRULECOMPLIANCERESULT_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGRULECOMPLIANCEBYPACKRESPONSEBODYCONFIGRULECOMPLIANCERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(CompliantCount, compliantCount_);
      DARABONBA_PTR_TO_JSON(ConfigRuleCompliances, configRuleCompliances_);
      DARABONBA_PTR_TO_JSON(IgnoredCount, ignoredCount_);
      DARABONBA_PTR_TO_JSON(InsufficientDataCount, insufficientDataCount_);
      DARABONBA_PTR_TO_JSON(NonCompliantCount, nonCompliantCount_);
      DARABONBA_PTR_TO_JSON(NotApplicableCount, notApplicableCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(CompliantCount, compliantCount_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleCompliances, configRuleCompliances_);
      DARABONBA_PTR_FROM_JSON(IgnoredCount, ignoredCount_);
      DARABONBA_PTR_FROM_JSON(InsufficientDataCount, insufficientDataCount_);
      DARABONBA_PTR_FROM_JSON(NonCompliantCount, nonCompliantCount_);
      DARABONBA_PTR_FROM_JSON(NotApplicableCount, notApplicableCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult() = default ;
    GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult(const GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult &) = default ;
    GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult(GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult &&) = default ;
    GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult() = default ;
    GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult& operator=(const GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult &) = default ;
    GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult& operator=(GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliancePackId_ == nullptr
        && return this->compliantCount_ == nullptr && return this->configRuleCompliances_ == nullptr && return this->ignoredCount_ == nullptr && return this->insufficientDataCount_ == nullptr && return this->nonCompliantCount_ == nullptr
        && return this->notApplicableCount_ == nullptr && return this->totalCount_ == nullptr; };
    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string compliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // compliantCount Field Functions 
    bool hasCompliantCount() const { return this->compliantCount_ != nullptr;};
    void deleteCompliantCount() { this->compliantCount_ = nullptr;};
    inline int32_t compliantCount() const { DARABONBA_PTR_GET_DEFAULT(compliantCount_, 0) };
    inline GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult& setCompliantCount(int32_t compliantCount) { DARABONBA_PTR_SET_VALUE(compliantCount_, compliantCount) };


    // configRuleCompliances Field Functions 
    bool hasConfigRuleCompliances() const { return this->configRuleCompliances_ != nullptr;};
    void deleteConfigRuleCompliances() { this->configRuleCompliances_ = nullptr;};
    inline const vector<Models::GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances> & configRuleCompliances() const { DARABONBA_PTR_GET_CONST(configRuleCompliances_, vector<Models::GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances>) };
    inline vector<Models::GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances> configRuleCompliances() { DARABONBA_PTR_GET(configRuleCompliances_, vector<Models::GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances>) };
    inline GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult& setConfigRuleCompliances(const vector<Models::GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances> & configRuleCompliances) { DARABONBA_PTR_SET_VALUE(configRuleCompliances_, configRuleCompliances) };
    inline GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult& setConfigRuleCompliances(vector<Models::GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances> && configRuleCompliances) { DARABONBA_PTR_SET_RVALUE(configRuleCompliances_, configRuleCompliances) };


    // ignoredCount Field Functions 
    bool hasIgnoredCount() const { return this->ignoredCount_ != nullptr;};
    void deleteIgnoredCount() { this->ignoredCount_ = nullptr;};
    inline int32_t ignoredCount() const { DARABONBA_PTR_GET_DEFAULT(ignoredCount_, 0) };
    inline GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult& setIgnoredCount(int32_t ignoredCount) { DARABONBA_PTR_SET_VALUE(ignoredCount_, ignoredCount) };


    // insufficientDataCount Field Functions 
    bool hasInsufficientDataCount() const { return this->insufficientDataCount_ != nullptr;};
    void deleteInsufficientDataCount() { this->insufficientDataCount_ = nullptr;};
    inline int32_t insufficientDataCount() const { DARABONBA_PTR_GET_DEFAULT(insufficientDataCount_, 0) };
    inline GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult& setInsufficientDataCount(int32_t insufficientDataCount) { DARABONBA_PTR_SET_VALUE(insufficientDataCount_, insufficientDataCount) };


    // nonCompliantCount Field Functions 
    bool hasNonCompliantCount() const { return this->nonCompliantCount_ != nullptr;};
    void deleteNonCompliantCount() { this->nonCompliantCount_ = nullptr;};
    inline int32_t nonCompliantCount() const { DARABONBA_PTR_GET_DEFAULT(nonCompliantCount_, 0) };
    inline GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult& setNonCompliantCount(int32_t nonCompliantCount) { DARABONBA_PTR_SET_VALUE(nonCompliantCount_, nonCompliantCount) };


    // notApplicableCount Field Functions 
    bool hasNotApplicableCount() const { return this->notApplicableCount_ != nullptr;};
    void deleteNotApplicableCount() { this->notApplicableCount_ = nullptr;};
    inline int32_t notApplicableCount() const { DARABONBA_PTR_GET_DEFAULT(notApplicableCount_, 0) };
    inline GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult& setNotApplicableCount(int32_t notApplicableCount) { DARABONBA_PTR_SET_VALUE(notApplicableCount_, notApplicableCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the compliance package.
    std::shared_ptr<string> compliancePackId_ = nullptr;
    std::shared_ptr<int32_t> compliantCount_ = nullptr;
    // The rule enabled in the compliance package and the compliance evaluation result returned by the rule.
    std::shared_ptr<vector<Models::GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances>> configRuleCompliances_ = nullptr;
    std::shared_ptr<int32_t> ignoredCount_ = nullptr;
    std::shared_ptr<int32_t> insufficientDataCount_ = nullptr;
    // The number of rules against which specific resources are evaluated as non-compliant.
    std::shared_ptr<int32_t> nonCompliantCount_ = nullptr;
    std::shared_ptr<int32_t> notApplicableCount_ = nullptr;
    // The total number of rules enabled in the compliance package.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
