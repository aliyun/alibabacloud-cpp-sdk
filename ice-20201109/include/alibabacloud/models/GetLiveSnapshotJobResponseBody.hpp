// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVESNAPSHOTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLIVESNAPSHOTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLiveSnapshotJobResponseBodySnapshotOutput.hpp>
#include <alibabacloud/models/GetLiveSnapshotJobResponseBodyStreamInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveSnapshotJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveSnapshotJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
      DARABONBA_PTR_TO_JSON(OverwriteFormat, overwriteFormat_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SequenceFormat, sequenceFormat_);
      DARABONBA_PTR_TO_JSON(SnapshotOutput, snapshotOutput_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TimeInterval, timeInterval_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveSnapshotJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
      DARABONBA_PTR_FROM_JSON(OverwriteFormat, overwriteFormat_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SequenceFormat, sequenceFormat_);
      DARABONBA_PTR_FROM_JSON(SnapshotOutput, snapshotOutput_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TimeInterval, timeInterval_);
    };
    GetLiveSnapshotJobResponseBody() = default ;
    GetLiveSnapshotJobResponseBody(const GetLiveSnapshotJobResponseBody &) = default ;
    GetLiveSnapshotJobResponseBody(GetLiveSnapshotJobResponseBody &&) = default ;
    GetLiveSnapshotJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveSnapshotJobResponseBody() = default ;
    GetLiveSnapshotJobResponseBody& operator=(const GetLiveSnapshotJobResponseBody &) = default ;
    GetLiveSnapshotJobResponseBody& operator=(GetLiveSnapshotJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callbackUrl_ == nullptr
        && return this->createTime_ == nullptr && return this->jobId_ == nullptr && return this->jobName_ == nullptr && return this->lastModified_ == nullptr && return this->overwriteFormat_ == nullptr
        && return this->requestId_ == nullptr && return this->sequenceFormat_ == nullptr && return this->snapshotOutput_ == nullptr && return this->status_ == nullptr && return this->streamInput_ == nullptr
        && return this->templateId_ == nullptr && return this->templateName_ == nullptr && return this->timeInterval_ == nullptr; };
    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string callbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline GetLiveSnapshotJobResponseBody& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetLiveSnapshotJobResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetLiveSnapshotJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline GetLiveSnapshotJobResponseBody& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // lastModified Field Functions 
    bool hasLastModified() const { return this->lastModified_ != nullptr;};
    void deleteLastModified() { this->lastModified_ = nullptr;};
    inline string lastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
    inline GetLiveSnapshotJobResponseBody& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


    // overwriteFormat Field Functions 
    bool hasOverwriteFormat() const { return this->overwriteFormat_ != nullptr;};
    void deleteOverwriteFormat() { this->overwriteFormat_ = nullptr;};
    inline string overwriteFormat() const { DARABONBA_PTR_GET_DEFAULT(overwriteFormat_, "") };
    inline GetLiveSnapshotJobResponseBody& setOverwriteFormat(string overwriteFormat) { DARABONBA_PTR_SET_VALUE(overwriteFormat_, overwriteFormat) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLiveSnapshotJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sequenceFormat Field Functions 
    bool hasSequenceFormat() const { return this->sequenceFormat_ != nullptr;};
    void deleteSequenceFormat() { this->sequenceFormat_ = nullptr;};
    inline string sequenceFormat() const { DARABONBA_PTR_GET_DEFAULT(sequenceFormat_, "") };
    inline GetLiveSnapshotJobResponseBody& setSequenceFormat(string sequenceFormat) { DARABONBA_PTR_SET_VALUE(sequenceFormat_, sequenceFormat) };


    // snapshotOutput Field Functions 
    bool hasSnapshotOutput() const { return this->snapshotOutput_ != nullptr;};
    void deleteSnapshotOutput() { this->snapshotOutput_ = nullptr;};
    inline const GetLiveSnapshotJobResponseBodySnapshotOutput & snapshotOutput() const { DARABONBA_PTR_GET_CONST(snapshotOutput_, GetLiveSnapshotJobResponseBodySnapshotOutput) };
    inline GetLiveSnapshotJobResponseBodySnapshotOutput snapshotOutput() { DARABONBA_PTR_GET(snapshotOutput_, GetLiveSnapshotJobResponseBodySnapshotOutput) };
    inline GetLiveSnapshotJobResponseBody& setSnapshotOutput(const GetLiveSnapshotJobResponseBodySnapshotOutput & snapshotOutput) { DARABONBA_PTR_SET_VALUE(snapshotOutput_, snapshotOutput) };
    inline GetLiveSnapshotJobResponseBody& setSnapshotOutput(GetLiveSnapshotJobResponseBodySnapshotOutput && snapshotOutput) { DARABONBA_PTR_SET_RVALUE(snapshotOutput_, snapshotOutput) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetLiveSnapshotJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // streamInput Field Functions 
    bool hasStreamInput() const { return this->streamInput_ != nullptr;};
    void deleteStreamInput() { this->streamInput_ = nullptr;};
    inline const GetLiveSnapshotJobResponseBodyStreamInput & streamInput() const { DARABONBA_PTR_GET_CONST(streamInput_, GetLiveSnapshotJobResponseBodyStreamInput) };
    inline GetLiveSnapshotJobResponseBodyStreamInput streamInput() { DARABONBA_PTR_GET(streamInput_, GetLiveSnapshotJobResponseBodyStreamInput) };
    inline GetLiveSnapshotJobResponseBody& setStreamInput(const GetLiveSnapshotJobResponseBodyStreamInput & streamInput) { DARABONBA_PTR_SET_VALUE(streamInput_, streamInput) };
    inline GetLiveSnapshotJobResponseBody& setStreamInput(GetLiveSnapshotJobResponseBodyStreamInput && streamInput) { DARABONBA_PTR_SET_RVALUE(streamInput_, streamInput) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetLiveSnapshotJobResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetLiveSnapshotJobResponseBody& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // timeInterval Field Functions 
    bool hasTimeInterval() const { return this->timeInterval_ != nullptr;};
    void deleteTimeInterval() { this->timeInterval_ = nullptr;};
    inline int32_t timeInterval() const { DARABONBA_PTR_GET_DEFAULT(timeInterval_, 0) };
    inline GetLiveSnapshotJobResponseBody& setTimeInterval(int32_t timeInterval) { DARABONBA_PTR_SET_VALUE(timeInterval_, timeInterval) };


  protected:
    // The snapshot callback URL.
    std::shared_ptr<string> callbackUrl_ = nullptr;
    // The time when the file was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The name of the job.
    std::shared_ptr<string> jobName_ = nullptr;
    // The time when the file was last modified.
    std::shared_ptr<string> lastModified_ = nullptr;
    // The naming format of the snapshot captured in overwrite mode.
    std::shared_ptr<string> overwriteFormat_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The naming format of the snapshot captured in time series mode.
    std::shared_ptr<string> sequenceFormat_ = nullptr;
    // The output information.
    std::shared_ptr<GetLiveSnapshotJobResponseBodySnapshotOutput> snapshotOutput_ = nullptr;
    // The state of the job.
    // 
    // Valid values:
    // 
    // *   init: The job is not started.
    // *   paused: The job is paused.
    // *   started: The job is in progress.
    std::shared_ptr<string> status_ = nullptr;
    // The input information.
    std::shared_ptr<GetLiveSnapshotJobResponseBodyStreamInput> streamInput_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> templateName_ = nullptr;
    // The interval between two adjacent snapshots.
    std::shared_ptr<int32_t> timeInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
