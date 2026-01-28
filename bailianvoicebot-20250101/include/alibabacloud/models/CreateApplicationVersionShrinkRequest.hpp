// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONVERSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONVERSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
namespace Models
{
  class CreateApplicationVersionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationVersionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_TO_JSON(InteractionConfig, interactionConfigShrink_);
      DARABONBA_PTR_TO_JSON(ScriptProfile, scriptProfileShrink_);
      DARABONBA_PTR_TO_JSON(SourceVersionId, sourceVersionId_);
      DARABONBA_PTR_TO_JSON(SynthesizerConfig, synthesizerConfigShrink_);
      DARABONBA_PTR_TO_JSON(TranscriberConfig, transcriberConfigShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationVersionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_FROM_JSON(InteractionConfig, interactionConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ScriptProfile, scriptProfileShrink_);
      DARABONBA_PTR_FROM_JSON(SourceVersionId, sourceVersionId_);
      DARABONBA_PTR_FROM_JSON(SynthesizerConfig, synthesizerConfigShrink_);
      DARABONBA_PTR_FROM_JSON(TranscriberConfig, transcriberConfigShrink_);
    };
    CreateApplicationVersionShrinkRequest() = default ;
    CreateApplicationVersionShrinkRequest(const CreateApplicationVersionShrinkRequest &) = default ;
    CreateApplicationVersionShrinkRequest(CreateApplicationVersionShrinkRequest &&) = default ;
    CreateApplicationVersionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationVersionShrinkRequest() = default ;
    CreateApplicationVersionShrinkRequest& operator=(const CreateApplicationVersionShrinkRequest &) = default ;
    CreateApplicationVersionShrinkRequest& operator=(CreateApplicationVersionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->businessUnitId_ == nullptr && this->interactionConfigShrink_ == nullptr && this->scriptProfileShrink_ == nullptr && this->sourceVersionId_ == nullptr && this->synthesizerConfigShrink_ == nullptr
        && this->transcriberConfigShrink_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline CreateApplicationVersionShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // businessUnitId Field Functions 
    bool hasBusinessUnitId() const { return this->businessUnitId_ != nullptr;};
    void deleteBusinessUnitId() { this->businessUnitId_ = nullptr;};
    inline string getBusinessUnitId() const { DARABONBA_PTR_GET_DEFAULT(businessUnitId_, "") };
    inline CreateApplicationVersionShrinkRequest& setBusinessUnitId(string businessUnitId) { DARABONBA_PTR_SET_VALUE(businessUnitId_, businessUnitId) };


    // interactionConfigShrink Field Functions 
    bool hasInteractionConfigShrink() const { return this->interactionConfigShrink_ != nullptr;};
    void deleteInteractionConfigShrink() { this->interactionConfigShrink_ = nullptr;};
    inline string getInteractionConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(interactionConfigShrink_, "") };
    inline CreateApplicationVersionShrinkRequest& setInteractionConfigShrink(string interactionConfigShrink) { DARABONBA_PTR_SET_VALUE(interactionConfigShrink_, interactionConfigShrink) };


    // scriptProfileShrink Field Functions 
    bool hasScriptProfileShrink() const { return this->scriptProfileShrink_ != nullptr;};
    void deleteScriptProfileShrink() { this->scriptProfileShrink_ = nullptr;};
    inline string getScriptProfileShrink() const { DARABONBA_PTR_GET_DEFAULT(scriptProfileShrink_, "") };
    inline CreateApplicationVersionShrinkRequest& setScriptProfileShrink(string scriptProfileShrink) { DARABONBA_PTR_SET_VALUE(scriptProfileShrink_, scriptProfileShrink) };


    // sourceVersionId Field Functions 
    bool hasSourceVersionId() const { return this->sourceVersionId_ != nullptr;};
    void deleteSourceVersionId() { this->sourceVersionId_ = nullptr;};
    inline string getSourceVersionId() const { DARABONBA_PTR_GET_DEFAULT(sourceVersionId_, "") };
    inline CreateApplicationVersionShrinkRequest& setSourceVersionId(string sourceVersionId) { DARABONBA_PTR_SET_VALUE(sourceVersionId_, sourceVersionId) };


    // synthesizerConfigShrink Field Functions 
    bool hasSynthesizerConfigShrink() const { return this->synthesizerConfigShrink_ != nullptr;};
    void deleteSynthesizerConfigShrink() { this->synthesizerConfigShrink_ = nullptr;};
    inline string getSynthesizerConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(synthesizerConfigShrink_, "") };
    inline CreateApplicationVersionShrinkRequest& setSynthesizerConfigShrink(string synthesizerConfigShrink) { DARABONBA_PTR_SET_VALUE(synthesizerConfigShrink_, synthesizerConfigShrink) };


    // transcriberConfigShrink Field Functions 
    bool hasTranscriberConfigShrink() const { return this->transcriberConfigShrink_ != nullptr;};
    void deleteTranscriberConfigShrink() { this->transcriberConfigShrink_ = nullptr;};
    inline string getTranscriberConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(transcriberConfigShrink_, "") };
    inline CreateApplicationVersionShrinkRequest& setTranscriberConfigShrink(string transcriberConfigShrink) { DARABONBA_PTR_SET_VALUE(transcriberConfigShrink_, transcriberConfigShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // This parameter is required.
    shared_ptr<string> businessUnitId_ {};
    shared_ptr<string> interactionConfigShrink_ {};
    shared_ptr<string> scriptProfileShrink_ {};
    shared_ptr<string> sourceVersionId_ {};
    shared_ptr<string> synthesizerConfigShrink_ {};
    shared_ptr<string> transcriberConfigShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
