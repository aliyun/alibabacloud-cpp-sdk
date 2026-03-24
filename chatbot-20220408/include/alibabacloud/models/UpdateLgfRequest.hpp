// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELGFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELGFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class UpdateLgfRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLgfRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LgfDefinition, lgfDefinition_);
      DARABONBA_PTR_TO_JSON(LgfId, lgfId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLgfRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LgfDefinition, lgfDefinition_);
      DARABONBA_PTR_FROM_JSON(LgfId, lgfId_);
    };
    UpdateLgfRequest() = default ;
    UpdateLgfRequest(const UpdateLgfRequest &) = default ;
    UpdateLgfRequest(UpdateLgfRequest &&) = default ;
    UpdateLgfRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLgfRequest() = default ;
    UpdateLgfRequest& operator=(const UpdateLgfRequest &) = default ;
    UpdateLgfRequest& operator=(UpdateLgfRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LgfDefinition : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LgfDefinition& obj) { 
        DARABONBA_PTR_TO_JSON(IntentId, intentId_);
        DARABONBA_PTR_TO_JSON(RuleText, ruleText_);
      };
      friend void from_json(const Darabonba::Json& j, LgfDefinition& obj) { 
        DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
        DARABONBA_PTR_FROM_JSON(RuleText, ruleText_);
      };
      LgfDefinition() = default ;
      LgfDefinition(const LgfDefinition &) = default ;
      LgfDefinition(LgfDefinition &&) = default ;
      LgfDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LgfDefinition() = default ;
      LgfDefinition& operator=(const LgfDefinition &) = default ;
      LgfDefinition& operator=(LgfDefinition &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->intentId_ == nullptr
        && this->ruleText_ == nullptr; };
      // intentId Field Functions 
      bool hasIntentId() const { return this->intentId_ != nullptr;};
      void deleteIntentId() { this->intentId_ = nullptr;};
      inline int64_t getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
      inline LgfDefinition& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


      // ruleText Field Functions 
      bool hasRuleText() const { return this->ruleText_ != nullptr;};
      void deleteRuleText() { this->ruleText_ = nullptr;};
      inline string getRuleText() const { DARABONBA_PTR_GET_DEFAULT(ruleText_, "") };
      inline LgfDefinition& setRuleText(string ruleText) { DARABONBA_PTR_SET_VALUE(ruleText_, ruleText) };


    protected:
      // This parameter is required.
      shared_ptr<int64_t> intentId_ {};
      // This parameter is required.
      shared_ptr<string> ruleText_ {};
    };

    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->instanceId_ == nullptr && this->lgfDefinition_ == nullptr && this->lgfId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline UpdateLgfRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateLgfRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lgfDefinition Field Functions 
    bool hasLgfDefinition() const { return this->lgfDefinition_ != nullptr;};
    void deleteLgfDefinition() { this->lgfDefinition_ = nullptr;};
    inline const UpdateLgfRequest::LgfDefinition & getLgfDefinition() const { DARABONBA_PTR_GET_CONST(lgfDefinition_, UpdateLgfRequest::LgfDefinition) };
    inline UpdateLgfRequest::LgfDefinition getLgfDefinition() { DARABONBA_PTR_GET(lgfDefinition_, UpdateLgfRequest::LgfDefinition) };
    inline UpdateLgfRequest& setLgfDefinition(const UpdateLgfRequest::LgfDefinition & lgfDefinition) { DARABONBA_PTR_SET_VALUE(lgfDefinition_, lgfDefinition) };
    inline UpdateLgfRequest& setLgfDefinition(UpdateLgfRequest::LgfDefinition && lgfDefinition) { DARABONBA_PTR_SET_RVALUE(lgfDefinition_, lgfDefinition) };


    // lgfId Field Functions 
    bool hasLgfId() const { return this->lgfId_ != nullptr;};
    void deleteLgfId() { this->lgfId_ = nullptr;};
    inline int64_t getLgfId() const { DARABONBA_PTR_GET_DEFAULT(lgfId_, 0L) };
    inline UpdateLgfRequest& setLgfId(int64_t lgfId) { DARABONBA_PTR_SET_VALUE(lgfId_, lgfId) };


  protected:
    shared_ptr<string> agentKey_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<UpdateLgfRequest::LgfDefinition> lgfDefinition_ {};
    // LGF ID
    // 
    // This parameter is required.
    shared_ptr<int64_t> lgfId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
