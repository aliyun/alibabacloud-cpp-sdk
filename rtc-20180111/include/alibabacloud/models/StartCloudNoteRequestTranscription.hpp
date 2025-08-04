// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUESTTRANSCRIPTION_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUESTTRANSCRIPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCloudNoteRequestTranscription : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudNoteRequestTranscription& obj) { 
      DARABONBA_PTR_TO_JSON(DiarizationEnabled, diarizationEnabled_);
      DARABONBA_PTR_TO_JSON(PhraseId, phraseId_);
      DARABONBA_PTR_TO_JSON(SpeakerCount, speakerCount_);
      DARABONBA_PTR_TO_JSON(TranscriptionLevel, transcriptionLevel_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudNoteRequestTranscription& obj) { 
      DARABONBA_PTR_FROM_JSON(DiarizationEnabled, diarizationEnabled_);
      DARABONBA_PTR_FROM_JSON(PhraseId, phraseId_);
      DARABONBA_PTR_FROM_JSON(SpeakerCount, speakerCount_);
      DARABONBA_PTR_FROM_JSON(TranscriptionLevel, transcriptionLevel_);
    };
    StartCloudNoteRequestTranscription() = default ;
    StartCloudNoteRequestTranscription(const StartCloudNoteRequestTranscription &) = default ;
    StartCloudNoteRequestTranscription(StartCloudNoteRequestTranscription &&) = default ;
    StartCloudNoteRequestTranscription(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudNoteRequestTranscription() = default ;
    StartCloudNoteRequestTranscription& operator=(const StartCloudNoteRequestTranscription &) = default ;
    StartCloudNoteRequestTranscription& operator=(StartCloudNoteRequestTranscription &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diarizationEnabled_ != nullptr
        && this->phraseId_ != nullptr && this->speakerCount_ != nullptr && this->transcriptionLevel_ != nullptr; };
    // diarizationEnabled Field Functions 
    bool hasDiarizationEnabled() const { return this->diarizationEnabled_ != nullptr;};
    void deleteDiarizationEnabled() { this->diarizationEnabled_ = nullptr;};
    inline bool diarizationEnabled() const { DARABONBA_PTR_GET_DEFAULT(diarizationEnabled_, false) };
    inline StartCloudNoteRequestTranscription& setDiarizationEnabled(bool diarizationEnabled) { DARABONBA_PTR_SET_VALUE(diarizationEnabled_, diarizationEnabled) };


    // phraseId Field Functions 
    bool hasPhraseId() const { return this->phraseId_ != nullptr;};
    void deletePhraseId() { this->phraseId_ = nullptr;};
    inline string phraseId() const { DARABONBA_PTR_GET_DEFAULT(phraseId_, "") };
    inline StartCloudNoteRequestTranscription& setPhraseId(string phraseId) { DARABONBA_PTR_SET_VALUE(phraseId_, phraseId) };


    // speakerCount Field Functions 
    bool hasSpeakerCount() const { return this->speakerCount_ != nullptr;};
    void deleteSpeakerCount() { this->speakerCount_ = nullptr;};
    inline int32_t speakerCount() const { DARABONBA_PTR_GET_DEFAULT(speakerCount_, 0) };
    inline StartCloudNoteRequestTranscription& setSpeakerCount(int32_t speakerCount) { DARABONBA_PTR_SET_VALUE(speakerCount_, speakerCount) };


    // transcriptionLevel Field Functions 
    bool hasTranscriptionLevel() const { return this->transcriptionLevel_ != nullptr;};
    void deleteTranscriptionLevel() { this->transcriptionLevel_ = nullptr;};
    inline int32_t transcriptionLevel() const { DARABONBA_PTR_GET_DEFAULT(transcriptionLevel_, 0) };
    inline StartCloudNoteRequestTranscription& setTranscriptionLevel(int32_t transcriptionLevel) { DARABONBA_PTR_SET_VALUE(transcriptionLevel_, transcriptionLevel) };


  protected:
    std::shared_ptr<bool> diarizationEnabled_ = nullptr;
    std::shared_ptr<string> phraseId_ = nullptr;
    std::shared_ptr<int32_t> speakerCount_ = nullptr;
    std::shared_ptr<int32_t> transcriptionLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
