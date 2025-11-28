// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETTSVOICECUSTOMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATETTSVOICECUSTOMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CreateTTSVoiceCustomResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTTSVoiceCustomResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(audioURL, audioURL_);
      DARABONBA_PTR_TO_JSON(censorStatus, censorStatus_);
      DARABONBA_PTR_TO_JSON(common, common_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(errorDetail, errorDetail_);
      DARABONBA_PTR_TO_JSON(gender, gender_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pitchRate, pitchRate_);
      DARABONBA_PTR_TO_JSON(remainSeconds, remainSeconds_);
      DARABONBA_PTR_TO_JSON(speechRate, speechRate_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(voiceKey, voiceKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTTSVoiceCustomResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(audioURL, audioURL_);
      DARABONBA_PTR_FROM_JSON(censorStatus, censorStatus_);
      DARABONBA_PTR_FROM_JSON(common, common_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(errorDetail, errorDetail_);
      DARABONBA_PTR_FROM_JSON(gender, gender_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pitchRate, pitchRate_);
      DARABONBA_PTR_FROM_JSON(remainSeconds, remainSeconds_);
      DARABONBA_PTR_FROM_JSON(speechRate, speechRate_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(voiceKey, voiceKey_);
    };
    CreateTTSVoiceCustomResponseBodyData() = default ;
    CreateTTSVoiceCustomResponseBodyData(const CreateTTSVoiceCustomResponseBodyData &) = default ;
    CreateTTSVoiceCustomResponseBodyData(CreateTTSVoiceCustomResponseBodyData &&) = default ;
    CreateTTSVoiceCustomResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTTSVoiceCustomResponseBodyData() = default ;
    CreateTTSVoiceCustomResponseBodyData& operator=(const CreateTTSVoiceCustomResponseBodyData &) = default ;
    CreateTTSVoiceCustomResponseBodyData& operator=(CreateTTSVoiceCustomResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioURL_ == nullptr
        && return this->censorStatus_ == nullptr && return this->common_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->errorDetail_ == nullptr
        && return this->gender_ == nullptr && return this->id_ == nullptr && return this->language_ == nullptr && return this->modifiedTime_ == nullptr && return this->name_ == nullptr
        && return this->pitchRate_ == nullptr && return this->remainSeconds_ == nullptr && return this->speechRate_ == nullptr && return this->status_ == nullptr && return this->text_ == nullptr
        && return this->voiceKey_ == nullptr; };
    // audioURL Field Functions 
    bool hasAudioURL() const { return this->audioURL_ != nullptr;};
    void deleteAudioURL() { this->audioURL_ = nullptr;};
    inline string audioURL() const { DARABONBA_PTR_GET_DEFAULT(audioURL_, "") };
    inline CreateTTSVoiceCustomResponseBodyData& setAudioURL(string audioURL) { DARABONBA_PTR_SET_VALUE(audioURL_, audioURL) };


    // censorStatus Field Functions 
    bool hasCensorStatus() const { return this->censorStatus_ != nullptr;};
    void deleteCensorStatus() { this->censorStatus_ = nullptr;};
    inline string censorStatus() const { DARABONBA_PTR_GET_DEFAULT(censorStatus_, "") };
    inline CreateTTSVoiceCustomResponseBodyData& setCensorStatus(string censorStatus) { DARABONBA_PTR_SET_VALUE(censorStatus_, censorStatus) };


    // common Field Functions 
    bool hasCommon() const { return this->common_ != nullptr;};
    void deleteCommon() { this->common_ = nullptr;};
    inline bool common() const { DARABONBA_PTR_GET_DEFAULT(common_, false) };
    inline CreateTTSVoiceCustomResponseBodyData& setCommon(bool common) { DARABONBA_PTR_SET_VALUE(common_, common) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CreateTTSVoiceCustomResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTTSVoiceCustomResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // errorDetail Field Functions 
    bool hasErrorDetail() const { return this->errorDetail_ != nullptr;};
    void deleteErrorDetail() { this->errorDetail_ = nullptr;};
    inline string errorDetail() const { DARABONBA_PTR_GET_DEFAULT(errorDetail_, "") };
    inline CreateTTSVoiceCustomResponseBodyData& setErrorDetail(string errorDetail) { DARABONBA_PTR_SET_VALUE(errorDetail_, errorDetail) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline CreateTTSVoiceCustomResponseBodyData& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateTTSVoiceCustomResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateTTSVoiceCustomResponseBodyData& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline CreateTTSVoiceCustomResponseBodyData& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTTSVoiceCustomResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pitchRate Field Functions 
    bool hasPitchRate() const { return this->pitchRate_ != nullptr;};
    void deletePitchRate() { this->pitchRate_ = nullptr;};
    inline float pitchRate() const { DARABONBA_PTR_GET_DEFAULT(pitchRate_, 0.0) };
    inline CreateTTSVoiceCustomResponseBodyData& setPitchRate(float pitchRate) { DARABONBA_PTR_SET_VALUE(pitchRate_, pitchRate) };


    // remainSeconds Field Functions 
    bool hasRemainSeconds() const { return this->remainSeconds_ != nullptr;};
    void deleteRemainSeconds() { this->remainSeconds_ = nullptr;};
    inline int64_t remainSeconds() const { DARABONBA_PTR_GET_DEFAULT(remainSeconds_, 0L) };
    inline CreateTTSVoiceCustomResponseBodyData& setRemainSeconds(int64_t remainSeconds) { DARABONBA_PTR_SET_VALUE(remainSeconds_, remainSeconds) };


    // speechRate Field Functions 
    bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
    void deleteSpeechRate() { this->speechRate_ = nullptr;};
    inline float speechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0.0) };
    inline CreateTTSVoiceCustomResponseBodyData& setSpeechRate(float speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateTTSVoiceCustomResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline CreateTTSVoiceCustomResponseBodyData& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // voiceKey Field Functions 
    bool hasVoiceKey() const { return this->voiceKey_ != nullptr;};
    void deleteVoiceKey() { this->voiceKey_ = nullptr;};
    inline string voiceKey() const { DARABONBA_PTR_GET_DEFAULT(voiceKey_, "") };
    inline CreateTTSVoiceCustomResponseBodyData& setVoiceKey(string voiceKey) { DARABONBA_PTR_SET_VALUE(voiceKey_, voiceKey) };


  protected:
    std::shared_ptr<string> audioURL_ = nullptr;
    std::shared_ptr<string> censorStatus_ = nullptr;
    std::shared_ptr<bool> common_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> errorDetail_ = nullptr;
    std::shared_ptr<string> gender_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> modifiedTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<float> pitchRate_ = nullptr;
    std::shared_ptr<int64_t> remainSeconds_ = nullptr;
    std::shared_ptr<float> speechRate_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<string> voiceKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
