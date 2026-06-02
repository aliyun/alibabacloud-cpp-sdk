// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEETINGFLASHMINUTESTEXTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MEETINGFLASHMINUTESTEXTRESPONSEBODY_HPP_
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
  class MeetingFlashMinutesTextResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MeetingFlashMinutesTextResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(hasNext, hasNext_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(paragraphList, paragraphList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, MeetingFlashMinutesTextResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(hasNext, hasNext_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(paragraphList, paragraphList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    MeetingFlashMinutesTextResponseBody() = default ;
    MeetingFlashMinutesTextResponseBody(const MeetingFlashMinutesTextResponseBody &) = default ;
    MeetingFlashMinutesTextResponseBody(MeetingFlashMinutesTextResponseBody &&) = default ;
    MeetingFlashMinutesTextResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MeetingFlashMinutesTextResponseBody() = default ;
    MeetingFlashMinutesTextResponseBody& operator=(const MeetingFlashMinutesTextResponseBody &) = default ;
    MeetingFlashMinutesTextResponseBody& operator=(MeetingFlashMinutesTextResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ParagraphList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParagraphList& obj) { 
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(nickName, nickName_);
        DARABONBA_PTR_TO_JSON(paragraph, paragraph_);
        DARABONBA_PTR_TO_JSON(sentenceList, sentenceList_);
        DARABONBA_PTR_TO_JSON(speakerDisplay, speakerDisplay_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, ParagraphList& obj) { 
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(nickName, nickName_);
        DARABONBA_PTR_FROM_JSON(paragraph, paragraph_);
        DARABONBA_PTR_FROM_JSON(sentenceList, sentenceList_);
        DARABONBA_PTR_FROM_JSON(speakerDisplay, speakerDisplay_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
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
      class SpeakerDisplay : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SpeakerDisplay& obj) { 
          DARABONBA_PTR_TO_JSON(avatarUrl, avatarUrl_);
          DARABONBA_PTR_TO_JSON(nickName, nickName_);
        };
        friend void from_json(const Darabonba::Json& j, SpeakerDisplay& obj) { 
          DARABONBA_PTR_FROM_JSON(avatarUrl, avatarUrl_);
          DARABONBA_PTR_FROM_JSON(nickName, nickName_);
        };
        SpeakerDisplay() = default ;
        SpeakerDisplay(const SpeakerDisplay &) = default ;
        SpeakerDisplay(SpeakerDisplay &&) = default ;
        SpeakerDisplay(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SpeakerDisplay() = default ;
        SpeakerDisplay& operator=(const SpeakerDisplay &) = default ;
        SpeakerDisplay& operator=(SpeakerDisplay &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->avatarUrl_ == nullptr
        && this->nickName_ == nullptr; };
        // avatarUrl Field Functions 
        bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
        void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
        inline string getAvatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
        inline SpeakerDisplay& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


        // nickName Field Functions 
        bool hasNickName() const { return this->nickName_ != nullptr;};
        void deleteNickName() { this->nickName_ = nullptr;};
        inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
        inline SpeakerDisplay& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


      protected:
        shared_ptr<string> avatarUrl_ {};
        shared_ptr<string> nickName_ {};
      };

      class SentenceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SentenceList& obj) { 
          DARABONBA_PTR_TO_JSON(endTime, endTime_);
          DARABONBA_PTR_TO_JSON(sentence, sentence_);
          DARABONBA_PTR_TO_JSON(startTime, startTime_);
          DARABONBA_PTR_TO_JSON(wordList, wordList_);
        };
        friend void from_json(const Darabonba::Json& j, SentenceList& obj) { 
          DARABONBA_PTR_FROM_JSON(endTime, endTime_);
          DARABONBA_PTR_FROM_JSON(sentence, sentence_);
          DARABONBA_PTR_FROM_JSON(startTime, startTime_);
          DARABONBA_PTR_FROM_JSON(wordList, wordList_);
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
            DARABONBA_PTR_TO_JSON(endTime, endTime_);
            DARABONBA_PTR_TO_JSON(startTime, startTime_);
            DARABONBA_PTR_TO_JSON(word, word_);
          };
          friend void from_json(const Darabonba::Json& j, WordList& obj) { 
            DARABONBA_PTR_FROM_JSON(endTime, endTime_);
            DARABONBA_PTR_FROM_JSON(startTime, startTime_);
            DARABONBA_PTR_FROM_JSON(word, word_);
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
        && this->startTime_ == nullptr && this->word_ == nullptr; };
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


        protected:
          shared_ptr<int64_t> endTime_ {};
          shared_ptr<int64_t> startTime_ {};
          shared_ptr<string> word_ {};
        };

        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->sentence_ == nullptr && this->startTime_ == nullptr && this->wordList_ == nullptr; };
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
        shared_ptr<vector<SentenceList::WordList>> wordList_ {};
      };

      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->nickName_ == nullptr && this->paragraph_ == nullptr && this->sentenceList_ == nullptr && this->speakerDisplay_ == nullptr && this->startTime_ == nullptr
        && this->userId_ == nullptr; };
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


      // sentenceList Field Functions 
      bool hasSentenceList() const { return this->sentenceList_ != nullptr;};
      void deleteSentenceList() { this->sentenceList_ = nullptr;};
      inline const vector<ParagraphList::SentenceList> & getSentenceList() const { DARABONBA_PTR_GET_CONST(sentenceList_, vector<ParagraphList::SentenceList>) };
      inline vector<ParagraphList::SentenceList> getSentenceList() { DARABONBA_PTR_GET(sentenceList_, vector<ParagraphList::SentenceList>) };
      inline ParagraphList& setSentenceList(const vector<ParagraphList::SentenceList> & sentenceList) { DARABONBA_PTR_SET_VALUE(sentenceList_, sentenceList) };
      inline ParagraphList& setSentenceList(vector<ParagraphList::SentenceList> && sentenceList) { DARABONBA_PTR_SET_RVALUE(sentenceList_, sentenceList) };


      // speakerDisplay Field Functions 
      bool hasSpeakerDisplay() const { return this->speakerDisplay_ != nullptr;};
      void deleteSpeakerDisplay() { this->speakerDisplay_ = nullptr;};
      inline const ParagraphList::SpeakerDisplay & getSpeakerDisplay() const { DARABONBA_PTR_GET_CONST(speakerDisplay_, ParagraphList::SpeakerDisplay) };
      inline ParagraphList::SpeakerDisplay getSpeakerDisplay() { DARABONBA_PTR_GET(speakerDisplay_, ParagraphList::SpeakerDisplay) };
      inline ParagraphList& setSpeakerDisplay(const ParagraphList::SpeakerDisplay & speakerDisplay) { DARABONBA_PTR_SET_VALUE(speakerDisplay_, speakerDisplay) };
      inline ParagraphList& setSpeakerDisplay(ParagraphList::SpeakerDisplay && speakerDisplay) { DARABONBA_PTR_SET_RVALUE(speakerDisplay_, speakerDisplay) };


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
      shared_ptr<vector<ParagraphList::SentenceList>> sentenceList_ {};
      shared_ptr<ParagraphList::SpeakerDisplay> speakerDisplay_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->hasNext_ == nullptr
        && this->nextToken_ == nullptr && this->paragraphList_ == nullptr && this->requestId_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // hasNext Field Functions 
    bool hasHasNext() const { return this->hasNext_ != nullptr;};
    void deleteHasNext() { this->hasNext_ = nullptr;};
    inline bool getHasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
    inline MeetingFlashMinutesTextResponseBody& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline MeetingFlashMinutesTextResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // paragraphList Field Functions 
    bool hasParagraphList() const { return this->paragraphList_ != nullptr;};
    void deleteParagraphList() { this->paragraphList_ = nullptr;};
    inline const vector<MeetingFlashMinutesTextResponseBody::ParagraphList> & getParagraphList() const { DARABONBA_PTR_GET_CONST(paragraphList_, vector<MeetingFlashMinutesTextResponseBody::ParagraphList>) };
    inline vector<MeetingFlashMinutesTextResponseBody::ParagraphList> getParagraphList() { DARABONBA_PTR_GET(paragraphList_, vector<MeetingFlashMinutesTextResponseBody::ParagraphList>) };
    inline MeetingFlashMinutesTextResponseBody& setParagraphList(const vector<MeetingFlashMinutesTextResponseBody::ParagraphList> & paragraphList) { DARABONBA_PTR_SET_VALUE(paragraphList_, paragraphList) };
    inline MeetingFlashMinutesTextResponseBody& setParagraphList(vector<MeetingFlashMinutesTextResponseBody::ParagraphList> && paragraphList) { DARABONBA_PTR_SET_RVALUE(paragraphList_, paragraphList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MeetingFlashMinutesTextResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline MeetingFlashMinutesTextResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline MeetingFlashMinutesTextResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<bool> hasNext_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<MeetingFlashMinutesTextResponseBody::ParagraphList>> paragraphList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
