// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONVERSATIONDETAILINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONVERSATIONDETAILINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryConversationDetailInfoResponseBodyDataOutputTags.hpp>
#include <alibabacloud/models/QueryConversationDetailInfoResponseBodyDataVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryConversationDetailInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConversationDetailInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(CallResult, callResult_);
      DARABONBA_PTR_TO_JSON(CalledPhone, calledPhone_);
      DARABONBA_PTR_TO_JSON(CallerPhone, callerPhone_);
      DARABONBA_PTR_TO_JSON(ConversationRecord, conversationRecord_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(FailedReason, failedReason_);
      DARABONBA_PTR_TO_JSON(HangupDirection, hangupDirection_);
      DARABONBA_PTR_TO_JSON(MajorIntent, majorIntent_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OutputTags, outputTags_);
      DARABONBA_PTR_TO_JSON(PickUpTime, pickUpTime_);
      DARABONBA_PTR_TO_JSON(RecordingFileDownloadUrl, recordingFileDownloadUrl_);
      DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_TO_JSON(StartCallTime, startCallTime_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(StatusMsg, statusMsg_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConversationDetailInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(CallResult, callResult_);
      DARABONBA_PTR_FROM_JSON(CalledPhone, calledPhone_);
      DARABONBA_PTR_FROM_JSON(CallerPhone, callerPhone_);
      DARABONBA_PTR_FROM_JSON(ConversationRecord, conversationRecord_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(FailedReason, failedReason_);
      DARABONBA_PTR_FROM_JSON(HangupDirection, hangupDirection_);
      DARABONBA_PTR_FROM_JSON(MajorIntent, majorIntent_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OutputTags, outputTags_);
      DARABONBA_PTR_FROM_JSON(PickUpTime, pickUpTime_);
      DARABONBA_PTR_FROM_JSON(RecordingFileDownloadUrl, recordingFileDownloadUrl_);
      DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_FROM_JSON(StartCallTime, startCallTime_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(StatusMsg, statusMsg_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    QueryConversationDetailInfoResponseBodyData() = default ;
    QueryConversationDetailInfoResponseBodyData(const QueryConversationDetailInfoResponseBodyData &) = default ;
    QueryConversationDetailInfoResponseBodyData(QueryConversationDetailInfoResponseBodyData &&) = default ;
    QueryConversationDetailInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConversationDetailInfoResponseBodyData() = default ;
    QueryConversationDetailInfoResponseBodyData& operator=(const QueryConversationDetailInfoResponseBodyData &) = default ;
    QueryConversationDetailInfoResponseBodyData& operator=(QueryConversationDetailInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callId_ == nullptr
        && return this->callResult_ == nullptr && return this->calledPhone_ == nullptr && return this->callerPhone_ == nullptr && return this->conversationRecord_ == nullptr && return this->duration_ == nullptr
        && return this->failedReason_ == nullptr && return this->hangupDirection_ == nullptr && return this->majorIntent_ == nullptr && return this->outId_ == nullptr && return this->outputTags_ == nullptr
        && return this->pickUpTime_ == nullptr && return this->recordingFileDownloadUrl_ == nullptr && return this->releaseTime_ == nullptr && return this->startCallTime_ == nullptr && return this->statusCode_ == nullptr
        && return this->statusMsg_ == nullptr && return this->variables_ == nullptr; };
    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string callId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline QueryConversationDetailInfoResponseBodyData& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // callResult Field Functions 
    bool hasCallResult() const { return this->callResult_ != nullptr;};
    void deleteCallResult() { this->callResult_ = nullptr;};
    inline string callResult() const { DARABONBA_PTR_GET_DEFAULT(callResult_, "") };
    inline QueryConversationDetailInfoResponseBodyData& setCallResult(string callResult) { DARABONBA_PTR_SET_VALUE(callResult_, callResult) };


    // calledPhone Field Functions 
    bool hasCalledPhone() const { return this->calledPhone_ != nullptr;};
    void deleteCalledPhone() { this->calledPhone_ = nullptr;};
    inline string calledPhone() const { DARABONBA_PTR_GET_DEFAULT(calledPhone_, "") };
    inline QueryConversationDetailInfoResponseBodyData& setCalledPhone(string calledPhone) { DARABONBA_PTR_SET_VALUE(calledPhone_, calledPhone) };


    // callerPhone Field Functions 
    bool hasCallerPhone() const { return this->callerPhone_ != nullptr;};
    void deleteCallerPhone() { this->callerPhone_ = nullptr;};
    inline string callerPhone() const { DARABONBA_PTR_GET_DEFAULT(callerPhone_, "") };
    inline QueryConversationDetailInfoResponseBodyData& setCallerPhone(string callerPhone) { DARABONBA_PTR_SET_VALUE(callerPhone_, callerPhone) };


    // conversationRecord Field Functions 
    bool hasConversationRecord() const { return this->conversationRecord_ != nullptr;};
    void deleteConversationRecord() { this->conversationRecord_ = nullptr;};
    inline string conversationRecord() const { DARABONBA_PTR_GET_DEFAULT(conversationRecord_, "") };
    inline QueryConversationDetailInfoResponseBodyData& setConversationRecord(string conversationRecord) { DARABONBA_PTR_SET_VALUE(conversationRecord_, conversationRecord) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline QueryConversationDetailInfoResponseBodyData& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // failedReason Field Functions 
    bool hasFailedReason() const { return this->failedReason_ != nullptr;};
    void deleteFailedReason() { this->failedReason_ = nullptr;};
    inline string failedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
    inline QueryConversationDetailInfoResponseBodyData& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


    // hangupDirection Field Functions 
    bool hasHangupDirection() const { return this->hangupDirection_ != nullptr;};
    void deleteHangupDirection() { this->hangupDirection_ = nullptr;};
    inline string hangupDirection() const { DARABONBA_PTR_GET_DEFAULT(hangupDirection_, "") };
    inline QueryConversationDetailInfoResponseBodyData& setHangupDirection(string hangupDirection) { DARABONBA_PTR_SET_VALUE(hangupDirection_, hangupDirection) };


    // majorIntent Field Functions 
    bool hasMajorIntent() const { return this->majorIntent_ != nullptr;};
    void deleteMajorIntent() { this->majorIntent_ = nullptr;};
    inline string majorIntent() const { DARABONBA_PTR_GET_DEFAULT(majorIntent_, "") };
    inline QueryConversationDetailInfoResponseBodyData& setMajorIntent(string majorIntent) { DARABONBA_PTR_SET_VALUE(majorIntent_, majorIntent) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline QueryConversationDetailInfoResponseBodyData& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // outputTags Field Functions 
    bool hasOutputTags() const { return this->outputTags_ != nullptr;};
    void deleteOutputTags() { this->outputTags_ = nullptr;};
    inline const vector<Models::QueryConversationDetailInfoResponseBodyDataOutputTags> & outputTags() const { DARABONBA_PTR_GET_CONST(outputTags_, vector<Models::QueryConversationDetailInfoResponseBodyDataOutputTags>) };
    inline vector<Models::QueryConversationDetailInfoResponseBodyDataOutputTags> outputTags() { DARABONBA_PTR_GET(outputTags_, vector<Models::QueryConversationDetailInfoResponseBodyDataOutputTags>) };
    inline QueryConversationDetailInfoResponseBodyData& setOutputTags(const vector<Models::QueryConversationDetailInfoResponseBodyDataOutputTags> & outputTags) { DARABONBA_PTR_SET_VALUE(outputTags_, outputTags) };
    inline QueryConversationDetailInfoResponseBodyData& setOutputTags(vector<Models::QueryConversationDetailInfoResponseBodyDataOutputTags> && outputTags) { DARABONBA_PTR_SET_RVALUE(outputTags_, outputTags) };


    // pickUpTime Field Functions 
    bool hasPickUpTime() const { return this->pickUpTime_ != nullptr;};
    void deletePickUpTime() { this->pickUpTime_ = nullptr;};
    inline int64_t pickUpTime() const { DARABONBA_PTR_GET_DEFAULT(pickUpTime_, 0L) };
    inline QueryConversationDetailInfoResponseBodyData& setPickUpTime(int64_t pickUpTime) { DARABONBA_PTR_SET_VALUE(pickUpTime_, pickUpTime) };


    // recordingFileDownloadUrl Field Functions 
    bool hasRecordingFileDownloadUrl() const { return this->recordingFileDownloadUrl_ != nullptr;};
    void deleteRecordingFileDownloadUrl() { this->recordingFileDownloadUrl_ = nullptr;};
    inline string recordingFileDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(recordingFileDownloadUrl_, "") };
    inline QueryConversationDetailInfoResponseBodyData& setRecordingFileDownloadUrl(string recordingFileDownloadUrl) { DARABONBA_PTR_SET_VALUE(recordingFileDownloadUrl_, recordingFileDownloadUrl) };


    // releaseTime Field Functions 
    bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
    void deleteReleaseTime() { this->releaseTime_ = nullptr;};
    inline int64_t releaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, 0L) };
    inline QueryConversationDetailInfoResponseBodyData& setReleaseTime(int64_t releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


    // startCallTime Field Functions 
    bool hasStartCallTime() const { return this->startCallTime_ != nullptr;};
    void deleteStartCallTime() { this->startCallTime_ = nullptr;};
    inline int64_t startCallTime() const { DARABONBA_PTR_GET_DEFAULT(startCallTime_, 0L) };
    inline QueryConversationDetailInfoResponseBodyData& setStartCallTime(int64_t startCallTime) { DARABONBA_PTR_SET_VALUE(startCallTime_, startCallTime) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline string statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
    inline QueryConversationDetailInfoResponseBodyData& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // statusMsg Field Functions 
    bool hasStatusMsg() const { return this->statusMsg_ != nullptr;};
    void deleteStatusMsg() { this->statusMsg_ = nullptr;};
    inline string statusMsg() const { DARABONBA_PTR_GET_DEFAULT(statusMsg_, "") };
    inline QueryConversationDetailInfoResponseBodyData& setStatusMsg(string statusMsg) { DARABONBA_PTR_SET_VALUE(statusMsg_, statusMsg) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::QueryConversationDetailInfoResponseBodyDataVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::QueryConversationDetailInfoResponseBodyDataVariables>) };
    inline vector<Models::QueryConversationDetailInfoResponseBodyDataVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::QueryConversationDetailInfoResponseBodyDataVariables>) };
    inline QueryConversationDetailInfoResponseBodyData& setVariables(const vector<Models::QueryConversationDetailInfoResponseBodyDataVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline QueryConversationDetailInfoResponseBodyData& setVariables(vector<Models::QueryConversationDetailInfoResponseBodyDataVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<string> callId_ = nullptr;
    std::shared_ptr<string> callResult_ = nullptr;
    std::shared_ptr<string> calledPhone_ = nullptr;
    std::shared_ptr<string> callerPhone_ = nullptr;
    std::shared_ptr<string> conversationRecord_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<string> failedReason_ = nullptr;
    std::shared_ptr<string> hangupDirection_ = nullptr;
    std::shared_ptr<string> majorIntent_ = nullptr;
    std::shared_ptr<string> outId_ = nullptr;
    std::shared_ptr<vector<Models::QueryConversationDetailInfoResponseBodyDataOutputTags>> outputTags_ = nullptr;
    std::shared_ptr<int64_t> pickUpTime_ = nullptr;
    std::shared_ptr<string> recordingFileDownloadUrl_ = nullptr;
    std::shared_ptr<int64_t> releaseTime_ = nullptr;
    std::shared_ptr<int64_t> startCallTime_ = nullptr;
    std::shared_ptr<string> statusCode_ = nullptr;
    std::shared_ptr<string> statusMsg_ = nullptr;
    std::shared_ptr<vector<Models::QueryConversationDetailInfoResponseBodyDataVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
