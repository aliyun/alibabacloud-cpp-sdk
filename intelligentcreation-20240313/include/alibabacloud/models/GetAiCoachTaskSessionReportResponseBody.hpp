// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHTASKSESSIONREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHTASKSESSIONREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachTaskSessionReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachTaskSessionReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(evaluationRating, evaluationRating_);
      DARABONBA_PTR_TO_JSON(evaluationResult, evaluationResult_);
      DARABONBA_PTR_TO_JSON(feedback, feedback_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scriptName, scriptName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachTaskSessionReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(evaluationRating, evaluationRating_);
      DARABONBA_PTR_FROM_JSON(evaluationResult, evaluationResult_);
      DARABONBA_PTR_FROM_JSON(feedback, feedback_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scriptName, scriptName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(uid, uid_);
    };
    GetAICoachTaskSessionReportResponseBody() = default ;
    GetAICoachTaskSessionReportResponseBody(const GetAICoachTaskSessionReportResponseBody &) = default ;
    GetAICoachTaskSessionReportResponseBody(GetAICoachTaskSessionReportResponseBody &&) = default ;
    GetAICoachTaskSessionReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachTaskSessionReportResponseBody() = default ;
    GetAICoachTaskSessionReportResponseBody& operator=(const GetAICoachTaskSessionReportResponseBody &) = default ;
    GetAICoachTaskSessionReportResponseBody& operator=(GetAICoachTaskSessionReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->endTime_ == nullptr && return this->evaluationRating_ == nullptr && return this->evaluationResult_ == nullptr && return this->feedback_ == nullptr && return this->requestId_ == nullptr
        && return this->scriptName_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->uid_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetAICoachTaskSessionReportResponseBody& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetAICoachTaskSessionReportResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // evaluationRating Field Functions 
    bool hasEvaluationRating() const { return this->evaluationRating_ != nullptr;};
    void deleteEvaluationRating() { this->evaluationRating_ = nullptr;};
    inline string evaluationRating() const { DARABONBA_PTR_GET_DEFAULT(evaluationRating_, "") };
    inline GetAICoachTaskSessionReportResponseBody& setEvaluationRating(string evaluationRating) { DARABONBA_PTR_SET_VALUE(evaluationRating_, evaluationRating) };


    // evaluationResult Field Functions 
    bool hasEvaluationResult() const { return this->evaluationResult_ != nullptr;};
    void deleteEvaluationResult() { this->evaluationResult_ = nullptr;};
    inline string evaluationResult() const { DARABONBA_PTR_GET_DEFAULT(evaluationResult_, "") };
    inline GetAICoachTaskSessionReportResponseBody& setEvaluationResult(string evaluationResult) { DARABONBA_PTR_SET_VALUE(evaluationResult_, evaluationResult) };


    // feedback Field Functions 
    bool hasFeedback() const { return this->feedback_ != nullptr;};
    void deleteFeedback() { this->feedback_ = nullptr;};
    inline bool feedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, false) };
    inline GetAICoachTaskSessionReportResponseBody& setFeedback(bool feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAICoachTaskSessionReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string scriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline GetAICoachTaskSessionReportResponseBody& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetAICoachTaskSessionReportResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAICoachTaskSessionReportResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline GetAICoachTaskSessionReportResponseBody& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> evaluationRating_ = nullptr;
    std::shared_ptr<string> evaluationResult_ = nullptr;
    std::shared_ptr<bool> feedback_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> scriptName_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
