// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINTENTREQUEST_HPP_
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
  class UpdateIntentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIntentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentDefinition, intentDefinition_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIntentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentDefinition, intentDefinition_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
    };
    UpdateIntentRequest() = default ;
    UpdateIntentRequest(const UpdateIntentRequest &) = default ;
    UpdateIntentRequest(UpdateIntentRequest &&) = default ;
    UpdateIntentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIntentRequest() = default ;
    UpdateIntentRequest& operator=(const UpdateIntentRequest &) = default ;
    UpdateIntentRequest& operator=(UpdateIntentRequest &&) = default ;
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
        // Specifies whether the slot can contain an array of values.
        shared_ptr<bool> array_ {};
        // Specifies whether to enable data masking for the slot value.
        shared_ptr<bool> encrypt_ {};
        // Specifies whether the slot is interactive. If true, the chatbot prompts the user for a value if the user does not provide one.
        shared_ptr<bool> interactive_ {};
        // The name of the slot.
        // 
        // This parameter is required.
        shared_ptr<string> name_ {};
        // The ID of the slot.
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
      // The alias for the intent.
      shared_ptr<string> aliasName_ {};
      // The name of the intent.
      // 
      // This parameter is required.
      shared_ptr<string> intentName_ {};
      // A list of slot objects.
      shared_ptr<vector<IntentDefinition::SlotInfos>> slotInfos_ {};
    };

    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->instanceId_ == nullptr && this->intentDefinition_ == nullptr && this->intentId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline UpdateIntentRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateIntentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentDefinition Field Functions 
    bool hasIntentDefinition() const { return this->intentDefinition_ != nullptr;};
    void deleteIntentDefinition() { this->intentDefinition_ = nullptr;};
    inline const UpdateIntentRequest::IntentDefinition & getIntentDefinition() const { DARABONBA_PTR_GET_CONST(intentDefinition_, UpdateIntentRequest::IntentDefinition) };
    inline UpdateIntentRequest::IntentDefinition getIntentDefinition() { DARABONBA_PTR_GET(intentDefinition_, UpdateIntentRequest::IntentDefinition) };
    inline UpdateIntentRequest& setIntentDefinition(const UpdateIntentRequest::IntentDefinition & intentDefinition) { DARABONBA_PTR_SET_VALUE(intentDefinition_, intentDefinition) };
    inline UpdateIntentRequest& setIntentDefinition(UpdateIntentRequest::IntentDefinition && intentDefinition) { DARABONBA_PTR_SET_RVALUE(intentDefinition_, intentDefinition) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline UpdateIntentRequest& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


  protected:
    // The key for the business space. If you omit this parameter, the system uses the default business space. You can find this key on the Business Management page of your primary account.
    shared_ptr<string> agentKey_ {};
    // The ID of the chatbot instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The intent definition object.
    shared_ptr<UpdateIntentRequest::IntentDefinition> intentDefinition_ {};
    // The ID of the intent.
    // 
    // This parameter is required.
    shared_ptr<int64_t> intentId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
