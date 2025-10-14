// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHTTPRESPONSEHEADERMODIFICATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHTTPRESPONSEHEADERMODIFICATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateHttpResponseHeaderModificationRuleRequestResponseHeaderModification.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateHttpResponseHeaderModificationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHttpResponseHeaderModificationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResponseHeaderModification, responseHeaderModification_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHttpResponseHeaderModificationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResponseHeaderModification, responseHeaderModification_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    CreateHttpResponseHeaderModificationRuleRequest() = default ;
    CreateHttpResponseHeaderModificationRuleRequest(const CreateHttpResponseHeaderModificationRuleRequest &) = default ;
    CreateHttpResponseHeaderModificationRuleRequest(CreateHttpResponseHeaderModificationRuleRequest &&) = default ;
    CreateHttpResponseHeaderModificationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHttpResponseHeaderModificationRuleRequest() = default ;
    CreateHttpResponseHeaderModificationRuleRequest& operator=(const CreateHttpResponseHeaderModificationRuleRequest &) = default ;
    CreateHttpResponseHeaderModificationRuleRequest& operator=(CreateHttpResponseHeaderModificationRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->responseHeaderModification_ == nullptr
        && return this->rule_ == nullptr && return this->ruleEnable_ == nullptr && return this->ruleName_ == nullptr && return this->sequence_ == nullptr && return this->siteId_ == nullptr
        && return this->siteVersion_ == nullptr; };
    // responseHeaderModification Field Functions 
    bool hasResponseHeaderModification() const { return this->responseHeaderModification_ != nullptr;};
    void deleteResponseHeaderModification() { this->responseHeaderModification_ = nullptr;};
    inline const vector<CreateHttpResponseHeaderModificationRuleRequestResponseHeaderModification> & responseHeaderModification() const { DARABONBA_PTR_GET_CONST(responseHeaderModification_, vector<CreateHttpResponseHeaderModificationRuleRequestResponseHeaderModification>) };
    inline vector<CreateHttpResponseHeaderModificationRuleRequestResponseHeaderModification> responseHeaderModification() { DARABONBA_PTR_GET(responseHeaderModification_, vector<CreateHttpResponseHeaderModificationRuleRequestResponseHeaderModification>) };
    inline CreateHttpResponseHeaderModificationRuleRequest& setResponseHeaderModification(const vector<CreateHttpResponseHeaderModificationRuleRequestResponseHeaderModification> & responseHeaderModification) { DARABONBA_PTR_SET_VALUE(responseHeaderModification_, responseHeaderModification) };
    inline CreateHttpResponseHeaderModificationRuleRequest& setResponseHeaderModification(vector<CreateHttpResponseHeaderModificationRuleRequestResponseHeaderModification> && responseHeaderModification) { DARABONBA_PTR_SET_RVALUE(responseHeaderModification_, responseHeaderModification) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline CreateHttpResponseHeaderModificationRuleRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline CreateHttpResponseHeaderModificationRuleRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateHttpResponseHeaderModificationRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline CreateHttpResponseHeaderModificationRuleRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateHttpResponseHeaderModificationRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline CreateHttpResponseHeaderModificationRuleRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // Modify response headers, supporting add, delete, and modify operations.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateHttpResponseHeaderModificationRuleRequestResponseHeaderModification>> responseHeaderModification_ = nullptr;
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
    // Site ID. You can obtain this by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) API.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // Version number of the site configuration. For sites with version management enabled, you can use this parameter to specify the version of the site where the configuration will take effect. The default is version 0.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
