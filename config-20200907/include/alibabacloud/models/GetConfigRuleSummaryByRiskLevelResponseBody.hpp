// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGRULESUMMARYBYRISKLEVELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGRULESUMMARYBYRISKLEVELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetConfigRuleSummaryByRiskLevelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigRuleSummaryByRiskLevelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleSummaries, configRuleSummaries_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigRuleSummaryByRiskLevelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleSummaries, configRuleSummaries_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetConfigRuleSummaryByRiskLevelResponseBody() = default ;
    GetConfigRuleSummaryByRiskLevelResponseBody(const GetConfigRuleSummaryByRiskLevelResponseBody &) = default ;
    GetConfigRuleSummaryByRiskLevelResponseBody(GetConfigRuleSummaryByRiskLevelResponseBody &&) = default ;
    GetConfigRuleSummaryByRiskLevelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigRuleSummaryByRiskLevelResponseBody() = default ;
    GetConfigRuleSummaryByRiskLevelResponseBody& operator=(const GetConfigRuleSummaryByRiskLevelResponseBody &) = default ;
    GetConfigRuleSummaryByRiskLevelResponseBody& operator=(GetConfigRuleSummaryByRiskLevelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRuleSummaries_ == nullptr
        && return this->requestId_ == nullptr; };
    // configRuleSummaries Field Functions 
    bool hasConfigRuleSummaries() const { return this->configRuleSummaries_ != nullptr;};
    void deleteConfigRuleSummaries() { this->configRuleSummaries_ = nullptr;};
    inline const vector<GetConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries> & configRuleSummaries() const { DARABONBA_PTR_GET_CONST(configRuleSummaries_, vector<GetConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries>) };
    inline vector<GetConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries> configRuleSummaries() { DARABONBA_PTR_GET(configRuleSummaries_, vector<GetConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries>) };
    inline GetConfigRuleSummaryByRiskLevelResponseBody& setConfigRuleSummaries(const vector<GetConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries> & configRuleSummaries) { DARABONBA_PTR_SET_VALUE(configRuleSummaries_, configRuleSummaries) };
    inline GetConfigRuleSummaryByRiskLevelResponseBody& setConfigRuleSummaries(vector<GetConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries> && configRuleSummaries) { DARABONBA_PTR_SET_RVALUE(configRuleSummaries_, configRuleSummaries) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConfigRuleSummaryByRiskLevelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The summary of compliance evaluation results by rule risk level.
    std::shared_ptr<vector<GetConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries>> configRuleSummaries_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
