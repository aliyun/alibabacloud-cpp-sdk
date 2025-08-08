// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAICALLDETAILPAGERESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAICALLDETAILPAGERESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiCallDetailPageResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiCallDetailPageResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(BatchId, batchId_);
      DARABONBA_PTR_TO_JSON(CallResult, callResult_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CallingTime, callingTime_);
      DARABONBA_PTR_TO_JSON(ConversationDuration, conversationDuration_);
      DARABONBA_PTR_TO_JSON(ConversationRecord, conversationRecord_);
      DARABONBA_PTR_TO_JSON(ConversationTurnCount, conversationTurnCount_);
      DARABONBA_PTR_TO_JSON(DetailId, detailId_);
      DARABONBA_PTR_TO_JSON(FailedReason, failedReason_);
      DARABONBA_PTR_TO_JSON(ImportedTime, importedTime_);
      DARABONBA_PTR_TO_JSON(MajorIntent, majorIntent_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(RecordingFilePath, recordingFilePath_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiCallDetailPageResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
      DARABONBA_PTR_FROM_JSON(CallResult, callResult_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallingTime, callingTime_);
      DARABONBA_PTR_FROM_JSON(ConversationDuration, conversationDuration_);
      DARABONBA_PTR_FROM_JSON(ConversationRecord, conversationRecord_);
      DARABONBA_PTR_FROM_JSON(ConversationTurnCount, conversationTurnCount_);
      DARABONBA_PTR_FROM_JSON(DetailId, detailId_);
      DARABONBA_PTR_FROM_JSON(FailedReason, failedReason_);
      DARABONBA_PTR_FROM_JSON(ImportedTime, importedTime_);
      DARABONBA_PTR_FROM_JSON(MajorIntent, majorIntent_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(RecordingFilePath, recordingFilePath_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    QueryAiCallDetailPageResponseBodyDataList() = default ;
    QueryAiCallDetailPageResponseBodyDataList(const QueryAiCallDetailPageResponseBodyDataList &) = default ;
    QueryAiCallDetailPageResponseBodyDataList(QueryAiCallDetailPageResponseBodyDataList &&) = default ;
    QueryAiCallDetailPageResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiCallDetailPageResponseBodyDataList() = default ;
    QueryAiCallDetailPageResponseBodyDataList& operator=(const QueryAiCallDetailPageResponseBodyDataList &) = default ;
    QueryAiCallDetailPageResponseBodyDataList& operator=(QueryAiCallDetailPageResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchId_ != nullptr
        && this->callResult_ != nullptr && this->calledNumber_ != nullptr && this->callingTime_ != nullptr && this->conversationDuration_ != nullptr && this->conversationRecord_ != nullptr
        && this->conversationTurnCount_ != nullptr && this->detailId_ != nullptr && this->failedReason_ != nullptr && this->importedTime_ != nullptr && this->majorIntent_ != nullptr
        && this->options_ != nullptr && this->recordingFilePath_ != nullptr && this->taskId_ != nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline string batchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
    inline QueryAiCallDetailPageResponseBodyDataList& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // callResult Field Functions 
    bool hasCallResult() const { return this->callResult_ != nullptr;};
    void deleteCallResult() { this->callResult_ = nullptr;};
    inline string callResult() const { DARABONBA_PTR_GET_DEFAULT(callResult_, "") };
    inline QueryAiCallDetailPageResponseBodyDataList& setCallResult(string callResult) { DARABONBA_PTR_SET_VALUE(callResult_, callResult) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline QueryAiCallDetailPageResponseBodyDataList& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callingTime Field Functions 
    bool hasCallingTime() const { return this->callingTime_ != nullptr;};
    void deleteCallingTime() { this->callingTime_ = nullptr;};
    inline int64_t callingTime() const { DARABONBA_PTR_GET_DEFAULT(callingTime_, 0L) };
    inline QueryAiCallDetailPageResponseBodyDataList& setCallingTime(int64_t callingTime) { DARABONBA_PTR_SET_VALUE(callingTime_, callingTime) };


    // conversationDuration Field Functions 
    bool hasConversationDuration() const { return this->conversationDuration_ != nullptr;};
    void deleteConversationDuration() { this->conversationDuration_ = nullptr;};
    inline int64_t conversationDuration() const { DARABONBA_PTR_GET_DEFAULT(conversationDuration_, 0L) };
    inline QueryAiCallDetailPageResponseBodyDataList& setConversationDuration(int64_t conversationDuration) { DARABONBA_PTR_SET_VALUE(conversationDuration_, conversationDuration) };


    // conversationRecord Field Functions 
    bool hasConversationRecord() const { return this->conversationRecord_ != nullptr;};
    void deleteConversationRecord() { this->conversationRecord_ = nullptr;};
    inline string conversationRecord() const { DARABONBA_PTR_GET_DEFAULT(conversationRecord_, "") };
    inline QueryAiCallDetailPageResponseBodyDataList& setConversationRecord(string conversationRecord) { DARABONBA_PTR_SET_VALUE(conversationRecord_, conversationRecord) };


    // conversationTurnCount Field Functions 
    bool hasConversationTurnCount() const { return this->conversationTurnCount_ != nullptr;};
    void deleteConversationTurnCount() { this->conversationTurnCount_ = nullptr;};
    inline int64_t conversationTurnCount() const { DARABONBA_PTR_GET_DEFAULT(conversationTurnCount_, 0L) };
    inline QueryAiCallDetailPageResponseBodyDataList& setConversationTurnCount(int64_t conversationTurnCount) { DARABONBA_PTR_SET_VALUE(conversationTurnCount_, conversationTurnCount) };


    // detailId Field Functions 
    bool hasDetailId() const { return this->detailId_ != nullptr;};
    void deleteDetailId() { this->detailId_ = nullptr;};
    inline string detailId() const { DARABONBA_PTR_GET_DEFAULT(detailId_, "") };
    inline QueryAiCallDetailPageResponseBodyDataList& setDetailId(string detailId) { DARABONBA_PTR_SET_VALUE(detailId_, detailId) };


    // failedReason Field Functions 
    bool hasFailedReason() const { return this->failedReason_ != nullptr;};
    void deleteFailedReason() { this->failedReason_ = nullptr;};
    inline string failedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
    inline QueryAiCallDetailPageResponseBodyDataList& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


    // importedTime Field Functions 
    bool hasImportedTime() const { return this->importedTime_ != nullptr;};
    void deleteImportedTime() { this->importedTime_ = nullptr;};
    inline int64_t importedTime() const { DARABONBA_PTR_GET_DEFAULT(importedTime_, 0L) };
    inline QueryAiCallDetailPageResponseBodyDataList& setImportedTime(int64_t importedTime) { DARABONBA_PTR_SET_VALUE(importedTime_, importedTime) };


    // majorIntent Field Functions 
    bool hasMajorIntent() const { return this->majorIntent_ != nullptr;};
    void deleteMajorIntent() { this->majorIntent_ = nullptr;};
    inline string majorIntent() const { DARABONBA_PTR_GET_DEFAULT(majorIntent_, "") };
    inline QueryAiCallDetailPageResponseBodyDataList& setMajorIntent(string majorIntent) { DARABONBA_PTR_SET_VALUE(majorIntent_, majorIntent) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline QueryAiCallDetailPageResponseBodyDataList& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // recordingFilePath Field Functions 
    bool hasRecordingFilePath() const { return this->recordingFilePath_ != nullptr;};
    void deleteRecordingFilePath() { this->recordingFilePath_ = nullptr;};
    inline string recordingFilePath() const { DARABONBA_PTR_GET_DEFAULT(recordingFilePath_, "") };
    inline QueryAiCallDetailPageResponseBodyDataList& setRecordingFilePath(string recordingFilePath) { DARABONBA_PTR_SET_VALUE(recordingFilePath_, recordingFilePath) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryAiCallDetailPageResponseBodyDataList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> batchId_ = nullptr;
    std::shared_ptr<string> callResult_ = nullptr;
    std::shared_ptr<string> calledNumber_ = nullptr;
    std::shared_ptr<int64_t> callingTime_ = nullptr;
    std::shared_ptr<int64_t> conversationDuration_ = nullptr;
    std::shared_ptr<string> conversationRecord_ = nullptr;
    std::shared_ptr<int64_t> conversationTurnCount_ = nullptr;
    std::shared_ptr<string> detailId_ = nullptr;
    std::shared_ptr<string> failedReason_ = nullptr;
    std::shared_ptr<int64_t> importedTime_ = nullptr;
    std::shared_ptr<string> majorIntent_ = nullptr;
    std::shared_ptr<string> options_ = nullptr;
    std::shared_ptr<string> recordingFilePath_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
