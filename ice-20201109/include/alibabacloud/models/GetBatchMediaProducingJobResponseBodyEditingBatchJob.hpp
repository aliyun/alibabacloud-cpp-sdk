// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHMEDIAPRODUCINGJOBRESPONSEBODYEDITINGBATCHJOB_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHMEDIAPRODUCINGJOBRESPONSEBODYEDITINGBATCHJOB_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetBatchMediaProducingJobResponseBodyEditingBatchJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchMediaProducingJobResponseBodyEditingBatchJob& obj) { 
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
      DARABONBA_PTR_TO_JSON(SubJobList, subJobList_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchMediaProducingJobResponseBodyEditingBatchJob& obj) { 
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
      DARABONBA_PTR_FROM_JSON(SubJobList, subJobList_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GetBatchMediaProducingJobResponseBodyEditingBatchJob() = default ;
    GetBatchMediaProducingJobResponseBodyEditingBatchJob(const GetBatchMediaProducingJobResponseBodyEditingBatchJob &) = default ;
    GetBatchMediaProducingJobResponseBodyEditingBatchJob(GetBatchMediaProducingJobResponseBodyEditingBatchJob &&) = default ;
    GetBatchMediaProducingJobResponseBodyEditingBatchJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchMediaProducingJobResponseBodyEditingBatchJob() = default ;
    GetBatchMediaProducingJobResponseBodyEditingBatchJob& operator=(const GetBatchMediaProducingJobResponseBodyEditingBatchJob &) = default ;
    GetBatchMediaProducingJobResponseBodyEditingBatchJob& operator=(GetBatchMediaProducingJobResponseBodyEditingBatchJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->completeTime_ != nullptr
        && this->createTime_ != nullptr && this->editingConfig_ != nullptr && this->extend_ != nullptr && this->inputConfig_ != nullptr && this->jobId_ != nullptr
        && this->jobType_ != nullptr && this->modifiedTime_ != nullptr && this->outputConfig_ != nullptr && this->status_ != nullptr && this->subJobList_ != nullptr
        && this->userData_ != nullptr; };
    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJob& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // editingConfig Field Functions 
    bool hasEditingConfig() const { return this->editingConfig_ != nullptr;};
    void deleteEditingConfig() { this->editingConfig_ = nullptr;};
    inline string editingConfig() const { DARABONBA_PTR_GET_DEFAULT(editingConfig_, "") };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJob& setEditingConfig(string editingConfig) { DARABONBA_PTR_SET_VALUE(editingConfig_, editingConfig) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string extend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJob& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // inputConfig Field Functions 
    bool hasInputConfig() const { return this->inputConfig_ != nullptr;};
    void deleteInputConfig() { this->inputConfig_ = nullptr;};
    inline string inputConfig() const { DARABONBA_PTR_GET_DEFAULT(inputConfig_, "") };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJob& setInputConfig(string inputConfig) { DARABONBA_PTR_SET_VALUE(inputConfig_, inputConfig) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJob& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJob& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // outputConfig Field Functions 
    bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
    void deleteOutputConfig() { this->outputConfig_ = nullptr;};
    inline string outputConfig() const { DARABONBA_PTR_GET_DEFAULT(outputConfig_, "") };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJob& setOutputConfig(string outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subJobList Field Functions 
    bool hasSubJobList() const { return this->subJobList_ != nullptr;};
    void deleteSubJobList() { this->subJobList_ = nullptr;};
    inline const vector<Models::GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList> & subJobList() const { DARABONBA_PTR_GET_CONST(subJobList_, vector<Models::GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList>) };
    inline vector<Models::GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList> subJobList() { DARABONBA_PTR_GET(subJobList_, vector<Models::GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList>) };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJob& setSubJobList(const vector<Models::GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList> & subJobList) { DARABONBA_PTR_SET_VALUE(subJobList_, subJobList) };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJob& setSubJobList(vector<Models::GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList> && subJobList) { DARABONBA_PTR_SET_RVALUE(subJobList_, subJobList) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The time when the job was complete.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> completeTime_ = nullptr;
    // The time when the job was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The editing configurations. For more information, see [EditingConfig](~~2692547#1be9bba03b7qu~~).
    std::shared_ptr<string> editingConfig_ = nullptr;
    // The extended information. This parameter contains the following fields:
    // 
    // ErrorCode: the error code of the main job.
    // 
    // ErrorMessage: the error message of the main job.
    std::shared_ptr<string> extend_ = nullptr;
    // The input configurations. For more information, see [InputConfig](~~2692547#2faed1559549n~~).
    std::shared_ptr<string> inputConfig_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> jobType_ = nullptr;
    // The time when the job was last modified.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The output configurations. For more information, see [OutputConfig](~~2692547#447b928fcbuoa~~).
    std::shared_ptr<string> outputConfig_ = nullptr;
    // The job state. Valid values:
    // 
    // Init: The job is initialized.
    // 
    // Processing: The job is in progress.
    // 
    // Finished: The job is complete.
    std::shared_ptr<string> status_ = nullptr;
    // The quick video production subjobs.
    std::shared_ptr<vector<Models::GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList>> subJobList_ = nullptr;
    // The user-defined data, including the business and callback configurations. For more information, see [UserData](https://help.aliyun.com/document_detail/357745.html).
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
