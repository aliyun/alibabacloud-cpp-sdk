// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetJobDetailResponseBodyAIJobDetail.hpp>
#include <alibabacloud/models/GetJobDetailResponseBodySnapshotJobDetail.hpp>
#include <alibabacloud/models/GetJobDetailResponseBodyTranscodeJobDetail.hpp>
#include <alibabacloud/models/GetJobDetailResponseBodyWorkflowTaskDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetJobDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIJobDetail, AIJobDetail_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotJobDetail, snapshotJobDetail_);
      DARABONBA_PTR_TO_JSON(TranscodeJobDetail, transcodeJobDetail_);
      DARABONBA_PTR_TO_JSON(WorkflowTaskDetail, workflowTaskDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIJobDetail, AIJobDetail_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotJobDetail, snapshotJobDetail_);
      DARABONBA_PTR_FROM_JSON(TranscodeJobDetail, transcodeJobDetail_);
      DARABONBA_PTR_FROM_JSON(WorkflowTaskDetail, workflowTaskDetail_);
    };
    GetJobDetailResponseBody() = default ;
    GetJobDetailResponseBody(const GetJobDetailResponseBody &) = default ;
    GetJobDetailResponseBody(GetJobDetailResponseBody &&) = default ;
    GetJobDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobDetailResponseBody() = default ;
    GetJobDetailResponseBody& operator=(const GetJobDetailResponseBody &) = default ;
    GetJobDetailResponseBody& operator=(GetJobDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIJobDetail_ != nullptr
        && this->jobType_ != nullptr && this->requestId_ != nullptr && this->snapshotJobDetail_ != nullptr && this->transcodeJobDetail_ != nullptr && this->workflowTaskDetail_ != nullptr; };
    // AIJobDetail Field Functions 
    bool hasAIJobDetail() const { return this->AIJobDetail_ != nullptr;};
    void deleteAIJobDetail() { this->AIJobDetail_ = nullptr;};
    inline const GetJobDetailResponseBodyAIJobDetail & AIJobDetail() const { DARABONBA_PTR_GET_CONST(AIJobDetail_, GetJobDetailResponseBodyAIJobDetail) };
    inline GetJobDetailResponseBodyAIJobDetail AIJobDetail() { DARABONBA_PTR_GET(AIJobDetail_, GetJobDetailResponseBodyAIJobDetail) };
    inline GetJobDetailResponseBody& setAIJobDetail(const GetJobDetailResponseBodyAIJobDetail & AIJobDetail) { DARABONBA_PTR_SET_VALUE(AIJobDetail_, AIJobDetail) };
    inline GetJobDetailResponseBody& setAIJobDetail(GetJobDetailResponseBodyAIJobDetail && AIJobDetail) { DARABONBA_PTR_SET_RVALUE(AIJobDetail_, AIJobDetail) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline GetJobDetailResponseBody& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotJobDetail Field Functions 
    bool hasSnapshotJobDetail() const { return this->snapshotJobDetail_ != nullptr;};
    void deleteSnapshotJobDetail() { this->snapshotJobDetail_ = nullptr;};
    inline const GetJobDetailResponseBodySnapshotJobDetail & snapshotJobDetail() const { DARABONBA_PTR_GET_CONST(snapshotJobDetail_, GetJobDetailResponseBodySnapshotJobDetail) };
    inline GetJobDetailResponseBodySnapshotJobDetail snapshotJobDetail() { DARABONBA_PTR_GET(snapshotJobDetail_, GetJobDetailResponseBodySnapshotJobDetail) };
    inline GetJobDetailResponseBody& setSnapshotJobDetail(const GetJobDetailResponseBodySnapshotJobDetail & snapshotJobDetail) { DARABONBA_PTR_SET_VALUE(snapshotJobDetail_, snapshotJobDetail) };
    inline GetJobDetailResponseBody& setSnapshotJobDetail(GetJobDetailResponseBodySnapshotJobDetail && snapshotJobDetail) { DARABONBA_PTR_SET_RVALUE(snapshotJobDetail_, snapshotJobDetail) };


    // transcodeJobDetail Field Functions 
    bool hasTranscodeJobDetail() const { return this->transcodeJobDetail_ != nullptr;};
    void deleteTranscodeJobDetail() { this->transcodeJobDetail_ = nullptr;};
    inline const GetJobDetailResponseBodyTranscodeJobDetail & transcodeJobDetail() const { DARABONBA_PTR_GET_CONST(transcodeJobDetail_, GetJobDetailResponseBodyTranscodeJobDetail) };
    inline GetJobDetailResponseBodyTranscodeJobDetail transcodeJobDetail() { DARABONBA_PTR_GET(transcodeJobDetail_, GetJobDetailResponseBodyTranscodeJobDetail) };
    inline GetJobDetailResponseBody& setTranscodeJobDetail(const GetJobDetailResponseBodyTranscodeJobDetail & transcodeJobDetail) { DARABONBA_PTR_SET_VALUE(transcodeJobDetail_, transcodeJobDetail) };
    inline GetJobDetailResponseBody& setTranscodeJobDetail(GetJobDetailResponseBodyTranscodeJobDetail && transcodeJobDetail) { DARABONBA_PTR_SET_RVALUE(transcodeJobDetail_, transcodeJobDetail) };


    // workflowTaskDetail Field Functions 
    bool hasWorkflowTaskDetail() const { return this->workflowTaskDetail_ != nullptr;};
    void deleteWorkflowTaskDetail() { this->workflowTaskDetail_ = nullptr;};
    inline const GetJobDetailResponseBodyWorkflowTaskDetail & workflowTaskDetail() const { DARABONBA_PTR_GET_CONST(workflowTaskDetail_, GetJobDetailResponseBodyWorkflowTaskDetail) };
    inline GetJobDetailResponseBodyWorkflowTaskDetail workflowTaskDetail() { DARABONBA_PTR_GET(workflowTaskDetail_, GetJobDetailResponseBodyWorkflowTaskDetail) };
    inline GetJobDetailResponseBody& setWorkflowTaskDetail(const GetJobDetailResponseBodyWorkflowTaskDetail & workflowTaskDetail) { DARABONBA_PTR_SET_VALUE(workflowTaskDetail_, workflowTaskDetail) };
    inline GetJobDetailResponseBody& setWorkflowTaskDetail(GetJobDetailResponseBodyWorkflowTaskDetail && workflowTaskDetail) { DARABONBA_PTR_SET_RVALUE(workflowTaskDetail_, workflowTaskDetail) };


  protected:
    // The details of the AI task. This parameter takes effect only when the TaskType parameter is set to AI.
    std::shared_ptr<GetJobDetailResponseBodyAIJobDetail> AIJobDetail_ = nullptr;
    // The type of the task. Valid values:
    std::shared_ptr<string> jobType_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the snapshot task. This parameter takes effect only when the jobType parameter is set to Snapshot.
    std::shared_ptr<GetJobDetailResponseBodySnapshotJobDetail> snapshotJobDetail_ = nullptr;
    // The details of the transcoding task. This parameter takes effect only when the jobType parameter is set to Transcode.
    std::shared_ptr<GetJobDetailResponseBodyTranscodeJobDetail> transcodeJobDetail_ = nullptr;
    std::shared_ptr<GetJobDetailResponseBodyWorkflowTaskDetail> workflowTaskDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
