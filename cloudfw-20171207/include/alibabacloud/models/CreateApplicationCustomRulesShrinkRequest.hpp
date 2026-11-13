// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONCUSTOMRULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONCUSTOMRULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateApplicationCustomRulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationCustomRulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationTemplateId, applicationTemplateId_);
      DARABONBA_PTR_TO_JSON(Rules, rulesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationCustomRulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationTemplateId, applicationTemplateId_);
      DARABONBA_PTR_FROM_JSON(Rules, rulesShrink_);
    };
    CreateApplicationCustomRulesShrinkRequest() = default ;
    CreateApplicationCustomRulesShrinkRequest(const CreateApplicationCustomRulesShrinkRequest &) = default ;
    CreateApplicationCustomRulesShrinkRequest(CreateApplicationCustomRulesShrinkRequest &&) = default ;
    CreateApplicationCustomRulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationCustomRulesShrinkRequest() = default ;
    CreateApplicationCustomRulesShrinkRequest& operator=(const CreateApplicationCustomRulesShrinkRequest &) = default ;
    CreateApplicationCustomRulesShrinkRequest& operator=(CreateApplicationCustomRulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationTemplateId_ == nullptr
        && this->rulesShrink_ == nullptr; };
    // applicationTemplateId Field Functions 
    bool hasApplicationTemplateId() const { return this->applicationTemplateId_ != nullptr;};
    void deleteApplicationTemplateId() { this->applicationTemplateId_ = nullptr;};
    inline string getApplicationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateId_, "") };
    inline CreateApplicationCustomRulesShrinkRequest& setApplicationTemplateId(string applicationTemplateId) { DARABONBA_PTR_SET_VALUE(applicationTemplateId_, applicationTemplateId) };


    // rulesShrink Field Functions 
    bool hasRulesShrink() const { return this->rulesShrink_ != nullptr;};
    void deleteRulesShrink() { this->rulesShrink_ = nullptr;};
    inline string getRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(rulesShrink_, "") };
    inline CreateApplicationCustomRulesShrinkRequest& setRulesShrink(string rulesShrink) { DARABONBA_PTR_SET_VALUE(rulesShrink_, rulesShrink) };


  protected:
    // The ID of the application template to which the custom rules belong. The template must exist within the current Alibaba Cloud account.
    // 
    // This parameter is required.
    shared_ptr<string> applicationTemplateId_ {};
    // The list of custom rules for the application. You can pass up to 100 rules at a time, and the total number of rules in the template after creation cannot exceed 100.
    // 
    // This parameter is required.
    shared_ptr<string> rulesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
