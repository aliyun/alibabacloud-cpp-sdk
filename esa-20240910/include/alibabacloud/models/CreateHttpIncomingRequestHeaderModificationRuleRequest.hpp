// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHTTPINCOMINGREQUESTHEADERMODIFICATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHTTPINCOMINGREQUESTHEADERMODIFICATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateHttpIncomingRequestHeaderModificationRuleRequestRequestHeaderModification.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateHttpIncomingRequestHeaderModificationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHttpIncomingRequestHeaderModificationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RequestHeaderModification, requestHeaderModification_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHttpIncomingRequestHeaderModificationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestHeaderModification, requestHeaderModification_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    CreateHttpIncomingRequestHeaderModificationRuleRequest() = default ;
    CreateHttpIncomingRequestHeaderModificationRuleRequest(const CreateHttpIncomingRequestHeaderModificationRuleRequest &) = default ;
    CreateHttpIncomingRequestHeaderModificationRuleRequest(CreateHttpIncomingRequestHeaderModificationRuleRequest &&) = default ;
    CreateHttpIncomingRequestHeaderModificationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHttpIncomingRequestHeaderModificationRuleRequest() = default ;
    CreateHttpIncomingRequestHeaderModificationRuleRequest& operator=(const CreateHttpIncomingRequestHeaderModificationRuleRequest &) = default ;
    CreateHttpIncomingRequestHeaderModificationRuleRequest& operator=(CreateHttpIncomingRequestHeaderModificationRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestHeaderModification_ == nullptr
        && return this->rule_ == nullptr && return this->ruleEnable_ == nullptr && return this->ruleName_ == nullptr && return this->sequence_ == nullptr && return this->siteId_ == nullptr
        && return this->siteVersion_ == nullptr; };
    // requestHeaderModification Field Functions 
    bool hasRequestHeaderModification() const { return this->requestHeaderModification_ != nullptr;};
    void deleteRequestHeaderModification() { this->requestHeaderModification_ = nullptr;};
    inline const vector<CreateHttpIncomingRequestHeaderModificationRuleRequestRequestHeaderModification> & requestHeaderModification() const { DARABONBA_PTR_GET_CONST(requestHeaderModification_, vector<CreateHttpIncomingRequestHeaderModificationRuleRequestRequestHeaderModification>) };
    inline vector<CreateHttpIncomingRequestHeaderModificationRuleRequestRequestHeaderModification> requestHeaderModification() { DARABONBA_PTR_GET(requestHeaderModification_, vector<CreateHttpIncomingRequestHeaderModificationRuleRequestRequestHeaderModification>) };
    inline CreateHttpIncomingRequestHeaderModificationRuleRequest& setRequestHeaderModification(const vector<CreateHttpIncomingRequestHeaderModificationRuleRequestRequestHeaderModification> & requestHeaderModification) { DARABONBA_PTR_SET_VALUE(requestHeaderModification_, requestHeaderModification) };
    inline CreateHttpIncomingRequestHeaderModificationRuleRequest& setRequestHeaderModification(vector<CreateHttpIncomingRequestHeaderModificationRuleRequestRequestHeaderModification> && requestHeaderModification) { DARABONBA_PTR_SET_RVALUE(requestHeaderModification_, requestHeaderModification) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline CreateHttpIncomingRequestHeaderModificationRuleRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline CreateHttpIncomingRequestHeaderModificationRuleRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateHttpIncomingRequestHeaderModificationRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline CreateHttpIncomingRequestHeaderModificationRuleRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateHttpIncomingRequestHeaderModificationRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline CreateHttpIncomingRequestHeaderModificationRuleRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // The configurations of modifying request headers. You can add, delete, or modify a request header.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateHttpIncomingRequestHeaderModificationRuleRequestRequestHeaderModification>> requestHeaderModification_ = nullptr;
    // The content of the rule. A conditional expression is used to match a user request. You do not need to set this parameter when you add global configuration. Use cases:
    // 
    // *   true: Match all incoming requests.
    // *   Set the value to a custom expression, for example: (http.host eq "video.example.com"): Match the specified request
    std::shared_ptr<string> rule_ = nullptr;
    // Specifies whether to enable the rule. Valid values: You do not need to set this parameter when you add global configuration. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // The rule name. You do not need to set this parameter when you add global configuration.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The order in which the rule is executed. A smaller value gives priority to the rule.
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The version number of the website configurations. You can use this parameter to specify a version of your website to apply the feature settings. By default, version 0 is used.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
