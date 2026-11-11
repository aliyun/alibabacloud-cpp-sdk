// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERRORPAGESREDIRECTRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETERRORPAGESREDIRECTRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetErrorPagesRedirectRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErrorPagesRedirectRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(ErrorPagesRedirect, errorPagesRedirect_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetErrorPagesRedirectRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(ErrorPagesRedirect, errorPagesRedirect_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    GetErrorPagesRedirectRuleResponseBody() = default ;
    GetErrorPagesRedirectRuleResponseBody(const GetErrorPagesRedirectRuleResponseBody &) = default ;
    GetErrorPagesRedirectRuleResponseBody(GetErrorPagesRedirectRuleResponseBody &&) = default ;
    GetErrorPagesRedirectRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErrorPagesRedirectRuleResponseBody() = default ;
    GetErrorPagesRedirectRuleResponseBody& operator=(const GetErrorPagesRedirectRuleResponseBody &) = default ;
    GetErrorPagesRedirectRuleResponseBody& operator=(GetErrorPagesRedirectRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ErrorPagesRedirect : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ErrorPagesRedirect& obj) { 
        DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
        DARABONBA_PTR_TO_JSON(TargetURL, targetURL_);
      };
      friend void from_json(const Darabonba::Json& j, ErrorPagesRedirect& obj) { 
        DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
        DARABONBA_PTR_FROM_JSON(TargetURL, targetURL_);
      };
      ErrorPagesRedirect() = default ;
      ErrorPagesRedirect(const ErrorPagesRedirect &) = default ;
      ErrorPagesRedirect(ErrorPagesRedirect &&) = default ;
      ErrorPagesRedirect(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ErrorPagesRedirect() = default ;
      ErrorPagesRedirect& operator=(const ErrorPagesRedirect &) = default ;
      ErrorPagesRedirect& operator=(ErrorPagesRedirect &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->statusCode_ == nullptr
        && this->targetURL_ == nullptr; };
      // statusCode Field Functions 
      bool hasStatusCode() const { return this->statusCode_ != nullptr;};
      void deleteStatusCode() { this->statusCode_ = nullptr;};
      inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
      inline ErrorPagesRedirect& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


      // targetURL Field Functions 
      bool hasTargetURL() const { return this->targetURL_ != nullptr;};
      void deleteTargetURL() { this->targetURL_ = nullptr;};
      inline string getTargetURL() const { DARABONBA_PTR_GET_DEFAULT(targetURL_, "") };
      inline ErrorPagesRedirect& setTargetURL(string targetURL) { DARABONBA_PTR_SET_VALUE(targetURL_, targetURL) };


    protected:
      // The response status code used by the node when responding to the client with a redirect address. Valid values:
      // - 400
      // - 403
      // - 404
      // - 405
      // - 414
      // - 416
      // - 500
      // - 501
      // - 502
      // - 503
      // - 504
      shared_ptr<string> statusCode_ {};
      // The target URL after the redirect.
      shared_ptr<string> targetURL_ {};
    };

    virtual bool empty() const override { return this->configId_ == nullptr
        && this->configType_ == nullptr && this->errorPagesRedirect_ == nullptr && this->requestId_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr
        && this->ruleName_ == nullptr && this->sequence_ == nullptr && this->siteVersion_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline GetErrorPagesRedirectRuleResponseBody& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline GetErrorPagesRedirectRuleResponseBody& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // errorPagesRedirect Field Functions 
    bool hasErrorPagesRedirect() const { return this->errorPagesRedirect_ != nullptr;};
    void deleteErrorPagesRedirect() { this->errorPagesRedirect_ = nullptr;};
    inline const vector<GetErrorPagesRedirectRuleResponseBody::ErrorPagesRedirect> & getErrorPagesRedirect() const { DARABONBA_PTR_GET_CONST(errorPagesRedirect_, vector<GetErrorPagesRedirectRuleResponseBody::ErrorPagesRedirect>) };
    inline vector<GetErrorPagesRedirectRuleResponseBody::ErrorPagesRedirect> getErrorPagesRedirect() { DARABONBA_PTR_GET(errorPagesRedirect_, vector<GetErrorPagesRedirectRuleResponseBody::ErrorPagesRedirect>) };
    inline GetErrorPagesRedirectRuleResponseBody& setErrorPagesRedirect(const vector<GetErrorPagesRedirectRuleResponseBody::ErrorPagesRedirect> & errorPagesRedirect) { DARABONBA_PTR_SET_VALUE(errorPagesRedirect_, errorPagesRedirect) };
    inline GetErrorPagesRedirectRuleResponseBody& setErrorPagesRedirect(vector<GetErrorPagesRedirectRuleResponseBody::ErrorPagesRedirect> && errorPagesRedirect) { DARABONBA_PTR_SET_RVALUE(errorPagesRedirect_, errorPagesRedirect) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetErrorPagesRedirectRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline GetErrorPagesRedirectRuleResponseBody& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline GetErrorPagesRedirectRuleResponseBody& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetErrorPagesRedirectRuleResponseBody& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline GetErrorPagesRedirectRuleResponseBody& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline GetErrorPagesRedirectRuleResponseBody& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // The ID of the configuration. You can call the [ListCompressionRules](https://help.aliyun.com/document_detail/2867498.html) operation to obtain the configuration ID.
    shared_ptr<int64_t> configId_ {};
    // The configuration type. You can use this parameter to query global configurations or rule configurations. Valid values:
    // - global: queries global configurations
    // - rule: queries rule configurations
    // 
    // This parameter is optional. If you do not specify this parameter, global and rule configurations are not distinguished. This parameter takes effect only when the functionName parameter is specified.
    shared_ptr<string> configType_ {};
    // The error code redirect.
    shared_ptr<vector<GetErrorPagesRedirectRuleResponseBody::ErrorPagesRedirect>> errorPagesRedirect_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The rule content, which uses conditional expressions to match user requests. You do not need to set this parameter when adding a global configuration. Two scenarios are supported:
    // - Match all incoming requests: Set the value to true.
    // - Match specific requests: Set the value to a custom expression, such as (http.host eq \\"video.example.com\\").
    shared_ptr<string> rule_ {};
    // The rule switch. You do not need to set this parameter when adding a global configuration. Valid values:
    // - on: enables the rule
    // - off: disables the rule
    shared_ptr<string> ruleEnable_ {};
    // The name of the rule. You do not need to set this parameter when adding a global configuration.
    shared_ptr<string> ruleName_ {};
    // The execution sequence of the rule. A smaller value indicates a higher priority.
    shared_ptr<int32_t> sequence_ {};
    // The version number of the site configuration. For sites with configuration version management enabled, you can use this parameter to specify the site version for which the configuration takes effect. Default value: 0.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
