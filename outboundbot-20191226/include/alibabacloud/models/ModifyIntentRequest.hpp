// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyIntentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyIntentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentDescription, intentDescription_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(IntentName, intentName_);
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(Utterances, utterances_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyIntentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentDescription, intentDescription_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(IntentName, intentName_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(Utterances, utterances_);
    };
    ModifyIntentRequest() = default ;
    ModifyIntentRequest(const ModifyIntentRequest &) = default ;
    ModifyIntentRequest(ModifyIntentRequest &&) = default ;
    ModifyIntentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyIntentRequest() = default ;
    ModifyIntentRequest& operator=(const ModifyIntentRequest &) = default ;
    ModifyIntentRequest& operator=(ModifyIntentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->intentDescription_ == nullptr && this->intentId_ == nullptr && this->intentName_ == nullptr && this->keywords_ == nullptr && this->scriptId_ == nullptr
        && this->utterances_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyIntentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentDescription Field Functions 
    bool hasIntentDescription() const { return this->intentDescription_ != nullptr;};
    void deleteIntentDescription() { this->intentDescription_ = nullptr;};
    inline string getIntentDescription() const { DARABONBA_PTR_GET_DEFAULT(intentDescription_, "") };
    inline ModifyIntentRequest& setIntentDescription(string intentDescription) { DARABONBA_PTR_SET_VALUE(intentDescription_, intentDescription) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline string getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, "") };
    inline ModifyIntentRequest& setIntentId(string intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // intentName Field Functions 
    bool hasIntentName() const { return this->intentName_ != nullptr;};
    void deleteIntentName() { this->intentName_ = nullptr;};
    inline string getIntentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
    inline ModifyIntentRequest& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline string getKeywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
    inline ModifyIntentRequest& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ModifyIntentRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // utterances Field Functions 
    bool hasUtterances() const { return this->utterances_ != nullptr;};
    void deleteUtterances() { this->utterances_ = nullptr;};
    inline string getUtterances() const { DARABONBA_PTR_GET_DEFAULT(utterances_, "") };
    inline ModifyIntentRequest& setUtterances(string utterances) { DARABONBA_PTR_SET_VALUE(utterances_, utterances) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> intentDescription_ {};
    // This parameter is required.
    shared_ptr<string> intentId_ {};
    // This parameter is required.
    shared_ptr<string> intentName_ {};
    shared_ptr<string> keywords_ {};
    // This parameter is required.
    shared_ptr<string> scriptId_ {};
    // This parameter is required.
    shared_ptr<string> utterances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
