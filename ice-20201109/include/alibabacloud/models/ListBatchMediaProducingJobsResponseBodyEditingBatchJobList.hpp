// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBATCHMEDIAPRODUCINGJOBSRESPONSEBODYEDITINGBATCHJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTBATCHMEDIAPRODUCINGJOBSRESPONSEBODYEDITINGBATCHJOBLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListBatchMediaProducingJobsResponseBodyEditingBatchJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBatchMediaProducingJobsResponseBodyEditingBatchJobList& obj) { 
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EditingConfig, editingConfig_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, ListBatchMediaProducingJobsResponseBodyEditingBatchJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EditingConfig, editingConfig_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    ListBatchMediaProducingJobsResponseBodyEditingBatchJobList() = default ;
    ListBatchMediaProducingJobsResponseBodyEditingBatchJobList(const ListBatchMediaProducingJobsResponseBodyEditingBatchJobList &) = default ;
    ListBatchMediaProducingJobsResponseBodyEditingBatchJobList(ListBatchMediaProducingJobsResponseBodyEditingBatchJobList &&) = default ;
    ListBatchMediaProducingJobsResponseBodyEditingBatchJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBatchMediaProducingJobsResponseBodyEditingBatchJobList() = default ;
    ListBatchMediaProducingJobsResponseBodyEditingBatchJobList& operator=(const ListBatchMediaProducingJobsResponseBodyEditingBatchJobList &) = default ;
    ListBatchMediaProducingJobsResponseBodyEditingBatchJobList& operator=(ListBatchMediaProducingJobsResponseBodyEditingBatchJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completeTime_ == nullptr
        && return this->createTime_ == nullptr && return this->editingConfig_ == nullptr && return this->extend_ == nullptr && return this->inputConfig_ == nullptr && return this->jobId_ == nullptr
        && return this->jobType_ == nullptr && return this->modifiedTime_ == nullptr && return this->outputConfig_ == nullptr && return this->status_ == nullptr && return this->userData_ == nullptr; };
    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline ListBatchMediaProducingJobsResponseBodyEditingBatchJobList& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListBatchMediaProducingJobsResponseBodyEditingBatchJobList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // editingConfig Field Functions 
    bool hasEditingConfig() const { return this->editingConfig_ != nullptr;};
    void deleteEditingConfig() { this->editingConfig_ = nullptr;};
    inline string editingConfig() const { DARABONBA_PTR_GET_DEFAULT(editingConfig_, "") };
    inline ListBatchMediaProducingJobsResponseBodyEditingBatchJobList& setEditingConfig(string editingConfig) { DARABONBA_PTR_SET_VALUE(editingConfig_, editingConfig) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string extend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline ListBatchMediaProducingJobsResponseBodyEditingBatchJobList& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // inputConfig Field Functions 
    bool hasInputConfig() const { return this->inputConfig_ != nullptr;};
    void deleteInputConfig() { this->inputConfig_ = nullptr;};
    inline string inputConfig() const { DARABONBA_PTR_GET_DEFAULT(inputConfig_, "") };
    inline ListBatchMediaProducingJobsResponseBodyEditingBatchJobList& setInputConfig(string inputConfig) { DARABONBA_PTR_SET_VALUE(inputConfig_, inputConfig) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListBatchMediaProducingJobsResponseBodyEditingBatchJobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline ListBatchMediaProducingJobsResponseBodyEditingBatchJobList& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline ListBatchMediaProducingJobsResponseBodyEditingBatchJobList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // outputConfig Field Functions 
    bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
    void deleteOutputConfig() { this->outputConfig_ = nullptr;};
    inline string outputConfig() const { DARABONBA_PTR_GET_DEFAULT(outputConfig_, "") };
    inline ListBatchMediaProducingJobsResponseBodyEditingBatchJobList& setOutputConfig(string outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListBatchMediaProducingJobsResponseBodyEditingBatchJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline ListBatchMediaProducingJobsResponseBodyEditingBatchJobList& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The time when the job was complete. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> completeTime_ = nullptr;
    // The time when the job was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The editing configurations. For more information, see [EditingConfig](~~2692547#1be9bba03b7qu~~).
    std::shared_ptr<string> editingConfig_ = nullptr;
    // The extended information of the job.
    std::shared_ptr<string> extend_ = nullptr;
    // The input configurations.
    std::shared_ptr<string> inputConfig_ = nullptr;
    // The ID of the quick video production job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The job type.
    // 
    // Valid values:
    // 
    // *   Script: script-based editing job that mixes media assets.
    // *   Smart_Mix: intelligent editing job that mixes media assets.
    std::shared_ptr<string> jobType_ = nullptr;
    // The time when the job was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The output configurations. For more information, see [OutputConfig](~~2692547#447b928fcbuoa~~).
    std::shared_ptr<string> outputConfig_ = nullptr;
    // The job state.
    // 
    // Valid values:
    // 
    // *   Finished
    // *   Init
    // *   Failed
    // *   Processing
    std::shared_ptr<string> status_ = nullptr;
    // The user-defined data in the JSON format, which can be up to 512 bytes in length. You can specify a custom callback URL. For more information, see [Configure a callback upon editing completion](https://help.aliyun.com/document_detail/451631.html).
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
