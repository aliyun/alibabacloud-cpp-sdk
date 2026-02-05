// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBEEBOTINTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBEEBOTINTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyBeebotIntentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBeebotIntentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentDefinition, intentDefinition_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBeebotIntentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentDefinition, intentDefinition_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    ModifyBeebotIntentRequest() = default ;
    ModifyBeebotIntentRequest(const ModifyBeebotIntentRequest &) = default ;
    ModifyBeebotIntentRequest(ModifyBeebotIntentRequest &&) = default ;
    ModifyBeebotIntentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBeebotIntentRequest() = default ;
    ModifyBeebotIntentRequest& operator=(const ModifyBeebotIntentRequest &) = default ;
    ModifyBeebotIntentRequest& operator=(ModifyBeebotIntentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IntentDefinition : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IntentDefinition& obj) { 
        DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
        DARABONBA_PTR_TO_JSON(IntentName, intentName_);
      };
      friend void from_json(const Darabonba::Json& j, IntentDefinition& obj) { 
        DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
        DARABONBA_PTR_FROM_JSON(IntentName, intentName_);
      };
      IntentDefinition() = default ;
      IntentDefinition(const IntentDefinition &) = default ;
      IntentDefinition(IntentDefinition &&) = default ;
      IntentDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IntentDefinition() = default ;
      IntentDefinition& operator=(const IntentDefinition &) = default ;
      IntentDefinition& operator=(IntentDefinition &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->intentName_ == nullptr; };
      // aliasName Field Functions 
      bool hasAliasName() const { return this->aliasName_ != nullptr;};
      void deleteAliasName() { this->aliasName_ = nullptr;};
      inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
      inline IntentDefinition& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


      // intentName Field Functions 
      bool hasIntentName() const { return this->intentName_ != nullptr;};
      void deleteIntentName() { this->intentName_ = nullptr;};
      inline string getIntentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
      inline IntentDefinition& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


    protected:
      shared_ptr<string> aliasName_ {};
      // This parameter is required.
      shared_ptr<string> intentName_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->intentDefinition_ == nullptr && this->intentId_ == nullptr && this->scriptId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyBeebotIntentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentDefinition Field Functions 
    bool hasIntentDefinition() const { return this->intentDefinition_ != nullptr;};
    void deleteIntentDefinition() { this->intentDefinition_ = nullptr;};
    inline const ModifyBeebotIntentRequest::IntentDefinition & getIntentDefinition() const { DARABONBA_PTR_GET_CONST(intentDefinition_, ModifyBeebotIntentRequest::IntentDefinition) };
    inline ModifyBeebotIntentRequest::IntentDefinition getIntentDefinition() { DARABONBA_PTR_GET(intentDefinition_, ModifyBeebotIntentRequest::IntentDefinition) };
    inline ModifyBeebotIntentRequest& setIntentDefinition(const ModifyBeebotIntentRequest::IntentDefinition & intentDefinition) { DARABONBA_PTR_SET_VALUE(intentDefinition_, intentDefinition) };
    inline ModifyBeebotIntentRequest& setIntentDefinition(ModifyBeebotIntentRequest::IntentDefinition && intentDefinition) { DARABONBA_PTR_SET_RVALUE(intentDefinition_, intentDefinition) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline ModifyBeebotIntentRequest& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ModifyBeebotIntentRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<ModifyBeebotIntentRequest::IntentDefinition> intentDefinition_ {};
    // This parameter is required.
    shared_ptr<int64_t> intentId_ {};
    // This parameter is required.
    shared_ptr<string> scriptId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
