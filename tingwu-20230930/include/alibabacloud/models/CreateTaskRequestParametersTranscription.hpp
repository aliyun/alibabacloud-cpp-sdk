// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSTRANSCRIPTION_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSTRANSCRIPTION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTaskRequestParametersTranscriptionDiarization.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTaskRequestParametersTranscription : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestParametersTranscription& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalStreamOutputLevel, additionalStreamOutputLevel_);
      DARABONBA_PTR_TO_JSON(AudioEventDetectionEnabled, audioEventDetectionEnabled_);
      DARABONBA_PTR_TO_JSON(Diarization, diarization_);
      DARABONBA_PTR_TO_JSON(DiarizationEnabled, diarizationEnabled_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(OutputLevel, outputLevel_);
      DARABONBA_PTR_TO_JSON(PhraseId, phraseId_);
      DARABONBA_PTR_TO_JSON(ProfanityFilterEnabled, profanityFilterEnabled_);
      DARABONBA_PTR_TO_JSON(RealtimeDiarizationEnabled, realtimeDiarizationEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestParametersTranscription& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalStreamOutputLevel, additionalStreamOutputLevel_);
      DARABONBA_PTR_FROM_JSON(AudioEventDetectionEnabled, audioEventDetectionEnabled_);
      DARABONBA_PTR_FROM_JSON(Diarization, diarization_);
      DARABONBA_PTR_FROM_JSON(DiarizationEnabled, diarizationEnabled_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(OutputLevel, outputLevel_);
      DARABONBA_PTR_FROM_JSON(PhraseId, phraseId_);
      DARABONBA_PTR_FROM_JSON(ProfanityFilterEnabled, profanityFilterEnabled_);
      DARABONBA_PTR_FROM_JSON(RealtimeDiarizationEnabled, realtimeDiarizationEnabled_);
    };
    CreateTaskRequestParametersTranscription() = default ;
    CreateTaskRequestParametersTranscription(const CreateTaskRequestParametersTranscription &) = default ;
    CreateTaskRequestParametersTranscription(CreateTaskRequestParametersTranscription &&) = default ;
    CreateTaskRequestParametersTranscription(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestParametersTranscription() = default ;
    CreateTaskRequestParametersTranscription& operator=(const CreateTaskRequestParametersTranscription &) = default ;
    CreateTaskRequestParametersTranscription& operator=(CreateTaskRequestParametersTranscription &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->additionalStreamOutputLevel_ != nullptr
        && this->audioEventDetectionEnabled_ != nullptr && this->diarization_ != nullptr && this->diarizationEnabled_ != nullptr && this->model_ != nullptr && this->outputLevel_ != nullptr
        && this->phraseId_ != nullptr && this->profanityFilterEnabled_ != nullptr && this->realtimeDiarizationEnabled_ != nullptr; };
    // additionalStreamOutputLevel Field Functions 
    bool hasAdditionalStreamOutputLevel() const { return this->additionalStreamOutputLevel_ != nullptr;};
    void deleteAdditionalStreamOutputLevel() { this->additionalStreamOutputLevel_ = nullptr;};
    inline int32_t additionalStreamOutputLevel() const { DARABONBA_PTR_GET_DEFAULT(additionalStreamOutputLevel_, 0) };
    inline CreateTaskRequestParametersTranscription& setAdditionalStreamOutputLevel(int32_t additionalStreamOutputLevel) { DARABONBA_PTR_SET_VALUE(additionalStreamOutputLevel_, additionalStreamOutputLevel) };


    // audioEventDetectionEnabled Field Functions 
    bool hasAudioEventDetectionEnabled() const { return this->audioEventDetectionEnabled_ != nullptr;};
    void deleteAudioEventDetectionEnabled() { this->audioEventDetectionEnabled_ = nullptr;};
    inline bool audioEventDetectionEnabled() const { DARABONBA_PTR_GET_DEFAULT(audioEventDetectionEnabled_, false) };
    inline CreateTaskRequestParametersTranscription& setAudioEventDetectionEnabled(bool audioEventDetectionEnabled) { DARABONBA_PTR_SET_VALUE(audioEventDetectionEnabled_, audioEventDetectionEnabled) };


    // diarization Field Functions 
    bool hasDiarization() const { return this->diarization_ != nullptr;};
    void deleteDiarization() { this->diarization_ = nullptr;};
    inline const Models::CreateTaskRequestParametersTranscriptionDiarization & diarization() const { DARABONBA_PTR_GET_CONST(diarization_, Models::CreateTaskRequestParametersTranscriptionDiarization) };
    inline Models::CreateTaskRequestParametersTranscriptionDiarization diarization() { DARABONBA_PTR_GET(diarization_, Models::CreateTaskRequestParametersTranscriptionDiarization) };
    inline CreateTaskRequestParametersTranscription& setDiarization(const Models::CreateTaskRequestParametersTranscriptionDiarization & diarization) { DARABONBA_PTR_SET_VALUE(diarization_, diarization) };
    inline CreateTaskRequestParametersTranscription& setDiarization(Models::CreateTaskRequestParametersTranscriptionDiarization && diarization) { DARABONBA_PTR_SET_RVALUE(diarization_, diarization) };


    // diarizationEnabled Field Functions 
    bool hasDiarizationEnabled() const { return this->diarizationEnabled_ != nullptr;};
    void deleteDiarizationEnabled() { this->diarizationEnabled_ = nullptr;};
    inline bool diarizationEnabled() const { DARABONBA_PTR_GET_DEFAULT(diarizationEnabled_, false) };
    inline CreateTaskRequestParametersTranscription& setDiarizationEnabled(bool diarizationEnabled) { DARABONBA_PTR_SET_VALUE(diarizationEnabled_, diarizationEnabled) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateTaskRequestParametersTranscription& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // outputLevel Field Functions 
    bool hasOutputLevel() const { return this->outputLevel_ != nullptr;};
    void deleteOutputLevel() { this->outputLevel_ = nullptr;};
    inline int32_t outputLevel() const { DARABONBA_PTR_GET_DEFAULT(outputLevel_, 0) };
    inline CreateTaskRequestParametersTranscription& setOutputLevel(int32_t outputLevel) { DARABONBA_PTR_SET_VALUE(outputLevel_, outputLevel) };


    // phraseId Field Functions 
    bool hasPhraseId() const { return this->phraseId_ != nullptr;};
    void deletePhraseId() { this->phraseId_ = nullptr;};
    inline string phraseId() const { DARABONBA_PTR_GET_DEFAULT(phraseId_, "") };
    inline CreateTaskRequestParametersTranscription& setPhraseId(string phraseId) { DARABONBA_PTR_SET_VALUE(phraseId_, phraseId) };


    // profanityFilterEnabled Field Functions 
    bool hasProfanityFilterEnabled() const { return this->profanityFilterEnabled_ != nullptr;};
    void deleteProfanityFilterEnabled() { this->profanityFilterEnabled_ = nullptr;};
    inline bool profanityFilterEnabled() const { DARABONBA_PTR_GET_DEFAULT(profanityFilterEnabled_, false) };
    inline CreateTaskRequestParametersTranscription& setProfanityFilterEnabled(bool profanityFilterEnabled) { DARABONBA_PTR_SET_VALUE(profanityFilterEnabled_, profanityFilterEnabled) };


    // realtimeDiarizationEnabled Field Functions 
    bool hasRealtimeDiarizationEnabled() const { return this->realtimeDiarizationEnabled_ != nullptr;};
    void deleteRealtimeDiarizationEnabled() { this->realtimeDiarizationEnabled_ = nullptr;};
    inline bool realtimeDiarizationEnabled() const { DARABONBA_PTR_GET_DEFAULT(realtimeDiarizationEnabled_, false) };
    inline CreateTaskRequestParametersTranscription& setRealtimeDiarizationEnabled(bool realtimeDiarizationEnabled) { DARABONBA_PTR_SET_VALUE(realtimeDiarizationEnabled_, realtimeDiarizationEnabled) };


  protected:
    std::shared_ptr<int32_t> additionalStreamOutputLevel_ = nullptr;
    std::shared_ptr<bool> audioEventDetectionEnabled_ = nullptr;
    std::shared_ptr<Models::CreateTaskRequestParametersTranscriptionDiarization> diarization_ = nullptr;
    std::shared_ptr<bool> diarizationEnabled_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<int32_t> outputLevel_ = nullptr;
    std::shared_ptr<string> phraseId_ = nullptr;
    std::shared_ptr<bool> profanityFilterEnabled_ = nullptr;
    std::shared_ptr<bool> realtimeDiarizationEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
