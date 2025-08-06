// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLOUDRECORDTEXTRESPONSEBODYPARAGRAPHLISTSENTENCELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLOUDRECORDTEXTRESPONSEBODYPARAGRAPHLISTSENTENCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryCloudRecordTextResponseBodyParagraphListSentenceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCloudRecordTextResponseBodyParagraphListSentenceList& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Sentence, sentence_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WordList, wordList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCloudRecordTextResponseBodyParagraphListSentenceList& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Sentence, sentence_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WordList, wordList_);
    };
    QueryCloudRecordTextResponseBodyParagraphListSentenceList() = default ;
    QueryCloudRecordTextResponseBodyParagraphListSentenceList(const QueryCloudRecordTextResponseBodyParagraphListSentenceList &) = default ;
    QueryCloudRecordTextResponseBodyParagraphListSentenceList(QueryCloudRecordTextResponseBodyParagraphListSentenceList &&) = default ;
    QueryCloudRecordTextResponseBodyParagraphListSentenceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCloudRecordTextResponseBodyParagraphListSentenceList() = default ;
    QueryCloudRecordTextResponseBodyParagraphListSentenceList& operator=(const QueryCloudRecordTextResponseBodyParagraphListSentenceList &) = default ;
    QueryCloudRecordTextResponseBodyParagraphListSentenceList& operator=(QueryCloudRecordTextResponseBodyParagraphListSentenceList &&) = default ;
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
    inline QueryCloudRecordTextResponseBodyParagraphListSentenceList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // sentence Field Functions 
    bool hasSentence() const { return this->sentence_ != nullptr;};
    void deleteSentence() { this->sentence_ = nullptr;};
    inline string sentence() const { DARABONBA_PTR_GET_DEFAULT(sentence_, "") };
    inline QueryCloudRecordTextResponseBodyParagraphListSentenceList& setSentence(string sentence) { DARABONBA_PTR_SET_VALUE(sentence_, sentence) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryCloudRecordTextResponseBodyParagraphListSentenceList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryCloudRecordTextResponseBodyParagraphListSentenceList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // wordList Field Functions 
    bool hasWordList() const { return this->wordList_ != nullptr;};
    void deleteWordList() { this->wordList_ = nullptr;};
    inline const vector<Models::QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList> & wordList() const { DARABONBA_PTR_GET_CONST(wordList_, vector<Models::QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList>) };
    inline vector<Models::QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList> wordList() { DARABONBA_PTR_GET(wordList_, vector<Models::QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList>) };
    inline QueryCloudRecordTextResponseBodyParagraphListSentenceList& setWordList(const vector<Models::QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList> & wordList) { DARABONBA_PTR_SET_VALUE(wordList_, wordList) };
    inline QueryCloudRecordTextResponseBodyParagraphListSentenceList& setWordList(vector<Models::QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList> && wordList) { DARABONBA_PTR_SET_RVALUE(wordList_, wordList) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> sentence_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<vector<Models::QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList>> wordList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
