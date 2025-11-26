// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateIntentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIntentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentDescription, intentDescription_);
      DARABONBA_PTR_TO_JSON(IntentName, intentName_);
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(Utterances, utterances_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIntentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentDescription, intentDescription_);
      DARABONBA_PTR_FROM_JSON(IntentName, intentName_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(Utterances, utterances_);
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
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->intentDescription_ == nullptr && return this->intentName_ == nullptr && return this->keywords_ == nullptr && return this->scriptId_ == nullptr && return this->utterances_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateIntentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentDescription Field Functions 
    bool hasIntentDescription() const { return this->intentDescription_ != nullptr;};
    void deleteIntentDescription() { this->intentDescription_ = nullptr;};
    inline string intentDescription() const { DARABONBA_PTR_GET_DEFAULT(intentDescription_, "") };
    inline CreateIntentRequest& setIntentDescription(string intentDescription) { DARABONBA_PTR_SET_VALUE(intentDescription_, intentDescription) };


    // intentName Field Functions 
    bool hasIntentName() const { return this->intentName_ != nullptr;};
    void deleteIntentName() { this->intentName_ = nullptr;};
    inline string intentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
    inline CreateIntentRequest& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline string keywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
    inline CreateIntentRequest& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateIntentRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // utterances Field Functions 
    bool hasUtterances() const { return this->utterances_ != nullptr;};
    void deleteUtterances() { this->utterances_ = nullptr;};
    inline string utterances() const { DARABONBA_PTR_GET_DEFAULT(utterances_, "") };
    inline CreateIntentRequest& setUtterances(string utterances) { DARABONBA_PTR_SET_VALUE(utterances_, utterances) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> intentDescription_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> intentName_ = nullptr;
    std::shared_ptr<string> keywords_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> utterances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
