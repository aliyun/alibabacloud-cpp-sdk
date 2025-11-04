// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHMEDIAPRODUCINGJOBRESPONSEBODYEDITINGBATCHJOBSUBJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHMEDIAPRODUCINGJOBRESPONSEBODYEDITINGBATCHJOBSUBJOBLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaURL, mediaURL_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaURL, mediaURL_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList() = default ;
    GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList(const GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList &) = default ;
    GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList(GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList &&) = default ;
    GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList() = default ;
    GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList& operator=(const GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList &) = default ;
    GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList& operator=(GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->jobId_ == nullptr && return this->mediaId_ == nullptr && return this->mediaURL_ == nullptr
        && return this->projectId_ == nullptr && return this->status_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaURL Field Functions 
    bool hasMediaURL() const { return this->mediaURL_ != nullptr;};
    void deleteMediaURL() { this->mediaURL_ = nullptr;};
    inline string mediaURL() const { DARABONBA_PTR_GET_DEFAULT(mediaURL_, "") };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList& setMediaURL(string mediaURL) { DARABONBA_PTR_SET_VALUE(mediaURL_, mediaURL) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetBatchMediaProducingJobResponseBodyEditingBatchJobSubJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<float> duration_ = nullptr;
    // The error code that is returned if the subjob failed. This parameter is not returned if the subjob is successful.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message that is returned if the subjob failed. This parameter is not returned if the subjob is successful.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The subjob ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The ID of the output media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The URL of the output file.
    std::shared_ptr<string> mediaURL_ = nullptr;
    // The ID of the online editing project.
    std::shared_ptr<string> projectId_ = nullptr;
    // The subjob state. Valid values:
    // 
    // Init: The subjob is initialized.
    // 
    // Processing: The subjob is in progress.
    // 
    // Success: The subjob is successful.
    // 
    // Failed: The subjob failed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
