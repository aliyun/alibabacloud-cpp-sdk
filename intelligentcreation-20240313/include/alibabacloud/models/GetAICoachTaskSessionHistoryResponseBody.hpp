// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHTASKSESSIONHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHTASKSESSIONHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachTaskSessionHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachTaskSessionHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(conversationList, conversationList_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(pauseDuration, pauseDuration_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scriptName, scriptName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(total, total_);
      DARABONBA_PTR_TO_JSON(uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachTaskSessionHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(conversationList, conversationList_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(pauseDuration, pauseDuration_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scriptName, scriptName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(total, total_);
      DARABONBA_PTR_FROM_JSON(uid, uid_);
    };
    GetAICoachTaskSessionHistoryResponseBody() = default ;
    GetAICoachTaskSessionHistoryResponseBody(const GetAICoachTaskSessionHistoryResponseBody &) = default ;
    GetAICoachTaskSessionHistoryResponseBody(GetAICoachTaskSessionHistoryResponseBody &&) = default ;
    GetAICoachTaskSessionHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachTaskSessionHistoryResponseBody() = default ;
    GetAICoachTaskSessionHistoryResponseBody& operator=(const GetAICoachTaskSessionHistoryResponseBody &) = default ;
    GetAICoachTaskSessionHistoryResponseBody& operator=(GetAICoachTaskSessionHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConversationList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConversationList& obj) { 
        DARABONBA_PTR_TO_JSON(audioUrl, audioUrl_);
        DARABONBA_PTR_TO_JSON(dateLabel, dateLabel_);
        DARABONBA_PTR_TO_JSON(evaluationFeedback, evaluationFeedback_);
        DARABONBA_PTR_TO_JSON(evaluationResult, evaluationResult_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(recordId, recordId_);
        DARABONBA_PTR_TO_JSON(role, role_);
      };
      friend void from_json(const Darabonba::Json& j, ConversationList& obj) { 
        DARABONBA_PTR_FROM_JSON(audioUrl, audioUrl_);
        DARABONBA_PTR_FROM_JSON(dateLabel, dateLabel_);
        DARABONBA_PTR_FROM_JSON(evaluationFeedback, evaluationFeedback_);
        DARABONBA_PTR_FROM_JSON(evaluationResult, evaluationResult_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(recordId, recordId_);
        DARABONBA_PTR_FROM_JSON(role, role_);
      };
      ConversationList() = default ;
      ConversationList(const ConversationList &) = default ;
      ConversationList(ConversationList &&) = default ;
      ConversationList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConversationList() = default ;
      ConversationList& operator=(const ConversationList &) = default ;
      ConversationList& operator=(ConversationList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->audioUrl_ == nullptr
        && this->dateLabel_ == nullptr && this->evaluationFeedback_ == nullptr && this->evaluationResult_ == nullptr && this->message_ == nullptr && this->recordId_ == nullptr
        && this->role_ == nullptr; };
      // audioUrl Field Functions 
      bool hasAudioUrl() const { return this->audioUrl_ != nullptr;};
      void deleteAudioUrl() { this->audioUrl_ = nullptr;};
      inline string getAudioUrl() const { DARABONBA_PTR_GET_DEFAULT(audioUrl_, "") };
      inline ConversationList& setAudioUrl(string audioUrl) { DARABONBA_PTR_SET_VALUE(audioUrl_, audioUrl) };


      // dateLabel Field Functions 
      bool hasDateLabel() const { return this->dateLabel_ != nullptr;};
      void deleteDateLabel() { this->dateLabel_ = nullptr;};
      inline string getDateLabel() const { DARABONBA_PTR_GET_DEFAULT(dateLabel_, "") };
      inline ConversationList& setDateLabel(string dateLabel) { DARABONBA_PTR_SET_VALUE(dateLabel_, dateLabel) };


      // evaluationFeedback Field Functions 
      bool hasEvaluationFeedback() const { return this->evaluationFeedback_ != nullptr;};
      void deleteEvaluationFeedback() { this->evaluationFeedback_ = nullptr;};
      inline string getEvaluationFeedback() const { DARABONBA_PTR_GET_DEFAULT(evaluationFeedback_, "") };
      inline ConversationList& setEvaluationFeedback(string evaluationFeedback) { DARABONBA_PTR_SET_VALUE(evaluationFeedback_, evaluationFeedback) };


      // evaluationResult Field Functions 
      bool hasEvaluationResult() const { return this->evaluationResult_ != nullptr;};
      void deleteEvaluationResult() { this->evaluationResult_ = nullptr;};
      inline string getEvaluationResult() const { DARABONBA_PTR_GET_DEFAULT(evaluationResult_, "") };
      inline ConversationList& setEvaluationResult(string evaluationResult) { DARABONBA_PTR_SET_VALUE(evaluationResult_, evaluationResult) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline ConversationList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // recordId Field Functions 
      bool hasRecordId() const { return this->recordId_ != nullptr;};
      void deleteRecordId() { this->recordId_ = nullptr;};
      inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
      inline ConversationList& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline ConversationList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      shared_ptr<string> audioUrl_ {};
      shared_ptr<string> dateLabel_ {};
      shared_ptr<string> evaluationFeedback_ {};
      shared_ptr<string> evaluationResult_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> recordId_ {};
      shared_ptr<string> role_ {};
    };

    virtual bool empty() const override { return this->conversationList_ == nullptr
        && this->duration_ == nullptr && this->endTime_ == nullptr && this->pauseDuration_ == nullptr && this->requestId_ == nullptr && this->scriptName_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->total_ == nullptr && this->uid_ == nullptr; };
    // conversationList Field Functions 
    bool hasConversationList() const { return this->conversationList_ != nullptr;};
    void deleteConversationList() { this->conversationList_ = nullptr;};
    inline const vector<GetAICoachTaskSessionHistoryResponseBody::ConversationList> & getConversationList() const { DARABONBA_PTR_GET_CONST(conversationList_, vector<GetAICoachTaskSessionHistoryResponseBody::ConversationList>) };
    inline vector<GetAICoachTaskSessionHistoryResponseBody::ConversationList> getConversationList() { DARABONBA_PTR_GET(conversationList_, vector<GetAICoachTaskSessionHistoryResponseBody::ConversationList>) };
    inline GetAICoachTaskSessionHistoryResponseBody& setConversationList(const vector<GetAICoachTaskSessionHistoryResponseBody::ConversationList> & conversationList) { DARABONBA_PTR_SET_VALUE(conversationList_, conversationList) };
    inline GetAICoachTaskSessionHistoryResponseBody& setConversationList(vector<GetAICoachTaskSessionHistoryResponseBody::ConversationList> && conversationList) { DARABONBA_PTR_SET_RVALUE(conversationList_, conversationList) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetAICoachTaskSessionHistoryResponseBody& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetAICoachTaskSessionHistoryResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pauseDuration Field Functions 
    bool hasPauseDuration() const { return this->pauseDuration_ != nullptr;};
    void deletePauseDuration() { this->pauseDuration_ = nullptr;};
    inline int64_t getPauseDuration() const { DARABONBA_PTR_GET_DEFAULT(pauseDuration_, 0L) };
    inline GetAICoachTaskSessionHistoryResponseBody& setPauseDuration(int64_t pauseDuration) { DARABONBA_PTR_SET_VALUE(pauseDuration_, pauseDuration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAICoachTaskSessionHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline GetAICoachTaskSessionHistoryResponseBody& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetAICoachTaskSessionHistoryResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAICoachTaskSessionHistoryResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetAICoachTaskSessionHistoryResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline GetAICoachTaskSessionHistoryResponseBody& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    shared_ptr<vector<GetAICoachTaskSessionHistoryResponseBody::ConversationList>> conversationList_ {};
    shared_ptr<int64_t> duration_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<int64_t> pauseDuration_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> scriptName_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> status_ {};
    shared_ptr<int32_t> total_ {};
    shared_ptr<string> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
