// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMINUTESTEXTRESPONSEBODYPARAGRAPHLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMINUTESTEXTRESPONSEBODYPARAGRAPHLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMinutesTextResponseBodyParagraphListSentenceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMinutesTextResponseBodyParagraphList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMinutesTextResponseBodyParagraphList& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(Paragraph, paragraph_);
      DARABONBA_PTR_TO_JSON(ParagraphId, paragraphId_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(SentenceList, sentenceList_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMinutesTextResponseBodyParagraphList& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(Paragraph, paragraph_);
      DARABONBA_PTR_FROM_JSON(ParagraphId, paragraphId_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(SentenceList, sentenceList_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QueryMinutesTextResponseBodyParagraphList() = default ;
    QueryMinutesTextResponseBodyParagraphList(const QueryMinutesTextResponseBodyParagraphList &) = default ;
    QueryMinutesTextResponseBodyParagraphList(QueryMinutesTextResponseBodyParagraphList &&) = default ;
    QueryMinutesTextResponseBodyParagraphList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMinutesTextResponseBodyParagraphList() = default ;
    QueryMinutesTextResponseBodyParagraphList& operator=(const QueryMinutesTextResponseBodyParagraphList &) = default ;
    QueryMinutesTextResponseBodyParagraphList& operator=(QueryMinutesTextResponseBodyParagraphList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->nickName_ == nullptr && return this->paragraph_ == nullptr && return this->paragraphId_ == nullptr && return this->recordId_ == nullptr && return this->sentenceList_ == nullptr
        && return this->startTime_ == nullptr && return this->userId_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryMinutesTextResponseBodyParagraphList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline QueryMinutesTextResponseBodyParagraphList& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // paragraph Field Functions 
    bool hasParagraph() const { return this->paragraph_ != nullptr;};
    void deleteParagraph() { this->paragraph_ = nullptr;};
    inline string paragraph() const { DARABONBA_PTR_GET_DEFAULT(paragraph_, "") };
    inline QueryMinutesTextResponseBodyParagraphList& setParagraph(string paragraph) { DARABONBA_PTR_SET_VALUE(paragraph_, paragraph) };


    // paragraphId Field Functions 
    bool hasParagraphId() const { return this->paragraphId_ != nullptr;};
    void deleteParagraphId() { this->paragraphId_ = nullptr;};
    inline int64_t paragraphId() const { DARABONBA_PTR_GET_DEFAULT(paragraphId_, 0L) };
    inline QueryMinutesTextResponseBodyParagraphList& setParagraphId(int64_t paragraphId) { DARABONBA_PTR_SET_VALUE(paragraphId_, paragraphId) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline QueryMinutesTextResponseBodyParagraphList& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // sentenceList Field Functions 
    bool hasSentenceList() const { return this->sentenceList_ != nullptr;};
    void deleteSentenceList() { this->sentenceList_ = nullptr;};
    inline const vector<Models::QueryMinutesTextResponseBodyParagraphListSentenceList> & sentenceList() const { DARABONBA_PTR_GET_CONST(sentenceList_, vector<Models::QueryMinutesTextResponseBodyParagraphListSentenceList>) };
    inline vector<Models::QueryMinutesTextResponseBodyParagraphListSentenceList> sentenceList() { DARABONBA_PTR_GET(sentenceList_, vector<Models::QueryMinutesTextResponseBodyParagraphListSentenceList>) };
    inline QueryMinutesTextResponseBodyParagraphList& setSentenceList(const vector<Models::QueryMinutesTextResponseBodyParagraphListSentenceList> & sentenceList) { DARABONBA_PTR_SET_VALUE(sentenceList_, sentenceList) };
    inline QueryMinutesTextResponseBodyParagraphList& setSentenceList(vector<Models::QueryMinutesTextResponseBodyParagraphListSentenceList> && sentenceList) { DARABONBA_PTR_SET_RVALUE(sentenceList_, sentenceList) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryMinutesTextResponseBodyParagraphList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryMinutesTextResponseBodyParagraphList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> nickName_ = nullptr;
    std::shared_ptr<string> paragraph_ = nullptr;
    std::shared_ptr<int64_t> paragraphId_ = nullptr;
    std::shared_ptr<int64_t> recordId_ = nullptr;
    std::shared_ptr<vector<Models::QueryMinutesTextResponseBodyParagraphListSentenceList>> sentenceList_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
