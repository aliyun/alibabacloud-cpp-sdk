// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTAINERPLUGINRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTAINERPLUGINRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteContainerPluginRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContainerPluginRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContainerPluginRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    DeleteContainerPluginRuleRequest() = default ;
    DeleteContainerPluginRuleRequest(const DeleteContainerPluginRuleRequest &) = default ;
    DeleteContainerPluginRuleRequest(DeleteContainerPluginRuleRequest &&) = default ;
    DeleteContainerPluginRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteContainerPluginRuleRequest() = default ;
    DeleteContainerPluginRuleRequest& operator=(const DeleteContainerPluginRuleRequest &) = default ;
    DeleteContainerPluginRuleRequest& operator=(DeleteContainerPluginRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->ruleId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteContainerPluginRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int32_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0) };
    inline DeleteContainerPluginRuleRequest& setRuleId(int32_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The language of the content within the request and the response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The ID of the rule. You can call the addContainerWebDefenseRule operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<int32_t> ruleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
