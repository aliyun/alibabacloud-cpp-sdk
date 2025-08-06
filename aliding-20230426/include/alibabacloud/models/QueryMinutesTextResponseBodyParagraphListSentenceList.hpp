// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMINUTESTEXTRESPONSEBODYPARAGRAPHLISTSENTENCELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMINUTESTEXTRESPONSEBODYPARAGRAPHLISTSENTENCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMinutesTextResponseBodyParagraphListSentenceListWordList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMinutesTextResponseBodyParagraphListSentenceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMinutesTextResponseBodyParagraphListSentenceList& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Sentence, sentence_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WordList, wordList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMinutesTextResponseBodyParagraphListSentenceList& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Sentence, sentence_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WordList, wordList_);
    };
    QueryMinutesTextResponseBodyParagraphListSentenceList() = default ;
    QueryMinutesTextResponseBodyParagraphListSentenceList(const QueryMinutesTextResponseBodyParagraphListSentenceList &) = default ;
    QueryMinutesTextResponseBodyParagraphListSentenceList(QueryMinutesTextResponseBodyParagraphListSentenceList &&) = default ;
    QueryMinutesTextResponseBodyParagraphListSentenceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMinutesTextResponseBodyParagraphListSentenceList() = default ;
    QueryMinutesTextResponseBodyParagraphListSentenceList& operator=(const QueryMinutesTextResponseBodyParagraphListSentenceList &) = default ;
    QueryMinutesTextResponseBodyParagraphListSentenceList& operator=(QueryMinutesTextResponseBodyParagraphListSentenceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->sentence_ != nullptr && this->startTime_ != nullptr && this->userId_ != nullptr && this->wordList_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryMinutesTextResponseBodyParagraphListSentenceList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // sentence Field Functions 
    bool hasSentence() const { return this->sentence_ != nullptr;};
    void deleteSentence() { this->sentence_ = nullptr;};
    inline string sentence() const { DARABONBA_PTR_GET_DEFAULT(sentence_, "") };
    inline QueryMinutesTextResponseBodyParagraphListSentenceList& setSentence(string sentence) { DARABONBA_PTR_SET_VALUE(sentence_, sentence) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryMinutesTextResponseBodyParagraphListSentenceList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryMinutesTextResponseBodyParagraphListSentenceList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // wordList Field Functions 
    bool hasWordList() const { return this->wordList_ != nullptr;};
    void deleteWordList() { this->wordList_ = nullptr;};
    inline const vector<Models::QueryMinutesTextResponseBodyParagraphListSentenceListWordList> & wordList() const { DARABONBA_PTR_GET_CONST(wordList_, vector<Models::QueryMinutesTextResponseBodyParagraphListSentenceListWordList>) };
    inline vector<Models::QueryMinutesTextResponseBodyParagraphListSentenceListWordList> wordList() { DARABONBA_PTR_GET(wordList_, vector<Models::QueryMinutesTextResponseBodyParagraphListSentenceListWordList>) };
    inline QueryMinutesTextResponseBodyParagraphListSentenceList& setWordList(const vector<Models::QueryMinutesTextResponseBodyParagraphListSentenceListWordList> & wordList) { DARABONBA_PTR_SET_VALUE(wordList_, wordList) };
    inline QueryMinutesTextResponseBodyParagraphListSentenceList& setWordList(vector<Models::QueryMinutesTextResponseBodyParagraphListSentenceListWordList> && wordList) { DARABONBA_PTR_SET_RVALUE(wordList_, wordList) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> sentence_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<vector<Models::QueryMinutesTextResponseBodyParagraphListSentenceListWordList>> wordList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
