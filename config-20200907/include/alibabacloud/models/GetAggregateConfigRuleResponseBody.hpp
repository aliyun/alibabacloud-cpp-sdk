// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAggregateConfigRuleResponseBodyConfigRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateConfigRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateConfigRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRule, configRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateConfigRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRule, configRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregateConfigRuleResponseBody() = default ;
    GetAggregateConfigRuleResponseBody(const GetAggregateConfigRuleResponseBody &) = default ;
    GetAggregateConfigRuleResponseBody(GetAggregateConfigRuleResponseBody &&) = default ;
    GetAggregateConfigRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateConfigRuleResponseBody() = default ;
    GetAggregateConfigRuleResponseBody& operator=(const GetAggregateConfigRuleResponseBody &) = default ;
    GetAggregateConfigRuleResponseBody& operator=(GetAggregateConfigRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRule_ == nullptr
        && return this->requestId_ == nullptr; };
    // configRule Field Functions 
    bool hasConfigRule() const { return this->configRule_ != nullptr;};
    void deleteConfigRule() { this->configRule_ = nullptr;};
    inline const GetAggregateConfigRuleResponseBodyConfigRule & configRule() const { DARABONBA_PTR_GET_CONST(configRule_, GetAggregateConfigRuleResponseBodyConfigRule) };
    inline GetAggregateConfigRuleResponseBodyConfigRule configRule() { DARABONBA_PTR_GET(configRule_, GetAggregateConfigRuleResponseBodyConfigRule) };
    inline GetAggregateConfigRuleResponseBody& setConfigRule(const GetAggregateConfigRuleResponseBodyConfigRule & configRule) { DARABONBA_PTR_SET_VALUE(configRule_, configRule) };
    inline GetAggregateConfigRuleResponseBody& setConfigRule(GetAggregateConfigRuleResponseBodyConfigRule && configRule) { DARABONBA_PTR_SET_RVALUE(configRule_, configRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateConfigRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the rules.
    std::shared_ptr<GetAggregateConfigRuleResponseBodyConfigRule> configRule_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
