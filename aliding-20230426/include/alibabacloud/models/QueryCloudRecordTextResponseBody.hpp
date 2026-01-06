// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLOUDRECORDTEXTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLOUDRECORDTEXTRESPONSEBODY_HPP_
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
  class QueryCloudRecordTextResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCloudRecordTextResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(paragraphList, paragraphList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCloudRecordTextResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(paragraphList, paragraphList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    QueryCloudRecordTextResponseBody() = default ;
    QueryCloudRecordTextResponseBody(const QueryCloudRecordTextResponseBody &) = default ;
    QueryCloudRecordTextResponseBody(QueryCloudRecordTextResponseBody &&) = default ;
    QueryCloudRecordTextResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCloudRecordTextResponseBody() = default ;
    QueryCloudRecordTextResponseBody& operator=(const QueryCloudRecordTextResponseBody &) = default ;
    QueryCloudRecordTextResponseBody& operator=(QueryCloudRecordTextResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ParagraphList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParagraphList& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(NextTtoken, nextTtoken_);
        DARABONBA_PTR_TO_JSON(NickName, nickName_);
        DARABONBA_PTR_TO_JSON(Paragraph, paragraph_);
        DARABONBA_PTR_TO_JSON(RecordId, recordId_);
        DARABONBA_PTR_TO_JSON(SentenceList, sentenceList_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, ParagraphList& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(NextTtoken, nextTtoken_);
        DARABONBA_PTR_FROM_JSON(NickName, nickName_);
        DARABONBA_PTR_FROM_JSON(Paragraph, paragraph_);
        DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
        DARABONBA_PTR_FROM_JSON(SentenceList, sentenceList_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
        && this->nextTtoken_ == nullptr && this->nickName_ == nullptr && this->paragraph_ == nullptr && this->recordId_ == nullptr && this->sentenceList_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->userId_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline ParagraphList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // nextTtoken Field Functions 
      bool hasNextTtoken() const { return this->nextTtoken_ != nullptr;};
      void deleteNextTtoken() { this->nextTtoken_ = nullptr;};
      inline int64_t getNextTtoken() const { DARABONBA_PTR_GET_DEFAULT(nextTtoken_, 0L) };
      inline ParagraphList& setNextTtoken(int64_t nextTtoken) { DARABONBA_PTR_SET_VALUE(nextTtoken_, nextTtoken) };


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


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
      inline ParagraphList& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline ParagraphList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<int64_t> nextTtoken_ {};
      shared_ptr<string> nickName_ {};
      shared_ptr<string> paragraph_ {};
      shared_ptr<int64_t> recordId_ {};
      shared_ptr<vector<ParagraphList::SentenceList>> sentenceList_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<int64_t> status_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->hasMore_ == nullptr
        && this->paragraphList_ == nullptr && this->requestId_ == nullptr; };
    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline QueryCloudRecordTextResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // paragraphList Field Functions 
    bool hasParagraphList() const { return this->paragraphList_ != nullptr;};
    void deleteParagraphList() { this->paragraphList_ = nullptr;};
    inline const vector<QueryCloudRecordTextResponseBody::ParagraphList> & getParagraphList() const { DARABONBA_PTR_GET_CONST(paragraphList_, vector<QueryCloudRecordTextResponseBody::ParagraphList>) };
    inline vector<QueryCloudRecordTextResponseBody::ParagraphList> getParagraphList() { DARABONBA_PTR_GET(paragraphList_, vector<QueryCloudRecordTextResponseBody::ParagraphList>) };
    inline QueryCloudRecordTextResponseBody& setParagraphList(const vector<QueryCloudRecordTextResponseBody::ParagraphList> & paragraphList) { DARABONBA_PTR_SET_VALUE(paragraphList_, paragraphList) };
    inline QueryCloudRecordTextResponseBody& setParagraphList(vector<QueryCloudRecordTextResponseBody::ParagraphList> && paragraphList) { DARABONBA_PTR_SET_RVALUE(paragraphList_, paragraphList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCloudRecordTextResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<bool> hasMore_ {};
    shared_ptr<vector<QueryCloudRecordTextResponseBody::ParagraphList>> paragraphList_ {};
    // requestId
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
