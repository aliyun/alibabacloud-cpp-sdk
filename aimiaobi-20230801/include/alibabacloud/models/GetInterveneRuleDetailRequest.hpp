// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERVENERULEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINTERVENERULEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetInterveneRuleDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterveneRuleDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterveneRuleDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    GetInterveneRuleDetailRequest() = default ;
    GetInterveneRuleDetailRequest(const GetInterveneRuleDetailRequest &) = default ;
    GetInterveneRuleDetailRequest(GetInterveneRuleDetailRequest &&) = default ;
    GetInterveneRuleDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterveneRuleDetailRequest() = default ;
    GetInterveneRuleDetailRequest& operator=(const GetInterveneRuleDetailRequest &) = default ;
    GetInterveneRuleDetailRequest& operator=(GetInterveneRuleDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->ruleId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline GetInterveneRuleDetailRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline GetInterveneRuleDetailRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    shared_ptr<int64_t> ruleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
