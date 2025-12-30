// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHMEDIAPRODUCINGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHMEDIAPRODUCINGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetBatchMediaProducingJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchMediaProducingJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EditingBatchJob, editingBatchJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchMediaProducingJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EditingBatchJob, editingBatchJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetBatchMediaProducingJobResponseBody() = default ;
    GetBatchMediaProducingJobResponseBody(const GetBatchMediaProducingJobResponseBody &) = default ;
    GetBatchMediaProducingJobResponseBody(GetBatchMediaProducingJobResponseBody &&) = default ;
    GetBatchMediaProducingJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchMediaProducingJobResponseBody() = default ;
    GetBatchMediaProducingJobResponseBody& operator=(const GetBatchMediaProducingJobResponseBody &) = default ;
    GetBatchMediaProducingJobResponseBody& operator=(GetBatchMediaProducingJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EditingBatchJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EditingBatchJob& obj) { 
        DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EditingConfig, editingConfig_);
        DARABONBA_PTR_TO_JSON(Extend, extend_);
        DARABONBA_PTR_TO_JSON(ExtendInput, extendInput_);
        DARABONBA_PTR_TO_JSON(ExtendOutput, extendOutput_);
        DARABONBA_PTR_TO_JSON(InputConfig, inputConfig_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobType, jobType_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(OutputConfig, outputConfig_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubJobList, subJobList_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, EditingBatchJob& obj) { 
        DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EditingConfig, editingConfig_);
        DARABONBA_PTR_FROM_JSON(Extend, extend_);
        DARABONBA_PTR_FROM_JSON(ExtendInput, extendInput_);
        DARABONBA_PTR_FROM_JSON(ExtendOutput, extendOutput_);
        DARABONBA_PTR_FROM_JSON(InputConfig, inputConfig_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobType, jobType_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfig_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubJobList, subJobList_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      EditingBatchJob() = default ;
      EditingBatchJob(const EditingBatchJob &) = default ;
      EditingBatchJob(EditingBatchJob &&) = default ;
      EditingBatchJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EditingBatchJob() = default ;
      EditingBatchJob& operator=(const EditingBatchJob &) = default ;
      EditingBatchJob& operator=(EditingBatchJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubJobList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubJobList& obj) { 
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
          DARABONBA_PTR_TO_JSON(MediaURL, mediaURL_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, SubJobList& obj) { 
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
          DARABONBA_PTR_FROM_JSON(MediaURL, mediaURL_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        SubJobList() = default ;
        SubJobList(const SubJobList &) = default ;
        SubJobList(SubJobList &&) = default ;
        SubJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubJobList() = default ;
        SubJobList& operator=(const SubJobList &) = default ;
        SubJobList& operator=(SubJobList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->duration_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->jobId_ == nullptr && this->mediaId_ == nullptr && this->mediaURL_ == nullptr
        && this->projectId_ == nullptr && this->status_ == nullptr; };
        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline float getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
        inline SubJobList& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline SubJobList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline SubJobList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline SubJobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // mediaId Field Functions 
        bool hasMediaId() const { return this->mediaId_ != nullptr;};
        void deleteMediaId() { this->mediaId_ = nullptr;};
        inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
        inline SubJobList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


        // mediaURL Field Functions 
        bool hasMediaURL() const { return this->mediaURL_ != nullptr;};
        void deleteMediaURL() { this->mediaURL_ = nullptr;};
        inline string getMediaURL() const { DARABONBA_PTR_GET_DEFAULT(mediaURL_, "") };
        inline SubJobList& setMediaURL(string mediaURL) { DARABONBA_PTR_SET_VALUE(mediaURL_, mediaURL) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
        inline SubJobList& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline SubJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<float> duration_ {};
        // The error code that is returned if the subjob failed. This parameter is not returned if the subjob is successful.
        shared_ptr<string> errorCode_ {};
        // The error message that is returned if the subjob failed. This parameter is not returned if the subjob is successful.
        shared_ptr<string> errorMessage_ {};
        // The subjob ID.
        shared_ptr<string> jobId_ {};
        // The ID of the output media asset.
        shared_ptr<string> mediaId_ {};
        // The URL of the output file.
        shared_ptr<string> mediaURL_ {};
        // The ID of the online editing project.
        shared_ptr<string> projectId_ {};
        // The subjob state. Valid values:
        // 
        // Init: The subjob is initialized.
        // 
        // Processing: The subjob is in progress.
        // 
        // Success: The subjob is successful.
        // 
        // Failed: The subjob failed.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->completeTime_ == nullptr
        && this->createTime_ == nullptr && this->editingConfig_ == nullptr && this->extend_ == nullptr && this->extendInput_ == nullptr && this->extendOutput_ == nullptr
        && this->inputConfig_ == nullptr && this->jobId_ == nullptr && this->jobType_ == nullptr && this->modifiedTime_ == nullptr && this->outputConfig_ == nullptr
        && this->status_ == nullptr && this->subJobList_ == nullptr && this->userData_ == nullptr; };
      // completeTime Field Functions 
      bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
      void deleteCompleteTime() { this->completeTime_ = nullptr;};
      inline string getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
      inline EditingBatchJob& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline EditingBatchJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // editingConfig Field Functions 
      bool hasEditingConfig() const { return this->editingConfig_ != nullptr;};
      void deleteEditingConfig() { this->editingConfig_ = nullptr;};
      inline string getEditingConfig() const { DARABONBA_PTR_GET_DEFAULT(editingConfig_, "") };
      inline EditingBatchJob& setEditingConfig(string editingConfig) { DARABONBA_PTR_SET_VALUE(editingConfig_, editingConfig) };


      // extend Field Functions 
      bool hasExtend() const { return this->extend_ != nullptr;};
      void deleteExtend() { this->extend_ = nullptr;};
      inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
      inline EditingBatchJob& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


      // extendInput Field Functions 
      bool hasExtendInput() const { return this->extendInput_ != nullptr;};
      void deleteExtendInput() { this->extendInput_ = nullptr;};
      inline string getExtendInput() const { DARABONBA_PTR_GET_DEFAULT(extendInput_, "") };
      inline EditingBatchJob& setExtendInput(string extendInput) { DARABONBA_PTR_SET_VALUE(extendInput_, extendInput) };


      // extendOutput Field Functions 
      bool hasExtendOutput() const { return this->extendOutput_ != nullptr;};
      void deleteExtendOutput() { this->extendOutput_ = nullptr;};
      inline string getExtendOutput() const { DARABONBA_PTR_GET_DEFAULT(extendOutput_, "") };
      inline EditingBatchJob& setExtendOutput(string extendOutput) { DARABONBA_PTR_SET_VALUE(extendOutput_, extendOutput) };


      // inputConfig Field Functions 
      bool hasInputConfig() const { return this->inputConfig_ != nullptr;};
      void deleteInputConfig() { this->inputConfig_ = nullptr;};
      inline string getInputConfig() const { DARABONBA_PTR_GET_DEFAULT(inputConfig_, "") };
      inline EditingBatchJob& setInputConfig(string inputConfig) { DARABONBA_PTR_SET_VALUE(inputConfig_, inputConfig) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline EditingBatchJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline EditingBatchJob& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline EditingBatchJob& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // outputConfig Field Functions 
      bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
      void deleteOutputConfig() { this->outputConfig_ = nullptr;};
      inline string getOutputConfig() const { DARABONBA_PTR_GET_DEFAULT(outputConfig_, "") };
      inline EditingBatchJob& setOutputConfig(string outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline EditingBatchJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subJobList Field Functions 
      bool hasSubJobList() const { return this->subJobList_ != nullptr;};
      void deleteSubJobList() { this->subJobList_ = nullptr;};
      inline const vector<EditingBatchJob::SubJobList> & getSubJobList() const { DARABONBA_PTR_GET_CONST(subJobList_, vector<EditingBatchJob::SubJobList>) };
      inline vector<EditingBatchJob::SubJobList> getSubJobList() { DARABONBA_PTR_GET(subJobList_, vector<EditingBatchJob::SubJobList>) };
      inline EditingBatchJob& setSubJobList(const vector<EditingBatchJob::SubJobList> & subJobList) { DARABONBA_PTR_SET_VALUE(subJobList_, subJobList) };
      inline EditingBatchJob& setSubJobList(vector<EditingBatchJob::SubJobList> && subJobList) { DARABONBA_PTR_SET_RVALUE(subJobList_, subJobList) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline EditingBatchJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      // The time when the job was complete.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> completeTime_ {};
      // The time when the job was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The editing configurations. For more information, see [EditingConfig](~~2692547#1be9bba03b7qu~~).
      shared_ptr<string> editingConfig_ {};
      // The extended information. This parameter contains the following fields:
      // 
      // ErrorCode: the error code of the main job.
      // 
      // ErrorMessage: the error message of the main job.
      shared_ptr<string> extend_ {};
      shared_ptr<string> extendInput_ {};
      shared_ptr<string> extendOutput_ {};
      // The input configurations. For more information, see [InputConfig](~~2692547#2faed1559549n~~).
      shared_ptr<string> inputConfig_ {};
      // The job ID.
      shared_ptr<string> jobId_ {};
      shared_ptr<string> jobType_ {};
      // The time when the job was last modified.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> modifiedTime_ {};
      // The output configurations. For more information, see [OutputConfig](~~2692547#447b928fcbuoa~~).
      shared_ptr<string> outputConfig_ {};
      // The job state. Valid values:
      // 
      // Init: The job is initialized.
      // 
      // Processing: The job is in progress.
      // 
      // Finished: The job is complete.
      shared_ptr<string> status_ {};
      // The quick video production subjobs.
      shared_ptr<vector<EditingBatchJob::SubJobList>> subJobList_ {};
      // The user-defined data, including the business and callback configurations. For more information, see [UserData](https://help.aliyun.com/document_detail/357745.html).
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->editingBatchJob_ == nullptr
        && this->requestId_ == nullptr; };
    // editingBatchJob Field Functions 
    bool hasEditingBatchJob() const { return this->editingBatchJob_ != nullptr;};
    void deleteEditingBatchJob() { this->editingBatchJob_ = nullptr;};
    inline const GetBatchMediaProducingJobResponseBody::EditingBatchJob & getEditingBatchJob() const { DARABONBA_PTR_GET_CONST(editingBatchJob_, GetBatchMediaProducingJobResponseBody::EditingBatchJob) };
    inline GetBatchMediaProducingJobResponseBody::EditingBatchJob getEditingBatchJob() { DARABONBA_PTR_GET(editingBatchJob_, GetBatchMediaProducingJobResponseBody::EditingBatchJob) };
    inline GetBatchMediaProducingJobResponseBody& setEditingBatchJob(const GetBatchMediaProducingJobResponseBody::EditingBatchJob & editingBatchJob) { DARABONBA_PTR_SET_VALUE(editingBatchJob_, editingBatchJob) };
    inline GetBatchMediaProducingJobResponseBody& setEditingBatchJob(GetBatchMediaProducingJobResponseBody::EditingBatchJob && editingBatchJob) { DARABONBA_PTR_SET_RVALUE(editingBatchJob_, editingBatchJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBatchMediaProducingJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the quick video production job.
    shared_ptr<GetBatchMediaProducingJobResponseBody::EditingBatchJob> editingBatchJob_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
