// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMINUTESTEXTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMINUTESTEXTRESPONSEBODY_HPP_
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
  class QueryMinutesTextResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMinutesTextResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(paragraphList, paragraphList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMinutesTextResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(paragraphList, paragraphList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    QueryMinutesTextResponseBody() = default ;
    QueryMinutesTextResponseBody(const QueryMinutesTextResponseBody &) = default ;
    QueryMinutesTextResponseBody(QueryMinutesTextResponseBody &&) = default ;
    QueryMinutesTextResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMinutesTextResponseBody() = default ;
    QueryMinutesTextResponseBody& operator=(const QueryMinutesTextResponseBody &) = default ;
    QueryMinutesTextResponseBody& operator=(QueryMinutesTextResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ParagraphList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParagraphList& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(NickName, nickName_);
        DARABONBA_PTR_TO_JSON(Paragraph, paragraph_);
        DARABONBA_PTR_TO_JSON(ParagraphId, paragraphId_);
        DARABONBA_PTR_TO_JSON(RecordId, recordId_);
        DARABONBA_PTR_TO_JSON(SentenceList, sentenceList_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, ParagraphList& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(NickName, nickName_);
        DARABONBA_PTR_FROM_JSON(Paragraph, paragraph_);
        DARABONBA_PTR_FROM_JSON(ParagraphId, paragraphId_);
        DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
        DARABONBA_PTR_FROM_JSON(SentenceList, sentenceList_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      ParagraphList() = default ;
      ParagraphList(const ParagraphList &) = default ;
      ParagraphList(ParagraphList &&) = default ;
      ParagraphList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ParagraphList() = default ;
      ParagraphList& operator=(const ParagraphList &) = default ;
      ParagraphList& operator=(ParagraphList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SentenceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SentenceList& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Sentence, sentence_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(WordList, wordList_);
        };
        friend void from_json(const Darabonba::Json& j, SentenceList& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Sentence, sentence_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(WordList, wordList_);
        };
        SentenceList() = default ;
        SentenceList(const SentenceList &) = default ;
        SentenceList(SentenceList &&) = default ;
        SentenceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SentenceList() = default ;
        SentenceList& operator=(const SentenceList &) = default ;
        SentenceList& operator=(SentenceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class WordList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WordList& obj) { 
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(Word, word_);
            DARABONBA_PTR_TO_JSON(WordId, wordId_);
          };
          friend void from_json(const Darabonba::Json& j, WordList& obj) { 
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(Word, word_);
            DARABONBA_PTR_FROM_JSON(WordId, wordId_);
          };
          WordList() = default ;
          WordList(const WordList &) = default ;
          WordList(WordList &&) = default ;
          WordList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~WordList() = default ;
          WordList& operator=(const WordList &) = default ;
          WordList& operator=(WordList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr && this->word_ == nullptr && this->wordId_ == nullptr; };
          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
          inline WordList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
          inline WordList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // word Field Functions 
          bool hasWord() const { return this->word_ != nullptr;};
          void deleteWord() { this->word_ = nullptr;};
          inline string getWord() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
          inline WordList& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


          // wordId Field Functions 
          bool hasWordId() const { return this->wordId_ != nullptr;};
          void deleteWordId() { this->wordId_ = nullptr;};
          inline string getWordId() const { DARABONBA_PTR_GET_DEFAULT(wordId_, "") };
          inline WordList& setWordId(string wordId) { DARABONBA_PTR_SET_VALUE(wordId_, wordId) };


        protected:
          shared_ptr<int64_t> endTime_ {};
          shared_ptr<int64_t> startTime_ {};
          shared_ptr<string> word_ {};
          shared_ptr<string> wordId_ {};
        };

        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->sentence_ == nullptr && this->startTime_ == nullptr && this->userId_ == nullptr && this->wordList_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline SentenceList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // sentence Field Functions 
        bool hasSentence() const { return this->sentence_ != nullptr;};
        void deleteSentence() { this->sentence_ = nullptr;};
        inline string getSentence() const { DARABONBA_PTR_GET_DEFAULT(sentence_, "") };
        inline SentenceList& setSentence(string sentence) { DARABONBA_PTR_SET_VALUE(sentence_, sentence) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline SentenceList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline SentenceList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // wordList Field Functions 
        bool hasWordList() const { return this->wordList_ != nullptr;};
        void deleteWordList() { this->wordList_ = nullptr;};
        inline const vector<SentenceList::WordList> & getWordList() const { DARABONBA_PTR_GET_CONST(wordList_, vector<SentenceList::WordList>) };
        inline vector<SentenceList::WordList> getWordList() { DARABONBA_PTR_GET(wordList_, vector<SentenceList::WordList>) };
        inline SentenceList& setWordList(const vector<SentenceList::WordList> & wordList) { DARABONBA_PTR_SET_VALUE(wordList_, wordList) };
        inline SentenceList& setWordList(vector<SentenceList::WordList> && wordList) { DARABONBA_PTR_SET_RVALUE(wordList_, wordList) };


      protected:
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<string> sentence_ {};
        shared_ptr<int64_t> startTime_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<vector<SentenceList::WordList>> wordList_ {};
      };

      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->nickName_ == nullptr && this->paragraph_ == nullptr && this->paragraphId_ == nullptr && this->recordId_ == nullptr && this->sentenceList_ == nullptr
        && this->startTime_ == nullptr && this->userId_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline ParagraphList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // nickName Field Functions 
      bool hasNickName() const { return this->nickName_ != nullptr;};
      void deleteNickName() { this->nickName_ = nullptr;};
      inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
      inline ParagraphList& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


      // paragraph Field Functions 
      bool hasParagraph() const { return this->paragraph_ != nullptr;};
      void deleteParagraph() { this->paragraph_ = nullptr;};
      inline string getParagraph() const { DARABONBA_PTR_GET_DEFAULT(paragraph_, "") };
      inline ParagraphList& setParagraph(string paragraph) { DARABONBA_PTR_SET_VALUE(paragraph_, paragraph) };


      // paragraphId Field Functions 
      bool hasParagraphId() const { return this->paragraphId_ != nullptr;};
      void deleteParagraphId() { this->paragraphId_ = nullptr;};
      inline int64_t getParagraphId() const { DARABONBA_PTR_GET_DEFAULT(paragraphId_, 0L) };
      inline ParagraphList& setParagraphId(int64_t paragraphId) { DARABONBA_PTR_SET_VALUE(paragraphId_, paragraphId) };


      // recordId Field Functions 
      bool hasRecordId() const { return this->recordId_ != nullptr;};
      void deleteRecordId() { this->recordId_ = nullptr;};
      inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
      inline ParagraphList& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


      // sentenceList Field Functions 
      bool hasSentenceList() const { return this->sentenceList_ != nullptr;};
      void deleteSentenceList() { this->sentenceList_ = nullptr;};
      inline const vector<ParagraphList::SentenceList> & getSentenceList() const { DARABONBA_PTR_GET_CONST(sentenceList_, vector<ParagraphList::SentenceList>) };
      inline vector<ParagraphList::SentenceList> getSentenceList() { DARABONBA_PTR_GET(sentenceList_, vector<ParagraphList::SentenceList>) };
      inline ParagraphList& setSentenceList(const vector<ParagraphList::SentenceList> & sentenceList) { DARABONBA_PTR_SET_VALUE(sentenceList_, sentenceList) };
      inline ParagraphList& setSentenceList(vector<ParagraphList::SentenceList> && sentenceList) { DARABONBA_PTR_SET_RVALUE(sentenceList_, sentenceList) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline ParagraphList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline ParagraphList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<string> nickName_ {};
      shared_ptr<string> paragraph_ {};
      shared_ptr<int64_t> paragraphId_ {};
      shared_ptr<int64_t> recordId_ {};
      shared_ptr<vector<ParagraphList::SentenceList>> sentenceList_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->hasMore_ == nullptr
        && this->nextToken_ == nullptr && this->paragraphList_ == nullptr && this->requestId_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline QueryMinutesTextResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryMinutesTextResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // paragraphList Field Functions 
    bool hasParagraphList() const { return this->paragraphList_ != nullptr;};
    void deleteParagraphList() { this->paragraphList_ = nullptr;};
    inline const vector<QueryMinutesTextResponseBody::ParagraphList> & getParagraphList() const { DARABONBA_PTR_GET_CONST(paragraphList_, vector<QueryMinutesTextResponseBody::ParagraphList>) };
    inline vector<QueryMinutesTextResponseBody::ParagraphList> getParagraphList() { DARABONBA_PTR_GET(paragraphList_, vector<QueryMinutesTextResponseBody::ParagraphList>) };
    inline QueryMinutesTextResponseBody& setParagraphList(const vector<QueryMinutesTextResponseBody::ParagraphList> & paragraphList) { DARABONBA_PTR_SET_VALUE(paragraphList_, paragraphList) };
    inline QueryMinutesTextResponseBody& setParagraphList(vector<QueryMinutesTextResponseBody::ParagraphList> && paragraphList) { DARABONBA_PTR_SET_RVALUE(paragraphList_, paragraphList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMinutesTextResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline QueryMinutesTextResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline QueryMinutesTextResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<bool> hasMore_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<QueryMinutesTextResponseBody::ParagraphList>> paragraphList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
