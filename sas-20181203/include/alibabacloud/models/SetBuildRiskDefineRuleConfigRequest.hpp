// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETBUILDRISKDEFINERULECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETBUILDRISKDEFINERULECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SetBuildRiskDefineRuleConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetBuildRiskDefineRuleConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
    };
    friend void from_json(const Darabonba::Json& j, SetBuildRiskDefineRuleConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
    };
    SetBuildRiskDefineRuleConfigRequest() = default ;
    SetBuildRiskDefineRuleConfigRequest(const SetBuildRiskDefineRuleConfigRequest &) = default ;
    SetBuildRiskDefineRuleConfigRequest(SetBuildRiskDefineRuleConfigRequest &&) = default ;
    SetBuildRiskDefineRuleConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetBuildRiskDefineRuleConfigRequest() = default ;
    SetBuildRiskDefineRuleConfigRequest& operator=(const SetBuildRiskDefineRuleConfigRequest &) = default ;
    SetBuildRiskDefineRuleConfigRequest& operator=(SetBuildRiskDefineRuleConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline SetBuildRiskDefineRuleConfigRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


  protected:
    // The risk items in the risk scan configuration for image build instructions. Valid values:
    // - **classKey**: the ClassKey field value from RuleTree
    // - **ruleList**: the RuleKey field values under RuleList
    // > Call the [GetBuildRiskDefineRuleConfig](~~GetBuildRiskDefineRuleConfig~~) operation to obtain this parameter.
    shared_ptr<string> config_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
