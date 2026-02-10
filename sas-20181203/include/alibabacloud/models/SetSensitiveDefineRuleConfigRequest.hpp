// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSENSITIVEDEFINERULECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSENSITIVEDEFINERULECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SetSensitiveDefineRuleConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSensitiveDefineRuleConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(EnableNewRule, enableNewRule_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, SetSensitiveDefineRuleConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(EnableNewRule, enableNewRule_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    SetSensitiveDefineRuleConfigRequest() = default ;
    SetSensitiveDefineRuleConfigRequest(const SetSensitiveDefineRuleConfigRequest &) = default ;
    SetSensitiveDefineRuleConfigRequest(SetSensitiveDefineRuleConfigRequest &&) = default ;
    SetSensitiveDefineRuleConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSensitiveDefineRuleConfigRequest() = default ;
    SetSensitiveDefineRuleConfigRequest& operator=(const SetSensitiveDefineRuleConfigRequest &) = default ;
    SetSensitiveDefineRuleConfigRequest& operator=(SetSensitiveDefineRuleConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->enableNewRule_ == nullptr && this->source_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline SetSensitiveDefineRuleConfigRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // enableNewRule Field Functions 
    bool hasEnableNewRule() const { return this->enableNewRule_ != nullptr;};
    void deleteEnableNewRule() { this->enableNewRule_ = nullptr;};
    inline int32_t getEnableNewRule() const { DARABONBA_PTR_GET_DEFAULT(enableNewRule_, 0) };
    inline SetSensitiveDefineRuleConfigRequest& setEnableNewRule(int32_t enableNewRule) { DARABONBA_PTR_SET_VALUE(enableNewRule_, enableNewRule) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline SetSensitiveDefineRuleConfigRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The configurations of the custom check rule. The value is in the JSON format. Valid values of keys:
    // 
    // *   **classKey**: the category keyword of the check rule.
    // *   **ruleList**: the keyword of the check rule.
    shared_ptr<string> config_ {};
    // Specifies whether to enable the new ruled for automatic check only on agentless detection. Valid values:
    // 
    // *   **0**: no.
    // *   **1**: yes.
    shared_ptr<int32_t> enableNewRule_ {};
    // The source of the check rules. Valid values:
    // 
    // *   **image**: image.
    // *   **agentless**: agentless detection.
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
