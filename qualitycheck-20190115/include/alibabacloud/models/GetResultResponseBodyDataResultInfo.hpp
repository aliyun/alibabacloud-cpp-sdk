// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFO_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoAgent.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoAsrResult.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResult.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitScore.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoRecording.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoReviewHistoryList.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoReviewTypeIdList.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoSchemeIdList.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoSchemeNameList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Agent, agent_);
      DARABONBA_PTR_TO_JSON(AsrResult, asrResult_);
      DARABONBA_PTR_TO_JSON(AssignmentTime, assignmentTime_);
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimeLong, createTimeLong_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HitResult, hitResult_);
      DARABONBA_PTR_TO_JSON(HitScore, hitScore_);
      DARABONBA_PTR_TO_JSON(LastDataId, lastDataId_);
      DARABONBA_PTR_TO_JSON(Recording, recording_);
      DARABONBA_PTR_TO_JSON(Resolver, resolver_);
      DARABONBA_PTR_TO_JSON(ReviewHistoryList, reviewHistoryList_);
      DARABONBA_PTR_TO_JSON(ReviewResult, reviewResult_);
      DARABONBA_PTR_TO_JSON(ReviewStatus, reviewStatus_);
      DARABONBA_PTR_TO_JSON(ReviewTime, reviewTime_);
      DARABONBA_PTR_TO_JSON(ReviewTimeLong, reviewTimeLong_);
      DARABONBA_PTR_TO_JSON(ReviewType, reviewType_);
      DARABONBA_PTR_TO_JSON(ReviewTypeIdList, reviewTypeIdList_);
      DARABONBA_PTR_TO_JSON(Reviewer, reviewer_);
      DARABONBA_PTR_TO_JSON(SchemeIdList, schemeIdList_);
      DARABONBA_PTR_TO_JSON(SchemeNameList, schemeNameList_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(Vid, vid_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Agent, agent_);
      DARABONBA_PTR_FROM_JSON(AsrResult, asrResult_);
      DARABONBA_PTR_FROM_JSON(AssignmentTime, assignmentTime_);
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimeLong, createTimeLong_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HitResult, hitResult_);
      DARABONBA_PTR_FROM_JSON(HitScore, hitScore_);
      DARABONBA_PTR_FROM_JSON(LastDataId, lastDataId_);
      DARABONBA_PTR_FROM_JSON(Recording, recording_);
      DARABONBA_PTR_FROM_JSON(Resolver, resolver_);
      DARABONBA_PTR_FROM_JSON(ReviewHistoryList, reviewHistoryList_);
      DARABONBA_PTR_FROM_JSON(ReviewResult, reviewResult_);
      DARABONBA_PTR_FROM_JSON(ReviewStatus, reviewStatus_);
      DARABONBA_PTR_FROM_JSON(ReviewTime, reviewTime_);
      DARABONBA_PTR_FROM_JSON(ReviewTimeLong, reviewTimeLong_);
      DARABONBA_PTR_FROM_JSON(ReviewType, reviewType_);
      DARABONBA_PTR_FROM_JSON(ReviewTypeIdList, reviewTypeIdList_);
      DARABONBA_PTR_FROM_JSON(Reviewer, reviewer_);
      DARABONBA_PTR_FROM_JSON(SchemeIdList, schemeIdList_);
      DARABONBA_PTR_FROM_JSON(SchemeNameList, schemeNameList_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(Vid, vid_);
    };
    GetResultResponseBodyDataResultInfo() = default ;
    GetResultResponseBodyDataResultInfo(const GetResultResponseBodyDataResultInfo &) = default ;
    GetResultResponseBodyDataResultInfo(GetResultResponseBodyDataResultInfo &&) = default ;
    GetResultResponseBodyDataResultInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfo() = default ;
    GetResultResponseBodyDataResultInfo& operator=(const GetResultResponseBodyDataResultInfo &) = default ;
    GetResultResponseBodyDataResultInfo& operator=(GetResultResponseBodyDataResultInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agent_ == nullptr
        && return this->asrResult_ == nullptr && return this->assignmentTime_ == nullptr && return this->comments_ == nullptr && return this->createTime_ == nullptr && return this->createTimeLong_ == nullptr
        && return this->errorMessage_ == nullptr && return this->hitResult_ == nullptr && return this->hitScore_ == nullptr && return this->lastDataId_ == nullptr && return this->recording_ == nullptr
        && return this->resolver_ == nullptr && return this->reviewHistoryList_ == nullptr && return this->reviewResult_ == nullptr && return this->reviewStatus_ == nullptr && return this->reviewTime_ == nullptr
        && return this->reviewTimeLong_ == nullptr && return this->reviewType_ == nullptr && return this->reviewTypeIdList_ == nullptr && return this->reviewer_ == nullptr && return this->schemeIdList_ == nullptr
        && return this->schemeNameList_ == nullptr && return this->score_ == nullptr && return this->status_ == nullptr && return this->taskId_ == nullptr && return this->taskName_ == nullptr
        && return this->vid_ == nullptr; };
    // agent Field Functions 
    bool hasAgent() const { return this->agent_ != nullptr;};
    void deleteAgent() { this->agent_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoAgent & agent() const { DARABONBA_PTR_GET_CONST(agent_, Models::GetResultResponseBodyDataResultInfoAgent) };
    inline Models::GetResultResponseBodyDataResultInfoAgent agent() { DARABONBA_PTR_GET(agent_, Models::GetResultResponseBodyDataResultInfoAgent) };
    inline GetResultResponseBodyDataResultInfo& setAgent(const Models::GetResultResponseBodyDataResultInfoAgent & agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };
    inline GetResultResponseBodyDataResultInfo& setAgent(Models::GetResultResponseBodyDataResultInfoAgent && agent) { DARABONBA_PTR_SET_RVALUE(agent_, agent) };


    // asrResult Field Functions 
    bool hasAsrResult() const { return this->asrResult_ != nullptr;};
    void deleteAsrResult() { this->asrResult_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoAsrResult & asrResult() const { DARABONBA_PTR_GET_CONST(asrResult_, Models::GetResultResponseBodyDataResultInfoAsrResult) };
    inline Models::GetResultResponseBodyDataResultInfoAsrResult asrResult() { DARABONBA_PTR_GET(asrResult_, Models::GetResultResponseBodyDataResultInfoAsrResult) };
    inline GetResultResponseBodyDataResultInfo& setAsrResult(const Models::GetResultResponseBodyDataResultInfoAsrResult & asrResult) { DARABONBA_PTR_SET_VALUE(asrResult_, asrResult) };
    inline GetResultResponseBodyDataResultInfo& setAsrResult(Models::GetResultResponseBodyDataResultInfoAsrResult && asrResult) { DARABONBA_PTR_SET_RVALUE(asrResult_, asrResult) };


    // assignmentTime Field Functions 
    bool hasAssignmentTime() const { return this->assignmentTime_ != nullptr;};
    void deleteAssignmentTime() { this->assignmentTime_ = nullptr;};
    inline string assignmentTime() const { DARABONBA_PTR_GET_DEFAULT(assignmentTime_, "") };
    inline GetResultResponseBodyDataResultInfo& setAssignmentTime(string assignmentTime) { DARABONBA_PTR_SET_VALUE(assignmentTime_, assignmentTime) };


    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string comments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline GetResultResponseBodyDataResultInfo& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetResultResponseBodyDataResultInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimeLong Field Functions 
    bool hasCreateTimeLong() const { return this->createTimeLong_ != nullptr;};
    void deleteCreateTimeLong() { this->createTimeLong_ = nullptr;};
    inline string createTimeLong() const { DARABONBA_PTR_GET_DEFAULT(createTimeLong_, "") };
    inline GetResultResponseBodyDataResultInfo& setCreateTimeLong(string createTimeLong) { DARABONBA_PTR_SET_VALUE(createTimeLong_, createTimeLong) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetResultResponseBodyDataResultInfo& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // hitResult Field Functions 
    bool hasHitResult() const { return this->hitResult_ != nullptr;};
    void deleteHitResult() { this->hitResult_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoHitResult & hitResult() const { DARABONBA_PTR_GET_CONST(hitResult_, Models::GetResultResponseBodyDataResultInfoHitResult) };
    inline Models::GetResultResponseBodyDataResultInfoHitResult hitResult() { DARABONBA_PTR_GET(hitResult_, Models::GetResultResponseBodyDataResultInfoHitResult) };
    inline GetResultResponseBodyDataResultInfo& setHitResult(const Models::GetResultResponseBodyDataResultInfoHitResult & hitResult) { DARABONBA_PTR_SET_VALUE(hitResult_, hitResult) };
    inline GetResultResponseBodyDataResultInfo& setHitResult(Models::GetResultResponseBodyDataResultInfoHitResult && hitResult) { DARABONBA_PTR_SET_RVALUE(hitResult_, hitResult) };


    // hitScore Field Functions 
    bool hasHitScore() const { return this->hitScore_ != nullptr;};
    void deleteHitScore() { this->hitScore_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoHitScore & hitScore() const { DARABONBA_PTR_GET_CONST(hitScore_, Models::GetResultResponseBodyDataResultInfoHitScore) };
    inline Models::GetResultResponseBodyDataResultInfoHitScore hitScore() { DARABONBA_PTR_GET(hitScore_, Models::GetResultResponseBodyDataResultInfoHitScore) };
    inline GetResultResponseBodyDataResultInfo& setHitScore(const Models::GetResultResponseBodyDataResultInfoHitScore & hitScore) { DARABONBA_PTR_SET_VALUE(hitScore_, hitScore) };
    inline GetResultResponseBodyDataResultInfo& setHitScore(Models::GetResultResponseBodyDataResultInfoHitScore && hitScore) { DARABONBA_PTR_SET_RVALUE(hitScore_, hitScore) };


    // lastDataId Field Functions 
    bool hasLastDataId() const { return this->lastDataId_ != nullptr;};
    void deleteLastDataId() { this->lastDataId_ = nullptr;};
    inline string lastDataId() const { DARABONBA_PTR_GET_DEFAULT(lastDataId_, "") };
    inline GetResultResponseBodyDataResultInfo& setLastDataId(string lastDataId) { DARABONBA_PTR_SET_VALUE(lastDataId_, lastDataId) };


    // recording Field Functions 
    bool hasRecording() const { return this->recording_ != nullptr;};
    void deleteRecording() { this->recording_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoRecording & recording() const { DARABONBA_PTR_GET_CONST(recording_, Models::GetResultResponseBodyDataResultInfoRecording) };
    inline Models::GetResultResponseBodyDataResultInfoRecording recording() { DARABONBA_PTR_GET(recording_, Models::GetResultResponseBodyDataResultInfoRecording) };
    inline GetResultResponseBodyDataResultInfo& setRecording(const Models::GetResultResponseBodyDataResultInfoRecording & recording) { DARABONBA_PTR_SET_VALUE(recording_, recording) };
    inline GetResultResponseBodyDataResultInfo& setRecording(Models::GetResultResponseBodyDataResultInfoRecording && recording) { DARABONBA_PTR_SET_RVALUE(recording_, recording) };


    // resolver Field Functions 
    bool hasResolver() const { return this->resolver_ != nullptr;};
    void deleteResolver() { this->resolver_ = nullptr;};
    inline string resolver() const { DARABONBA_PTR_GET_DEFAULT(resolver_, "") };
    inline GetResultResponseBodyDataResultInfo& setResolver(string resolver) { DARABONBA_PTR_SET_VALUE(resolver_, resolver) };


    // reviewHistoryList Field Functions 
    bool hasReviewHistoryList() const { return this->reviewHistoryList_ != nullptr;};
    void deleteReviewHistoryList() { this->reviewHistoryList_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoReviewHistoryList & reviewHistoryList() const { DARABONBA_PTR_GET_CONST(reviewHistoryList_, Models::GetResultResponseBodyDataResultInfoReviewHistoryList) };
    inline Models::GetResultResponseBodyDataResultInfoReviewHistoryList reviewHistoryList() { DARABONBA_PTR_GET(reviewHistoryList_, Models::GetResultResponseBodyDataResultInfoReviewHistoryList) };
    inline GetResultResponseBodyDataResultInfo& setReviewHistoryList(const Models::GetResultResponseBodyDataResultInfoReviewHistoryList & reviewHistoryList) { DARABONBA_PTR_SET_VALUE(reviewHistoryList_, reviewHistoryList) };
    inline GetResultResponseBodyDataResultInfo& setReviewHistoryList(Models::GetResultResponseBodyDataResultInfoReviewHistoryList && reviewHistoryList) { DARABONBA_PTR_SET_RVALUE(reviewHistoryList_, reviewHistoryList) };


    // reviewResult Field Functions 
    bool hasReviewResult() const { return this->reviewResult_ != nullptr;};
    void deleteReviewResult() { this->reviewResult_ = nullptr;};
    inline int32_t reviewResult() const { DARABONBA_PTR_GET_DEFAULT(reviewResult_, 0) };
    inline GetResultResponseBodyDataResultInfo& setReviewResult(int32_t reviewResult) { DARABONBA_PTR_SET_VALUE(reviewResult_, reviewResult) };


    // reviewStatus Field Functions 
    bool hasReviewStatus() const { return this->reviewStatus_ != nullptr;};
    void deleteReviewStatus() { this->reviewStatus_ = nullptr;};
    inline int32_t reviewStatus() const { DARABONBA_PTR_GET_DEFAULT(reviewStatus_, 0) };
    inline GetResultResponseBodyDataResultInfo& setReviewStatus(int32_t reviewStatus) { DARABONBA_PTR_SET_VALUE(reviewStatus_, reviewStatus) };


    // reviewTime Field Functions 
    bool hasReviewTime() const { return this->reviewTime_ != nullptr;};
    void deleteReviewTime() { this->reviewTime_ = nullptr;};
    inline string reviewTime() const { DARABONBA_PTR_GET_DEFAULT(reviewTime_, "") };
    inline GetResultResponseBodyDataResultInfo& setReviewTime(string reviewTime) { DARABONBA_PTR_SET_VALUE(reviewTime_, reviewTime) };


    // reviewTimeLong Field Functions 
    bool hasReviewTimeLong() const { return this->reviewTimeLong_ != nullptr;};
    void deleteReviewTimeLong() { this->reviewTimeLong_ = nullptr;};
    inline string reviewTimeLong() const { DARABONBA_PTR_GET_DEFAULT(reviewTimeLong_, "") };
    inline GetResultResponseBodyDataResultInfo& setReviewTimeLong(string reviewTimeLong) { DARABONBA_PTR_SET_VALUE(reviewTimeLong_, reviewTimeLong) };


    // reviewType Field Functions 
    bool hasReviewType() const { return this->reviewType_ != nullptr;};
    void deleteReviewType() { this->reviewType_ = nullptr;};
    inline int32_t reviewType() const { DARABONBA_PTR_GET_DEFAULT(reviewType_, 0) };
    inline GetResultResponseBodyDataResultInfo& setReviewType(int32_t reviewType) { DARABONBA_PTR_SET_VALUE(reviewType_, reviewType) };


    // reviewTypeIdList Field Functions 
    bool hasReviewTypeIdList() const { return this->reviewTypeIdList_ != nullptr;};
    void deleteReviewTypeIdList() { this->reviewTypeIdList_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoReviewTypeIdList & reviewTypeIdList() const { DARABONBA_PTR_GET_CONST(reviewTypeIdList_, Models::GetResultResponseBodyDataResultInfoReviewTypeIdList) };
    inline Models::GetResultResponseBodyDataResultInfoReviewTypeIdList reviewTypeIdList() { DARABONBA_PTR_GET(reviewTypeIdList_, Models::GetResultResponseBodyDataResultInfoReviewTypeIdList) };
    inline GetResultResponseBodyDataResultInfo& setReviewTypeIdList(const Models::GetResultResponseBodyDataResultInfoReviewTypeIdList & reviewTypeIdList) { DARABONBA_PTR_SET_VALUE(reviewTypeIdList_, reviewTypeIdList) };
    inline GetResultResponseBodyDataResultInfo& setReviewTypeIdList(Models::GetResultResponseBodyDataResultInfoReviewTypeIdList && reviewTypeIdList) { DARABONBA_PTR_SET_RVALUE(reviewTypeIdList_, reviewTypeIdList) };


    // reviewer Field Functions 
    bool hasReviewer() const { return this->reviewer_ != nullptr;};
    void deleteReviewer() { this->reviewer_ = nullptr;};
    inline string reviewer() const { DARABONBA_PTR_GET_DEFAULT(reviewer_, "") };
    inline GetResultResponseBodyDataResultInfo& setReviewer(string reviewer) { DARABONBA_PTR_SET_VALUE(reviewer_, reviewer) };


    // schemeIdList Field Functions 
    bool hasSchemeIdList() const { return this->schemeIdList_ != nullptr;};
    void deleteSchemeIdList() { this->schemeIdList_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoSchemeIdList & schemeIdList() const { DARABONBA_PTR_GET_CONST(schemeIdList_, Models::GetResultResponseBodyDataResultInfoSchemeIdList) };
    inline Models::GetResultResponseBodyDataResultInfoSchemeIdList schemeIdList() { DARABONBA_PTR_GET(schemeIdList_, Models::GetResultResponseBodyDataResultInfoSchemeIdList) };
    inline GetResultResponseBodyDataResultInfo& setSchemeIdList(const Models::GetResultResponseBodyDataResultInfoSchemeIdList & schemeIdList) { DARABONBA_PTR_SET_VALUE(schemeIdList_, schemeIdList) };
    inline GetResultResponseBodyDataResultInfo& setSchemeIdList(Models::GetResultResponseBodyDataResultInfoSchemeIdList && schemeIdList) { DARABONBA_PTR_SET_RVALUE(schemeIdList_, schemeIdList) };


    // schemeNameList Field Functions 
    bool hasSchemeNameList() const { return this->schemeNameList_ != nullptr;};
    void deleteSchemeNameList() { this->schemeNameList_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoSchemeNameList & schemeNameList() const { DARABONBA_PTR_GET_CONST(schemeNameList_, Models::GetResultResponseBodyDataResultInfoSchemeNameList) };
    inline Models::GetResultResponseBodyDataResultInfoSchemeNameList schemeNameList() { DARABONBA_PTR_GET(schemeNameList_, Models::GetResultResponseBodyDataResultInfoSchemeNameList) };
    inline GetResultResponseBodyDataResultInfo& setSchemeNameList(const Models::GetResultResponseBodyDataResultInfoSchemeNameList & schemeNameList) { DARABONBA_PTR_SET_VALUE(schemeNameList_, schemeNameList) };
    inline GetResultResponseBodyDataResultInfo& setSchemeNameList(Models::GetResultResponseBodyDataResultInfoSchemeNameList && schemeNameList) { DARABONBA_PTR_SET_RVALUE(schemeNameList_, schemeNameList) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline GetResultResponseBodyDataResultInfo& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetResultResponseBodyDataResultInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetResultResponseBodyDataResultInfo& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline GetResultResponseBodyDataResultInfo& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // vid Field Functions 
    bool hasVid() const { return this->vid_ != nullptr;};
    void deleteVid() { this->vid_ = nullptr;};
    inline string vid() const { DARABONBA_PTR_GET_DEFAULT(vid_, "") };
    inline GetResultResponseBodyDataResultInfo& setVid(string vid) { DARABONBA_PTR_SET_VALUE(vid_, vid) };


  protected:
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoAgent> agent_ = nullptr;
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoAsrResult> asrResult_ = nullptr;
    std::shared_ptr<string> assignmentTime_ = nullptr;
    std::shared_ptr<string> comments_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> createTimeLong_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoHitResult> hitResult_ = nullptr;
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoHitScore> hitScore_ = nullptr;
    std::shared_ptr<string> lastDataId_ = nullptr;
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoRecording> recording_ = nullptr;
    std::shared_ptr<string> resolver_ = nullptr;
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoReviewHistoryList> reviewHistoryList_ = nullptr;
    std::shared_ptr<int32_t> reviewResult_ = nullptr;
    std::shared_ptr<int32_t> reviewStatus_ = nullptr;
    std::shared_ptr<string> reviewTime_ = nullptr;
    std::shared_ptr<string> reviewTimeLong_ = nullptr;
    std::shared_ptr<int32_t> reviewType_ = nullptr;
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoReviewTypeIdList> reviewTypeIdList_ = nullptr;
    std::shared_ptr<string> reviewer_ = nullptr;
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoSchemeIdList> schemeIdList_ = nullptr;
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoSchemeNameList> schemeNameList_ = nullptr;
    std::shared_ptr<int32_t> score_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<string> vid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
