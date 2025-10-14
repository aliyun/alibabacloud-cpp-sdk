// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHTTPINCOMINGRESPONSEHEADERMODIFICATIONRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHTTPINCOMINGRESPONSEHEADERMODIFICATIONRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetHttpIncomingResponseHeaderModificationRuleResponseBodyResponseHeaderModification.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetHttpIncomingResponseHeaderModificationRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHttpIncomingResponseHeaderModificationRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResponseHeaderModification, responseHeaderModification_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetHttpIncomingResponseHeaderModificationRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResponseHeaderModification, responseHeaderModification_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    GetHttpIncomingResponseHeaderModificationRuleResponseBody() = default ;
    GetHttpIncomingResponseHeaderModificationRuleResponseBody(const GetHttpIncomingResponseHeaderModificationRuleResponseBody &) = default ;
    GetHttpIncomingResponseHeaderModificationRuleResponseBody(GetHttpIncomingResponseHeaderModificationRuleResponseBody &&) = default ;
    GetHttpIncomingResponseHeaderModificationRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHttpIncomingResponseHeaderModificationRuleResponseBody() = default ;
    GetHttpIncomingResponseHeaderModificationRuleResponseBody& operator=(const GetHttpIncomingResponseHeaderModificationRuleResponseBody &) = default ;
    GetHttpIncomingResponseHeaderModificationRuleResponseBody& operator=(GetHttpIncomingResponseHeaderModificationRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && return this->configType_ == nullptr && return this->requestId_ == nullptr && return this->responseHeaderModification_ == nullptr && return this->rule_ == nullptr && return this->ruleEnable_ == nullptr
        && return this->ruleName_ == nullptr && return this->sequence_ == nullptr && return this->siteVersion_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline GetHttpIncomingResponseHeaderModificationRuleResponseBody& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline GetHttpIncomingResponseHeaderModificationRuleResponseBody& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHttpIncomingResponseHeaderModificationRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // responseHeaderModification Field Functions 
    bool hasResponseHeaderModification() const { return this->responseHeaderModification_ != nullptr;};
    void deleteResponseHeaderModification() { this->responseHeaderModification_ = nullptr;};
    inline const vector<GetHttpIncomingResponseHeaderModificationRuleResponseBodyResponseHeaderModification> & responseHeaderModification() const { DARABONBA_PTR_GET_CONST(responseHeaderModification_, vector<GetHttpIncomingResponseHeaderModificationRuleResponseBodyResponseHeaderModification>) };
    inline vector<GetHttpIncomingResponseHeaderModificationRuleResponseBodyResponseHeaderModification> responseHeaderModification() { DARABONBA_PTR_GET(responseHeaderModification_, vector<GetHttpIncomingResponseHeaderModificationRuleResponseBodyResponseHeaderModification>) };
    inline GetHttpIncomingResponseHeaderModificationRuleResponseBody& setResponseHeaderModification(const vector<GetHttpIncomingResponseHeaderModificationRuleResponseBodyResponseHeaderModification> & responseHeaderModification) { DARABONBA_PTR_SET_VALUE(responseHeaderModification_, responseHeaderModification) };
    inline GetHttpIncomingResponseHeaderModificationRuleResponseBody& setResponseHeaderModification(vector<GetHttpIncomingResponseHeaderModificationRuleResponseBodyResponseHeaderModification> && responseHeaderModification) { DARABONBA_PTR_SET_RVALUE(responseHeaderModification_, responseHeaderModification) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline GetHttpIncomingResponseHeaderModificationRuleResponseBody& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline GetHttpIncomingResponseHeaderModificationRuleResponseBody& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetHttpIncomingResponseHeaderModificationRuleResponseBody& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline GetHttpIncomingResponseHeaderModificationRuleResponseBody& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline GetHttpIncomingResponseHeaderModificationRuleResponseBody& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // The configuration ID.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // The configuration type. Valid values:
    // 
    // *   global: global configurations.
    // *   rule: rule configurations.
    std::shared_ptr<string> configType_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The configurations of modifying response headers. You can add, delete, or modify a response header.
    std::shared_ptr<vector<GetHttpIncomingResponseHeaderModificationRuleResponseBodyResponseHeaderModification>> responseHeaderModification_ = nullptr;
    // The content of the rule. A conditional expression is used to match a user request. You do not need to set this parameter when you add global configuration. Use cases:
    // 
    // *   true: Match all incoming requests.
    // *   Set the value to a custom expression, for example, (http.host eq "video.example.com"): Match the specified request.
    std::shared_ptr<string> rule_ = nullptr;
    // Specifies whether to enable the rule. Valid values: You do not need to set this parameter when you add global configuration. Specifies whether to check the image used by the instance supports hot migration. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // The rule name. You do not need to set this parameter when you add global configuration.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The order in which the rule is executed. A smaller value gives priority to the rule.
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // The version number of the configurations. You can use this parameter to specify a version of your website to apply the feature settings. By default, version 0 is used.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
