// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMINUTESSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMINUTESSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMinutesSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMinutesSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMinutesSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    QueryMinutesSummaryResponseBody() = default ;
    QueryMinutesSummaryResponseBody(const QueryMinutesSummaryResponseBody &) = default ;
    QueryMinutesSummaryResponseBody(QueryMinutesSummaryResponseBody &&) = default ;
    QueryMinutesSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMinutesSummaryResponseBody() = default ;
    QueryMinutesSummaryResponseBody& operator=(const QueryMinutesSummaryResponseBody &) = default ;
    QueryMinutesSummaryResponseBody& operator=(QueryMinutesSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Summary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Summary& obj) { 
        DARABONBA_PTR_TO_JSON(Actions, actions_);
        DARABONBA_PTR_TO_JSON(AutoChapters, autoChapters_);
        DARABONBA_PTR_TO_JSON(ConversationalSummary, conversationalSummary_);
        DARABONBA_PTR_TO_JSON(KeySentences, keySentences_);
        DARABONBA_PTR_TO_JSON(Keywords, keywords_);
        DARABONBA_PTR_TO_JSON(ParagraphSummary, paragraphSummary_);
        DARABONBA_PTR_TO_JSON(QuestionsAnsweringSummary, questionsAnsweringSummary_);
      };
      friend void from_json(const Darabonba::Json& j, Summary& obj) { 
        DARABONBA_PTR_FROM_JSON(Actions, actions_);
        DARABONBA_PTR_FROM_JSON(AutoChapters, autoChapters_);
        DARABONBA_PTR_FROM_JSON(ConversationalSummary, conversationalSummary_);
        DARABONBA_PTR_FROM_JSON(KeySentences, keySentences_);
        DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
        DARABONBA_PTR_FROM_JSON(ParagraphSummary, paragraphSummary_);
        DARABONBA_PTR_FROM_JSON(QuestionsAnsweringSummary, questionsAnsweringSummary_);
      };
      Summary() = default ;
      Summary(const Summary &) = default ;
      Summary(Summary &&) = default ;
      Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Summary() = default ;
      Summary& operator=(const Summary &) = default ;
      Summary& operator=(Summary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class QuestionsAnsweringSummary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QuestionsAnsweringSummary& obj) { 
          DARABONBA_PTR_TO_JSON(Answer, answer_);
          DARABONBA_PTR_TO_JSON(Question, question_);
          DARABONBA_PTR_TO_JSON(SentenceIdsOfAnswer, sentenceIdsOfAnswer_);
          DARABONBA_PTR_TO_JSON(SentenceIdsOfQuestion, sentenceIdsOfQuestion_);
        };
        friend void from_json(const Darabonba::Json& j, QuestionsAnsweringSummary& obj) { 
          DARABONBA_PTR_FROM_JSON(Answer, answer_);
          DARABONBA_PTR_FROM_JSON(Question, question_);
          DARABONBA_PTR_FROM_JSON(SentenceIdsOfAnswer, sentenceIdsOfAnswer_);
          DARABONBA_PTR_FROM_JSON(SentenceIdsOfQuestion, sentenceIdsOfQuestion_);
        };
        QuestionsAnsweringSummary() = default ;
        QuestionsAnsweringSummary(const QuestionsAnsweringSummary &) = default ;
        QuestionsAnsweringSummary(QuestionsAnsweringSummary &&) = default ;
        QuestionsAnsweringSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QuestionsAnsweringSummary() = default ;
        QuestionsAnsweringSummary& operator=(const QuestionsAnsweringSummary &) = default ;
        QuestionsAnsweringSummary& operator=(QuestionsAnsweringSummary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->answer_ == nullptr
        && this->question_ == nullptr && this->sentenceIdsOfAnswer_ == nullptr && this->sentenceIdsOfQuestion_ == nullptr; };
        // answer Field Functions 
        bool hasAnswer() const { return this->answer_ != nullptr;};
        void deleteAnswer() { this->answer_ = nullptr;};
        inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
        inline QuestionsAnsweringSummary& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


        // question Field Functions 
        bool hasQuestion() const { return this->question_ != nullptr;};
        void deleteQuestion() { this->question_ = nullptr;};
        inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
        inline QuestionsAnsweringSummary& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


        // sentenceIdsOfAnswer Field Functions 
        bool hasSentenceIdsOfAnswer() const { return this->sentenceIdsOfAnswer_ != nullptr;};
        void deleteSentenceIdsOfAnswer() { this->sentenceIdsOfAnswer_ = nullptr;};
        inline const vector<int64_t> & getSentenceIdsOfAnswer() const { DARABONBA_PTR_GET_CONST(sentenceIdsOfAnswer_, vector<int64_t>) };
        inline vector<int64_t> getSentenceIdsOfAnswer() { DARABONBA_PTR_GET(sentenceIdsOfAnswer_, vector<int64_t>) };
        inline QuestionsAnsweringSummary& setSentenceIdsOfAnswer(const vector<int64_t> & sentenceIdsOfAnswer) { DARABONBA_PTR_SET_VALUE(sentenceIdsOfAnswer_, sentenceIdsOfAnswer) };
        inline QuestionsAnsweringSummary& setSentenceIdsOfAnswer(vector<int64_t> && sentenceIdsOfAnswer) { DARABONBA_PTR_SET_RVALUE(sentenceIdsOfAnswer_, sentenceIdsOfAnswer) };


        // sentenceIdsOfQuestion Field Functions 
        bool hasSentenceIdsOfQuestion() const { return this->sentenceIdsOfQuestion_ != nullptr;};
        void deleteSentenceIdsOfQuestion() { this->sentenceIdsOfQuestion_ = nullptr;};
        inline const vector<int64_t> & getSentenceIdsOfQuestion() const { DARABONBA_PTR_GET_CONST(sentenceIdsOfQuestion_, vector<int64_t>) };
        inline vector<int64_t> getSentenceIdsOfQuestion() { DARABONBA_PTR_GET(sentenceIdsOfQuestion_, vector<int64_t>) };
        inline QuestionsAnsweringSummary& setSentenceIdsOfQuestion(const vector<int64_t> & sentenceIdsOfQuestion) { DARABONBA_PTR_SET_VALUE(sentenceIdsOfQuestion_, sentenceIdsOfQuestion) };
        inline QuestionsAnsweringSummary& setSentenceIdsOfQuestion(vector<int64_t> && sentenceIdsOfQuestion) { DARABONBA_PTR_SET_RVALUE(sentenceIdsOfQuestion_, sentenceIdsOfQuestion) };


      protected:
        shared_ptr<string> answer_ {};
        shared_ptr<string> question_ {};
        shared_ptr<vector<int64_t>> sentenceIdsOfAnswer_ {};
        shared_ptr<vector<int64_t>> sentenceIdsOfQuestion_ {};
      };

      class KeySentences : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KeySentences& obj) { 
          DARABONBA_PTR_TO_JSON(End, end_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(SentenceId, sentenceId_);
          DARABONBA_PTR_TO_JSON(Start, start_);
          DARABONBA_PTR_TO_JSON(Text, text_);
        };
        friend void from_json(const Darabonba::Json& j, KeySentences& obj) { 
          DARABONBA_PTR_FROM_JSON(End, end_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(SentenceId, sentenceId_);
          DARABONBA_PTR_FROM_JSON(Start, start_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
        };
        KeySentences() = default ;
        KeySentences(const KeySentences &) = default ;
        KeySentences(KeySentences &&) = default ;
        KeySentences(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KeySentences() = default ;
        KeySentences& operator=(const KeySentences &) = default ;
        KeySentences& operator=(KeySentences &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->end_ == nullptr
        && this->id_ == nullptr && this->sentenceId_ == nullptr && this->start_ == nullptr && this->text_ == nullptr; };
        // end Field Functions 
        bool hasEnd() const { return this->end_ != nullptr;};
        void deleteEnd() { this->end_ = nullptr;};
        inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
        inline KeySentences& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline KeySentences& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // sentenceId Field Functions 
        bool hasSentenceId() const { return this->sentenceId_ != nullptr;};
        void deleteSentenceId() { this->sentenceId_ = nullptr;};
        inline int64_t getSentenceId() const { DARABONBA_PTR_GET_DEFAULT(sentenceId_, 0L) };
        inline KeySentences& setSentenceId(int64_t sentenceId) { DARABONBA_PTR_SET_VALUE(sentenceId_, sentenceId) };


        // start Field Functions 
        bool hasStart() const { return this->start_ != nullptr;};
        void deleteStart() { this->start_ = nullptr;};
        inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
        inline KeySentences& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline KeySentences& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      protected:
        shared_ptr<int64_t> end_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<int64_t> sentenceId_ {};
        shared_ptr<int64_t> start_ {};
        shared_ptr<string> text_ {};
      };

      class ConversationalSummary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConversationalSummary& obj) { 
          DARABONBA_PTR_TO_JSON(SpeakerId, speakerId_);
          DARABONBA_PTR_TO_JSON(SpeakerName, speakerName_);
          DARABONBA_PTR_TO_JSON(Summary, summary_);
        };
        friend void from_json(const Darabonba::Json& j, ConversationalSummary& obj) { 
          DARABONBA_PTR_FROM_JSON(SpeakerId, speakerId_);
          DARABONBA_PTR_FROM_JSON(SpeakerName, speakerName_);
          DARABONBA_PTR_FROM_JSON(Summary, summary_);
        };
        ConversationalSummary() = default ;
        ConversationalSummary(const ConversationalSummary &) = default ;
        ConversationalSummary(ConversationalSummary &&) = default ;
        ConversationalSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConversationalSummary() = default ;
        ConversationalSummary& operator=(const ConversationalSummary &) = default ;
        ConversationalSummary& operator=(ConversationalSummary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->speakerId_ == nullptr
        && this->speakerName_ == nullptr && this->summary_ == nullptr; };
        // speakerId Field Functions 
        bool hasSpeakerId() const { return this->speakerId_ != nullptr;};
        void deleteSpeakerId() { this->speakerId_ = nullptr;};
        inline string getSpeakerId() const { DARABONBA_PTR_GET_DEFAULT(speakerId_, "") };
        inline ConversationalSummary& setSpeakerId(string speakerId) { DARABONBA_PTR_SET_VALUE(speakerId_, speakerId) };


        // speakerName Field Functions 
        bool hasSpeakerName() const { return this->speakerName_ != nullptr;};
        void deleteSpeakerName() { this->speakerName_ = nullptr;};
        inline string getSpeakerName() const { DARABONBA_PTR_GET_DEFAULT(speakerName_, "") };
        inline ConversationalSummary& setSpeakerName(string speakerName) { DARABONBA_PTR_SET_VALUE(speakerName_, speakerName) };


        // summary Field Functions 
        bool hasSummary() const { return this->summary_ != nullptr;};
        void deleteSummary() { this->summary_ = nullptr;};
        inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
        inline ConversationalSummary& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      protected:
        shared_ptr<string> speakerId_ {};
        shared_ptr<string> speakerName_ {};
        shared_ptr<string> summary_ {};
      };

      class AutoChapters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoChapters& obj) { 
          DARABONBA_PTR_TO_JSON(End, end_);
          DARABONBA_PTR_TO_JSON(Headline, headline_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Start, start_);
          DARABONBA_PTR_TO_JSON(Summary, summary_);
        };
        friend void from_json(const Darabonba::Json& j, AutoChapters& obj) { 
          DARABONBA_PTR_FROM_JSON(End, end_);
          DARABONBA_PTR_FROM_JSON(Headline, headline_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Start, start_);
          DARABONBA_PTR_FROM_JSON(Summary, summary_);
        };
        AutoChapters() = default ;
        AutoChapters(const AutoChapters &) = default ;
        AutoChapters(AutoChapters &&) = default ;
        AutoChapters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoChapters() = default ;
        AutoChapters& operator=(const AutoChapters &) = default ;
        AutoChapters& operator=(AutoChapters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->end_ == nullptr
        && this->headline_ == nullptr && this->id_ == nullptr && this->start_ == nullptr && this->summary_ == nullptr; };
        // end Field Functions 
        bool hasEnd() const { return this->end_ != nullptr;};
        void deleteEnd() { this->end_ = nullptr;};
        inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
        inline AutoChapters& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


        // headline Field Functions 
        bool hasHeadline() const { return this->headline_ != nullptr;};
        void deleteHeadline() { this->headline_ = nullptr;};
        inline string getHeadline() const { DARABONBA_PTR_GET_DEFAULT(headline_, "") };
        inline AutoChapters& setHeadline(string headline) { DARABONBA_PTR_SET_VALUE(headline_, headline) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline AutoChapters& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // start Field Functions 
        bool hasStart() const { return this->start_ != nullptr;};
        void deleteStart() { this->start_ = nullptr;};
        inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
        inline AutoChapters& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


        // summary Field Functions 
        bool hasSummary() const { return this->summary_ != nullptr;};
        void deleteSummary() { this->summary_ = nullptr;};
        inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
        inline AutoChapters& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      protected:
        shared_ptr<int64_t> end_ {};
        shared_ptr<string> headline_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<int64_t> start_ {};
        shared_ptr<string> summary_ {};
      };

      class Actions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Actions& obj) { 
          DARABONBA_PTR_TO_JSON(End, end_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(SentenceId, sentenceId_);
          DARABONBA_PTR_TO_JSON(Start, start_);
          DARABONBA_PTR_TO_JSON(Text, text_);
        };
        friend void from_json(const Darabonba::Json& j, Actions& obj) { 
          DARABONBA_PTR_FROM_JSON(End, end_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(SentenceId, sentenceId_);
          DARABONBA_PTR_FROM_JSON(Start, start_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
        };
        Actions() = default ;
        Actions(const Actions &) = default ;
        Actions(Actions &&) = default ;
        Actions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Actions() = default ;
        Actions& operator=(const Actions &) = default ;
        Actions& operator=(Actions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->end_ == nullptr
        && this->id_ == nullptr && this->sentenceId_ == nullptr && this->start_ == nullptr && this->text_ == nullptr; };
        // end Field Functions 
        bool hasEnd() const { return this->end_ != nullptr;};
        void deleteEnd() { this->end_ = nullptr;};
        inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
        inline Actions& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Actions& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // sentenceId Field Functions 
        bool hasSentenceId() const { return this->sentenceId_ != nullptr;};
        void deleteSentenceId() { this->sentenceId_ = nullptr;};
        inline int64_t getSentenceId() const { DARABONBA_PTR_GET_DEFAULT(sentenceId_, 0L) };
        inline Actions& setSentenceId(int64_t sentenceId) { DARABONBA_PTR_SET_VALUE(sentenceId_, sentenceId) };


        // start Field Functions 
        bool hasStart() const { return this->start_ != nullptr;};
        void deleteStart() { this->start_ = nullptr;};
        inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
        inline Actions& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Actions& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      protected:
        shared_ptr<int64_t> end_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<int64_t> sentenceId_ {};
        shared_ptr<int64_t> start_ {};
        shared_ptr<string> text_ {};
      };

      virtual bool empty() const override { return this->actions_ == nullptr
        && this->autoChapters_ == nullptr && this->conversationalSummary_ == nullptr && this->keySentences_ == nullptr && this->keywords_ == nullptr && this->paragraphSummary_ == nullptr
        && this->questionsAnsweringSummary_ == nullptr; };
      // actions Field Functions 
      bool hasActions() const { return this->actions_ != nullptr;};
      void deleteActions() { this->actions_ = nullptr;};
      inline const Summary::Actions & getActions() const { DARABONBA_PTR_GET_CONST(actions_, Summary::Actions) };
      inline Summary::Actions getActions() { DARABONBA_PTR_GET(actions_, Summary::Actions) };
      inline Summary& setActions(const Summary::Actions & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
      inline Summary& setActions(Summary::Actions && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


      // autoChapters Field Functions 
      bool hasAutoChapters() const { return this->autoChapters_ != nullptr;};
      void deleteAutoChapters() { this->autoChapters_ = nullptr;};
      inline const vector<Summary::AutoChapters> & getAutoChapters() const { DARABONBA_PTR_GET_CONST(autoChapters_, vector<Summary::AutoChapters>) };
      inline vector<Summary::AutoChapters> getAutoChapters() { DARABONBA_PTR_GET(autoChapters_, vector<Summary::AutoChapters>) };
      inline Summary& setAutoChapters(const vector<Summary::AutoChapters> & autoChapters) { DARABONBA_PTR_SET_VALUE(autoChapters_, autoChapters) };
      inline Summary& setAutoChapters(vector<Summary::AutoChapters> && autoChapters) { DARABONBA_PTR_SET_RVALUE(autoChapters_, autoChapters) };


      // conversationalSummary Field Functions 
      bool hasConversationalSummary() const { return this->conversationalSummary_ != nullptr;};
      void deleteConversationalSummary() { this->conversationalSummary_ = nullptr;};
      inline const vector<Summary::ConversationalSummary> & getConversationalSummary() const { DARABONBA_PTR_GET_CONST(conversationalSummary_, vector<Summary::ConversationalSummary>) };
      inline vector<Summary::ConversationalSummary> getConversationalSummary() { DARABONBA_PTR_GET(conversationalSummary_, vector<Summary::ConversationalSummary>) };
      inline Summary& setConversationalSummary(const vector<Summary::ConversationalSummary> & conversationalSummary) { DARABONBA_PTR_SET_VALUE(conversationalSummary_, conversationalSummary) };
      inline Summary& setConversationalSummary(vector<Summary::ConversationalSummary> && conversationalSummary) { DARABONBA_PTR_SET_RVALUE(conversationalSummary_, conversationalSummary) };


      // keySentences Field Functions 
      bool hasKeySentences() const { return this->keySentences_ != nullptr;};
      void deleteKeySentences() { this->keySentences_ = nullptr;};
      inline const Summary::KeySentences & getKeySentences() const { DARABONBA_PTR_GET_CONST(keySentences_, Summary::KeySentences) };
      inline Summary::KeySentences getKeySentences() { DARABONBA_PTR_GET(keySentences_, Summary::KeySentences) };
      inline Summary& setKeySentences(const Summary::KeySentences & keySentences) { DARABONBA_PTR_SET_VALUE(keySentences_, keySentences) };
      inline Summary& setKeySentences(Summary::KeySentences && keySentences) { DARABONBA_PTR_SET_RVALUE(keySentences_, keySentences) };


      // keywords Field Functions 
      bool hasKeywords() const { return this->keywords_ != nullptr;};
      void deleteKeywords() { this->keywords_ = nullptr;};
      inline const vector<string> & getKeywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<string>) };
      inline vector<string> getKeywords() { DARABONBA_PTR_GET(keywords_, vector<string>) };
      inline Summary& setKeywords(const vector<string> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
      inline Summary& setKeywords(vector<string> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


      // paragraphSummary Field Functions 
      bool hasParagraphSummary() const { return this->paragraphSummary_ != nullptr;};
      void deleteParagraphSummary() { this->paragraphSummary_ = nullptr;};
      inline string getParagraphSummary() const { DARABONBA_PTR_GET_DEFAULT(paragraphSummary_, "") };
      inline Summary& setParagraphSummary(string paragraphSummary) { DARABONBA_PTR_SET_VALUE(paragraphSummary_, paragraphSummary) };


      // questionsAnsweringSummary Field Functions 
      bool hasQuestionsAnsweringSummary() const { return this->questionsAnsweringSummary_ != nullptr;};
      void deleteQuestionsAnsweringSummary() { this->questionsAnsweringSummary_ = nullptr;};
      inline const vector<Summary::QuestionsAnsweringSummary> & getQuestionsAnsweringSummary() const { DARABONBA_PTR_GET_CONST(questionsAnsweringSummary_, vector<Summary::QuestionsAnsweringSummary>) };
      inline vector<Summary::QuestionsAnsweringSummary> getQuestionsAnsweringSummary() { DARABONBA_PTR_GET(questionsAnsweringSummary_, vector<Summary::QuestionsAnsweringSummary>) };
      inline Summary& setQuestionsAnsweringSummary(const vector<Summary::QuestionsAnsweringSummary> & questionsAnsweringSummary) { DARABONBA_PTR_SET_VALUE(questionsAnsweringSummary_, questionsAnsweringSummary) };
      inline Summary& setQuestionsAnsweringSummary(vector<Summary::QuestionsAnsweringSummary> && questionsAnsweringSummary) { DARABONBA_PTR_SET_RVALUE(questionsAnsweringSummary_, questionsAnsweringSummary) };


    protected:
      shared_ptr<Summary::Actions> actions_ {};
      shared_ptr<vector<Summary::AutoChapters>> autoChapters_ {};
      shared_ptr<vector<Summary::ConversationalSummary>> conversationalSummary_ {};
      shared_ptr<Summary::KeySentences> keySentences_ {};
      shared_ptr<vector<string>> keywords_ {};
      shared_ptr<string> paragraphSummary_ {};
      shared_ptr<vector<Summary::QuestionsAnsweringSummary>> questionsAnsweringSummary_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->summary_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMinutesSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const QueryMinutesSummaryResponseBody::Summary & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, QueryMinutesSummaryResponseBody::Summary) };
    inline QueryMinutesSummaryResponseBody::Summary getSummary() { DARABONBA_PTR_GET(summary_, QueryMinutesSummaryResponseBody::Summary) };
    inline QueryMinutesSummaryResponseBody& setSummary(const QueryMinutesSummaryResponseBody::Summary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline QueryMinutesSummaryResponseBody& setSummary(QueryMinutesSummaryResponseBody::Summary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline QueryMinutesSummaryResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline QueryMinutesSummaryResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<QueryMinutesSummaryResponseBody::Summary> summary_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
