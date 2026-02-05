// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBEEBOTINTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBEEBOTINTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateBeebotIntentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBeebotIntentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentDefinition, intentDefinition_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBeebotIntentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentDefinition, intentDefinition_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    CreateBeebotIntentRequest() = default ;
    CreateBeebotIntentRequest(const CreateBeebotIntentRequest &) = default ;
    CreateBeebotIntentRequest(CreateBeebotIntentRequest &&) = default ;
    CreateBeebotIntentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBeebotIntentRequest() = default ;
    CreateBeebotIntentRequest& operator=(const CreateBeebotIntentRequest &) = default ;
    CreateBeebotIntentRequest& operator=(CreateBeebotIntentRequest &&) = default ;
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
        && this->intentDefinition_ == nullptr && this->scriptId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateBeebotIntentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentDefinition Field Functions 
    bool hasIntentDefinition() const { return this->intentDefinition_ != nullptr;};
    void deleteIntentDefinition() { this->intentDefinition_ = nullptr;};
    inline const CreateBeebotIntentRequest::IntentDefinition & getIntentDefinition() const { DARABONBA_PTR_GET_CONST(intentDefinition_, CreateBeebotIntentRequest::IntentDefinition) };
    inline CreateBeebotIntentRequest::IntentDefinition getIntentDefinition() { DARABONBA_PTR_GET(intentDefinition_, CreateBeebotIntentRequest::IntentDefinition) };
    inline CreateBeebotIntentRequest& setIntentDefinition(const CreateBeebotIntentRequest::IntentDefinition & intentDefinition) { DARABONBA_PTR_SET_VALUE(intentDefinition_, intentDefinition) };
    inline CreateBeebotIntentRequest& setIntentDefinition(CreateBeebotIntentRequest::IntentDefinition && intentDefinition) { DARABONBA_PTR_SET_RVALUE(intentDefinition_, intentDefinition) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateBeebotIntentRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<CreateBeebotIntentRequest::IntentDefinition> intentDefinition_ {};
    // This parameter is required.
    shared_ptr<string> scriptId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
