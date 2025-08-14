// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVESNAPSHOTJOBSRESPONSEBODYJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVESNAPSHOTJOBSRESPONSEBODYJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLiveSnapshotJobsResponseBodyJobListSnapshotOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveSnapshotJobsResponseBodyJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveSnapshotJobsResponseBodyJobList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(SnapshotOutput, snapshotOutput_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TimeInterval, timeInterval_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveSnapshotJobsResponseBodyJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(SnapshotOutput, snapshotOutput_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TimeInterval, timeInterval_);
    };
    ListLiveSnapshotJobsResponseBodyJobList() = default ;
    ListLiveSnapshotJobsResponseBodyJobList(const ListLiveSnapshotJobsResponseBodyJobList &) = default ;
    ListLiveSnapshotJobsResponseBodyJobList(ListLiveSnapshotJobsResponseBodyJobList &&) = default ;
    ListLiveSnapshotJobsResponseBodyJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveSnapshotJobsResponseBodyJobList() = default ;
    ListLiveSnapshotJobsResponseBodyJobList& operator=(const ListLiveSnapshotJobsResponseBodyJobList &) = default ;
    ListLiveSnapshotJobsResponseBodyJobList& operator=(ListLiveSnapshotJobsResponseBodyJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->jobId_ != nullptr && this->jobName_ != nullptr && this->snapshotOutput_ != nullptr && this->status_ != nullptr && this->templateId_ != nullptr
        && this->templateName_ != nullptr && this->timeInterval_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListLiveSnapshotJobsResponseBodyJobList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListLiveSnapshotJobsResponseBodyJobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListLiveSnapshotJobsResponseBodyJobList& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // snapshotOutput Field Functions 
    bool hasSnapshotOutput() const { return this->snapshotOutput_ != nullptr;};
    void deleteSnapshotOutput() { this->snapshotOutput_ = nullptr;};
    inline const Models::ListLiveSnapshotJobsResponseBodyJobListSnapshotOutput & snapshotOutput() const { DARABONBA_PTR_GET_CONST(snapshotOutput_, Models::ListLiveSnapshotJobsResponseBodyJobListSnapshotOutput) };
    inline Models::ListLiveSnapshotJobsResponseBodyJobListSnapshotOutput snapshotOutput() { DARABONBA_PTR_GET(snapshotOutput_, Models::ListLiveSnapshotJobsResponseBodyJobListSnapshotOutput) };
    inline ListLiveSnapshotJobsResponseBodyJobList& setSnapshotOutput(const Models::ListLiveSnapshotJobsResponseBodyJobListSnapshotOutput & snapshotOutput) { DARABONBA_PTR_SET_VALUE(snapshotOutput_, snapshotOutput) };
    inline ListLiveSnapshotJobsResponseBodyJobList& setSnapshotOutput(Models::ListLiveSnapshotJobsResponseBodyJobListSnapshotOutput && snapshotOutput) { DARABONBA_PTR_SET_RVALUE(snapshotOutput_, snapshotOutput) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListLiveSnapshotJobsResponseBodyJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListLiveSnapshotJobsResponseBodyJobList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListLiveSnapshotJobsResponseBodyJobList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // timeInterval Field Functions 
    bool hasTimeInterval() const { return this->timeInterval_ != nullptr;};
    void deleteTimeInterval() { this->timeInterval_ = nullptr;};
    inline int32_t timeInterval() const { DARABONBA_PTR_GET_DEFAULT(timeInterval_, 0) };
    inline ListLiveSnapshotJobsResponseBodyJobList& setTimeInterval(int32_t timeInterval) { DARABONBA_PTR_SET_VALUE(timeInterval_, timeInterval) };


  protected:
    // The time when the template was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The name of the job.
    std::shared_ptr<string> jobName_ = nullptr;
    // The output information.
    std::shared_ptr<Models::ListLiveSnapshotJobsResponseBodyJobListSnapshotOutput> snapshotOutput_ = nullptr;
    // The state of the job.
    // 
    // Valid values:
    // 
    // *   init: The job is not started.
    // *   paused: The job is paused.
    // *   started: The job is in progress.
    std::shared_ptr<string> status_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
    // The template name.
    std::shared_ptr<string> templateName_ = nullptr;
    // The interval between two adjacent snapshots. Unit: seconds.
    std::shared_ptr<int32_t> timeInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
