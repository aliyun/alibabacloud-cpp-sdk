// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLOUDRECORDTEXTRESPONSEBODYPARAGRAPHLISTSENTENCELISTWORDLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLOUDRECORDTEXTRESPONSEBODYPARAGRAPHLISTSENTENCELISTWORDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Word, word_);
      DARABONBA_PTR_TO_JSON(WordId, wordId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Word, word_);
      DARABONBA_PTR_FROM_JSON(WordId, wordId_);
    };
    QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList() = default ;
    QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList(const QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList &) = default ;
    QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList(QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList &&) = default ;
    QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList() = default ;
    QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList& operator=(const QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList &) = default ;
    QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList& operator=(QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->startTime_ == nullptr && return this->word_ == nullptr && return this->wordId_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string word() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


    // wordId Field Functions 
    bool hasWordId() const { return this->wordId_ != nullptr;};
    void deleteWordId() { this->wordId_ = nullptr;};
    inline string wordId() const { DARABONBA_PTR_GET_DEFAULT(wordId_, "") };
    inline QueryCloudRecordTextResponseBodyParagraphListSentenceListWordList& setWordId(string wordId) { DARABONBA_PTR_SET_VALUE(wordId_, wordId) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> word_ = nullptr;
    std::shared_ptr<string> wordId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
