// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCQUALITYCHECKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SYNCQUALITYCHECKRESPONSEBODY_HPP_
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
  class SyncQualityCheckResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncQualityCheckResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SyncQualityCheckResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SyncQualityCheckResponseBody() = default ;
    SyncQualityCheckResponseBody(const SyncQualityCheckResponseBody &) = default ;
    SyncQualityCheckResponseBody(SyncQualityCheckResponseBody &&) = default ;
    SyncQualityCheckResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncQualityCheckResponseBody() = default ;
    SyncQualityCheckResponseBody& operator=(const SyncQualityCheckResponseBody &) = default ;
    SyncQualityCheckResponseBody& operator=(SyncQualityCheckResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Tid, tid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(Tid, tid_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(Hit, hit_);
          DARABONBA_PTR_TO_JSON(Rid, rid_);
          DARABONBA_PTR_TO_JSON(RuleInfoBase, ruleInfoBase_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(Hit, hit_);
          DARABONBA_PTR_FROM_JSON(Rid, rid_);
          DARABONBA_PTR_FROM_JSON(RuleInfoBase, ruleInfoBase_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        };
        Rules() = default ;
        Rules(const Rules &) = default ;
        Rules(Rules &&) = default ;
        Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rules() = default ;
        Rules& operator=(const Rules &) = default ;
        Rules& operator=(Rules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RuleInfoBase : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuleInfoBase& obj) { 
            DARABONBA_PTR_TO_JSON(Comments, comments_);
            DARABONBA_PTR_TO_JSON(Level, level_);
            DARABONBA_PTR_TO_JSON(RuleCategoryName, ruleCategoryName_);
            DARABONBA_PTR_TO_JSON(ScoreNum, scoreNum_);
            DARABONBA_PTR_TO_JSON(ScoreNumType, scoreNumType_);
            DARABONBA_PTR_TO_JSON(ScoreType, scoreType_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, RuleInfoBase& obj) { 
            DARABONBA_PTR_FROM_JSON(Comments, comments_);
            DARABONBA_PTR_FROM_JSON(Level, level_);
            DARABONBA_PTR_FROM_JSON(RuleCategoryName, ruleCategoryName_);
            DARABONBA_PTR_FROM_JSON(ScoreNum, scoreNum_);
            DARABONBA_PTR_FROM_JSON(ScoreNumType, scoreNumType_);
            DARABONBA_PTR_FROM_JSON(ScoreType, scoreType_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          RuleInfoBase() = default ;
          RuleInfoBase(const RuleInfoBase &) = default ;
          RuleInfoBase(RuleInfoBase &&) = default ;
          RuleInfoBase(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RuleInfoBase() = default ;
          RuleInfoBase& operator=(const RuleInfoBase &) = default ;
          RuleInfoBase& operator=(RuleInfoBase &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->comments_ == nullptr
        && this->level_ == nullptr && this->ruleCategoryName_ == nullptr && this->scoreNum_ == nullptr && this->scoreNumType_ == nullptr && this->scoreType_ == nullptr
        && this->type_ == nullptr; };
          // comments Field Functions 
          bool hasComments() const { return this->comments_ != nullptr;};
          void deleteComments() { this->comments_ = nullptr;};
          inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
          inline RuleInfoBase& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


          // level Field Functions 
          bool hasLevel() const { return this->level_ != nullptr;};
          void deleteLevel() { this->level_ = nullptr;};
          inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
          inline RuleInfoBase& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


          // ruleCategoryName Field Functions 
          bool hasRuleCategoryName() const { return this->ruleCategoryName_ != nullptr;};
          void deleteRuleCategoryName() { this->ruleCategoryName_ = nullptr;};
          inline string getRuleCategoryName() const { DARABONBA_PTR_GET_DEFAULT(ruleCategoryName_, "") };
          inline RuleInfoBase& setRuleCategoryName(string ruleCategoryName) { DARABONBA_PTR_SET_VALUE(ruleCategoryName_, ruleCategoryName) };


          // scoreNum Field Functions 
          bool hasScoreNum() const { return this->scoreNum_ != nullptr;};
          void deleteScoreNum() { this->scoreNum_ = nullptr;};
          inline int32_t getScoreNum() const { DARABONBA_PTR_GET_DEFAULT(scoreNum_, 0) };
          inline RuleInfoBase& setScoreNum(int32_t scoreNum) { DARABONBA_PTR_SET_VALUE(scoreNum_, scoreNum) };


          // scoreNumType Field Functions 
          bool hasScoreNumType() const { return this->scoreNumType_ != nullptr;};
          void deleteScoreNumType() { this->scoreNumType_ = nullptr;};
          inline int32_t getScoreNumType() const { DARABONBA_PTR_GET_DEFAULT(scoreNumType_, 0) };
          inline RuleInfoBase& setScoreNumType(int32_t scoreNumType) { DARABONBA_PTR_SET_VALUE(scoreNumType_, scoreNumType) };


          // scoreType Field Functions 
          bool hasScoreType() const { return this->scoreType_ != nullptr;};
          void deleteScoreType() { this->scoreType_ = nullptr;};
          inline int32_t getScoreType() const { DARABONBA_PTR_GET_DEFAULT(scoreType_, 0) };
          inline RuleInfoBase& setScoreType(int32_t scoreType) { DARABONBA_PTR_SET_VALUE(scoreType_, scoreType) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
          inline RuleInfoBase& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> comments_ {};
          shared_ptr<int32_t> level_ {};
          shared_ptr<string> ruleCategoryName_ {};
          shared_ptr<int32_t> scoreNum_ {};
          shared_ptr<int32_t> scoreNumType_ {};
          shared_ptr<int32_t> scoreType_ {};
          shared_ptr<int32_t> type_ {};
        };

        class Hit : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Hit& obj) { 
            DARABONBA_PTR_TO_JSON(HitKeyWords, hitKeyWords_);
            DARABONBA_PTR_TO_JSON(Phrase, phrase_);
          };
          friend void from_json(const Darabonba::Json& j, Hit& obj) { 
            DARABONBA_PTR_FROM_JSON(HitKeyWords, hitKeyWords_);
            DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
          };
          Hit() = default ;
          Hit(const Hit &) = default ;
          Hit(Hit &&) = default ;
          Hit(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Hit() = default ;
          Hit& operator=(const Hit &) = default ;
          Hit& operator=(Hit &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Phrase : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Phrase& obj) { 
              DARABONBA_PTR_TO_JSON(Begin, begin_);
              DARABONBA_PTR_TO_JSON(EmotionValue, emotionValue_);
              DARABONBA_PTR_TO_JSON(End, end_);
              DARABONBA_PTR_TO_JSON(Identity, identity_);
              DARABONBA_PTR_TO_JSON(Role, role_);
              DARABONBA_PTR_TO_JSON(SilenceDuration, silenceDuration_);
              DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
              DARABONBA_PTR_TO_JSON(Words, words_);
            };
            friend void from_json(const Darabonba::Json& j, Phrase& obj) { 
              DARABONBA_PTR_FROM_JSON(Begin, begin_);
              DARABONBA_PTR_FROM_JSON(EmotionValue, emotionValue_);
              DARABONBA_PTR_FROM_JSON(End, end_);
              DARABONBA_PTR_FROM_JSON(Identity, identity_);
              DARABONBA_PTR_FROM_JSON(Role, role_);
              DARABONBA_PTR_FROM_JSON(SilenceDuration, silenceDuration_);
              DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
              DARABONBA_PTR_FROM_JSON(Words, words_);
            };
            Phrase() = default ;
            Phrase(const Phrase &) = default ;
            Phrase(Phrase &&) = default ;
            Phrase(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Phrase() = default ;
            Phrase& operator=(const Phrase &) = default ;
            Phrase& operator=(Phrase &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->begin_ == nullptr
        && this->emotionValue_ == nullptr && this->end_ == nullptr && this->identity_ == nullptr && this->role_ == nullptr && this->silenceDuration_ == nullptr
        && this->speechRate_ == nullptr && this->words_ == nullptr; };
            // begin Field Functions 
            bool hasBegin() const { return this->begin_ != nullptr;};
            void deleteBegin() { this->begin_ = nullptr;};
            inline int64_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0L) };
            inline Phrase& setBegin(int64_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


            // emotionValue Field Functions 
            bool hasEmotionValue() const { return this->emotionValue_ != nullptr;};
            void deleteEmotionValue() { this->emotionValue_ = nullptr;};
            inline int32_t getEmotionValue() const { DARABONBA_PTR_GET_DEFAULT(emotionValue_, 0) };
            inline Phrase& setEmotionValue(int32_t emotionValue) { DARABONBA_PTR_SET_VALUE(emotionValue_, emotionValue) };


            // end Field Functions 
            bool hasEnd() const { return this->end_ != nullptr;};
            void deleteEnd() { this->end_ = nullptr;};
            inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
            inline Phrase& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


            // identity Field Functions 
            bool hasIdentity() const { return this->identity_ != nullptr;};
            void deleteIdentity() { this->identity_ = nullptr;};
            inline string getIdentity() const { DARABONBA_PTR_GET_DEFAULT(identity_, "") };
            inline Phrase& setIdentity(string identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };


            // role Field Functions 
            bool hasRole() const { return this->role_ != nullptr;};
            void deleteRole() { this->role_ = nullptr;};
            inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
            inline Phrase& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


            // silenceDuration Field Functions 
            bool hasSilenceDuration() const { return this->silenceDuration_ != nullptr;};
            void deleteSilenceDuration() { this->silenceDuration_ = nullptr;};
            inline int32_t getSilenceDuration() const { DARABONBA_PTR_GET_DEFAULT(silenceDuration_, 0) };
            inline Phrase& setSilenceDuration(int32_t silenceDuration) { DARABONBA_PTR_SET_VALUE(silenceDuration_, silenceDuration) };


            // speechRate Field Functions 
            bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
            void deleteSpeechRate() { this->speechRate_ = nullptr;};
            inline int32_t getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0) };
            inline Phrase& setSpeechRate(int32_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


            // words Field Functions 
            bool hasWords() const { return this->words_ != nullptr;};
            void deleteWords() { this->words_ = nullptr;};
            inline string getWords() const { DARABONBA_PTR_GET_DEFAULT(words_, "") };
            inline Phrase& setWords(string words) { DARABONBA_PTR_SET_VALUE(words_, words) };


          protected:
            shared_ptr<int64_t> begin_ {};
            shared_ptr<int32_t> emotionValue_ {};
            shared_ptr<int64_t> end_ {};
            shared_ptr<string> identity_ {};
            shared_ptr<string> role_ {};
            shared_ptr<int32_t> silenceDuration_ {};
            shared_ptr<int32_t> speechRate_ {};
            shared_ptr<string> words_ {};
          };

          class HitKeyWords : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const HitKeyWords& obj) { 
              DARABONBA_PTR_TO_JSON(Cid, cid_);
              DARABONBA_PTR_TO_JSON(From, from_);
              DARABONBA_PTR_TO_JSON(Pid, pid_);
              DARABONBA_PTR_TO_JSON(To, to_);
              DARABONBA_PTR_TO_JSON(Val, val_);
            };
            friend void from_json(const Darabonba::Json& j, HitKeyWords& obj) { 
              DARABONBA_PTR_FROM_JSON(Cid, cid_);
              DARABONBA_PTR_FROM_JSON(From, from_);
              DARABONBA_PTR_FROM_JSON(Pid, pid_);
              DARABONBA_PTR_FROM_JSON(To, to_);
              DARABONBA_PTR_FROM_JSON(Val, val_);
            };
            HitKeyWords() = default ;
            HitKeyWords(const HitKeyWords &) = default ;
            HitKeyWords(HitKeyWords &&) = default ;
            HitKeyWords(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~HitKeyWords() = default ;
            HitKeyWords& operator=(const HitKeyWords &) = default ;
            HitKeyWords& operator=(HitKeyWords &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->cid_ == nullptr
        && this->from_ == nullptr && this->pid_ == nullptr && this->to_ == nullptr && this->val_ == nullptr; };
            // cid Field Functions 
            bool hasCid() const { return this->cid_ != nullptr;};
            void deleteCid() { this->cid_ = nullptr;};
            inline int32_t getCid() const { DARABONBA_PTR_GET_DEFAULT(cid_, 0) };
            inline HitKeyWords& setCid(int32_t cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


            // from Field Functions 
            bool hasFrom() const { return this->from_ != nullptr;};
            void deleteFrom() { this->from_ = nullptr;};
            inline int32_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
            inline HitKeyWords& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


            // pid Field Functions 
            bool hasPid() const { return this->pid_ != nullptr;};
            void deletePid() { this->pid_ = nullptr;};
            inline int32_t getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0) };
            inline HitKeyWords& setPid(int32_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


            // to Field Functions 
            bool hasTo() const { return this->to_ != nullptr;};
            void deleteTo() { this->to_ = nullptr;};
            inline int32_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
            inline HitKeyWords& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


            // val Field Functions 
            bool hasVal() const { return this->val_ != nullptr;};
            void deleteVal() { this->val_ = nullptr;};
            inline string getVal() const { DARABONBA_PTR_GET_DEFAULT(val_, "") };
            inline HitKeyWords& setVal(string val) { DARABONBA_PTR_SET_VALUE(val_, val) };


          protected:
            shared_ptr<int32_t> cid_ {};
            shared_ptr<int32_t> from_ {};
            shared_ptr<int32_t> pid_ {};
            shared_ptr<int32_t> to_ {};
            shared_ptr<string> val_ {};
          };

          virtual bool empty() const override { return this->hitKeyWords_ == nullptr
        && this->phrase_ == nullptr; };
          // hitKeyWords Field Functions 
          bool hasHitKeyWords() const { return this->hitKeyWords_ != nullptr;};
          void deleteHitKeyWords() { this->hitKeyWords_ = nullptr;};
          inline const vector<Hit::HitKeyWords> & getHitKeyWords() const { DARABONBA_PTR_GET_CONST(hitKeyWords_, vector<Hit::HitKeyWords>) };
          inline vector<Hit::HitKeyWords> getHitKeyWords() { DARABONBA_PTR_GET(hitKeyWords_, vector<Hit::HitKeyWords>) };
          inline Hit& setHitKeyWords(const vector<Hit::HitKeyWords> & hitKeyWords) { DARABONBA_PTR_SET_VALUE(hitKeyWords_, hitKeyWords) };
          inline Hit& setHitKeyWords(vector<Hit::HitKeyWords> && hitKeyWords) { DARABONBA_PTR_SET_RVALUE(hitKeyWords_, hitKeyWords) };


          // phrase Field Functions 
          bool hasPhrase() const { return this->phrase_ != nullptr;};
          void deletePhrase() { this->phrase_ = nullptr;};
          inline const Hit::Phrase & getPhrase() const { DARABONBA_PTR_GET_CONST(phrase_, Hit::Phrase) };
          inline Hit::Phrase getPhrase() { DARABONBA_PTR_GET(phrase_, Hit::Phrase) };
          inline Hit& setPhrase(const Hit::Phrase & phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };
          inline Hit& setPhrase(Hit::Phrase && phrase) { DARABONBA_PTR_SET_RVALUE(phrase_, phrase) };


        protected:
          shared_ptr<vector<Hit::HitKeyWords>> hitKeyWords_ {};
          shared_ptr<Hit::Phrase> phrase_ {};
        };

        virtual bool empty() const override { return this->hit_ == nullptr
        && this->rid_ == nullptr && this->ruleInfoBase_ == nullptr && this->ruleName_ == nullptr; };
        // hit Field Functions 
        bool hasHit() const { return this->hit_ != nullptr;};
        void deleteHit() { this->hit_ = nullptr;};
        inline const vector<Rules::Hit> & getHit() const { DARABONBA_PTR_GET_CONST(hit_, vector<Rules::Hit>) };
        inline vector<Rules::Hit> getHit() { DARABONBA_PTR_GET(hit_, vector<Rules::Hit>) };
        inline Rules& setHit(const vector<Rules::Hit> & hit) { DARABONBA_PTR_SET_VALUE(hit_, hit) };
        inline Rules& setHit(vector<Rules::Hit> && hit) { DARABONBA_PTR_SET_RVALUE(hit_, hit) };


        // rid Field Functions 
        bool hasRid() const { return this->rid_ != nullptr;};
        void deleteRid() { this->rid_ = nullptr;};
        inline string getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
        inline Rules& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


        // ruleInfoBase Field Functions 
        bool hasRuleInfoBase() const { return this->ruleInfoBase_ != nullptr;};
        void deleteRuleInfoBase() { this->ruleInfoBase_ = nullptr;};
        inline const Rules::RuleInfoBase & getRuleInfoBase() const { DARABONBA_PTR_GET_CONST(ruleInfoBase_, Rules::RuleInfoBase) };
        inline Rules::RuleInfoBase getRuleInfoBase() { DARABONBA_PTR_GET(ruleInfoBase_, Rules::RuleInfoBase) };
        inline Rules& setRuleInfoBase(const Rules::RuleInfoBase & ruleInfoBase) { DARABONBA_PTR_SET_VALUE(ruleInfoBase_, ruleInfoBase) };
        inline Rules& setRuleInfoBase(Rules::RuleInfoBase && ruleInfoBase) { DARABONBA_PTR_SET_RVALUE(ruleInfoBase_, ruleInfoBase) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline Rules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      protected:
        shared_ptr<vector<Rules::Hit>> hit_ {};
        shared_ptr<string> rid_ {};
        shared_ptr<Rules::RuleInfoBase> ruleInfoBase_ {};
        shared_ptr<string> ruleName_ {};
      };

      virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->rules_ == nullptr && this->score_ == nullptr && this->taskId_ == nullptr && this->tid_ == nullptr; };
      // beginTime Field Functions 
      bool hasBeginTime() const { return this->beginTime_ != nullptr;};
      void deleteBeginTime() { this->beginTime_ = nullptr;};
      inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
      inline Data& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<Data::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Data::Rules>) };
      inline vector<Data::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<Data::Rules>) };
      inline Data& setRules(const vector<Data::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline Data& setRules(vector<Data::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
      inline Data& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // tid Field Functions 
      bool hasTid() const { return this->tid_ != nullptr;};
      void deleteTid() { this->tid_ = nullptr;};
      inline string getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, "") };
      inline Data& setTid(string tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    protected:
      shared_ptr<int64_t> beginTime_ {};
      shared_ptr<vector<Data::Rules>> rules_ {};
      shared_ptr<int32_t> score_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> tid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SyncQualityCheckResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SyncQualityCheckResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SyncQualityCheckResponseBody::Data) };
    inline SyncQualityCheckResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SyncQualityCheckResponseBody::Data) };
    inline SyncQualityCheckResponseBody& setData(const SyncQualityCheckResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SyncQualityCheckResponseBody& setData(SyncQualityCheckResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SyncQualityCheckResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SyncQualityCheckResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SyncQualityCheckResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<SyncQualityCheckResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
