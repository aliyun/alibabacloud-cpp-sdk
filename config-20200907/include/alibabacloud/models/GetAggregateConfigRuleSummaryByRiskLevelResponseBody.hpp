// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULESUMMARYBYRISKLEVELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULESUMMARYBYRISKLEVELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateConfigRuleSummaryByRiskLevelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateConfigRuleSummaryByRiskLevelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleSummaries, configRuleSummaries_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateConfigRuleSummaryByRiskLevelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleSummaries, configRuleSummaries_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregateConfigRuleSummaryByRiskLevelResponseBody() = default ;
    GetAggregateConfigRuleSummaryByRiskLevelResponseBody(const GetAggregateConfigRuleSummaryByRiskLevelResponseBody &) = default ;
    GetAggregateConfigRuleSummaryByRiskLevelResponseBody(GetAggregateConfigRuleSummaryByRiskLevelResponseBody &&) = default ;
    GetAggregateConfigRuleSummaryByRiskLevelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateConfigRuleSummaryByRiskLevelResponseBody() = default ;
    GetAggregateConfigRuleSummaryByRiskLevelResponseBody& operator=(const GetAggregateConfigRuleSummaryByRiskLevelResponseBody &) = default ;
    GetAggregateConfigRuleSummaryByRiskLevelResponseBody& operator=(GetAggregateConfigRuleSummaryByRiskLevelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConfigRuleSummaries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigRuleSummaries& obj) { 
        DARABONBA_PTR_TO_JSON(CompliantCount, compliantCount_);
        DARABONBA_PTR_TO_JSON(NonCompliantCount, nonCompliantCount_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigRuleSummaries& obj) { 
        DARABONBA_PTR_FROM_JSON(CompliantCount, compliantCount_);
        DARABONBA_PTR_FROM_JSON(NonCompliantCount, nonCompliantCount_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      };
      ConfigRuleSummaries() = default ;
      ConfigRuleSummaries(const ConfigRuleSummaries &) = default ;
      ConfigRuleSummaries(ConfigRuleSummaries &&) = default ;
      ConfigRuleSummaries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigRuleSummaries() = default ;
      ConfigRuleSummaries& operator=(const ConfigRuleSummaries &) = default ;
      ConfigRuleSummaries& operator=(ConfigRuleSummaries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->compliantCount_ == nullptr
        && this->nonCompliantCount_ == nullptr && this->riskLevel_ == nullptr; };
      // compliantCount Field Functions 
      bool hasCompliantCount() const { return this->compliantCount_ != nullptr;};
      void deleteCompliantCount() { this->compliantCount_ = nullptr;};
      inline int32_t getCompliantCount() const { DARABONBA_PTR_GET_DEFAULT(compliantCount_, 0) };
      inline ConfigRuleSummaries& setCompliantCount(int32_t compliantCount) { DARABONBA_PTR_SET_VALUE(compliantCount_, compliantCount) };


      // nonCompliantCount Field Functions 
      bool hasNonCompliantCount() const { return this->nonCompliantCount_ != nullptr;};
      void deleteNonCompliantCount() { this->nonCompliantCount_ = nullptr;};
      inline int32_t getNonCompliantCount() const { DARABONBA_PTR_GET_DEFAULT(nonCompliantCount_, 0) };
      inline ConfigRuleSummaries& setNonCompliantCount(int32_t nonCompliantCount) { DARABONBA_PTR_SET_VALUE(nonCompliantCount_, nonCompliantCount) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
      inline ConfigRuleSummaries& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    protected:
      // The number of rules against which specific resources are evaluated as compliant.
      shared_ptr<int32_t> compliantCount_ {};
      // The number of rules against which specific resources are evaluated as non-compliant.
      shared_ptr<int32_t> nonCompliantCount_ {};
      // The risk level of the resources that do not comply with the rule. Valid values:
      // 
      // *   1: high
      // *   2: medium
      // *   3: low
      shared_ptr<int32_t> riskLevel_ {};
    };

    virtual bool empty() const override { return this->configRuleSummaries_ == nullptr
        && this->requestId_ == nullptr; };
    // configRuleSummaries Field Functions 
    bool hasConfigRuleSummaries() const { return this->configRuleSummaries_ != nullptr;};
    void deleteConfigRuleSummaries() { this->configRuleSummaries_ = nullptr;};
    inline const vector<GetAggregateConfigRuleSummaryByRiskLevelResponseBody::ConfigRuleSummaries> & getConfigRuleSummaries() const { DARABONBA_PTR_GET_CONST(configRuleSummaries_, vector<GetAggregateConfigRuleSummaryByRiskLevelResponseBody::ConfigRuleSummaries>) };
    inline vector<GetAggregateConfigRuleSummaryByRiskLevelResponseBody::ConfigRuleSummaries> getConfigRuleSummaries() { DARABONBA_PTR_GET(configRuleSummaries_, vector<GetAggregateConfigRuleSummaryByRiskLevelResponseBody::ConfigRuleSummaries>) };
    inline GetAggregateConfigRuleSummaryByRiskLevelResponseBody& setConfigRuleSummaries(const vector<GetAggregateConfigRuleSummaryByRiskLevelResponseBody::ConfigRuleSummaries> & configRuleSummaries) { DARABONBA_PTR_SET_VALUE(configRuleSummaries_, configRuleSummaries) };
    inline GetAggregateConfigRuleSummaryByRiskLevelResponseBody& setConfigRuleSummaries(vector<GetAggregateConfigRuleSummaryByRiskLevelResponseBody::ConfigRuleSummaries> && configRuleSummaries) { DARABONBA_PTR_SET_RVALUE(configRuleSummaries_, configRuleSummaries) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateConfigRuleSummaryByRiskLevelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The summary of compliance evaluation results by rule risk level.
    shared_ptr<vector<GetAggregateConfigRuleSummaryByRiskLevelResponseBody::ConfigRuleSummaries>> configRuleSummaries_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
