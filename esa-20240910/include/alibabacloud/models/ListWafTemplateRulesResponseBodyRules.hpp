// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFTEMPLATERULESRESPONSEBODYRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFTEMPLATERULESRESPONSEBODYRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WafRuleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafTemplateRulesResponseBodyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafTemplateRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafTemplateRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListWafTemplateRulesResponseBodyRules() = default ;
    ListWafTemplateRulesResponseBodyRules(const ListWafTemplateRulesResponseBodyRules &) = default ;
    ListWafTemplateRulesResponseBodyRules(ListWafTemplateRulesResponseBodyRules &&) = default ;
    ListWafTemplateRulesResponseBodyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafTemplateRulesResponseBodyRules() = default ;
    ListWafTemplateRulesResponseBodyRules& operator=(const ListWafTemplateRulesResponseBodyRules &) = default ;
    ListWafTemplateRulesResponseBodyRules& operator=(ListWafTemplateRulesResponseBodyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->name_ != nullptr && this->phase_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::WafRuleConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::WafRuleConfig) };
    inline Models::WafRuleConfig config() { DARABONBA_PTR_GET(config_, Models::WafRuleConfig) };
    inline ListWafTemplateRulesResponseBodyRules& setConfig(const Models::WafRuleConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline ListWafTemplateRulesResponseBodyRules& setConfig(Models::WafRuleConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWafTemplateRulesResponseBodyRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline ListWafTemplateRulesResponseBodyRules& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListWafTemplateRulesResponseBodyRules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListWafTemplateRulesResponseBodyRules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Rule configuration.
    std::shared_ptr<Models::WafRuleConfig> config_ = nullptr;
    // Rule name.
    std::shared_ptr<string> name_ = nullptr;
    // WAF operation phase.
    std::shared_ptr<string> phase_ = nullptr;
    // Rule status.
    std::shared_ptr<string> status_ = nullptr;
    // Rule type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
