// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNEXTRESULTTOVERIFYRESPONSEBODYDATADIALOGUESDIALOGUE_HPP_
#define ALIBABACLOUD_MODELS_GETNEXTRESULTTOVERIFYRESPONSEBODYDATADIALOGUESDIALOGUE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetNextResultToVerifyResponseBodyDataDialoguesDialogue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNextResultToVerifyResponseBodyDataDialoguesDialogue& obj) { 
      DARABONBA_PTR_TO_JSON(Begin, begin_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(Deltas, deltas_);
      DARABONBA_PTR_TO_JSON(EmotionValue, emotionValue_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(HourMinSec, hourMinSec_);
      DARABONBA_PTR_TO_JSON(Identity, identity_);
      DARABONBA_PTR_TO_JSON(IncorrectWords, incorrectWords_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(SilenceDuration, silenceDuration_);
      DARABONBA_PTR_TO_JSON(SourceRole, sourceRole_);
      DARABONBA_PTR_TO_JSON(SourceWords, sourceWords_);
      DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_TO_JSON(Words, words_);
    };
    friend void from_json(const Darabonba::Json& j, GetNextResultToVerifyResponseBodyDataDialoguesDialogue& obj) { 
      DARABONBA_PTR_FROM_JSON(Begin, begin_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(Deltas, deltas_);
      DARABONBA_PTR_FROM_JSON(EmotionValue, emotionValue_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(HourMinSec, hourMinSec_);
      DARABONBA_PTR_FROM_JSON(Identity, identity_);
      DARABONBA_PTR_FROM_JSON(IncorrectWords, incorrectWords_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(SilenceDuration, silenceDuration_);
      DARABONBA_PTR_FROM_JSON(SourceRole, sourceRole_);
      DARABONBA_PTR_FROM_JSON(SourceWords, sourceWords_);
      DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_FROM_JSON(Words, words_);
    };
    GetNextResultToVerifyResponseBodyDataDialoguesDialogue() = default ;
    GetNextResultToVerifyResponseBodyDataDialoguesDialogue(const GetNextResultToVerifyResponseBodyDataDialoguesDialogue &) = default ;
    GetNextResultToVerifyResponseBodyDataDialoguesDialogue(GetNextResultToVerifyResponseBodyDataDialoguesDialogue &&) = default ;
    GetNextResultToVerifyResponseBodyDataDialoguesDialogue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNextResultToVerifyResponseBodyDataDialoguesDialogue() = default ;
    GetNextResultToVerifyResponseBodyDataDialoguesDialogue& operator=(const GetNextResultToVerifyResponseBodyDataDialoguesDialogue &) = default ;
    GetNextResultToVerifyResponseBodyDataDialoguesDialogue& operator=(GetNextResultToVerifyResponseBodyDataDialoguesDialogue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->begin_ != nullptr
        && this->beginTime_ != nullptr && this->deltas_ != nullptr && this->emotionValue_ != nullptr && this->end_ != nullptr && this->hourMinSec_ != nullptr
        && this->identity_ != nullptr && this->incorrectWords_ != nullptr && this->role_ != nullptr && this->silenceDuration_ != nullptr && this->sourceRole_ != nullptr
        && this->sourceWords_ != nullptr && this->speechRate_ != nullptr && this->words_ != nullptr; };
    // begin Field Functions 
    bool hasBegin() const { return this->begin_ != nullptr;};
    void deleteBegin() { this->begin_ = nullptr;};
    inline int64_t begin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0L) };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogue& setBegin(int64_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogue& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // deltas Field Functions 
    bool hasDeltas() const { return this->deltas_ != nullptr;};
    void deleteDeltas() { this->deltas_ = nullptr;};
    inline const Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas & deltas() const { DARABONBA_PTR_GET_CONST(deltas_, Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas) };
    inline Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas deltas() { DARABONBA_PTR_GET(deltas_, Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas) };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogue& setDeltas(const Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas & deltas) { DARABONBA_PTR_SET_VALUE(deltas_, deltas) };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogue& setDeltas(Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas && deltas) { DARABONBA_PTR_SET_RVALUE(deltas_, deltas) };


    // emotionValue Field Functions 
    bool hasEmotionValue() const { return this->emotionValue_ != nullptr;};
    void deleteEmotionValue() { this->emotionValue_ = nullptr;};
    inline int32_t emotionValue() const { DARABONBA_PTR_GET_DEFAULT(emotionValue_, 0) };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogue& setEmotionValue(int32_t emotionValue) { DARABONBA_PTR_SET_VALUE(emotionValue_, emotionValue) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int64_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogue& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // hourMinSec Field Functions 
    bool hasHourMinSec() const { return this->hourMinSec_ != nullptr;};
    void deleteHourMinSec() { this->hourMinSec_ = nullptr;};
    inline string hourMinSec() const { DARABONBA_PTR_GET_DEFAULT(hourMinSec_, "") };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogue& setHourMinSec(string hourMinSec) { DARABONBA_PTR_SET_VALUE(hourMinSec_, hourMinSec) };


    // identity Field Functions 
    bool hasIdentity() const { return this->identity_ != nullptr;};
    void deleteIdentity() { this->identity_ = nullptr;};
    inline string identity() const { DARABONBA_PTR_GET_DEFAULT(identity_, "") };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogue& setIdentity(string identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };


    // incorrectWords Field Functions 
    bool hasIncorrectWords() const { return this->incorrectWords_ != nullptr;};
    void deleteIncorrectWords() { this->incorrectWords_ = nullptr;};
    inline int32_t incorrectWords() const { DARABONBA_PTR_GET_DEFAULT(incorrectWords_, 0) };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogue& setIncorrectWords(int32_t incorrectWords) { DARABONBA_PTR_SET_VALUE(incorrectWords_, incorrectWords) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogue& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // silenceDuration Field Functions 
    bool hasSilenceDuration() const { return this->silenceDuration_ != nullptr;};
    void deleteSilenceDuration() { this->silenceDuration_ = nullptr;};
    inline int32_t silenceDuration() const { DARABONBA_PTR_GET_DEFAULT(silenceDuration_, 0) };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogue& setSilenceDuration(int32_t silenceDuration) { DARABONBA_PTR_SET_VALUE(silenceDuration_, silenceDuration) };


    // sourceRole Field Functions 
    bool hasSourceRole() const { return this->sourceRole_ != nullptr;};
    void deleteSourceRole() { this->sourceRole_ = nullptr;};
    inline string sourceRole() const { DARABONBA_PTR_GET_DEFAULT(sourceRole_, "") };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogue& setSourceRole(string sourceRole) { DARABONBA_PTR_SET_VALUE(sourceRole_, sourceRole) };


    // sourceWords Field Functions 
    bool hasSourceWords() const { return this->sourceWords_ != nullptr;};
    void deleteSourceWords() { this->sourceWords_ = nullptr;};
    inline string sourceWords() const { DARABONBA_PTR_GET_DEFAULT(sourceWords_, "") };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogue& setSourceWords(string sourceWords) { DARABONBA_PTR_SET_VALUE(sourceWords_, sourceWords) };


    // speechRate Field Functions 
    bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
    void deleteSpeechRate() { this->speechRate_ = nullptr;};
    inline int32_t speechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0) };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogue& setSpeechRate(int32_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


    // words Field Functions 
    bool hasWords() const { return this->words_ != nullptr;};
    void deleteWords() { this->words_ = nullptr;};
    inline string words() const { DARABONBA_PTR_GET_DEFAULT(words_, "") };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogue& setWords(string words) { DARABONBA_PTR_SET_VALUE(words_, words) };


  protected:
    std::shared_ptr<int64_t> begin_ = nullptr;
    std::shared_ptr<string> beginTime_ = nullptr;
    std::shared_ptr<Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas> deltas_ = nullptr;
    std::shared_ptr<int32_t> emotionValue_ = nullptr;
    std::shared_ptr<int64_t> end_ = nullptr;
    std::shared_ptr<string> hourMinSec_ = nullptr;
    std::shared_ptr<string> identity_ = nullptr;
    std::shared_ptr<int32_t> incorrectWords_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<int32_t> silenceDuration_ = nullptr;
    std::shared_ptr<string> sourceRole_ = nullptr;
    std::shared_ptr<string> sourceWords_ = nullptr;
    std::shared_ptr<int32_t> speechRate_ = nullptr;
    std::shared_ptr<string> words_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
