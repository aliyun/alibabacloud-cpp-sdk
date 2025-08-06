// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLOUDRECORDTEXTRESPONSEBODYPARAGRAPHLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLOUDRECORDTEXTRESPONSEBODYPARAGRAPHLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryCloudRecordTextResponseBodyParagraphListSentenceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryCloudRecordTextResponseBodyParagraphList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCloudRecordTextResponseBodyParagraphList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, QueryCloudRecordTextResponseBodyParagraphList& obj) { 
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
    QueryCloudRecordTextResponseBodyParagraphList() = default ;
    QueryCloudRecordTextResponseBodyParagraphList(const QueryCloudRecordTextResponseBodyParagraphList &) = default ;
    QueryCloudRecordTextResponseBodyParagraphList(QueryCloudRecordTextResponseBodyParagraphList &&) = default ;
    QueryCloudRecordTextResponseBodyParagraphList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCloudRecordTextResponseBodyParagraphList() = default ;
    QueryCloudRecordTextResponseBodyParagraphList& operator=(const QueryCloudRecordTextResponseBodyParagraphList &) = default ;
    QueryCloudRecordTextResponseBodyParagraphList& operator=(QueryCloudRecordTextResponseBodyParagraphList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->nextTtoken_ != nullptr && this->nickName_ != nullptr && this->paragraph_ != nullptr && this->recordId_ != nullptr && this->sentenceList_ != nullptr
        && this->startTime_ != nullptr && this->status_ != nullptr && this->userId_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryCloudRecordTextResponseBodyParagraphList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // nextTtoken Field Functions 
    bool hasNextTtoken() const { return this->nextTtoken_ != nullptr;};
    void deleteNextTtoken() { this->nextTtoken_ = nullptr;};
    inline int64_t nextTtoken() const { DARABONBA_PTR_GET_DEFAULT(nextTtoken_, 0L) };
    inline QueryCloudRecordTextResponseBodyParagraphList& setNextTtoken(int64_t nextTtoken) { DARABONBA_PTR_SET_VALUE(nextTtoken_, nextTtoken) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline QueryCloudRecordTextResponseBodyParagraphList& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // paragraph Field Functions 
    bool hasParagraph() const { return this->paragraph_ != nullptr;};
    void deleteParagraph() { this->paragraph_ = nullptr;};
    inline string paragraph() const { DARABONBA_PTR_GET_DEFAULT(paragraph_, "") };
    inline QueryCloudRecordTextResponseBodyParagraphList& setParagraph(string paragraph) { DARABONBA_PTR_SET_VALUE(paragraph_, paragraph) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline QueryCloudRecordTextResponseBodyParagraphList& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // sentenceList Field Functions 
    bool hasSentenceList() const { return this->sentenceList_ != nullptr;};
    void deleteSentenceList() { this->sentenceList_ = nullptr;};
    inline const vector<Models::QueryCloudRecordTextResponseBodyParagraphListSentenceList> & sentenceList() const { DARABONBA_PTR_GET_CONST(sentenceList_, vector<Models::QueryCloudRecordTextResponseBodyParagraphListSentenceList>) };
    inline vector<Models::QueryCloudRecordTextResponseBodyParagraphListSentenceList> sentenceList() { DARABONBA_PTR_GET(sentenceList_, vector<Models::QueryCloudRecordTextResponseBodyParagraphListSentenceList>) };
    inline QueryCloudRecordTextResponseBodyParagraphList& setSentenceList(const vector<Models::QueryCloudRecordTextResponseBodyParagraphListSentenceList> & sentenceList) { DARABONBA_PTR_SET_VALUE(sentenceList_, sentenceList) };
    inline QueryCloudRecordTextResponseBodyParagraphList& setSentenceList(vector<Models::QueryCloudRecordTextResponseBodyParagraphListSentenceList> && sentenceList) { DARABONBA_PTR_SET_RVALUE(sentenceList_, sentenceList) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryCloudRecordTextResponseBodyParagraphList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline QueryCloudRecordTextResponseBodyParagraphList& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryCloudRecordTextResponseBodyParagraphList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int64_t> nextTtoken_ = nullptr;
    std::shared_ptr<string> nickName_ = nullptr;
    std::shared_ptr<string> paragraph_ = nullptr;
    std::shared_ptr<int64_t> recordId_ = nullptr;
    std::shared_ptr<vector<Models::QueryCloudRecordTextResponseBodyParagraphListSentenceList>> sentenceList_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<int64_t> status_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
