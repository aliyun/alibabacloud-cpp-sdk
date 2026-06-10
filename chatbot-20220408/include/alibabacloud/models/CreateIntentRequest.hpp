// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CreateIntentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIntentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentDefinition, intentDefinition_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIntentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentDefinition, intentDefinition_);
    };
    CreateIntentRequest() = default ;
    CreateIntentRequest(const CreateIntentRequest &) = default ;
    CreateIntentRequest(CreateIntentRequest &&) = default ;
    CreateIntentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIntentRequest() = default ;
    CreateIntentRequest& operator=(const CreateIntentRequest &) = default ;
    CreateIntentRequest& operator=(CreateIntentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IntentDefinition : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IntentDefinition& obj) { 
        DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
        DARABONBA_PTR_TO_JSON(IntentName, intentName_);
        DARABONBA_PTR_TO_JSON(SlotInfos, slotInfos_);
      };
      friend void from_json(const Darabonba::Json& j, IntentDefinition& obj) { 
        DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
        DARABONBA_PTR_FROM_JSON(IntentName, intentName_);
        DARABONBA_PTR_FROM_JSON(SlotInfos, slotInfos_);
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
      class SlotInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlotInfos& obj) { 
          DARABONBA_PTR_TO_JSON(Array, array_);
          DARABONBA_PTR_TO_JSON(Encrypt, encrypt_);
          DARABONBA_PTR_TO_JSON(Interactive, interactive_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SlotId, slotId_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, SlotInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(Array, array_);
          DARABONBA_PTR_FROM_JSON(Encrypt, encrypt_);
          DARABONBA_PTR_FROM_JSON(Interactive, interactive_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SlotId, slotId_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        SlotInfos() = default ;
        SlotInfos(const SlotInfos &) = default ;
        SlotInfos(SlotInfos &&) = default ;
        SlotInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlotInfos() = default ;
        SlotInfos& operator=(const SlotInfos &) = default ;
        SlotInfos& operator=(SlotInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->array_ == nullptr
        && this->encrypt_ == nullptr && this->interactive_ == nullptr && this->name_ == nullptr && this->slotId_ == nullptr && this->value_ == nullptr; };
        // array Field Functions 
        bool hasArray() const { return this->array_ != nullptr;};
        void deleteArray() { this->array_ = nullptr;};
        inline bool getArray() const { DARABONBA_PTR_GET_DEFAULT(array_, false) };
        inline SlotInfos& setArray(bool array) { DARABONBA_PTR_SET_VALUE(array_, array) };


        // encrypt Field Functions 
        bool hasEncrypt() const { return this->encrypt_ != nullptr;};
        void deleteEncrypt() { this->encrypt_ = nullptr;};
        inline bool getEncrypt() const { DARABONBA_PTR_GET_DEFAULT(encrypt_, false) };
        inline SlotInfos& setEncrypt(bool encrypt) { DARABONBA_PTR_SET_VALUE(encrypt_, encrypt) };


        // interactive Field Functions 
        bool hasInteractive() const { return this->interactive_ != nullptr;};
        void deleteInteractive() { this->interactive_ = nullptr;};
        inline bool getInteractive() const { DARABONBA_PTR_GET_DEFAULT(interactive_, false) };
        inline SlotInfos& setInteractive(bool interactive) { DARABONBA_PTR_SET_VALUE(interactive_, interactive) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SlotInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // slotId Field Functions 
        bool hasSlotId() const { return this->slotId_ != nullptr;};
        void deleteSlotId() { this->slotId_ = nullptr;};
        inline string getSlotId() const { DARABONBA_PTR_GET_DEFAULT(slotId_, "") };
        inline SlotInfos& setSlotId(string slotId) { DARABONBA_PTR_SET_VALUE(slotId_, slotId) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline SlotInfos& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // Specifies whether the slot can have multiple values.
        shared_ptr<bool> array_ {};
        // Specifies whether to encrypt the slot value.
        shared_ptr<bool> encrypt_ {};
        // Specifies whether the slot is interactive.
        shared_ptr<bool> interactive_ {};
        // The slot name.
        // 
        // This parameter is required.
        shared_ptr<string> name_ {};
        // The slot ID.
        // 
        // This parameter is required.
        shared_ptr<string> slotId_ {};
        // The name of the associated entity.
        // 
        // This parameter is required.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->intentName_ == nullptr && this->slotInfos_ == nullptr; };
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


      // slotInfos Field Functions 
      bool hasSlotInfos() const { return this->slotInfos_ != nullptr;};
      void deleteSlotInfos() { this->slotInfos_ = nullptr;};
      inline const vector<IntentDefinition::SlotInfos> & getSlotInfos() const { DARABONBA_PTR_GET_CONST(slotInfos_, vector<IntentDefinition::SlotInfos>) };
      inline vector<IntentDefinition::SlotInfos> getSlotInfos() { DARABONBA_PTR_GET(slotInfos_, vector<IntentDefinition::SlotInfos>) };
      inline IntentDefinition& setSlotInfos(const vector<IntentDefinition::SlotInfos> & slotInfos) { DARABONBA_PTR_SET_VALUE(slotInfos_, slotInfos) };
      inline IntentDefinition& setSlotInfos(vector<IntentDefinition::SlotInfos> && slotInfos) { DARABONBA_PTR_SET_RVALUE(slotInfos_, slotInfos) };


    protected:
      // The intent alias.
      shared_ptr<string> aliasName_ {};
      // The intent name.
      // 
      // This parameter is required.
      shared_ptr<string> intentName_ {};
      // An array of objects, each defining a slot for the intent.
      shared_ptr<vector<IntentDefinition::SlotInfos>> slotInfos_ {};
    };

    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->instanceId_ == nullptr && this->intentDefinition_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline CreateIntentRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateIntentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentDefinition Field Functions 
    bool hasIntentDefinition() const { return this->intentDefinition_ != nullptr;};
    void deleteIntentDefinition() { this->intentDefinition_ = nullptr;};
    inline const CreateIntentRequest::IntentDefinition & getIntentDefinition() const { DARABONBA_PTR_GET_CONST(intentDefinition_, CreateIntentRequest::IntentDefinition) };
    inline CreateIntentRequest::IntentDefinition getIntentDefinition() { DARABONBA_PTR_GET(intentDefinition_, CreateIntentRequest::IntentDefinition) };
    inline CreateIntentRequest& setIntentDefinition(const CreateIntentRequest::IntentDefinition & intentDefinition) { DARABONBA_PTR_SET_VALUE(intentDefinition_, intentDefinition) };
    inline CreateIntentRequest& setIntentDefinition(CreateIntentRequest::IntentDefinition && intentDefinition) { DARABONBA_PTR_SET_RVALUE(intentDefinition_, intentDefinition) };


  protected:
    // The key of the business space. If you do not specify this parameter, the default business space is used. You can get the key from the business management page of your main account.
    shared_ptr<string> agentKey_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The intent definition.
    shared_ptr<CreateIntentRequest::IntentDefinition> intentDefinition_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
