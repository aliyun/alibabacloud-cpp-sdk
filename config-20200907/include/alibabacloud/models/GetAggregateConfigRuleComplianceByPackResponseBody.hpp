// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULECOMPLIANCEBYPACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULECOMPLIANCEBYPACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateConfigRuleComplianceByPackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateConfigRuleComplianceByPackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleComplianceResult, configRuleComplianceResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateConfigRuleComplianceByPackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleComplianceResult, configRuleComplianceResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregateConfigRuleComplianceByPackResponseBody() = default ;
    GetAggregateConfigRuleComplianceByPackResponseBody(const GetAggregateConfigRuleComplianceByPackResponseBody &) = default ;
    GetAggregateConfigRuleComplianceByPackResponseBody(GetAggregateConfigRuleComplianceByPackResponseBody &&) = default ;
    GetAggregateConfigRuleComplianceByPackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateConfigRuleComplianceByPackResponseBody() = default ;
    GetAggregateConfigRuleComplianceByPackResponseBody& operator=(const GetAggregateConfigRuleComplianceByPackResponseBody &) = default ;
    GetAggregateConfigRuleComplianceByPackResponseBody& operator=(GetAggregateConfigRuleComplianceByPackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRuleComplianceResult_ == nullptr
        && return this->requestId_ == nullptr; };
    // configRuleComplianceResult Field Functions 
    bool hasConfigRuleComplianceResult() const { return this->configRuleComplianceResult_ != nullptr;};
    void deleteConfigRuleComplianceResult() { this->configRuleComplianceResult_ = nullptr;};
    inline const GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult & configRuleComplianceResult() const { DARABONBA_PTR_GET_CONST(configRuleComplianceResult_, GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult) };
    inline GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult configRuleComplianceResult() { DARABONBA_PTR_GET(configRuleComplianceResult_, GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult) };
    inline GetAggregateConfigRuleComplianceByPackResponseBody& setConfigRuleComplianceResult(const GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult & configRuleComplianceResult) { DARABONBA_PTR_SET_VALUE(configRuleComplianceResult_, configRuleComplianceResult) };
    inline GetAggregateConfigRuleComplianceByPackResponseBody& setConfigRuleComplianceResult(GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult && configRuleComplianceResult) { DARABONBA_PTR_SET_RVALUE(configRuleComplianceResult_, configRuleComplianceResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateConfigRuleComplianceByPackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The compliance evaluation results that are returned by rules in the compliance package.
    std::shared_ptr<GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult> configRuleComplianceResult_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
