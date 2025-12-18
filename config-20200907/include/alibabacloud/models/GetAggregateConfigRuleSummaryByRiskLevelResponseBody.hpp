// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULESUMMARYBYRISKLEVELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULESUMMARYBYRISKLEVELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries.hpp>
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
    virtual bool empty() const override { return this->configRuleSummaries_ == nullptr
        && return this->requestId_ == nullptr; };
    // configRuleSummaries Field Functions 
    bool hasConfigRuleSummaries() const { return this->configRuleSummaries_ != nullptr;};
    void deleteConfigRuleSummaries() { this->configRuleSummaries_ = nullptr;};
    inline const vector<GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries> & configRuleSummaries() const { DARABONBA_PTR_GET_CONST(configRuleSummaries_, vector<GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries>) };
    inline vector<GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries> configRuleSummaries() { DARABONBA_PTR_GET(configRuleSummaries_, vector<GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries>) };
    inline GetAggregateConfigRuleSummaryByRiskLevelResponseBody& setConfigRuleSummaries(const vector<GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries> & configRuleSummaries) { DARABONBA_PTR_SET_VALUE(configRuleSummaries_, configRuleSummaries) };
    inline GetAggregateConfigRuleSummaryByRiskLevelResponseBody& setConfigRuleSummaries(vector<GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries> && configRuleSummaries) { DARABONBA_PTR_SET_RVALUE(configRuleSummaries_, configRuleSummaries) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateConfigRuleSummaryByRiskLevelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The summary of compliance evaluation results by rule risk level.
    std::shared_ptr<vector<GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries>> configRuleSummaries_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
