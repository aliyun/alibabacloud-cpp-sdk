// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVETRANSCODEJOBRESPONSEBODYJOB_HPP_
#define ALIBABACLOUD_MODELS_GETLIVETRANSCODEJOBRESPONSEBODYJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLiveTranscodeJobResponseBodyJobOutputStream.hpp>
#include <alibabacloud/models/GetLiveTranscodeJobResponseBodyJobStreamInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveTranscodeJobResponseBodyJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveTranscodeJobResponseBodyJob& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutputStream, outputStream_);
      DARABONBA_PTR_TO_JSON(StartMode, startMode_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveTranscodeJobResponseBodyJob& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutputStream, outputStream_);
      DARABONBA_PTR_FROM_JSON(StartMode, startMode_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    GetLiveTranscodeJobResponseBodyJob() = default ;
    GetLiveTranscodeJobResponseBodyJob(const GetLiveTranscodeJobResponseBodyJob &) = default ;
    GetLiveTranscodeJobResponseBodyJob(GetLiveTranscodeJobResponseBodyJob &&) = default ;
    GetLiveTranscodeJobResponseBodyJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveTranscodeJobResponseBodyJob() = default ;
    GetLiveTranscodeJobResponseBodyJob& operator=(const GetLiveTranscodeJobResponseBodyJob &) = default ;
    GetLiveTranscodeJobResponseBodyJob& operator=(GetLiveTranscodeJobResponseBodyJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->jobId_ == nullptr && return this->name_ == nullptr && return this->outputStream_ == nullptr && return this->startMode_ == nullptr && return this->status_ == nullptr
        && return this->streamInput_ == nullptr && return this->templateId_ == nullptr && return this->templateName_ == nullptr && return this->templateType_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetLiveTranscodeJobResponseBodyJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetLiveTranscodeJobResponseBodyJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetLiveTranscodeJobResponseBodyJob& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputStream Field Functions 
    bool hasOutputStream() const { return this->outputStream_ != nullptr;};
    void deleteOutputStream() { this->outputStream_ = nullptr;};
    inline const Models::GetLiveTranscodeJobResponseBodyJobOutputStream & outputStream() const { DARABONBA_PTR_GET_CONST(outputStream_, Models::GetLiveTranscodeJobResponseBodyJobOutputStream) };
    inline Models::GetLiveTranscodeJobResponseBodyJobOutputStream outputStream() { DARABONBA_PTR_GET(outputStream_, Models::GetLiveTranscodeJobResponseBodyJobOutputStream) };
    inline GetLiveTranscodeJobResponseBodyJob& setOutputStream(const Models::GetLiveTranscodeJobResponseBodyJobOutputStream & outputStream) { DARABONBA_PTR_SET_VALUE(outputStream_, outputStream) };
    inline GetLiveTranscodeJobResponseBodyJob& setOutputStream(Models::GetLiveTranscodeJobResponseBodyJobOutputStream && outputStream) { DARABONBA_PTR_SET_RVALUE(outputStream_, outputStream) };


    // startMode Field Functions 
    bool hasStartMode() const { return this->startMode_ != nullptr;};
    void deleteStartMode() { this->startMode_ = nullptr;};
    inline int32_t startMode() const { DARABONBA_PTR_GET_DEFAULT(startMode_, 0) };
    inline GetLiveTranscodeJobResponseBodyJob& setStartMode(int32_t startMode) { DARABONBA_PTR_SET_VALUE(startMode_, startMode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetLiveTranscodeJobResponseBodyJob& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // streamInput Field Functions 
    bool hasStreamInput() const { return this->streamInput_ != nullptr;};
    void deleteStreamInput() { this->streamInput_ = nullptr;};
    inline const Models::GetLiveTranscodeJobResponseBodyJobStreamInput & streamInput() const { DARABONBA_PTR_GET_CONST(streamInput_, Models::GetLiveTranscodeJobResponseBodyJobStreamInput) };
    inline Models::GetLiveTranscodeJobResponseBodyJobStreamInput streamInput() { DARABONBA_PTR_GET(streamInput_, Models::GetLiveTranscodeJobResponseBodyJobStreamInput) };
    inline GetLiveTranscodeJobResponseBodyJob& setStreamInput(const Models::GetLiveTranscodeJobResponseBodyJobStreamInput & streamInput) { DARABONBA_PTR_SET_VALUE(streamInput_, streamInput) };
    inline GetLiveTranscodeJobResponseBodyJob& setStreamInput(Models::GetLiveTranscodeJobResponseBodyJobStreamInput && streamInput) { DARABONBA_PTR_SET_RVALUE(streamInput_, streamInput) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetLiveTranscodeJobResponseBodyJob& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetLiveTranscodeJobResponseBodyJob& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline GetLiveTranscodeJobResponseBodyJob& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The time when the job was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the transcoding job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The name of the transcoding job.
    std::shared_ptr<string> name_ = nullptr;
    // The information about the output stream.
    std::shared_ptr<Models::GetLiveTranscodeJobResponseBodyJobOutputStream> outputStream_ = nullptr;
    // The start mode of the job.
    std::shared_ptr<int32_t> startMode_ = nullptr;
    // The state of the job.
    // 
    // *   0: The job is not started.
    // *   1: The job is in progress.
    // *   2: The job is stopped.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The information about the input stream.
    std::shared_ptr<Models::GetLiveTranscodeJobResponseBodyJobStreamInput> streamInput_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
    // The template name.
    std::shared_ptr<string> templateName_ = nullptr;
    // The type of the template.
    std::shared_ptr<string> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
