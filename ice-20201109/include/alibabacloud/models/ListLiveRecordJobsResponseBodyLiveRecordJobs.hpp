// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVERECORDJOBSRESPONSEBODYLIVERECORDJOBS_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVERECORDJOBSRESPONSEBODYLIVERECORDJOBS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput.hpp>
#include <alibabacloud/models/ListLiveRecordJobsResponseBodyLiveRecordJobsStreamInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveRecordJobsResponseBodyLiveRecordJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRecordJobsResponseBodyLiveRecordJobs& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListLiveRecordJobsResponseBodyLiveRecordJobs& obj) { 
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
    ListLiveRecordJobsResponseBodyLiveRecordJobs() = default ;
    ListLiveRecordJobsResponseBodyLiveRecordJobs(const ListLiveRecordJobsResponseBodyLiveRecordJobs &) = default ;
    ListLiveRecordJobsResponseBodyLiveRecordJobs(ListLiveRecordJobsResponseBodyLiveRecordJobs &&) = default ;
    ListLiveRecordJobsResponseBodyLiveRecordJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRecordJobsResponseBodyLiveRecordJobs() = default ;
    ListLiveRecordJobsResponseBodyLiveRecordJobs& operator=(const ListLiveRecordJobsResponseBodyLiveRecordJobs &) = default ;
    ListLiveRecordJobsResponseBodyLiveRecordJobs& operator=(ListLiveRecordJobsResponseBodyLiveRecordJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->jobId_ == nullptr && return this->name_ == nullptr && return this->notifyUrl_ == nullptr && return this->recordOutput_ == nullptr && return this->status_ == nullptr
        && return this->streamInput_ == nullptr && return this->templateId_ == nullptr && return this->templateName_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListLiveRecordJobsResponseBodyLiveRecordJobs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListLiveRecordJobsResponseBodyLiveRecordJobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListLiveRecordJobsResponseBodyLiveRecordJobs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string notifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline ListLiveRecordJobsResponseBodyLiveRecordJobs& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // recordOutput Field Functions 
    bool hasRecordOutput() const { return this->recordOutput_ != nullptr;};
    void deleteRecordOutput() { this->recordOutput_ = nullptr;};
    inline const Models::ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput & recordOutput() const { DARABONBA_PTR_GET_CONST(recordOutput_, Models::ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput) };
    inline Models::ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput recordOutput() { DARABONBA_PTR_GET(recordOutput_, Models::ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput) };
    inline ListLiveRecordJobsResponseBodyLiveRecordJobs& setRecordOutput(const Models::ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput & recordOutput) { DARABONBA_PTR_SET_VALUE(recordOutput_, recordOutput) };
    inline ListLiveRecordJobsResponseBodyLiveRecordJobs& setRecordOutput(Models::ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput && recordOutput) { DARABONBA_PTR_SET_RVALUE(recordOutput_, recordOutput) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListLiveRecordJobsResponseBodyLiveRecordJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // streamInput Field Functions 
    bool hasStreamInput() const { return this->streamInput_ != nullptr;};
    void deleteStreamInput() { this->streamInput_ = nullptr;};
    inline const Models::ListLiveRecordJobsResponseBodyLiveRecordJobsStreamInput & streamInput() const { DARABONBA_PTR_GET_CONST(streamInput_, Models::ListLiveRecordJobsResponseBodyLiveRecordJobsStreamInput) };
    inline Models::ListLiveRecordJobsResponseBodyLiveRecordJobsStreamInput streamInput() { DARABONBA_PTR_GET(streamInput_, Models::ListLiveRecordJobsResponseBodyLiveRecordJobsStreamInput) };
    inline ListLiveRecordJobsResponseBodyLiveRecordJobs& setStreamInput(const Models::ListLiveRecordJobsResponseBodyLiveRecordJobsStreamInput & streamInput) { DARABONBA_PTR_SET_VALUE(streamInput_, streamInput) };
    inline ListLiveRecordJobsResponseBodyLiveRecordJobs& setStreamInput(Models::ListLiveRecordJobsResponseBodyLiveRecordJobsStreamInput && streamInput) { DARABONBA_PTR_SET_RVALUE(streamInput_, streamInput) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListLiveRecordJobsResponseBodyLiveRecordJobs& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListLiveRecordJobsResponseBodyLiveRecordJobs& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


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
    std::shared_ptr<Models::ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput> recordOutput_ = nullptr;
    // The state of the recording job.
    std::shared_ptr<string> status_ = nullptr;
    // The URL of the live stream.
    std::shared_ptr<Models::ListLiveRecordJobsResponseBodyLiveRecordJobsStreamInput> streamInput_ = nullptr;
    // The ID of the recording template.
    std::shared_ptr<string> templateId_ = nullptr;
    // The name of the recording template.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
