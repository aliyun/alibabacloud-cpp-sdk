// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYGREETINGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYGREETINGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class ModifyGreetingConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyGreetingConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GreetingWords, greetingWords_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentTrigger, intentTrigger_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyGreetingConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GreetingWords, greetingWords_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentTrigger, intentTrigger_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    ModifyGreetingConfigRequest() = default ;
    ModifyGreetingConfigRequest(const ModifyGreetingConfigRequest &) = default ;
    ModifyGreetingConfigRequest(ModifyGreetingConfigRequest &&) = default ;
    ModifyGreetingConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyGreetingConfigRequest() = default ;
    ModifyGreetingConfigRequest& operator=(const ModifyGreetingConfigRequest &) = default ;
    ModifyGreetingConfigRequest& operator=(ModifyGreetingConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->greetingWords_ == nullptr
        && this->instanceId_ == nullptr && this->intentTrigger_ == nullptr && this->sourceType_ == nullptr; };
    // greetingWords Field Functions 
    bool hasGreetingWords() const { return this->greetingWords_ != nullptr;};
    void deleteGreetingWords() { this->greetingWords_ = nullptr;};
    inline string getGreetingWords() const { DARABONBA_PTR_GET_DEFAULT(greetingWords_, "") };
    inline ModifyGreetingConfigRequest& setGreetingWords(string greetingWords) { DARABONBA_PTR_SET_VALUE(greetingWords_, greetingWords) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyGreetingConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentTrigger Field Functions 
    bool hasIntentTrigger() const { return this->intentTrigger_ != nullptr;};
    void deleteIntentTrigger() { this->intentTrigger_ = nullptr;};
    inline string getIntentTrigger() const { DARABONBA_PTR_GET_DEFAULT(intentTrigger_, "") };
    inline ModifyGreetingConfigRequest& setIntentTrigger(string intentTrigger) { DARABONBA_PTR_SET_VALUE(intentTrigger_, intentTrigger) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ModifyGreetingConfigRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The greeting words.
    // 
    // This parameter is required.
    shared_ptr<string> greetingWords_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The intent trigger.
    shared_ptr<string> intentTrigger_ {};
    // The type.
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
