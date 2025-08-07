// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNCRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSYNCRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSyncResultResponseBodyDataAgent.hpp>
#include <vector>
#include <alibabacloud/models/GetSyncResultResponseBodyDataAsrResult.hpp>
#include <alibabacloud/models/GetSyncResultResponseBodyDataHitResult.hpp>
#include <alibabacloud/models/GetSyncResultResponseBodyDataRecording.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetSyncResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyncResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Agent, agent_);
      DARABONBA_PTR_TO_JSON(AsrResult, asrResult_);
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HitResult, hitResult_);
      DARABONBA_PTR_TO_JSON(Recording, recording_);
      DARABONBA_PTR_TO_JSON(Resolver, resolver_);
      DARABONBA_PTR_TO_JSON(ReviewResult, reviewResult_);
      DARABONBA_PTR_TO_JSON(ReviewStatus, reviewStatus_);
      DARABONBA_PTR_TO_JSON(Reviewer, reviewer_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyncResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Agent, agent_);
      DARABONBA_PTR_FROM_JSON(AsrResult, asrResult_);
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HitResult, hitResult_);
      DARABONBA_PTR_FROM_JSON(Recording, recording_);
      DARABONBA_PTR_FROM_JSON(Resolver, resolver_);
      DARABONBA_PTR_FROM_JSON(ReviewResult, reviewResult_);
      DARABONBA_PTR_FROM_JSON(ReviewStatus, reviewStatus_);
      DARABONBA_PTR_FROM_JSON(Reviewer, reviewer_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    GetSyncResultResponseBodyData() = default ;
    GetSyncResultResponseBodyData(const GetSyncResultResponseBodyData &) = default ;
    GetSyncResultResponseBodyData(GetSyncResultResponseBodyData &&) = default ;
    GetSyncResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyncResultResponseBodyData() = default ;
    GetSyncResultResponseBodyData& operator=(const GetSyncResultResponseBodyData &) = default ;
    GetSyncResultResponseBodyData& operator=(GetSyncResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agent_ != nullptr
        && this->asrResult_ != nullptr && this->comments_ != nullptr && this->createTime_ != nullptr && this->errorMessage_ != nullptr && this->hitResult_ != nullptr
        && this->recording_ != nullptr && this->resolver_ != nullptr && this->reviewResult_ != nullptr && this->reviewStatus_ != nullptr && this->reviewer_ != nullptr
        && this->score_ != nullptr && this->status_ != nullptr && this->taskId_ != nullptr && this->taskName_ != nullptr; };
    // agent Field Functions 
    bool hasAgent() const { return this->agent_ != nullptr;};
    void deleteAgent() { this->agent_ = nullptr;};
    inline const Models::GetSyncResultResponseBodyDataAgent & agent() const { DARABONBA_PTR_GET_CONST(agent_, Models::GetSyncResultResponseBodyDataAgent) };
    inline Models::GetSyncResultResponseBodyDataAgent agent() { DARABONBA_PTR_GET(agent_, Models::GetSyncResultResponseBodyDataAgent) };
    inline GetSyncResultResponseBodyData& setAgent(const Models::GetSyncResultResponseBodyDataAgent & agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };
    inline GetSyncResultResponseBodyData& setAgent(Models::GetSyncResultResponseBodyDataAgent && agent) { DARABONBA_PTR_SET_RVALUE(agent_, agent) };


    // asrResult Field Functions 
    bool hasAsrResult() const { return this->asrResult_ != nullptr;};
    void deleteAsrResult() { this->asrResult_ = nullptr;};
    inline const vector<Models::GetSyncResultResponseBodyDataAsrResult> & asrResult() const { DARABONBA_PTR_GET_CONST(asrResult_, vector<Models::GetSyncResultResponseBodyDataAsrResult>) };
    inline vector<Models::GetSyncResultResponseBodyDataAsrResult> asrResult() { DARABONBA_PTR_GET(asrResult_, vector<Models::GetSyncResultResponseBodyDataAsrResult>) };
    inline GetSyncResultResponseBodyData& setAsrResult(const vector<Models::GetSyncResultResponseBodyDataAsrResult> & asrResult) { DARABONBA_PTR_SET_VALUE(asrResult_, asrResult) };
    inline GetSyncResultResponseBodyData& setAsrResult(vector<Models::GetSyncResultResponseBodyDataAsrResult> && asrResult) { DARABONBA_PTR_SET_RVALUE(asrResult_, asrResult) };


    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string comments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline GetSyncResultResponseBodyData& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetSyncResultResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetSyncResultResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // hitResult Field Functions 
    bool hasHitResult() const { return this->hitResult_ != nullptr;};
    void deleteHitResult() { this->hitResult_ = nullptr;};
    inline const vector<Models::GetSyncResultResponseBodyDataHitResult> & hitResult() const { DARABONBA_PTR_GET_CONST(hitResult_, vector<Models::GetSyncResultResponseBodyDataHitResult>) };
    inline vector<Models::GetSyncResultResponseBodyDataHitResult> hitResult() { DARABONBA_PTR_GET(hitResult_, vector<Models::GetSyncResultResponseBodyDataHitResult>) };
    inline GetSyncResultResponseBodyData& setHitResult(const vector<Models::GetSyncResultResponseBodyDataHitResult> & hitResult) { DARABONBA_PTR_SET_VALUE(hitResult_, hitResult) };
    inline GetSyncResultResponseBodyData& setHitResult(vector<Models::GetSyncResultResponseBodyDataHitResult> && hitResult) { DARABONBA_PTR_SET_RVALUE(hitResult_, hitResult) };


    // recording Field Functions 
    bool hasRecording() const { return this->recording_ != nullptr;};
    void deleteRecording() { this->recording_ = nullptr;};
    inline const Models::GetSyncResultResponseBodyDataRecording & recording() const { DARABONBA_PTR_GET_CONST(recording_, Models::GetSyncResultResponseBodyDataRecording) };
    inline Models::GetSyncResultResponseBodyDataRecording recording() { DARABONBA_PTR_GET(recording_, Models::GetSyncResultResponseBodyDataRecording) };
    inline GetSyncResultResponseBodyData& setRecording(const Models::GetSyncResultResponseBodyDataRecording & recording) { DARABONBA_PTR_SET_VALUE(recording_, recording) };
    inline GetSyncResultResponseBodyData& setRecording(Models::GetSyncResultResponseBodyDataRecording && recording) { DARABONBA_PTR_SET_RVALUE(recording_, recording) };


    // resolver Field Functions 
    bool hasResolver() const { return this->resolver_ != nullptr;};
    void deleteResolver() { this->resolver_ = nullptr;};
    inline string resolver() const { DARABONBA_PTR_GET_DEFAULT(resolver_, "") };
    inline GetSyncResultResponseBodyData& setResolver(string resolver) { DARABONBA_PTR_SET_VALUE(resolver_, resolver) };


    // reviewResult Field Functions 
    bool hasReviewResult() const { return this->reviewResult_ != nullptr;};
    void deleteReviewResult() { this->reviewResult_ = nullptr;};
    inline int32_t reviewResult() const { DARABONBA_PTR_GET_DEFAULT(reviewResult_, 0) };
    inline GetSyncResultResponseBodyData& setReviewResult(int32_t reviewResult) { DARABONBA_PTR_SET_VALUE(reviewResult_, reviewResult) };


    // reviewStatus Field Functions 
    bool hasReviewStatus() const { return this->reviewStatus_ != nullptr;};
    void deleteReviewStatus() { this->reviewStatus_ = nullptr;};
    inline int32_t reviewStatus() const { DARABONBA_PTR_GET_DEFAULT(reviewStatus_, 0) };
    inline GetSyncResultResponseBodyData& setReviewStatus(int32_t reviewStatus) { DARABONBA_PTR_SET_VALUE(reviewStatus_, reviewStatus) };


    // reviewer Field Functions 
    bool hasReviewer() const { return this->reviewer_ != nullptr;};
    void deleteReviewer() { this->reviewer_ = nullptr;};
    inline string reviewer() const { DARABONBA_PTR_GET_DEFAULT(reviewer_, "") };
    inline GetSyncResultResponseBodyData& setReviewer(string reviewer) { DARABONBA_PTR_SET_VALUE(reviewer_, reviewer) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline GetSyncResultResponseBodyData& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetSyncResultResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetSyncResultResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline GetSyncResultResponseBodyData& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    std::shared_ptr<Models::GetSyncResultResponseBodyDataAgent> agent_ = nullptr;
    std::shared_ptr<vector<Models::GetSyncResultResponseBodyDataAsrResult>> asrResult_ = nullptr;
    std::shared_ptr<string> comments_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<vector<Models::GetSyncResultResponseBodyDataHitResult>> hitResult_ = nullptr;
    std::shared_ptr<Models::GetSyncResultResponseBodyDataRecording> recording_ = nullptr;
    std::shared_ptr<string> resolver_ = nullptr;
    std::shared_ptr<int32_t> reviewResult_ = nullptr;
    std::shared_ptr<int32_t> reviewStatus_ = nullptr;
    std::shared_ptr<string> reviewer_ = nullptr;
    std::shared_ptr<int32_t> score_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
