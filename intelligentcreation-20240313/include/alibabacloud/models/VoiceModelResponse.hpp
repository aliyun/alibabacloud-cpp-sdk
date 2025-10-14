// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VOICEMODELRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_VOICEMODELRESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class VoiceModelResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VoiceModelResponse& obj) { 
      DARABONBA_PTR_TO_JSON(resourceTypeDesc, resourceTypeDesc_);
      DARABONBA_PTR_TO_JSON(ttsVersion, ttsVersion_);
      DARABONBA_PTR_TO_JSON(useScene, useScene_);
      DARABONBA_PTR_TO_JSON(voiceDesc, voiceDesc_);
      DARABONBA_PTR_TO_JSON(voiceGender, voiceGender_);
      DARABONBA_PTR_TO_JSON(voiceId, voiceId_);
      DARABONBA_PTR_TO_JSON(voiceLanguage, voiceLanguage_);
      DARABONBA_PTR_TO_JSON(voiceModel, voiceModel_);
      DARABONBA_PTR_TO_JSON(voiceName, voiceName_);
      DARABONBA_PTR_TO_JSON(voiceType, voiceType_);
      DARABONBA_PTR_TO_JSON(voiceUrl, voiceUrl_);
    };
    friend void from_json(const Darabonba::Json& j, VoiceModelResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(resourceTypeDesc, resourceTypeDesc_);
      DARABONBA_PTR_FROM_JSON(ttsVersion, ttsVersion_);
      DARABONBA_PTR_FROM_JSON(useScene, useScene_);
      DARABONBA_PTR_FROM_JSON(voiceDesc, voiceDesc_);
      DARABONBA_PTR_FROM_JSON(voiceGender, voiceGender_);
      DARABONBA_PTR_FROM_JSON(voiceId, voiceId_);
      DARABONBA_PTR_FROM_JSON(voiceLanguage, voiceLanguage_);
      DARABONBA_PTR_FROM_JSON(voiceModel, voiceModel_);
      DARABONBA_PTR_FROM_JSON(voiceName, voiceName_);
      DARABONBA_PTR_FROM_JSON(voiceType, voiceType_);
      DARABONBA_PTR_FROM_JSON(voiceUrl, voiceUrl_);
    };
    VoiceModelResponse() = default ;
    VoiceModelResponse(const VoiceModelResponse &) = default ;
    VoiceModelResponse(VoiceModelResponse &&) = default ;
    VoiceModelResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VoiceModelResponse() = default ;
    VoiceModelResponse& operator=(const VoiceModelResponse &) = default ;
    VoiceModelResponse& operator=(VoiceModelResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceTypeDesc_ == nullptr
        && return this->ttsVersion_ == nullptr && return this->useScene_ == nullptr && return this->voiceDesc_ == nullptr && return this->voiceGender_ == nullptr && return this->voiceId_ == nullptr
        && return this->voiceLanguage_ == nullptr && return this->voiceModel_ == nullptr && return this->voiceName_ == nullptr && return this->voiceType_ == nullptr && return this->voiceUrl_ == nullptr; };
    // resourceTypeDesc Field Functions 
    bool hasResourceTypeDesc() const { return this->resourceTypeDesc_ != nullptr;};
    void deleteResourceTypeDesc() { this->resourceTypeDesc_ = nullptr;};
    inline string resourceTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeDesc_, "") };
    inline VoiceModelResponse& setResourceTypeDesc(string resourceTypeDesc) { DARABONBA_PTR_SET_VALUE(resourceTypeDesc_, resourceTypeDesc) };


    // ttsVersion Field Functions 
    bool hasTtsVersion() const { return this->ttsVersion_ != nullptr;};
    void deleteTtsVersion() { this->ttsVersion_ = nullptr;};
    inline int32_t ttsVersion() const { DARABONBA_PTR_GET_DEFAULT(ttsVersion_, 0) };
    inline VoiceModelResponse& setTtsVersion(int32_t ttsVersion) { DARABONBA_PTR_SET_VALUE(ttsVersion_, ttsVersion) };


    // useScene Field Functions 
    bool hasUseScene() const { return this->useScene_ != nullptr;};
    void deleteUseScene() { this->useScene_ = nullptr;};
    inline string useScene() const { DARABONBA_PTR_GET_DEFAULT(useScene_, "") };
    inline VoiceModelResponse& setUseScene(string useScene) { DARABONBA_PTR_SET_VALUE(useScene_, useScene) };


    // voiceDesc Field Functions 
    bool hasVoiceDesc() const { return this->voiceDesc_ != nullptr;};
    void deleteVoiceDesc() { this->voiceDesc_ = nullptr;};
    inline string voiceDesc() const { DARABONBA_PTR_GET_DEFAULT(voiceDesc_, "") };
    inline VoiceModelResponse& setVoiceDesc(string voiceDesc) { DARABONBA_PTR_SET_VALUE(voiceDesc_, voiceDesc) };


    // voiceGender Field Functions 
    bool hasVoiceGender() const { return this->voiceGender_ != nullptr;};
    void deleteVoiceGender() { this->voiceGender_ = nullptr;};
    inline string voiceGender() const { DARABONBA_PTR_GET_DEFAULT(voiceGender_, "") };
    inline VoiceModelResponse& setVoiceGender(string voiceGender) { DARABONBA_PTR_SET_VALUE(voiceGender_, voiceGender) };


    // voiceId Field Functions 
    bool hasVoiceId() const { return this->voiceId_ != nullptr;};
    void deleteVoiceId() { this->voiceId_ = nullptr;};
    inline int64_t voiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, 0L) };
    inline VoiceModelResponse& setVoiceId(int64_t voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


    // voiceLanguage Field Functions 
    bool hasVoiceLanguage() const { return this->voiceLanguage_ != nullptr;};
    void deleteVoiceLanguage() { this->voiceLanguage_ = nullptr;};
    inline string voiceLanguage() const { DARABONBA_PTR_GET_DEFAULT(voiceLanguage_, "") };
    inline VoiceModelResponse& setVoiceLanguage(string voiceLanguage) { DARABONBA_PTR_SET_VALUE(voiceLanguage_, voiceLanguage) };


    // voiceModel Field Functions 
    bool hasVoiceModel() const { return this->voiceModel_ != nullptr;};
    void deleteVoiceModel() { this->voiceModel_ = nullptr;};
    inline string voiceModel() const { DARABONBA_PTR_GET_DEFAULT(voiceModel_, "") };
    inline VoiceModelResponse& setVoiceModel(string voiceModel) { DARABONBA_PTR_SET_VALUE(voiceModel_, voiceModel) };


    // voiceName Field Functions 
    bool hasVoiceName() const { return this->voiceName_ != nullptr;};
    void deleteVoiceName() { this->voiceName_ = nullptr;};
    inline string voiceName() const { DARABONBA_PTR_GET_DEFAULT(voiceName_, "") };
    inline VoiceModelResponse& setVoiceName(string voiceName) { DARABONBA_PTR_SET_VALUE(voiceName_, voiceName) };


    // voiceType Field Functions 
    bool hasVoiceType() const { return this->voiceType_ != nullptr;};
    void deleteVoiceType() { this->voiceType_ = nullptr;};
    inline string voiceType() const { DARABONBA_PTR_GET_DEFAULT(voiceType_, "") };
    inline VoiceModelResponse& setVoiceType(string voiceType) { DARABONBA_PTR_SET_VALUE(voiceType_, voiceType) };


    // voiceUrl Field Functions 
    bool hasVoiceUrl() const { return this->voiceUrl_ != nullptr;};
    void deleteVoiceUrl() { this->voiceUrl_ = nullptr;};
    inline string voiceUrl() const { DARABONBA_PTR_GET_DEFAULT(voiceUrl_, "") };
    inline VoiceModelResponse& setVoiceUrl(string voiceUrl) { DARABONBA_PTR_SET_VALUE(voiceUrl_, voiceUrl) };


  protected:
    std::shared_ptr<string> resourceTypeDesc_ = nullptr;
    std::shared_ptr<int32_t> ttsVersion_ = nullptr;
    std::shared_ptr<string> useScene_ = nullptr;
    std::shared_ptr<string> voiceDesc_ = nullptr;
    std::shared_ptr<string> voiceGender_ = nullptr;
    std::shared_ptr<int64_t> voiceId_ = nullptr;
    std::shared_ptr<string> voiceLanguage_ = nullptr;
    std::shared_ptr<string> voiceModel_ = nullptr;
    std::shared_ptr<string> voiceName_ = nullptr;
    std::shared_ptr<string> voiceType_ = nullptr;
    std::shared_ptr<string> voiceUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
