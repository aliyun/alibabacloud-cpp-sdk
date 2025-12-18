// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULESUMMARYBYRISKLEVELRESPONSEBODYCONFIGRULESUMMARIES_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULESUMMARYBYRISKLEVELRESPONSEBODYCONFIGRULESUMMARIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries& obj) { 
      DARABONBA_PTR_TO_JSON(CompliantCount, compliantCount_);
      DARABONBA_PTR_TO_JSON(NonCompliantCount, nonCompliantCount_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliantCount, compliantCount_);
      DARABONBA_PTR_FROM_JSON(NonCompliantCount, nonCompliantCount_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries() = default ;
    GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries(const GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries &) = default ;
    GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries(GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries &&) = default ;
    GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries() = default ;
    GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries& operator=(const GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries &) = default ;
    GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries& operator=(GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliantCount_ == nullptr
        && return this->nonCompliantCount_ == nullptr && return this->riskLevel_ == nullptr; };
    // compliantCount Field Functions 
    bool hasCompliantCount() const { return this->compliantCount_ != nullptr;};
    void deleteCompliantCount() { this->compliantCount_ = nullptr;};
    inline int32_t compliantCount() const { DARABONBA_PTR_GET_DEFAULT(compliantCount_, 0) };
    inline GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries& setCompliantCount(int32_t compliantCount) { DARABONBA_PTR_SET_VALUE(compliantCount_, compliantCount) };


    // nonCompliantCount Field Functions 
    bool hasNonCompliantCount() const { return this->nonCompliantCount_ != nullptr;};
    void deleteNonCompliantCount() { this->nonCompliantCount_ = nullptr;};
    inline int32_t nonCompliantCount() const { DARABONBA_PTR_GET_DEFAULT(nonCompliantCount_, 0) };
    inline GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries& setNonCompliantCount(int32_t nonCompliantCount) { DARABONBA_PTR_SET_VALUE(nonCompliantCount_, nonCompliantCount) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    // The number of rules against which specific resources are evaluated as compliant.
    std::shared_ptr<int32_t> compliantCount_ = nullptr;
    // The number of rules against which specific resources are evaluated as non-compliant.
    std::shared_ptr<int32_t> nonCompliantCount_ = nullptr;
    // The risk level of the resources that do not comply with the rule. Valid values:
    // 
    // *   1: high
    // *   2: medium
    // *   3: low
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
