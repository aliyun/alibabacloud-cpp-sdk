// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMARTJOBSRESPONSEBODYSMARTJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSMARTJOBSRESPONSEBODYSMARTJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSmartJobsResponseBodySmartJobListInputConfig.hpp>
#include <alibabacloud/models/ListSmartJobsResponseBodySmartJobListOutputConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSmartJobsResponseBodySmartJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmartJobsResponseBodySmartJobList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EditingConfig, editingConfig_);
      DARABONBA_PTR_TO_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobState, jobState_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmartJobsResponseBodySmartJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EditingConfig, editingConfig_);
      DARABONBA_PTR_FROM_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobState, jobState_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListSmartJobsResponseBodySmartJobList() = default ;
    ListSmartJobsResponseBodySmartJobList(const ListSmartJobsResponseBodySmartJobList &) = default ;
    ListSmartJobsResponseBodySmartJobList(ListSmartJobsResponseBodySmartJobList &&) = default ;
    ListSmartJobsResponseBodySmartJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmartJobsResponseBodySmartJobList() = default ;
    ListSmartJobsResponseBodySmartJobList& operator=(const ListSmartJobsResponseBodySmartJobList &) = default ;
    ListSmartJobsResponseBodySmartJobList& operator=(ListSmartJobsResponseBodySmartJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->editingConfig_ == nullptr && return this->inputConfig_ == nullptr && return this->jobId_ == nullptr && return this->jobState_ == nullptr
        && return this->jobType_ == nullptr && return this->modifiedTime_ == nullptr && return this->outputConfig_ == nullptr && return this->title_ == nullptr && return this->userData_ == nullptr
        && return this->userId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListSmartJobsResponseBodySmartJobList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListSmartJobsResponseBodySmartJobList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // editingConfig Field Functions 
    bool hasEditingConfig() const { return this->editingConfig_ != nullptr;};
    void deleteEditingConfig() { this->editingConfig_ = nullptr;};
    inline string editingConfig() const { DARABONBA_PTR_GET_DEFAULT(editingConfig_, "") };
    inline ListSmartJobsResponseBodySmartJobList& setEditingConfig(string editingConfig) { DARABONBA_PTR_SET_VALUE(editingConfig_, editingConfig) };


    // inputConfig Field Functions 
    bool hasInputConfig() const { return this->inputConfig_ != nullptr;};
    void deleteInputConfig() { this->inputConfig_ = nullptr;};
    inline const Models::ListSmartJobsResponseBodySmartJobListInputConfig & inputConfig() const { DARABONBA_PTR_GET_CONST(inputConfig_, Models::ListSmartJobsResponseBodySmartJobListInputConfig) };
    inline Models::ListSmartJobsResponseBodySmartJobListInputConfig inputConfig() { DARABONBA_PTR_GET(inputConfig_, Models::ListSmartJobsResponseBodySmartJobListInputConfig) };
    inline ListSmartJobsResponseBodySmartJobList& setInputConfig(const Models::ListSmartJobsResponseBodySmartJobListInputConfig & inputConfig) { DARABONBA_PTR_SET_VALUE(inputConfig_, inputConfig) };
    inline ListSmartJobsResponseBodySmartJobList& setInputConfig(Models::ListSmartJobsResponseBodySmartJobListInputConfig && inputConfig) { DARABONBA_PTR_SET_RVALUE(inputConfig_, inputConfig) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListSmartJobsResponseBodySmartJobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobState Field Functions 
    bool hasJobState() const { return this->jobState_ != nullptr;};
    void deleteJobState() { this->jobState_ = nullptr;};
    inline string jobState() const { DARABONBA_PTR_GET_DEFAULT(jobState_, "") };
    inline ListSmartJobsResponseBodySmartJobList& setJobState(string jobState) { DARABONBA_PTR_SET_VALUE(jobState_, jobState) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline ListSmartJobsResponseBodySmartJobList& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline ListSmartJobsResponseBodySmartJobList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // outputConfig Field Functions 
    bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
    void deleteOutputConfig() { this->outputConfig_ = nullptr;};
    inline const Models::ListSmartJobsResponseBodySmartJobListOutputConfig & outputConfig() const { DARABONBA_PTR_GET_CONST(outputConfig_, Models::ListSmartJobsResponseBodySmartJobListOutputConfig) };
    inline Models::ListSmartJobsResponseBodySmartJobListOutputConfig outputConfig() { DARABONBA_PTR_GET(outputConfig_, Models::ListSmartJobsResponseBodySmartJobListOutputConfig) };
    inline ListSmartJobsResponseBodySmartJobList& setOutputConfig(const Models::ListSmartJobsResponseBodySmartJobListOutputConfig & outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };
    inline ListSmartJobsResponseBodySmartJobList& setOutputConfig(Models::ListSmartJobsResponseBodySmartJobListOutputConfig && outputConfig) { DARABONBA_PTR_SET_RVALUE(outputConfig_, outputConfig) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListSmartJobsResponseBodySmartJobList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline ListSmartJobsResponseBodySmartJobList& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline ListSmartJobsResponseBodySmartJobList& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The time when the job was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The job description.
    std::shared_ptr<string> description_ = nullptr;
    // The editing configurations.
    std::shared_ptr<string> editingConfig_ = nullptr;
    // The input configurations.
    std::shared_ptr<Models::ListSmartJobsResponseBodySmartJobListInputConfig> inputConfig_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The job state.
    // 
    // Valid values:
    // 
    // *   Finished: The job is complete.
    // *   Failed: The job failed.
    // *   Executing: The job is in progress.
    // *   Created: The job is created.
    std::shared_ptr<string> jobState_ = nullptr;
    // The job type.
    // 
    // Valid values:
    // 
    // *   ASR: ASR job.
    // *   DynamicChart: dynamic chart job.
    // *   TextToSpeech: intelligent audio production job.
    std::shared_ptr<string> jobType_ = nullptr;
    // The time when the job was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The output configurations.
    std::shared_ptr<Models::ListSmartJobsResponseBodySmartJobListOutputConfig> outputConfig_ = nullptr;
    // The job title.
    std::shared_ptr<string> title_ = nullptr;
    // The user-defined data.
    std::shared_ptr<string> userData_ = nullptr;
    // The user ID.
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
