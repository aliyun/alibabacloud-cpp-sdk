// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONCUSTOMRULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONCUSTOMRULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class UpdateApplicationCustomRulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationCustomRulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Rules, rulesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationCustomRulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Rules, rulesShrink_);
    };
    UpdateApplicationCustomRulesShrinkRequest() = default ;
    UpdateApplicationCustomRulesShrinkRequest(const UpdateApplicationCustomRulesShrinkRequest &) = default ;
    UpdateApplicationCustomRulesShrinkRequest(UpdateApplicationCustomRulesShrinkRequest &&) = default ;
    UpdateApplicationCustomRulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationCustomRulesShrinkRequest() = default ;
    UpdateApplicationCustomRulesShrinkRequest& operator=(const UpdateApplicationCustomRulesShrinkRequest &) = default ;
    UpdateApplicationCustomRulesShrinkRequest& operator=(UpdateApplicationCustomRulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rulesShrink_ == nullptr; };
    // rulesShrink Field Functions 
    bool hasRulesShrink() const { return this->rulesShrink_ != nullptr;};
    void deleteRulesShrink() { this->rulesShrink_ = nullptr;};
    inline string getRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(rulesShrink_, "") };
    inline UpdateApplicationCustomRulesShrinkRequest& setRulesShrink(string rulesShrink) { DARABONBA_PTR_SET_VALUE(rulesShrink_, rulesShrink) };


  protected:
    // The list of custom application rules to be modified. You can specify up to 20 rules at a time. Rule IDs in the list must be unique.
    // 
    // This parameter is required.
    shared_ptr<string> rulesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
