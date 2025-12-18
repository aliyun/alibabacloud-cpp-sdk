// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetConfigRuleResponseBodyConfigRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetConfigRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRule, configRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRule, configRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetConfigRuleResponseBody() = default ;
    GetConfigRuleResponseBody(const GetConfigRuleResponseBody &) = default ;
    GetConfigRuleResponseBody(GetConfigRuleResponseBody &&) = default ;
    GetConfigRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigRuleResponseBody() = default ;
    GetConfigRuleResponseBody& operator=(const GetConfigRuleResponseBody &) = default ;
    GetConfigRuleResponseBody& operator=(GetConfigRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRule_ == nullptr
        && return this->requestId_ == nullptr; };
    // configRule Field Functions 
    bool hasConfigRule() const { return this->configRule_ != nullptr;};
    void deleteConfigRule() { this->configRule_ = nullptr;};
    inline const GetConfigRuleResponseBodyConfigRule & configRule() const { DARABONBA_PTR_GET_CONST(configRule_, GetConfigRuleResponseBodyConfigRule) };
    inline GetConfigRuleResponseBodyConfigRule configRule() { DARABONBA_PTR_GET(configRule_, GetConfigRuleResponseBodyConfigRule) };
    inline GetConfigRuleResponseBody& setConfigRule(const GetConfigRuleResponseBodyConfigRule & configRule) { DARABONBA_PTR_SET_VALUE(configRule_, configRule) };
    inline GetConfigRuleResponseBody& setConfigRule(GetConfigRuleResponseBodyConfigRule && configRule) { DARABONBA_PTR_SET_RVALUE(configRule_, configRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConfigRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the rule.
    std::shared_ptr<GetConfigRuleResponseBodyConfigRule> configRule_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
