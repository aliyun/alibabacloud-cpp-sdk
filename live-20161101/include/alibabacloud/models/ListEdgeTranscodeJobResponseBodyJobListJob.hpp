// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGETRANSCODEJOBRESPONSEBODYJOBLISTJOB_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGETRANSCODEJOBRESPONSEBODYJOBLISTJOB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListEdgeTranscodeJobResponseBodyJobListJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeTranscodeJobResponseBodyJobListJob& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(LastStartAt, lastStartAt_);
      DARABONBA_PTR_TO_JSON(LastStopAt, lastStopAt_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_TO_JSON(StreamOutput, streamOutput_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeTranscodeJobResponseBodyJobListJob& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(LastStartAt, lastStartAt_);
      DARABONBA_PTR_FROM_JSON(LastStopAt, lastStopAt_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_FROM_JSON(StreamOutput, streamOutput_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListEdgeTranscodeJobResponseBodyJobListJob() = default ;
    ListEdgeTranscodeJobResponseBodyJobListJob(const ListEdgeTranscodeJobResponseBodyJobListJob &) = default ;
    ListEdgeTranscodeJobResponseBodyJobListJob(ListEdgeTranscodeJobResponseBodyJobListJob &&) = default ;
    ListEdgeTranscodeJobResponseBodyJobListJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeTranscodeJobResponseBodyJobListJob() = default ;
    ListEdgeTranscodeJobResponseBodyJobListJob& operator=(const ListEdgeTranscodeJobResponseBodyJobListJob &) = default ;
    ListEdgeTranscodeJobResponseBodyJobListJob& operator=(ListEdgeTranscodeJobResponseBodyJobListJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->jobId_ != nullptr && this->lastStartAt_ != nullptr && this->lastStopAt_ != nullptr && this->name_ != nullptr && this->status_ != nullptr
        && this->streamInput_ != nullptr && this->streamOutput_ != nullptr && this->templateId_ != nullptr && this->templateName_ != nullptr && this->type_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListEdgeTranscodeJobResponseBodyJobListJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListEdgeTranscodeJobResponseBodyJobListJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // lastStartAt Field Functions 
    bool hasLastStartAt() const { return this->lastStartAt_ != nullptr;};
    void deleteLastStartAt() { this->lastStartAt_ = nullptr;};
    inline string lastStartAt() const { DARABONBA_PTR_GET_DEFAULT(lastStartAt_, "") };
    inline ListEdgeTranscodeJobResponseBodyJobListJob& setLastStartAt(string lastStartAt) { DARABONBA_PTR_SET_VALUE(lastStartAt_, lastStartAt) };


    // lastStopAt Field Functions 
    bool hasLastStopAt() const { return this->lastStopAt_ != nullptr;};
    void deleteLastStopAt() { this->lastStopAt_ = nullptr;};
    inline string lastStopAt() const { DARABONBA_PTR_GET_DEFAULT(lastStopAt_, "") };
    inline ListEdgeTranscodeJobResponseBodyJobListJob& setLastStopAt(string lastStopAt) { DARABONBA_PTR_SET_VALUE(lastStopAt_, lastStopAt) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEdgeTranscodeJobResponseBodyJobListJob& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEdgeTranscodeJobResponseBodyJobListJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // streamInput Field Functions 
    bool hasStreamInput() const { return this->streamInput_ != nullptr;};
    void deleteStreamInput() { this->streamInput_ = nullptr;};
    inline string streamInput() const { DARABONBA_PTR_GET_DEFAULT(streamInput_, "") };
    inline ListEdgeTranscodeJobResponseBodyJobListJob& setStreamInput(string streamInput) { DARABONBA_PTR_SET_VALUE(streamInput_, streamInput) };


    // streamOutput Field Functions 
    bool hasStreamOutput() const { return this->streamOutput_ != nullptr;};
    void deleteStreamOutput() { this->streamOutput_ = nullptr;};
    inline string streamOutput() const { DARABONBA_PTR_GET_DEFAULT(streamOutput_, "") };
    inline ListEdgeTranscodeJobResponseBodyJobListJob& setStreamOutput(string streamOutput) { DARABONBA_PTR_SET_VALUE(streamOutput_, streamOutput) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListEdgeTranscodeJobResponseBodyJobListJob& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListEdgeTranscodeJobResponseBodyJobListJob& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListEdgeTranscodeJobResponseBodyJobListJob& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The time when the task was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> jobId_ = nullptr;
    // The time when the task was last started.
    std::shared_ptr<string> lastStartAt_ = nullptr;
    // The time when the task was last stopped.
    std::shared_ptr<string> lastStopAt_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   0: not started
    // *   1: in progress
    std::shared_ptr<string> status_ = nullptr;
    // The URL of the input stream.
    std::shared_ptr<string> streamInput_ = nullptr;
    // The URL of the output stream.
    std::shared_ptr<string> streamOutput_ = nullptr;
    // The ID of the edge transcoding template used by the task.
    std::shared_ptr<string> templateId_ = nullptr;
    // The name of the edge transcoding template used by the task.
    std::shared_ptr<string> templateName_ = nullptr;
    // The type of edge transcoding. Valid values:
    // 
    // *   common: standard transcoding and Narrowband HD™ 1.0 transcoding.
    // *   nbhd-2: Narrowband HD™ 2.0 transcoding
    // *   ultra-hd: ultra-high definition transcoding
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
