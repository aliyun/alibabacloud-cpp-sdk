// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAEGISCONTAINERPLUGINRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAEGISCONTAINERPLUGINRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAegisContainerPluginRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAegisContainerPluginRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAegisContainerPluginRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    GetAegisContainerPluginRuleRequest() = default ;
    GetAegisContainerPluginRuleRequest(const GetAegisContainerPluginRuleRequest &) = default ;
    GetAegisContainerPluginRuleRequest(GetAegisContainerPluginRuleRequest &&) = default ;
    GetAegisContainerPluginRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAegisContainerPluginRuleRequest() = default ;
    GetAegisContainerPluginRuleRequest& operator=(const GetAegisContainerPluginRuleRequest &) = default ;
    GetAegisContainerPluginRuleRequest& operator=(GetAegisContainerPluginRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->lang_ == nullptr && this->ruleType_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetAegisContainerPluginRuleRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetAegisContainerPluginRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline GetAegisContainerPluginRuleRequest& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The ID of the defense rule against container escapes.
    // 
    // >  You can call the [ListAegisContainerPluginRule](~~ListAegisContainerPluginRule~~) operation to obtain the ID.
    shared_ptr<string> id_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The type of the rule. Valid values:
    // 
    // *   **0**: custom rule
    // *   **1**: system rule
    shared_ptr<int32_t> ruleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
