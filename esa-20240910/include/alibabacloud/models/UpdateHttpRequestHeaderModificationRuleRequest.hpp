// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHTTPREQUESTHEADERMODIFICATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHTTPREQUESTHEADERMODIFICATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateHttpRequestHeaderModificationRuleRequestRequestHeaderModification.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateHttpRequestHeaderModificationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHttpRequestHeaderModificationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(RequestHeaderModification, requestHeaderModification_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHttpRequestHeaderModificationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(RequestHeaderModification, requestHeaderModification_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateHttpRequestHeaderModificationRuleRequest() = default ;
    UpdateHttpRequestHeaderModificationRuleRequest(const UpdateHttpRequestHeaderModificationRuleRequest &) = default ;
    UpdateHttpRequestHeaderModificationRuleRequest(UpdateHttpRequestHeaderModificationRuleRequest &&) = default ;
    UpdateHttpRequestHeaderModificationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHttpRequestHeaderModificationRuleRequest() = default ;
    UpdateHttpRequestHeaderModificationRuleRequest& operator=(const UpdateHttpRequestHeaderModificationRuleRequest &) = default ;
    UpdateHttpRequestHeaderModificationRuleRequest& operator=(UpdateHttpRequestHeaderModificationRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configId_ != nullptr
        && this->requestHeaderModification_ != nullptr && this->rule_ != nullptr && this->ruleEnable_ != nullptr && this->ruleName_ != nullptr && this->sequence_ != nullptr
        && this->siteId_ != nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline UpdateHttpRequestHeaderModificationRuleRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // requestHeaderModification Field Functions 
    bool hasRequestHeaderModification() const { return this->requestHeaderModification_ != nullptr;};
    void deleteRequestHeaderModification() { this->requestHeaderModification_ = nullptr;};
    inline const vector<UpdateHttpRequestHeaderModificationRuleRequestRequestHeaderModification> & requestHeaderModification() const { DARABONBA_PTR_GET_CONST(requestHeaderModification_, vector<UpdateHttpRequestHeaderModificationRuleRequestRequestHeaderModification>) };
    inline vector<UpdateHttpRequestHeaderModificationRuleRequestRequestHeaderModification> requestHeaderModification() { DARABONBA_PTR_GET(requestHeaderModification_, vector<UpdateHttpRequestHeaderModificationRuleRequestRequestHeaderModification>) };
    inline UpdateHttpRequestHeaderModificationRuleRequest& setRequestHeaderModification(const vector<UpdateHttpRequestHeaderModificationRuleRequestRequestHeaderModification> & requestHeaderModification) { DARABONBA_PTR_SET_VALUE(requestHeaderModification_, requestHeaderModification) };
    inline UpdateHttpRequestHeaderModificationRuleRequest& setRequestHeaderModification(vector<UpdateHttpRequestHeaderModificationRuleRequestRequestHeaderModification> && requestHeaderModification) { DARABONBA_PTR_SET_RVALUE(requestHeaderModification_, requestHeaderModification) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline UpdateHttpRequestHeaderModificationRuleRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline UpdateHttpRequestHeaderModificationRuleRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateHttpRequestHeaderModificationRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline UpdateHttpRequestHeaderModificationRuleRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateHttpRequestHeaderModificationRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // Configuration ID. It can be obtained by calling the [ListHttpRequestHeaderModificationRules](https://help.aliyun.com/document_detail/2867483.html) API.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // Modify request headers, supporting add, delete, and modify operations.
    std::shared_ptr<vector<UpdateHttpRequestHeaderModificationRuleRequestRequestHeaderModification>> requestHeaderModification_ = nullptr;
    // Rule content, using conditional expressions to match user requests. This parameter is not required when adding a global configuration. There are two usage scenarios:
    // - To match all incoming requests: Set the value to true
    // - To match specific requests: Set the value to a custom expression, for example: (http.host eq \\"video.example.com\\")
    std::shared_ptr<string> rule_ = nullptr;
    // Rule switch. This parameter is not required when adding a global configuration. Possible values:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // Rule name. This parameter is not required when adding a global configuration.
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) API.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
