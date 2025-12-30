// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RULETESTDIALOGUE_HPP_
#define ALIBABACLOUD_MODELS_RULETESTDIALOGUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class RuleTestDialogue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RuleTestDialogue& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UserGroup, userGroup_);
    };
    friend void from_json(const Darabonba::Json& j, RuleTestDialogue& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UserGroup, userGroup_);
    };
    RuleTestDialogue() = default ;
    RuleTestDialogue(const RuleTestDialogue &) = default ;
    RuleTestDialogue(RuleTestDialogue &&) = default ;
    RuleTestDialogue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RuleTestDialogue() = default ;
    RuleTestDialogue& operator=(const RuleTestDialogue &) = default ;
    RuleTestDialogue& operator=(RuleTestDialogue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(Begin, begin_);
        DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_TO_JSON(EmotionValue, emotionValue_);
        DARABONBA_PTR_TO_JSON(End, end_);
        DARABONBA_PTR_TO_JSON(HourMinSec, hourMinSec_);
        DARABONBA_PTR_TO_JSON(Identity, identity_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(SilenceDuration, silenceDuration_);
        DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
        DARABONBA_PTR_TO_JSON(Words, words_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(Begin, begin_);
        DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_FROM_JSON(EmotionValue, emotionValue_);
        DARABONBA_PTR_FROM_JSON(End, end_);
        DARABONBA_PTR_FROM_JSON(HourMinSec, hourMinSec_);
        DARABONBA_PTR_FROM_JSON(Identity, identity_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(SilenceDuration, silenceDuration_);
        DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
        DARABONBA_PTR_FROM_JSON(Words, words_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->begin_ == nullptr
        && this->beginTime_ == nullptr && this->emotionValue_ == nullptr && this->end_ == nullptr && this->hourMinSec_ == nullptr && this->identity_ == nullptr
        && this->role_ == nullptr && this->silenceDuration_ == nullptr && this->speechRate_ == nullptr && this->words_ == nullptr; };
      // begin Field Functions 
      bool hasBegin() const { return this->begin_ != nullptr;};
      void deleteBegin() { this->begin_ = nullptr;};
      inline int64_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0L) };
      inline Content& setBegin(int64_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


      // beginTime Field Functions 
      bool hasBeginTime() const { return this->beginTime_ != nullptr;};
      void deleteBeginTime() { this->beginTime_ = nullptr;};
      inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
      inline Content& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


      // emotionValue Field Functions 
      bool hasEmotionValue() const { return this->emotionValue_ != nullptr;};
      void deleteEmotionValue() { this->emotionValue_ = nullptr;};
      inline int32_t getEmotionValue() const { DARABONBA_PTR_GET_DEFAULT(emotionValue_, 0) };
      inline Content& setEmotionValue(int32_t emotionValue) { DARABONBA_PTR_SET_VALUE(emotionValue_, emotionValue) };


      // end Field Functions 
      bool hasEnd() const { return this->end_ != nullptr;};
      void deleteEnd() { this->end_ = nullptr;};
      inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
      inline Content& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


      // hourMinSec Field Functions 
      bool hasHourMinSec() const { return this->hourMinSec_ != nullptr;};
      void deleteHourMinSec() { this->hourMinSec_ = nullptr;};
      inline string getHourMinSec() const { DARABONBA_PTR_GET_DEFAULT(hourMinSec_, "") };
      inline Content& setHourMinSec(string hourMinSec) { DARABONBA_PTR_SET_VALUE(hourMinSec_, hourMinSec) };


      // identity Field Functions 
      bool hasIdentity() const { return this->identity_ != nullptr;};
      void deleteIdentity() { this->identity_ = nullptr;};
      inline string getIdentity() const { DARABONBA_PTR_GET_DEFAULT(identity_, "") };
      inline Content& setIdentity(string identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Content& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // silenceDuration Field Functions 
      bool hasSilenceDuration() const { return this->silenceDuration_ != nullptr;};
      void deleteSilenceDuration() { this->silenceDuration_ = nullptr;};
      inline int64_t getSilenceDuration() const { DARABONBA_PTR_GET_DEFAULT(silenceDuration_, 0L) };
      inline Content& setSilenceDuration(int64_t silenceDuration) { DARABONBA_PTR_SET_VALUE(silenceDuration_, silenceDuration) };


      // speechRate Field Functions 
      bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
      void deleteSpeechRate() { this->speechRate_ = nullptr;};
      inline int64_t getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0L) };
      inline Content& setSpeechRate(int64_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


      // words Field Functions 
      bool hasWords() const { return this->words_ != nullptr;};
      void deleteWords() { this->words_ = nullptr;};
      inline string getWords() const { DARABONBA_PTR_GET_DEFAULT(words_, "") };
      inline Content& setWords(string words) { DARABONBA_PTR_SET_VALUE(words_, words) };


    protected:
      shared_ptr<int64_t> begin_ {};
      shared_ptr<int64_t> beginTime_ {};
      shared_ptr<int32_t> emotionValue_ {};
      shared_ptr<int64_t> end_ {};
      shared_ptr<string> hourMinSec_ {};
      shared_ptr<string> identity_ {};
      shared_ptr<string> role_ {};
      shared_ptr<int64_t> silenceDuration_ {};
      shared_ptr<int64_t> speechRate_ {};
      shared_ptr<string> words_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->userGroup_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<RuleTestDialogue::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<RuleTestDialogue::Content>) };
    inline vector<RuleTestDialogue::Content> getContent() { DARABONBA_PTR_GET(content_, vector<RuleTestDialogue::Content>) };
    inline RuleTestDialogue& setContent(const vector<RuleTestDialogue::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline RuleTestDialogue& setContent(vector<RuleTestDialogue::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline RuleTestDialogue& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RuleTestDialogue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // userGroup Field Functions 
    bool hasUserGroup() const { return this->userGroup_ != nullptr;};
    void deleteUserGroup() { this->userGroup_ = nullptr;};
    inline string getUserGroup() const { DARABONBA_PTR_GET_DEFAULT(userGroup_, "") };
    inline RuleTestDialogue& setUserGroup(string userGroup) { DARABONBA_PTR_SET_VALUE(userGroup_, userGroup) };


  protected:
    shared_ptr<vector<RuleTestDialogue::Content>> content_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> userGroup_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
