// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTINTERVENERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTINTERVENERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InsertInterveneRuleRequestInterveneRuleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class InsertInterveneRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertInterveneRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InterveneRuleConfig, interveneRuleConfig_);
    };
    friend void from_json(const Darabonba::Json& j, InsertInterveneRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InterveneRuleConfig, interveneRuleConfig_);
    };
    InsertInterveneRuleRequest() = default ;
    InsertInterveneRuleRequest(const InsertInterveneRuleRequest &) = default ;
    InsertInterveneRuleRequest(InsertInterveneRuleRequest &&) = default ;
    InsertInterveneRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertInterveneRuleRequest() = default ;
    InsertInterveneRuleRequest& operator=(const InsertInterveneRuleRequest &) = default ;
    InsertInterveneRuleRequest& operator=(InsertInterveneRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->interveneRuleConfig_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline InsertInterveneRuleRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // interveneRuleConfig Field Functions 
    bool hasInterveneRuleConfig() const { return this->interveneRuleConfig_ != nullptr;};
    void deleteInterveneRuleConfig() { this->interveneRuleConfig_ = nullptr;};
    inline const InsertInterveneRuleRequestInterveneRuleConfig & interveneRuleConfig() const { DARABONBA_PTR_GET_CONST(interveneRuleConfig_, InsertInterveneRuleRequestInterveneRuleConfig) };
    inline InsertInterveneRuleRequestInterveneRuleConfig interveneRuleConfig() { DARABONBA_PTR_GET(interveneRuleConfig_, InsertInterveneRuleRequestInterveneRuleConfig) };
    inline InsertInterveneRuleRequest& setInterveneRuleConfig(const InsertInterveneRuleRequestInterveneRuleConfig & interveneRuleConfig) { DARABONBA_PTR_SET_VALUE(interveneRuleConfig_, interveneRuleConfig) };
    inline InsertInterveneRuleRequest& setInterveneRuleConfig(InsertInterveneRuleRequestInterveneRuleConfig && interveneRuleConfig) { DARABONBA_PTR_SET_RVALUE(interveneRuleConfig_, interveneRuleConfig) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<InsertInterveneRuleRequestInterveneRuleConfig> interveneRuleConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
