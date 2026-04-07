// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCRIPTVERSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCRIPTVERSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class CreateScriptVersionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScriptVersionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InteractionConfig, interactionConfigShrink_);
      DARABONBA_PTR_TO_JSON(LabelConfig, labelConfigShrink_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(ScriptProfile, scriptProfileShrink_);
      DARABONBA_PTR_TO_JSON(SourceVersionId, sourceVersionId_);
      DARABONBA_PTR_TO_JSON(SynthesizerConfig, synthesizerConfigShrink_);
      DARABONBA_PTR_TO_JSON(TranscriberConfig, transcriberConfigShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScriptVersionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InteractionConfig, interactionConfigShrink_);
      DARABONBA_PTR_FROM_JSON(LabelConfig, labelConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(ScriptProfile, scriptProfileShrink_);
      DARABONBA_PTR_FROM_JSON(SourceVersionId, sourceVersionId_);
      DARABONBA_PTR_FROM_JSON(SynthesizerConfig, synthesizerConfigShrink_);
      DARABONBA_PTR_FROM_JSON(TranscriberConfig, transcriberConfigShrink_);
    };
    CreateScriptVersionShrinkRequest() = default ;
    CreateScriptVersionShrinkRequest(const CreateScriptVersionShrinkRequest &) = default ;
    CreateScriptVersionShrinkRequest(CreateScriptVersionShrinkRequest &&) = default ;
    CreateScriptVersionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScriptVersionShrinkRequest() = default ;
    CreateScriptVersionShrinkRequest& operator=(const CreateScriptVersionShrinkRequest &) = default ;
    CreateScriptVersionShrinkRequest& operator=(CreateScriptVersionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->interactionConfigShrink_ == nullptr && this->labelConfigShrink_ == nullptr && this->scriptId_ == nullptr && this->scriptProfileShrink_ == nullptr && this->sourceVersionId_ == nullptr
        && this->synthesizerConfigShrink_ == nullptr && this->transcriberConfigShrink_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateScriptVersionShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // interactionConfigShrink Field Functions 
    bool hasInteractionConfigShrink() const { return this->interactionConfigShrink_ != nullptr;};
    void deleteInteractionConfigShrink() { this->interactionConfigShrink_ = nullptr;};
    inline string getInteractionConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(interactionConfigShrink_, "") };
    inline CreateScriptVersionShrinkRequest& setInteractionConfigShrink(string interactionConfigShrink) { DARABONBA_PTR_SET_VALUE(interactionConfigShrink_, interactionConfigShrink) };


    // labelConfigShrink Field Functions 
    bool hasLabelConfigShrink() const { return this->labelConfigShrink_ != nullptr;};
    void deleteLabelConfigShrink() { this->labelConfigShrink_ = nullptr;};
    inline string getLabelConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(labelConfigShrink_, "") };
    inline CreateScriptVersionShrinkRequest& setLabelConfigShrink(string labelConfigShrink) { DARABONBA_PTR_SET_VALUE(labelConfigShrink_, labelConfigShrink) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateScriptVersionShrinkRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // scriptProfileShrink Field Functions 
    bool hasScriptProfileShrink() const { return this->scriptProfileShrink_ != nullptr;};
    void deleteScriptProfileShrink() { this->scriptProfileShrink_ = nullptr;};
    inline string getScriptProfileShrink() const { DARABONBA_PTR_GET_DEFAULT(scriptProfileShrink_, "") };
    inline CreateScriptVersionShrinkRequest& setScriptProfileShrink(string scriptProfileShrink) { DARABONBA_PTR_SET_VALUE(scriptProfileShrink_, scriptProfileShrink) };


    // sourceVersionId Field Functions 
    bool hasSourceVersionId() const { return this->sourceVersionId_ != nullptr;};
    void deleteSourceVersionId() { this->sourceVersionId_ = nullptr;};
    inline string getSourceVersionId() const { DARABONBA_PTR_GET_DEFAULT(sourceVersionId_, "") };
    inline CreateScriptVersionShrinkRequest& setSourceVersionId(string sourceVersionId) { DARABONBA_PTR_SET_VALUE(sourceVersionId_, sourceVersionId) };


    // synthesizerConfigShrink Field Functions 
    bool hasSynthesizerConfigShrink() const { return this->synthesizerConfigShrink_ != nullptr;};
    void deleteSynthesizerConfigShrink() { this->synthesizerConfigShrink_ = nullptr;};
    inline string getSynthesizerConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(synthesizerConfigShrink_, "") };
    inline CreateScriptVersionShrinkRequest& setSynthesizerConfigShrink(string synthesizerConfigShrink) { DARABONBA_PTR_SET_VALUE(synthesizerConfigShrink_, synthesizerConfigShrink) };


    // transcriberConfigShrink Field Functions 
    bool hasTranscriberConfigShrink() const { return this->transcriberConfigShrink_ != nullptr;};
    void deleteTranscriberConfigShrink() { this->transcriberConfigShrink_ = nullptr;};
    inline string getTranscriberConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(transcriberConfigShrink_, "") };
    inline CreateScriptVersionShrinkRequest& setTranscriberConfigShrink(string transcriberConfigShrink) { DARABONBA_PTR_SET_VALUE(transcriberConfigShrink_, transcriberConfigShrink) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> interactionConfigShrink_ {};
    shared_ptr<string> labelConfigShrink_ {};
    shared_ptr<string> scriptId_ {};
    shared_ptr<string> scriptProfileShrink_ {};
    shared_ptr<string> sourceVersionId_ {};
    shared_ptr<string> synthesizerConfigShrink_ {};
    shared_ptr<string> transcriberConfigShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
