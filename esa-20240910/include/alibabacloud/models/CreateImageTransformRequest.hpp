// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGETRANSFORMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGETRANSFORMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateImageTransformRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageTransformRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageTransformRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    CreateImageTransformRequest() = default ;
    CreateImageTransformRequest(const CreateImageTransformRequest &) = default ;
    CreateImageTransformRequest(CreateImageTransformRequest &&) = default ;
    CreateImageTransformRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageTransformRequest() = default ;
    CreateImageTransformRequest& operator=(const CreateImageTransformRequest &) = default ;
    CreateImageTransformRequest& operator=(CreateImageTransformRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr
        && this->rule_ != nullptr && this->ruleEnable_ != nullptr && this->ruleName_ != nullptr && this->sequence_ != nullptr && this->siteId_ != nullptr
        && this->siteVersion_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline CreateImageTransformRequest& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline CreateImageTransformRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline CreateImageTransformRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateImageTransformRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline CreateImageTransformRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateImageTransformRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline CreateImageTransformRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // Indicates whether image transformation is enabled. Possible values:
    // - on: Enabled.
    // - off: Disabled.
    std::shared_ptr<string> enable_ = nullptr;
    // Rule content, using conditional expressions to match user requests. This parameter is not required when adding a global configuration. There are two usage scenarios:
    // - To match all incoming requests: Set the value to true
    // - To match specific requests: Set the value to a custom expression, for example: (http.host eq "video.example.com")
    std::shared_ptr<string> rule_ = nullptr;
    // Rule switch. This parameter is not required when adding a global configuration. Possible values:
    // - on: Enabled.
    // - off: Disabled.
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // Rule name. This parameter is not required when adding a global configuration.
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The version number of the site configuration. For sites with version management enabled, you can use this parameter to specify the effective version of the site configuration, defaulting to version 0.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
