// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBEEBOTINTENTLGFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBEEBOTINTENTLGFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyBeebotIntentLgfRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBeebotIntentLgfRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LgfDefinition, lgfDefinition_);
      DARABONBA_PTR_TO_JSON(LgfId, lgfId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBeebotIntentLgfRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LgfDefinition, lgfDefinition_);
      DARABONBA_PTR_FROM_JSON(LgfId, lgfId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    ModifyBeebotIntentLgfRequest() = default ;
    ModifyBeebotIntentLgfRequest(const ModifyBeebotIntentLgfRequest &) = default ;
    ModifyBeebotIntentLgfRequest(ModifyBeebotIntentLgfRequest &&) = default ;
    ModifyBeebotIntentLgfRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBeebotIntentLgfRequest() = default ;
    ModifyBeebotIntentLgfRequest& operator=(const ModifyBeebotIntentLgfRequest &) = default ;
    ModifyBeebotIntentLgfRequest& operator=(ModifyBeebotIntentLgfRequest &&) = default ;
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

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->lgfDefinition_ == nullptr && this->lgfId_ == nullptr && this->scriptId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyBeebotIntentLgfRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lgfDefinition Field Functions 
    bool hasLgfDefinition() const { return this->lgfDefinition_ != nullptr;};
    void deleteLgfDefinition() { this->lgfDefinition_ = nullptr;};
    inline const ModifyBeebotIntentLgfRequest::LgfDefinition & getLgfDefinition() const { DARABONBA_PTR_GET_CONST(lgfDefinition_, ModifyBeebotIntentLgfRequest::LgfDefinition) };
    inline ModifyBeebotIntentLgfRequest::LgfDefinition getLgfDefinition() { DARABONBA_PTR_GET(lgfDefinition_, ModifyBeebotIntentLgfRequest::LgfDefinition) };
    inline ModifyBeebotIntentLgfRequest& setLgfDefinition(const ModifyBeebotIntentLgfRequest::LgfDefinition & lgfDefinition) { DARABONBA_PTR_SET_VALUE(lgfDefinition_, lgfDefinition) };
    inline ModifyBeebotIntentLgfRequest& setLgfDefinition(ModifyBeebotIntentLgfRequest::LgfDefinition && lgfDefinition) { DARABONBA_PTR_SET_RVALUE(lgfDefinition_, lgfDefinition) };


    // lgfId Field Functions 
    bool hasLgfId() const { return this->lgfId_ != nullptr;};
    void deleteLgfId() { this->lgfId_ = nullptr;};
    inline int64_t getLgfId() const { DARABONBA_PTR_GET_DEFAULT(lgfId_, 0L) };
    inline ModifyBeebotIntentLgfRequest& setLgfId(int64_t lgfId) { DARABONBA_PTR_SET_VALUE(lgfId_, lgfId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ModifyBeebotIntentLgfRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<ModifyBeebotIntentLgfRequest::LgfDefinition> lgfDefinition_ {};
    // This parameter is required.
    shared_ptr<int64_t> lgfId_ {};
    // This parameter is required.
    shared_ptr<string> scriptId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
