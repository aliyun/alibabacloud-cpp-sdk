// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWEBFILTERRULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWEBFILTERRULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateWebFilterRulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWebFilterRulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Rules, rulesShrink_);
      DARABONBA_PTR_TO_JSON(WebFilterTemplateId, webFilterTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWebFilterRulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Rules, rulesShrink_);
      DARABONBA_PTR_FROM_JSON(WebFilterTemplateId, webFilterTemplateId_);
    };
    CreateWebFilterRulesShrinkRequest() = default ;
    CreateWebFilterRulesShrinkRequest(const CreateWebFilterRulesShrinkRequest &) = default ;
    CreateWebFilterRulesShrinkRequest(CreateWebFilterRulesShrinkRequest &&) = default ;
    CreateWebFilterRulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWebFilterRulesShrinkRequest() = default ;
    CreateWebFilterRulesShrinkRequest& operator=(const CreateWebFilterRulesShrinkRequest &) = default ;
    CreateWebFilterRulesShrinkRequest& operator=(CreateWebFilterRulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rulesShrink_ == nullptr
        && this->webFilterTemplateId_ == nullptr; };
    // rulesShrink Field Functions 
    bool hasRulesShrink() const { return this->rulesShrink_ != nullptr;};
    void deleteRulesShrink() { this->rulesShrink_ = nullptr;};
    inline string getRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(rulesShrink_, "") };
    inline CreateWebFilterRulesShrinkRequest& setRulesShrink(string rulesShrink) { DARABONBA_PTR_SET_VALUE(rulesShrink_, rulesShrink) };


    // webFilterTemplateId Field Functions 
    bool hasWebFilterTemplateId() const { return this->webFilterTemplateId_ != nullptr;};
    void deleteWebFilterTemplateId() { this->webFilterTemplateId_ = nullptr;};
    inline string getWebFilterTemplateId() const { DARABONBA_PTR_GET_DEFAULT(webFilterTemplateId_, "") };
    inline CreateWebFilterRulesShrinkRequest& setWebFilterTemplateId(string webFilterTemplateId) { DARABONBA_PTR_SET_VALUE(webFilterTemplateId_, webFilterTemplateId) };


  protected:
    // The list of web filtering rules. You can specify a maximum of 100 rules at a time, and the total number of rules in the template after creation cannot exceed 100.
    // 
    // This parameter is required.
    shared_ptr<string> rulesShrink_ {};
    // The ID of the web filtering template to which the web filtering rules belong. The template must exist under the current Alibaba Cloud account.
    // 
    // This parameter is required.
    shared_ptr<string> webFilterTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
