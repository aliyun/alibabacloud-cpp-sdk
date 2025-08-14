// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVERECORDJOBRESPONSEBODYRECORDJOB_HPP_
#define ALIBABACLOUD_MODELS_GETLIVERECORDJOBRESPONSEBODYRECORDJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLiveRecordJobResponseBodyRecordJobRecordOutput.hpp>
#include <alibabacloud/models/GetLiveRecordJobResponseBodyRecordJobStreamInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveRecordJobResponseBodyRecordJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveRecordJobResponseBodyRecordJob& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_TO_JSON(RecordOutput, recordOutput_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveRecordJobResponseBodyRecordJob& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_FROM_JSON(RecordOutput, recordOutput_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    GetLiveRecordJobResponseBodyRecordJob() = default ;
    GetLiveRecordJobResponseBodyRecordJob(const GetLiveRecordJobResponseBodyRecordJob &) = default ;
    GetLiveRecordJobResponseBodyRecordJob(GetLiveRecordJobResponseBodyRecordJob &&) = default ;
    GetLiveRecordJobResponseBodyRecordJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveRecordJobResponseBodyRecordJob() = default ;
    GetLiveRecordJobResponseBodyRecordJob& operator=(const GetLiveRecordJobResponseBodyRecordJob &) = default ;
    GetLiveRecordJobResponseBodyRecordJob& operator=(GetLiveRecordJobResponseBodyRecordJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->jobId_ != nullptr && this->name_ != nullptr && this->notifyUrl_ != nullptr && this->recordOutput_ != nullptr && this->status_ != nullptr
        && this->streamInput_ != nullptr && this->templateId_ != nullptr && this->templateName_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetLiveRecordJobResponseBodyRecordJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetLiveRecordJobResponseBodyRecordJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetLiveRecordJobResponseBodyRecordJob& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string notifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline GetLiveRecordJobResponseBodyRecordJob& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // recordOutput Field Functions 
    bool hasRecordOutput() const { return this->recordOutput_ != nullptr;};
    void deleteRecordOutput() { this->recordOutput_ = nullptr;};
    inline const Models::GetLiveRecordJobResponseBodyRecordJobRecordOutput & recordOutput() const { DARABONBA_PTR_GET_CONST(recordOutput_, Models::GetLiveRecordJobResponseBodyRecordJobRecordOutput) };
    inline Models::GetLiveRecordJobResponseBodyRecordJobRecordOutput recordOutput() { DARABONBA_PTR_GET(recordOutput_, Models::GetLiveRecordJobResponseBodyRecordJobRecordOutput) };
    inline GetLiveRecordJobResponseBodyRecordJob& setRecordOutput(const Models::GetLiveRecordJobResponseBodyRecordJobRecordOutput & recordOutput) { DARABONBA_PTR_SET_VALUE(recordOutput_, recordOutput) };
    inline GetLiveRecordJobResponseBodyRecordJob& setRecordOutput(Models::GetLiveRecordJobResponseBodyRecordJobRecordOutput && recordOutput) { DARABONBA_PTR_SET_RVALUE(recordOutput_, recordOutput) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetLiveRecordJobResponseBodyRecordJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // streamInput Field Functions 
    bool hasStreamInput() const { return this->streamInput_ != nullptr;};
    void deleteStreamInput() { this->streamInput_ = nullptr;};
    inline const Models::GetLiveRecordJobResponseBodyRecordJobStreamInput & streamInput() const { DARABONBA_PTR_GET_CONST(streamInput_, Models::GetLiveRecordJobResponseBodyRecordJobStreamInput) };
    inline Models::GetLiveRecordJobResponseBodyRecordJobStreamInput streamInput() { DARABONBA_PTR_GET(streamInput_, Models::GetLiveRecordJobResponseBodyRecordJobStreamInput) };
    inline GetLiveRecordJobResponseBodyRecordJob& setStreamInput(const Models::GetLiveRecordJobResponseBodyRecordJobStreamInput & streamInput) { DARABONBA_PTR_SET_VALUE(streamInput_, streamInput) };
    inline GetLiveRecordJobResponseBodyRecordJob& setStreamInput(Models::GetLiveRecordJobResponseBodyRecordJobStreamInput && streamInput) { DARABONBA_PTR_SET_RVALUE(streamInput_, streamInput) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetLiveRecordJobResponseBodyRecordJob& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetLiveRecordJobResponseBodyRecordJob& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The time when the job was created.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the recording job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The name of the recording job.
    std::shared_ptr<string> name_ = nullptr;
    // The callback URL.
    std::shared_ptr<string> notifyUrl_ = nullptr;
    // The storage address of the recording.
    std::shared_ptr<Models::GetLiveRecordJobResponseBodyRecordJobRecordOutput> recordOutput_ = nullptr;
    // The state of the recording job.
    // 
    // Valid values:
    // 
    // *   paused: The job is paused.
    // *   initial: The job is not started.
    // *   started: The job is in progress.
    std::shared_ptr<string> status_ = nullptr;
    // The URL of the live stream.
    std::shared_ptr<Models::GetLiveRecordJobResponseBodyRecordJobStreamInput> streamInput_ = nullptr;
    // The ID of the recording template.
    std::shared_ptr<string> templateId_ = nullptr;
    // The name of the recording template.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
