// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERUPLOADFILEJOBRESPONSEBODYUPLOADFILEJOBDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETUSERUPLOADFILEJOBRESPONSEBODYUPLOADFILEJOBDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetUserUploadFileJobResponseBodyUploadFileJobDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserUploadFileJobResponseBodyUploadFileJobDetail& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(FileSource, fileSource_);
      DARABONBA_PTR_TO_JSON(JobKey, jobKey_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(JobStatusDesc, jobStatusDesc_);
      DARABONBA_PTR_TO_JSON(UploadOSSParam, uploadOSSParam_);
      DARABONBA_PTR_TO_JSON(UploadType, uploadType_);
      DARABONBA_PTR_TO_JSON(UploadURL, uploadURL_);
      DARABONBA_PTR_TO_JSON(UploadedSize, uploadedSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserUploadFileJobResponseBodyUploadFileJobDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(FileSource, fileSource_);
      DARABONBA_PTR_FROM_JSON(JobKey, jobKey_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(JobStatusDesc, jobStatusDesc_);
      DARABONBA_PTR_FROM_JSON(UploadOSSParam, uploadOSSParam_);
      DARABONBA_PTR_FROM_JSON(UploadType, uploadType_);
      DARABONBA_PTR_FROM_JSON(UploadURL, uploadURL_);
      DARABONBA_PTR_FROM_JSON(UploadedSize, uploadedSize_);
    };
    GetUserUploadFileJobResponseBodyUploadFileJobDetail() = default ;
    GetUserUploadFileJobResponseBodyUploadFileJobDetail(const GetUserUploadFileJobResponseBodyUploadFileJobDetail &) = default ;
    GetUserUploadFileJobResponseBodyUploadFileJobDetail(GetUserUploadFileJobResponseBodyUploadFileJobDetail &&) = default ;
    GetUserUploadFileJobResponseBodyUploadFileJobDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserUploadFileJobResponseBodyUploadFileJobDetail() = default ;
    GetUserUploadFileJobResponseBodyUploadFileJobDetail& operator=(const GetUserUploadFileJobResponseBodyUploadFileJobDetail &) = default ;
    GetUserUploadFileJobResponseBodyUploadFileJobDetail& operator=(GetUserUploadFileJobResponseBodyUploadFileJobDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachmentKey_ == nullptr
        && return this->fileName_ == nullptr && return this->fileSize_ == nullptr && return this->fileSource_ == nullptr && return this->jobKey_ == nullptr && return this->jobStatus_ == nullptr
        && return this->jobStatusDesc_ == nullptr && return this->uploadOSSParam_ == nullptr && return this->uploadType_ == nullptr && return this->uploadURL_ == nullptr && return this->uploadedSize_ == nullptr; };
    // attachmentKey Field Functions 
    bool hasAttachmentKey() const { return this->attachmentKey_ != nullptr;};
    void deleteAttachmentKey() { this->attachmentKey_ = nullptr;};
    inline string attachmentKey() const { DARABONBA_PTR_GET_DEFAULT(attachmentKey_, "") };
    inline GetUserUploadFileJobResponseBodyUploadFileJobDetail& setAttachmentKey(string attachmentKey) { DARABONBA_PTR_SET_VALUE(attachmentKey_, attachmentKey) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetUserUploadFileJobResponseBodyUploadFileJobDetail& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline GetUserUploadFileJobResponseBodyUploadFileJobDetail& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // fileSource Field Functions 
    bool hasFileSource() const { return this->fileSource_ != nullptr;};
    void deleteFileSource() { this->fileSource_ = nullptr;};
    inline string fileSource() const { DARABONBA_PTR_GET_DEFAULT(fileSource_, "") };
    inline GetUserUploadFileJobResponseBodyUploadFileJobDetail& setFileSource(string fileSource) { DARABONBA_PTR_SET_VALUE(fileSource_, fileSource) };


    // jobKey Field Functions 
    bool hasJobKey() const { return this->jobKey_ != nullptr;};
    void deleteJobKey() { this->jobKey_ = nullptr;};
    inline string jobKey() const { DARABONBA_PTR_GET_DEFAULT(jobKey_, "") };
    inline GetUserUploadFileJobResponseBodyUploadFileJobDetail& setJobKey(string jobKey) { DARABONBA_PTR_SET_VALUE(jobKey_, jobKey) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string jobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline GetUserUploadFileJobResponseBodyUploadFileJobDetail& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // jobStatusDesc Field Functions 
    bool hasJobStatusDesc() const { return this->jobStatusDesc_ != nullptr;};
    void deleteJobStatusDesc() { this->jobStatusDesc_ = nullptr;};
    inline string jobStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(jobStatusDesc_, "") };
    inline GetUserUploadFileJobResponseBodyUploadFileJobDetail& setJobStatusDesc(string jobStatusDesc) { DARABONBA_PTR_SET_VALUE(jobStatusDesc_, jobStatusDesc) };


    // uploadOSSParam Field Functions 
    bool hasUploadOSSParam() const { return this->uploadOSSParam_ != nullptr;};
    void deleteUploadOSSParam() { this->uploadOSSParam_ = nullptr;};
    inline const Models::GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam & uploadOSSParam() const { DARABONBA_PTR_GET_CONST(uploadOSSParam_, Models::GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam) };
    inline Models::GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam uploadOSSParam() { DARABONBA_PTR_GET(uploadOSSParam_, Models::GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam) };
    inline GetUserUploadFileJobResponseBodyUploadFileJobDetail& setUploadOSSParam(const Models::GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam & uploadOSSParam) { DARABONBA_PTR_SET_VALUE(uploadOSSParam_, uploadOSSParam) };
    inline GetUserUploadFileJobResponseBodyUploadFileJobDetail& setUploadOSSParam(Models::GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam && uploadOSSParam) { DARABONBA_PTR_SET_RVALUE(uploadOSSParam_, uploadOSSParam) };


    // uploadType Field Functions 
    bool hasUploadType() const { return this->uploadType_ != nullptr;};
    void deleteUploadType() { this->uploadType_ = nullptr;};
    inline string uploadType() const { DARABONBA_PTR_GET_DEFAULT(uploadType_, "") };
    inline GetUserUploadFileJobResponseBodyUploadFileJobDetail& setUploadType(string uploadType) { DARABONBA_PTR_SET_VALUE(uploadType_, uploadType) };


    // uploadURL Field Functions 
    bool hasUploadURL() const { return this->uploadURL_ != nullptr;};
    void deleteUploadURL() { this->uploadURL_ = nullptr;};
    inline string uploadURL() const { DARABONBA_PTR_GET_DEFAULT(uploadURL_, "") };
    inline GetUserUploadFileJobResponseBodyUploadFileJobDetail& setUploadURL(string uploadURL) { DARABONBA_PTR_SET_VALUE(uploadURL_, uploadURL) };


    // uploadedSize Field Functions 
    bool hasUploadedSize() const { return this->uploadedSize_ != nullptr;};
    void deleteUploadedSize() { this->uploadedSize_ = nullptr;};
    inline int64_t uploadedSize() const { DARABONBA_PTR_GET_DEFAULT(uploadedSize_, 0L) };
    inline GetUserUploadFileJobResponseBodyUploadFileJobDetail& setUploadedSize(int64_t uploadedSize) { DARABONBA_PTR_SET_VALUE(uploadedSize_, uploadedSize) };


  protected:
    // The key of the file that is returned after the file is uploaded. You can use this key when you upload the file as an attachment in a ticket.
    std::shared_ptr<string> attachmentKey_ = nullptr;
    // The name of the file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The size of the file. Unit: byte.
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    // The purpose of the uploaded file. Valid values:
    // 
    // *   **datacorrect**: The file is uploaded to change data.
    // *   **order_info_attachment**: The file is uploaded as an attachment in a ticket.
    // *   **big-file**: The file is uploaded to import multiple data records at a time.
    // *   **sqlreview**: The file is uploaded for SQL review.
    std::shared_ptr<string> fileSource_ = nullptr;
    // The key of the file upload task.
    std::shared_ptr<string> jobKey_ = nullptr;
    // The status of the file upload task. Valid values:
    // 
    // *   **INIT**: The file upload task was initialized.
    // *   **PENDING**: The file upload task waited to be run.
    // *   **BE_SCHEDULED**: The file upload task waited to be scheduled.
    // *   **FAIL**: The file upload task failed.
    // *   **SUCCESS**: The file upload task was successful.
    // *   **RUNNING**: The file upload task was being run.
    std::shared_ptr<string> jobStatus_ = nullptr;
    // The information about the status of the file upload task.
    std::shared_ptr<string> jobStatusDesc_ = nullptr;
    // The information about the Object Storage Service (OSS) bucket from which the file is uploaded.
    // 
    // > This parameter is returned if the value of **UploadType** is **OSS**.
    std::shared_ptr<Models::GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam> uploadOSSParam_ = nullptr;
    // The method used to upload the file. Valid values:
    // 
    // *   **URL**
    // *   **OSS**
    std::shared_ptr<string> uploadType_ = nullptr;
    // The URL of the file.
    // 
    // > This parameter is returned if the value of **UploadType** is **URL**.
    std::shared_ptr<string> uploadURL_ = nullptr;
    // The size of the uploaded file. Unit: byte.
    std::shared_ptr<int64_t> uploadedSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
