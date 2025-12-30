// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNEXTRESULTTOVERIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNEXTRESULTTOVERIFYRESPONSEBODY_HPP_
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
  class GetNextResultToVerifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNextResultToVerifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetNextResultToVerifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetNextResultToVerifyResponseBody() = default ;
    GetNextResultToVerifyResponseBody(const GetNextResultToVerifyResponseBody &) = default ;
    GetNextResultToVerifyResponseBody(GetNextResultToVerifyResponseBody &&) = default ;
    GetNextResultToVerifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNextResultToVerifyResponseBody() = default ;
    GetNextResultToVerifyResponseBody& operator=(const GetNextResultToVerifyResponseBody &) = default ;
    GetNextResultToVerifyResponseBody& operator=(GetNextResultToVerifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AudioScheme, audioScheme_);
        DARABONBA_PTR_TO_JSON(AudioURL, audioURL_);
        DARABONBA_PTR_TO_JSON(Dialogues, dialogues_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(IncorrectWords, incorrectWords_);
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(Precision, precision_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(Verified, verified_);
        DARABONBA_PTR_TO_JSON(VerifiedCount, verifiedCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AudioScheme, audioScheme_);
        DARABONBA_PTR_FROM_JSON(AudioURL, audioURL_);
        DARABONBA_PTR_FROM_JSON(Dialogues, dialogues_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(IncorrectWords, incorrectWords_);
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(Precision, precision_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(Verified, verified_);
        DARABONBA_PTR_FROM_JSON(VerifiedCount, verifiedCount_);
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
      class Dialogues : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dialogues& obj) { 
          DARABONBA_PTR_TO_JSON(Dialogue, dialogue_);
        };
        friend void from_json(const Darabonba::Json& j, Dialogues& obj) { 
          DARABONBA_PTR_FROM_JSON(Dialogue, dialogue_);
        };
        Dialogues() = default ;
        Dialogues(const Dialogues &) = default ;
        Dialogues(Dialogues &&) = default ;
        Dialogues(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dialogues() = default ;
        Dialogues& operator=(const Dialogues &) = default ;
        Dialogues& operator=(Dialogues &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Dialogue : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Dialogue& obj) { 
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
          friend void from_json(const Darabonba::Json& j, Dialogue& obj) { 
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
          Dialogue() = default ;
          Dialogue(const Dialogue &) = default ;
          Dialogue(Dialogue &&) = default ;
          Dialogue(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Dialogue() = default ;
          Dialogue& operator=(const Dialogue &) = default ;
          Dialogue& operator=(Dialogue &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Deltas : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Deltas& obj) { 
              DARABONBA_PTR_TO_JSON(Delta, delta_);
            };
            friend void from_json(const Darabonba::Json& j, Deltas& obj) { 
              DARABONBA_PTR_FROM_JSON(Delta, delta_);
            };
            Deltas() = default ;
            Deltas(const Deltas &) = default ;
            Deltas(Deltas &&) = default ;
            Deltas(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Deltas() = default ;
            Deltas& operator=(const Deltas &) = default ;
            Deltas& operator=(Deltas &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Delta : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Delta& obj) { 
                DARABONBA_PTR_TO_JSON(Source, source_);
                DARABONBA_PTR_TO_JSON(Target, target_);
                DARABONBA_PTR_TO_JSON(Type, type_);
              };
              friend void from_json(const Darabonba::Json& j, Delta& obj) { 
                DARABONBA_PTR_FROM_JSON(Source, source_);
                DARABONBA_PTR_FROM_JSON(Target, target_);
                DARABONBA_PTR_FROM_JSON(Type, type_);
              };
              Delta() = default ;
              Delta(const Delta &) = default ;
              Delta(Delta &&) = default ;
              Delta(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Delta() = default ;
              Delta& operator=(const Delta &) = default ;
              Delta& operator=(Delta &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Target : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Target& obj) { 
                  DARABONBA_PTR_TO_JSON(Line, line_);
                  DARABONBA_PTR_TO_JSON(Position, position_);
                };
                friend void from_json(const Darabonba::Json& j, Target& obj) { 
                  DARABONBA_PTR_FROM_JSON(Line, line_);
                  DARABONBA_PTR_FROM_JSON(Position, position_);
                };
                Target() = default ;
                Target(const Target &) = default ;
                Target(Target &&) = default ;
                Target(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Target() = default ;
                Target& operator=(const Target &) = default ;
                Target& operator=(Target &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class Line : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const Line& obj) { 
                    DARABONBA_PTR_TO_JSON(Line, line_);
                  };
                  friend void from_json(const Darabonba::Json& j, Line& obj) { 
                    DARABONBA_PTR_FROM_JSON(Line, line_);
                  };
                  Line() = default ;
                  Line(const Line &) = default ;
                  Line(Line &&) = default ;
                  Line(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~Line() = default ;
                  Line& operator=(const Line &) = default ;
                  Line& operator=(Line &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->line_ == nullptr; };
                  // line Field Functions 
                  bool hasLine() const { return this->line_ != nullptr;};
                  void deleteLine() { this->line_ = nullptr;};
                  inline const vector<string> & getLine() const { DARABONBA_PTR_GET_CONST(line_, vector<string>) };
                  inline vector<string> getLine() { DARABONBA_PTR_GET(line_, vector<string>) };
                  inline Line& setLine(const vector<string> & line) { DARABONBA_PTR_SET_VALUE(line_, line) };
                  inline Line& setLine(vector<string> && line) { DARABONBA_PTR_SET_RVALUE(line_, line) };


                protected:
                  shared_ptr<vector<string>> line_ {};
                };

                virtual bool empty() const override { return this->line_ == nullptr
        && this->position_ == nullptr; };
                // line Field Functions 
                bool hasLine() const { return this->line_ != nullptr;};
                void deleteLine() { this->line_ = nullptr;};
                inline const Target::Line & getLine() const { DARABONBA_PTR_GET_CONST(line_, Target::Line) };
                inline Target::Line getLine() { DARABONBA_PTR_GET(line_, Target::Line) };
                inline Target& setLine(const Target::Line & line) { DARABONBA_PTR_SET_VALUE(line_, line) };
                inline Target& setLine(Target::Line && line) { DARABONBA_PTR_SET_RVALUE(line_, line) };


                // position Field Functions 
                bool hasPosition() const { return this->position_ != nullptr;};
                void deletePosition() { this->position_ = nullptr;};
                inline int32_t getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, 0) };
                inline Target& setPosition(int32_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


              protected:
                shared_ptr<Target::Line> line_ {};
                shared_ptr<int32_t> position_ {};
              };

              class Source : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Source& obj) { 
                  DARABONBA_PTR_TO_JSON(Line, line_);
                  DARABONBA_PTR_TO_JSON(Position, position_);
                };
                friend void from_json(const Darabonba::Json& j, Source& obj) { 
                  DARABONBA_PTR_FROM_JSON(Line, line_);
                  DARABONBA_PTR_FROM_JSON(Position, position_);
                };
                Source() = default ;
                Source(const Source &) = default ;
                Source(Source &&) = default ;
                Source(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Source() = default ;
                Source& operator=(const Source &) = default ;
                Source& operator=(Source &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class Line : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const Line& obj) { 
                    DARABONBA_PTR_TO_JSON(Line, line_);
                  };
                  friend void from_json(const Darabonba::Json& j, Line& obj) { 
                    DARABONBA_PTR_FROM_JSON(Line, line_);
                  };
                  Line() = default ;
                  Line(const Line &) = default ;
                  Line(Line &&) = default ;
                  Line(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~Line() = default ;
                  Line& operator=(const Line &) = default ;
                  Line& operator=(Line &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->line_ == nullptr; };
                  // line Field Functions 
                  bool hasLine() const { return this->line_ != nullptr;};
                  void deleteLine() { this->line_ = nullptr;};
                  inline const vector<string> & getLine() const { DARABONBA_PTR_GET_CONST(line_, vector<string>) };
                  inline vector<string> getLine() { DARABONBA_PTR_GET(line_, vector<string>) };
                  inline Line& setLine(const vector<string> & line) { DARABONBA_PTR_SET_VALUE(line_, line) };
                  inline Line& setLine(vector<string> && line) { DARABONBA_PTR_SET_RVALUE(line_, line) };


                protected:
                  shared_ptr<vector<string>> line_ {};
                };

                virtual bool empty() const override { return this->line_ == nullptr
        && this->position_ == nullptr; };
                // line Field Functions 
                bool hasLine() const { return this->line_ != nullptr;};
                void deleteLine() { this->line_ = nullptr;};
                inline const Source::Line & getLine() const { DARABONBA_PTR_GET_CONST(line_, Source::Line) };
                inline Source::Line getLine() { DARABONBA_PTR_GET(line_, Source::Line) };
                inline Source& setLine(const Source::Line & line) { DARABONBA_PTR_SET_VALUE(line_, line) };
                inline Source& setLine(Source::Line && line) { DARABONBA_PTR_SET_RVALUE(line_, line) };


                // position Field Functions 
                bool hasPosition() const { return this->position_ != nullptr;};
                void deletePosition() { this->position_ = nullptr;};
                inline int32_t getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, 0) };
                inline Source& setPosition(int32_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


              protected:
                shared_ptr<Source::Line> line_ {};
                shared_ptr<int32_t> position_ {};
              };

              virtual bool empty() const override { return this->source_ == nullptr
        && this->target_ == nullptr && this->type_ == nullptr; };
              // source Field Functions 
              bool hasSource() const { return this->source_ != nullptr;};
              void deleteSource() { this->source_ = nullptr;};
              inline const Delta::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, Delta::Source) };
              inline Delta::Source getSource() { DARABONBA_PTR_GET(source_, Delta::Source) };
              inline Delta& setSource(const Delta::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
              inline Delta& setSource(Delta::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


              // target Field Functions 
              bool hasTarget() const { return this->target_ != nullptr;};
              void deleteTarget() { this->target_ = nullptr;};
              inline const Delta::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, Delta::Target) };
              inline Delta::Target getTarget() { DARABONBA_PTR_GET(target_, Delta::Target) };
              inline Delta& setTarget(const Delta::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
              inline Delta& setTarget(Delta::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline Delta& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              shared_ptr<Delta::Source> source_ {};
              shared_ptr<Delta::Target> target_ {};
              shared_ptr<string> type_ {};
            };

            virtual bool empty() const override { return this->delta_ == nullptr; };
            // delta Field Functions 
            bool hasDelta() const { return this->delta_ != nullptr;};
            void deleteDelta() { this->delta_ = nullptr;};
            inline const vector<Deltas::Delta> & getDelta() const { DARABONBA_PTR_GET_CONST(delta_, vector<Deltas::Delta>) };
            inline vector<Deltas::Delta> getDelta() { DARABONBA_PTR_GET(delta_, vector<Deltas::Delta>) };
            inline Deltas& setDelta(const vector<Deltas::Delta> & delta) { DARABONBA_PTR_SET_VALUE(delta_, delta) };
            inline Deltas& setDelta(vector<Deltas::Delta> && delta) { DARABONBA_PTR_SET_RVALUE(delta_, delta) };


          protected:
            shared_ptr<vector<Deltas::Delta>> delta_ {};
          };

          virtual bool empty() const override { return this->begin_ == nullptr
        && this->beginTime_ == nullptr && this->deltas_ == nullptr && this->emotionValue_ == nullptr && this->end_ == nullptr && this->hourMinSec_ == nullptr
        && this->identity_ == nullptr && this->incorrectWords_ == nullptr && this->role_ == nullptr && this->silenceDuration_ == nullptr && this->sourceRole_ == nullptr
        && this->sourceWords_ == nullptr && this->speechRate_ == nullptr && this->words_ == nullptr; };
          // begin Field Functions 
          bool hasBegin() const { return this->begin_ != nullptr;};
          void deleteBegin() { this->begin_ = nullptr;};
          inline int64_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0L) };
          inline Dialogue& setBegin(int64_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


          // beginTime Field Functions 
          bool hasBeginTime() const { return this->beginTime_ != nullptr;};
          void deleteBeginTime() { this->beginTime_ = nullptr;};
          inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
          inline Dialogue& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


          // deltas Field Functions 
          bool hasDeltas() const { return this->deltas_ != nullptr;};
          void deleteDeltas() { this->deltas_ = nullptr;};
          inline const Dialogue::Deltas & getDeltas() const { DARABONBA_PTR_GET_CONST(deltas_, Dialogue::Deltas) };
          inline Dialogue::Deltas getDeltas() { DARABONBA_PTR_GET(deltas_, Dialogue::Deltas) };
          inline Dialogue& setDeltas(const Dialogue::Deltas & deltas) { DARABONBA_PTR_SET_VALUE(deltas_, deltas) };
          inline Dialogue& setDeltas(Dialogue::Deltas && deltas) { DARABONBA_PTR_SET_RVALUE(deltas_, deltas) };


          // emotionValue Field Functions 
          bool hasEmotionValue() const { return this->emotionValue_ != nullptr;};
          void deleteEmotionValue() { this->emotionValue_ = nullptr;};
          inline int32_t getEmotionValue() const { DARABONBA_PTR_GET_DEFAULT(emotionValue_, 0) };
          inline Dialogue& setEmotionValue(int32_t emotionValue) { DARABONBA_PTR_SET_VALUE(emotionValue_, emotionValue) };


          // end Field Functions 
          bool hasEnd() const { return this->end_ != nullptr;};
          void deleteEnd() { this->end_ = nullptr;};
          inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
          inline Dialogue& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


          // hourMinSec Field Functions 
          bool hasHourMinSec() const { return this->hourMinSec_ != nullptr;};
          void deleteHourMinSec() { this->hourMinSec_ = nullptr;};
          inline string getHourMinSec() const { DARABONBA_PTR_GET_DEFAULT(hourMinSec_, "") };
          inline Dialogue& setHourMinSec(string hourMinSec) { DARABONBA_PTR_SET_VALUE(hourMinSec_, hourMinSec) };


          // identity Field Functions 
          bool hasIdentity() const { return this->identity_ != nullptr;};
          void deleteIdentity() { this->identity_ = nullptr;};
          inline string getIdentity() const { DARABONBA_PTR_GET_DEFAULT(identity_, "") };
          inline Dialogue& setIdentity(string identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };


          // incorrectWords Field Functions 
          bool hasIncorrectWords() const { return this->incorrectWords_ != nullptr;};
          void deleteIncorrectWords() { this->incorrectWords_ = nullptr;};
          inline int32_t getIncorrectWords() const { DARABONBA_PTR_GET_DEFAULT(incorrectWords_, 0) };
          inline Dialogue& setIncorrectWords(int32_t incorrectWords) { DARABONBA_PTR_SET_VALUE(incorrectWords_, incorrectWords) };


          // role Field Functions 
          bool hasRole() const { return this->role_ != nullptr;};
          void deleteRole() { this->role_ = nullptr;};
          inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
          inline Dialogue& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


          // silenceDuration Field Functions 
          bool hasSilenceDuration() const { return this->silenceDuration_ != nullptr;};
          void deleteSilenceDuration() { this->silenceDuration_ = nullptr;};
          inline int32_t getSilenceDuration() const { DARABONBA_PTR_GET_DEFAULT(silenceDuration_, 0) };
          inline Dialogue& setSilenceDuration(int32_t silenceDuration) { DARABONBA_PTR_SET_VALUE(silenceDuration_, silenceDuration) };


          // sourceRole Field Functions 
          bool hasSourceRole() const { return this->sourceRole_ != nullptr;};
          void deleteSourceRole() { this->sourceRole_ = nullptr;};
          inline string getSourceRole() const { DARABONBA_PTR_GET_DEFAULT(sourceRole_, "") };
          inline Dialogue& setSourceRole(string sourceRole) { DARABONBA_PTR_SET_VALUE(sourceRole_, sourceRole) };


          // sourceWords Field Functions 
          bool hasSourceWords() const { return this->sourceWords_ != nullptr;};
          void deleteSourceWords() { this->sourceWords_ = nullptr;};
          inline string getSourceWords() const { DARABONBA_PTR_GET_DEFAULT(sourceWords_, "") };
          inline Dialogue& setSourceWords(string sourceWords) { DARABONBA_PTR_SET_VALUE(sourceWords_, sourceWords) };


          // speechRate Field Functions 
          bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
          void deleteSpeechRate() { this->speechRate_ = nullptr;};
          inline int32_t getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0) };
          inline Dialogue& setSpeechRate(int32_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


          // words Field Functions 
          bool hasWords() const { return this->words_ != nullptr;};
          void deleteWords() { this->words_ = nullptr;};
          inline string getWords() const { DARABONBA_PTR_GET_DEFAULT(words_, "") };
          inline Dialogue& setWords(string words) { DARABONBA_PTR_SET_VALUE(words_, words) };


        protected:
          shared_ptr<int64_t> begin_ {};
          shared_ptr<string> beginTime_ {};
          shared_ptr<Dialogue::Deltas> deltas_ {};
          shared_ptr<int32_t> emotionValue_ {};
          shared_ptr<int64_t> end_ {};
          shared_ptr<string> hourMinSec_ {};
          shared_ptr<string> identity_ {};
          shared_ptr<int32_t> incorrectWords_ {};
          shared_ptr<string> role_ {};
          shared_ptr<int32_t> silenceDuration_ {};
          shared_ptr<string> sourceRole_ {};
          shared_ptr<string> sourceWords_ {};
          shared_ptr<int32_t> speechRate_ {};
          shared_ptr<string> words_ {};
        };

        virtual bool empty() const override { return this->dialogue_ == nullptr; };
        // dialogue Field Functions 
        bool hasDialogue() const { return this->dialogue_ != nullptr;};
        void deleteDialogue() { this->dialogue_ = nullptr;};
        inline const vector<Dialogues::Dialogue> & getDialogue() const { DARABONBA_PTR_GET_CONST(dialogue_, vector<Dialogues::Dialogue>) };
        inline vector<Dialogues::Dialogue> getDialogue() { DARABONBA_PTR_GET(dialogue_, vector<Dialogues::Dialogue>) };
        inline Dialogues& setDialogue(const vector<Dialogues::Dialogue> & dialogue) { DARABONBA_PTR_SET_VALUE(dialogue_, dialogue) };
        inline Dialogues& setDialogue(vector<Dialogues::Dialogue> && dialogue) { DARABONBA_PTR_SET_RVALUE(dialogue_, dialogue) };


      protected:
        shared_ptr<vector<Dialogues::Dialogue>> dialogue_ {};
      };

      virtual bool empty() const override { return this->audioScheme_ == nullptr
        && this->audioURL_ == nullptr && this->dialogues_ == nullptr && this->duration_ == nullptr && this->fileId_ == nullptr && this->fileName_ == nullptr
        && this->incorrectWords_ == nullptr && this->index_ == nullptr && this->precision_ == nullptr && this->status_ == nullptr && this->totalCount_ == nullptr
        && this->updateTime_ == nullptr && this->verified_ == nullptr && this->verifiedCount_ == nullptr; };
      // audioScheme Field Functions 
      bool hasAudioScheme() const { return this->audioScheme_ != nullptr;};
      void deleteAudioScheme() { this->audioScheme_ = nullptr;};
      inline string getAudioScheme() const { DARABONBA_PTR_GET_DEFAULT(audioScheme_, "") };
      inline Data& setAudioScheme(string audioScheme) { DARABONBA_PTR_SET_VALUE(audioScheme_, audioScheme) };


      // audioURL Field Functions 
      bool hasAudioURL() const { return this->audioURL_ != nullptr;};
      void deleteAudioURL() { this->audioURL_ = nullptr;};
      inline string getAudioURL() const { DARABONBA_PTR_GET_DEFAULT(audioURL_, "") };
      inline Data& setAudioURL(string audioURL) { DARABONBA_PTR_SET_VALUE(audioURL_, audioURL) };


      // dialogues Field Functions 
      bool hasDialogues() const { return this->dialogues_ != nullptr;};
      void deleteDialogues() { this->dialogues_ = nullptr;};
      inline const Data::Dialogues & getDialogues() const { DARABONBA_PTR_GET_CONST(dialogues_, Data::Dialogues) };
      inline Data::Dialogues getDialogues() { DARABONBA_PTR_GET(dialogues_, Data::Dialogues) };
      inline Data& setDialogues(const Data::Dialogues & dialogues) { DARABONBA_PTR_SET_VALUE(dialogues_, dialogues) };
      inline Data& setDialogues(Data::Dialogues && dialogues) { DARABONBA_PTR_SET_RVALUE(dialogues_, dialogues) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
      inline Data& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Data& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Data& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // incorrectWords Field Functions 
      bool hasIncorrectWords() const { return this->incorrectWords_ != nullptr;};
      void deleteIncorrectWords() { this->incorrectWords_ = nullptr;};
      inline int32_t getIncorrectWords() const { DARABONBA_PTR_GET_DEFAULT(incorrectWords_, 0) };
      inline Data& setIncorrectWords(int32_t incorrectWords) { DARABONBA_PTR_SET_VALUE(incorrectWords_, incorrectWords) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
      inline Data& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // precision Field Functions 
      bool hasPrecision() const { return this->precision_ != nullptr;};
      void deletePrecision() { this->precision_ = nullptr;};
      inline float getPrecision() const { DARABONBA_PTR_GET_DEFAULT(precision_, 0.0) };
      inline Data& setPrecision(float precision) { DARABONBA_PTR_SET_VALUE(precision_, precision) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // verified Field Functions 
      bool hasVerified() const { return this->verified_ != nullptr;};
      void deleteVerified() { this->verified_ = nullptr;};
      inline bool getVerified() const { DARABONBA_PTR_GET_DEFAULT(verified_, false) };
      inline Data& setVerified(bool verified) { DARABONBA_PTR_SET_VALUE(verified_, verified) };


      // verifiedCount Field Functions 
      bool hasVerifiedCount() const { return this->verifiedCount_ != nullptr;};
      void deleteVerifiedCount() { this->verifiedCount_ = nullptr;};
      inline int32_t getVerifiedCount() const { DARABONBA_PTR_GET_DEFAULT(verifiedCount_, 0) };
      inline Data& setVerifiedCount(int32_t verifiedCount) { DARABONBA_PTR_SET_VALUE(verifiedCount_, verifiedCount) };


    protected:
      shared_ptr<string> audioScheme_ {};
      shared_ptr<string> audioURL_ {};
      shared_ptr<Data::Dialogues> dialogues_ {};
      shared_ptr<int32_t> duration_ {};
      shared_ptr<string> fileId_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<int32_t> incorrectWords_ {};
      shared_ptr<int32_t> index_ {};
      shared_ptr<float> precision_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<int32_t> totalCount_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<bool> verified_ {};
      shared_ptr<int32_t> verifiedCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetNextResultToVerifyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetNextResultToVerifyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetNextResultToVerifyResponseBody::Data) };
    inline GetNextResultToVerifyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetNextResultToVerifyResponseBody::Data) };
    inline GetNextResultToVerifyResponseBody& setData(const GetNextResultToVerifyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetNextResultToVerifyResponseBody& setData(GetNextResultToVerifyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetNextResultToVerifyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNextResultToVerifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetNextResultToVerifyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetNextResultToVerifyResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
