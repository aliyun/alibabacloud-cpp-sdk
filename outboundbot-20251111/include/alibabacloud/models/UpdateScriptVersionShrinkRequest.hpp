// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCRIPTVERSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCRIPTVERSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class UpdateScriptVersionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateScriptVersionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InteractionConfig, interactionConfigShrink_);
      DARABONBA_PTR_TO_JSON(LabelConfigs, labelConfigsShrink_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(ScriptProfile, scriptProfileShrink_);
      DARABONBA_PTR_TO_JSON(SynthesizerConfig, synthesizerConfigShrink_);
      DARABONBA_PTR_TO_JSON(TranscriberConfig, transcriberConfigShrink_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateScriptVersionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InteractionConfig, interactionConfigShrink_);
      DARABONBA_PTR_FROM_JSON(LabelConfigs, labelConfigsShrink_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(ScriptProfile, scriptProfileShrink_);
      DARABONBA_PTR_FROM_JSON(SynthesizerConfig, synthesizerConfigShrink_);
      DARABONBA_PTR_FROM_JSON(TranscriberConfig, transcriberConfigShrink_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    UpdateScriptVersionShrinkRequest() = default ;
    UpdateScriptVersionShrinkRequest(const UpdateScriptVersionShrinkRequest &) = default ;
    UpdateScriptVersionShrinkRequest(UpdateScriptVersionShrinkRequest &&) = default ;
    UpdateScriptVersionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateScriptVersionShrinkRequest() = default ;
    UpdateScriptVersionShrinkRequest& operator=(const UpdateScriptVersionShrinkRequest &) = default ;
    UpdateScriptVersionShrinkRequest& operator=(UpdateScriptVersionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->interactionConfigShrink_ == nullptr && this->labelConfigsShrink_ == nullptr && this->scriptId_ == nullptr && this->scriptProfileShrink_ == nullptr && this->synthesizerConfigShrink_ == nullptr
        && this->transcriberConfigShrink_ == nullptr && this->versionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateScriptVersionShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // interactionConfigShrink Field Functions 
    bool hasInteractionConfigShrink() const { return this->interactionConfigShrink_ != nullptr;};
    void deleteInteractionConfigShrink() { this->interactionConfigShrink_ = nullptr;};
    inline string getInteractionConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(interactionConfigShrink_, "") };
    inline UpdateScriptVersionShrinkRequest& setInteractionConfigShrink(string interactionConfigShrink) { DARABONBA_PTR_SET_VALUE(interactionConfigShrink_, interactionConfigShrink) };


    // labelConfigsShrink Field Functions 
    bool hasLabelConfigsShrink() const { return this->labelConfigsShrink_ != nullptr;};
    void deleteLabelConfigsShrink() { this->labelConfigsShrink_ = nullptr;};
    inline string getLabelConfigsShrink() const { DARABONBA_PTR_GET_DEFAULT(labelConfigsShrink_, "") };
    inline UpdateScriptVersionShrinkRequest& setLabelConfigsShrink(string labelConfigsShrink) { DARABONBA_PTR_SET_VALUE(labelConfigsShrink_, labelConfigsShrink) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline UpdateScriptVersionShrinkRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // scriptProfileShrink Field Functions 
    bool hasScriptProfileShrink() const { return this->scriptProfileShrink_ != nullptr;};
    void deleteScriptProfileShrink() { this->scriptProfileShrink_ = nullptr;};
    inline string getScriptProfileShrink() const { DARABONBA_PTR_GET_DEFAULT(scriptProfileShrink_, "") };
    inline UpdateScriptVersionShrinkRequest& setScriptProfileShrink(string scriptProfileShrink) { DARABONBA_PTR_SET_VALUE(scriptProfileShrink_, scriptProfileShrink) };


    // synthesizerConfigShrink Field Functions 
    bool hasSynthesizerConfigShrink() const { return this->synthesizerConfigShrink_ != nullptr;};
    void deleteSynthesizerConfigShrink() { this->synthesizerConfigShrink_ = nullptr;};
    inline string getSynthesizerConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(synthesizerConfigShrink_, "") };
    inline UpdateScriptVersionShrinkRequest& setSynthesizerConfigShrink(string synthesizerConfigShrink) { DARABONBA_PTR_SET_VALUE(synthesizerConfigShrink_, synthesizerConfigShrink) };


    // transcriberConfigShrink Field Functions 
    bool hasTranscriberConfigShrink() const { return this->transcriberConfigShrink_ != nullptr;};
    void deleteTranscriberConfigShrink() { this->transcriberConfigShrink_ = nullptr;};
    inline string getTranscriberConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(transcriberConfigShrink_, "") };
    inline UpdateScriptVersionShrinkRequest& setTranscriberConfigShrink(string transcriberConfigShrink) { DARABONBA_PTR_SET_VALUE(transcriberConfigShrink_, transcriberConfigShrink) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline UpdateScriptVersionShrinkRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // 实例ID
    shared_ptr<string> instanceId_ {};
    // 交互配置
    shared_ptr<string> interactionConfigShrink_ {};
    // 草稿版本的标签配置（JSON字符串）
    shared_ptr<string> labelConfigsShrink_ {};
    // 场景ID
    shared_ptr<string> scriptId_ {};
    // 话术配置
    shared_ptr<string> scriptProfileShrink_ {};
    // 语音合成配置
    shared_ptr<string> synthesizerConfigShrink_ {};
    // 语音识别配置
    shared_ptr<string> transcriberConfigShrink_ {};
    // 版本ID
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
