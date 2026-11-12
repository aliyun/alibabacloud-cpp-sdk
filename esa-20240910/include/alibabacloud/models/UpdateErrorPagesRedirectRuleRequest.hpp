// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEERRORPAGESREDIRECTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEERRORPAGESREDIRECTRULEREQUEST_HPP_
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
  class UpdateErrorPagesRedirectRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateErrorPagesRedirectRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ErrorPagesRedirect, errorPagesRedirect_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateErrorPagesRedirectRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ErrorPagesRedirect, errorPagesRedirect_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateErrorPagesRedirectRuleRequest() = default ;
    UpdateErrorPagesRedirectRuleRequest(const UpdateErrorPagesRedirectRuleRequest &) = default ;
    UpdateErrorPagesRedirectRuleRequest(UpdateErrorPagesRedirectRuleRequest &&) = default ;
    UpdateErrorPagesRedirectRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateErrorPagesRedirectRuleRequest() = default ;
    UpdateErrorPagesRedirectRuleRequest& operator=(const UpdateErrorPagesRedirectRuleRequest &) = default ;
    UpdateErrorPagesRedirectRuleRequest& operator=(UpdateErrorPagesRedirectRuleRequest &&) = default ;
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
      // 
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
      // 
      // This parameter is required.
      shared_ptr<string> statusCode_ {};
      // The target URL after the redirect.
      // 
      // This parameter is required.
      shared_ptr<string> targetURL_ {};
    };

    virtual bool empty() const override { return this->configId_ == nullptr
        && this->errorPagesRedirect_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr
        && this->siteId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline UpdateErrorPagesRedirectRuleRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // errorPagesRedirect Field Functions 
    bool hasErrorPagesRedirect() const { return this->errorPagesRedirect_ != nullptr;};
    void deleteErrorPagesRedirect() { this->errorPagesRedirect_ = nullptr;};
    inline const vector<UpdateErrorPagesRedirectRuleRequest::ErrorPagesRedirect> & getErrorPagesRedirect() const { DARABONBA_PTR_GET_CONST(errorPagesRedirect_, vector<UpdateErrorPagesRedirectRuleRequest::ErrorPagesRedirect>) };
    inline vector<UpdateErrorPagesRedirectRuleRequest::ErrorPagesRedirect> getErrorPagesRedirect() { DARABONBA_PTR_GET(errorPagesRedirect_, vector<UpdateErrorPagesRedirectRuleRequest::ErrorPagesRedirect>) };
    inline UpdateErrorPagesRedirectRuleRequest& setErrorPagesRedirect(const vector<UpdateErrorPagesRedirectRuleRequest::ErrorPagesRedirect> & errorPagesRedirect) { DARABONBA_PTR_SET_VALUE(errorPagesRedirect_, errorPagesRedirect) };
    inline UpdateErrorPagesRedirectRuleRequest& setErrorPagesRedirect(vector<UpdateErrorPagesRedirectRuleRequest::ErrorPagesRedirect> && errorPagesRedirect) { DARABONBA_PTR_SET_RVALUE(errorPagesRedirect_, errorPagesRedirect) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline UpdateErrorPagesRedirectRuleRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline UpdateErrorPagesRedirectRuleRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateErrorPagesRedirectRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline UpdateErrorPagesRedirectRuleRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateErrorPagesRedirectRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The configuration ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> configId_ {};
    // The error code redirect.
    shared_ptr<vector<UpdateErrorPagesRedirectRuleRequest::ErrorPagesRedirect>> errorPagesRedirect_ {};
    // The rule content, which uses conditional expressions to match user requests. You do not need to specify this parameter when adding a global configuration. This parameter applies to the following scenarios:
    // - Match all incoming requests: Set the value to true.
    // - Match specific requests: Set the value to a custom expression, such as (http.host eq \\"video.example.com\\").
    shared_ptr<string> rule_ {};
    // Specifies whether to enable the rule. You do not need to specify this parameter when adding a global configuration. Valid values:
    // - on: Enabled.
    // - off: Disabled.
    shared_ptr<string> ruleEnable_ {};
    // The rule name. You do not need to specify this parameter when adding a global configuration.
    shared_ptr<string> ruleName_ {};
    // The execution sequence of the rule. A smaller value indicates a higher priority.
    shared_ptr<int32_t> sequence_ {};
    // The site ID. You can obtain the site ID by calling the [ListSites](~~ListSites~~) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
