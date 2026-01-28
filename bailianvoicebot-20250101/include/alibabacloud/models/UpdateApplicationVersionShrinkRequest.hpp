// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONVERSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONVERSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
namespace Models
{
  class UpdateApplicationVersionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationVersionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_TO_JSON(InteractionConfig, interactionConfigShrink_);
      DARABONBA_PTR_TO_JSON(ScriptProfile, scriptProfileShrink_);
      DARABONBA_PTR_TO_JSON(SynthesizerConfig, synthesizerConfigShrink_);
      DARABONBA_PTR_TO_JSON(TranscriberConfig, transcriberConfigShrink_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationVersionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_FROM_JSON(InteractionConfig, interactionConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ScriptProfile, scriptProfileShrink_);
      DARABONBA_PTR_FROM_JSON(SynthesizerConfig, synthesizerConfigShrink_);
      DARABONBA_PTR_FROM_JSON(TranscriberConfig, transcriberConfigShrink_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    UpdateApplicationVersionShrinkRequest() = default ;
    UpdateApplicationVersionShrinkRequest(const UpdateApplicationVersionShrinkRequest &) = default ;
    UpdateApplicationVersionShrinkRequest(UpdateApplicationVersionShrinkRequest &&) = default ;
    UpdateApplicationVersionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationVersionShrinkRequest() = default ;
    UpdateApplicationVersionShrinkRequest& operator=(const UpdateApplicationVersionShrinkRequest &) = default ;
    UpdateApplicationVersionShrinkRequest& operator=(UpdateApplicationVersionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->businessUnitId_ == nullptr && this->interactionConfigShrink_ == nullptr && this->scriptProfileShrink_ == nullptr && this->synthesizerConfigShrink_ == nullptr && this->transcriberConfigShrink_ == nullptr
        && this->versionId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdateApplicationVersionShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // businessUnitId Field Functions 
    bool hasBusinessUnitId() const { return this->businessUnitId_ != nullptr;};
    void deleteBusinessUnitId() { this->businessUnitId_ = nullptr;};
    inline string getBusinessUnitId() const { DARABONBA_PTR_GET_DEFAULT(businessUnitId_, "") };
    inline UpdateApplicationVersionShrinkRequest& setBusinessUnitId(string businessUnitId) { DARABONBA_PTR_SET_VALUE(businessUnitId_, businessUnitId) };


    // interactionConfigShrink Field Functions 
    bool hasInteractionConfigShrink() const { return this->interactionConfigShrink_ != nullptr;};
    void deleteInteractionConfigShrink() { this->interactionConfigShrink_ = nullptr;};
    inline string getInteractionConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(interactionConfigShrink_, "") };
    inline UpdateApplicationVersionShrinkRequest& setInteractionConfigShrink(string interactionConfigShrink) { DARABONBA_PTR_SET_VALUE(interactionConfigShrink_, interactionConfigShrink) };


    // scriptProfileShrink Field Functions 
    bool hasScriptProfileShrink() const { return this->scriptProfileShrink_ != nullptr;};
    void deleteScriptProfileShrink() { this->scriptProfileShrink_ = nullptr;};
    inline string getScriptProfileShrink() const { DARABONBA_PTR_GET_DEFAULT(scriptProfileShrink_, "") };
    inline UpdateApplicationVersionShrinkRequest& setScriptProfileShrink(string scriptProfileShrink) { DARABONBA_PTR_SET_VALUE(scriptProfileShrink_, scriptProfileShrink) };


    // synthesizerConfigShrink Field Functions 
    bool hasSynthesizerConfigShrink() const { return this->synthesizerConfigShrink_ != nullptr;};
    void deleteSynthesizerConfigShrink() { this->synthesizerConfigShrink_ = nullptr;};
    inline string getSynthesizerConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(synthesizerConfigShrink_, "") };
    inline UpdateApplicationVersionShrinkRequest& setSynthesizerConfigShrink(string synthesizerConfigShrink) { DARABONBA_PTR_SET_VALUE(synthesizerConfigShrink_, synthesizerConfigShrink) };


    // transcriberConfigShrink Field Functions 
    bool hasTranscriberConfigShrink() const { return this->transcriberConfigShrink_ != nullptr;};
    void deleteTranscriberConfigShrink() { this->transcriberConfigShrink_ = nullptr;};
    inline string getTranscriberConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(transcriberConfigShrink_, "") };
    inline UpdateApplicationVersionShrinkRequest& setTranscriberConfigShrink(string transcriberConfigShrink) { DARABONBA_PTR_SET_VALUE(transcriberConfigShrink_, transcriberConfigShrink) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline UpdateApplicationVersionShrinkRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // This parameter is required.
    shared_ptr<string> businessUnitId_ {};
    shared_ptr<string> interactionConfigShrink_ {};
    // This parameter is required.
    shared_ptr<string> scriptProfileShrink_ {};
    shared_ptr<string> synthesizerConfigShrink_ {};
    shared_ptr<string> transcriberConfigShrink_ {};
    // This parameter is required.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
