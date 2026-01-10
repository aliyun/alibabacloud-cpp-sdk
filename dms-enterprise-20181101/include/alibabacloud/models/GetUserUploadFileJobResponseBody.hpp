// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERUPLOADFILEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERUPLOADFILEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetUserUploadFileJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserUploadFileJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(UploadFileJobDetail, uploadFileJobDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserUploadFileJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(UploadFileJobDetail, uploadFileJobDetail_);
    };
    GetUserUploadFileJobResponseBody() = default ;
    GetUserUploadFileJobResponseBody(const GetUserUploadFileJobResponseBody &) = default ;
    GetUserUploadFileJobResponseBody(GetUserUploadFileJobResponseBody &&) = default ;
    GetUserUploadFileJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserUploadFileJobResponseBody() = default ;
    GetUserUploadFileJobResponseBody& operator=(const GetUserUploadFileJobResponseBody &) = default ;
    GetUserUploadFileJobResponseBody& operator=(GetUserUploadFileJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UploadFileJobDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UploadFileJobDetail& obj) { 
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
      friend void from_json(const Darabonba::Json& j, UploadFileJobDetail& obj) { 
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
      UploadFileJobDetail() = default ;
      UploadFileJobDetail(const UploadFileJobDetail &) = default ;
      UploadFileJobDetail(UploadFileJobDetail &&) = default ;
      UploadFileJobDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UploadFileJobDetail() = default ;
      UploadFileJobDetail& operator=(const UploadFileJobDetail &) = default ;
      UploadFileJobDetail& operator=(UploadFileJobDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UploadOSSParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UploadOSSParam& obj) { 
          DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
        };
        friend void from_json(const Darabonba::Json& j, UploadOSSParam& obj) { 
          DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
        };
        UploadOSSParam() = default ;
        UploadOSSParam(const UploadOSSParam &) = default ;
        UploadOSSParam(UploadOSSParam &&) = default ;
        UploadOSSParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UploadOSSParam() = default ;
        UploadOSSParam& operator=(const UploadOSSParam &) = default ;
        UploadOSSParam& operator=(UploadOSSParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->endpoint_ == nullptr && this->objectName_ == nullptr; };
        // bucketName Field Functions 
        bool hasBucketName() const { return this->bucketName_ != nullptr;};
        void deleteBucketName() { this->bucketName_ = nullptr;};
        inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
        inline UploadOSSParam& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline UploadOSSParam& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // objectName Field Functions 
        bool hasObjectName() const { return this->objectName_ != nullptr;};
        void deleteObjectName() { this->objectName_ = nullptr;};
        inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
        inline UploadOSSParam& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


      protected:
        // The name of the OSS bucket.
        shared_ptr<string> bucketName_ {};
        // The endpoint of the OSS bucket.
        shared_ptr<string> endpoint_ {};
        // The name of the OSS object.
        shared_ptr<string> objectName_ {};
      };

      virtual bool empty() const override { return this->attachmentKey_ == nullptr
        && this->fileName_ == nullptr && this->fileSize_ == nullptr && this->fileSource_ == nullptr && this->jobKey_ == nullptr && this->jobStatus_ == nullptr
        && this->jobStatusDesc_ == nullptr && this->uploadOSSParam_ == nullptr && this->uploadType_ == nullptr && this->uploadURL_ == nullptr && this->uploadedSize_ == nullptr; };
      // attachmentKey Field Functions 
      bool hasAttachmentKey() const { return this->attachmentKey_ != nullptr;};
      void deleteAttachmentKey() { this->attachmentKey_ = nullptr;};
      inline string getAttachmentKey() const { DARABONBA_PTR_GET_DEFAULT(attachmentKey_, "") };
      inline UploadFileJobDetail& setAttachmentKey(string attachmentKey) { DARABONBA_PTR_SET_VALUE(attachmentKey_, attachmentKey) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline UploadFileJobDetail& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
      inline UploadFileJobDetail& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // fileSource Field Functions 
      bool hasFileSource() const { return this->fileSource_ != nullptr;};
      void deleteFileSource() { this->fileSource_ = nullptr;};
      inline string getFileSource() const { DARABONBA_PTR_GET_DEFAULT(fileSource_, "") };
      inline UploadFileJobDetail& setFileSource(string fileSource) { DARABONBA_PTR_SET_VALUE(fileSource_, fileSource) };


      // jobKey Field Functions 
      bool hasJobKey() const { return this->jobKey_ != nullptr;};
      void deleteJobKey() { this->jobKey_ = nullptr;};
      inline string getJobKey() const { DARABONBA_PTR_GET_DEFAULT(jobKey_, "") };
      inline UploadFileJobDetail& setJobKey(string jobKey) { DARABONBA_PTR_SET_VALUE(jobKey_, jobKey) };


      // jobStatus Field Functions 
      bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
      void deleteJobStatus() { this->jobStatus_ = nullptr;};
      inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
      inline UploadFileJobDetail& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


      // jobStatusDesc Field Functions 
      bool hasJobStatusDesc() const { return this->jobStatusDesc_ != nullptr;};
      void deleteJobStatusDesc() { this->jobStatusDesc_ = nullptr;};
      inline string getJobStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(jobStatusDesc_, "") };
      inline UploadFileJobDetail& setJobStatusDesc(string jobStatusDesc) { DARABONBA_PTR_SET_VALUE(jobStatusDesc_, jobStatusDesc) };


      // uploadOSSParam Field Functions 
      bool hasUploadOSSParam() const { return this->uploadOSSParam_ != nullptr;};
      void deleteUploadOSSParam() { this->uploadOSSParam_ = nullptr;};
      inline const UploadFileJobDetail::UploadOSSParam & getUploadOSSParam() const { DARABONBA_PTR_GET_CONST(uploadOSSParam_, UploadFileJobDetail::UploadOSSParam) };
      inline UploadFileJobDetail::UploadOSSParam getUploadOSSParam() { DARABONBA_PTR_GET(uploadOSSParam_, UploadFileJobDetail::UploadOSSParam) };
      inline UploadFileJobDetail& setUploadOSSParam(const UploadFileJobDetail::UploadOSSParam & uploadOSSParam) { DARABONBA_PTR_SET_VALUE(uploadOSSParam_, uploadOSSParam) };
      inline UploadFileJobDetail& setUploadOSSParam(UploadFileJobDetail::UploadOSSParam && uploadOSSParam) { DARABONBA_PTR_SET_RVALUE(uploadOSSParam_, uploadOSSParam) };


      // uploadType Field Functions 
      bool hasUploadType() const { return this->uploadType_ != nullptr;};
      void deleteUploadType() { this->uploadType_ = nullptr;};
      inline string getUploadType() const { DARABONBA_PTR_GET_DEFAULT(uploadType_, "") };
      inline UploadFileJobDetail& setUploadType(string uploadType) { DARABONBA_PTR_SET_VALUE(uploadType_, uploadType) };


      // uploadURL Field Functions 
      bool hasUploadURL() const { return this->uploadURL_ != nullptr;};
      void deleteUploadURL() { this->uploadURL_ = nullptr;};
      inline string getUploadURL() const { DARABONBA_PTR_GET_DEFAULT(uploadURL_, "") };
      inline UploadFileJobDetail& setUploadURL(string uploadURL) { DARABONBA_PTR_SET_VALUE(uploadURL_, uploadURL) };


      // uploadedSize Field Functions 
      bool hasUploadedSize() const { return this->uploadedSize_ != nullptr;};
      void deleteUploadedSize() { this->uploadedSize_ = nullptr;};
      inline int64_t getUploadedSize() const { DARABONBA_PTR_GET_DEFAULT(uploadedSize_, 0L) };
      inline UploadFileJobDetail& setUploadedSize(int64_t uploadedSize) { DARABONBA_PTR_SET_VALUE(uploadedSize_, uploadedSize) };


    protected:
      // The key of the file that is returned after the file is uploaded. You can use this key when you upload the file as an attachment in a ticket.
      shared_ptr<string> attachmentKey_ {};
      // The name of the file.
      shared_ptr<string> fileName_ {};
      // The size of the file. Unit: byte.
      shared_ptr<int64_t> fileSize_ {};
      // The purpose of the uploaded file. Valid values:
      // 
      // *   **datacorrect**: The file is uploaded to change data.
      // *   **order_info_attachment**: The file is uploaded as an attachment in a ticket.
      // *   **big-file**: The file is uploaded to import multiple data records at a time.
      // *   **sqlreview**: The file is uploaded for SQL review.
      shared_ptr<string> fileSource_ {};
      // The key of the file upload task.
      shared_ptr<string> jobKey_ {};
      // The status of the file upload task. Valid values:
      // 
      // *   **INIT**: The file upload task was initialized.
      // *   **PENDING**: The file upload task waited to be run.
      // *   **BE_SCHEDULED**: The file upload task waited to be scheduled.
      // *   **FAIL**: The file upload task failed.
      // *   **SUCCESS**: The file upload task was successful.
      // *   **RUNNING**: The file upload task was being run.
      shared_ptr<string> jobStatus_ {};
      // The information about the status of the file upload task.
      shared_ptr<string> jobStatusDesc_ {};
      // The information about the Object Storage Service (OSS) bucket from which the file is uploaded.
      // 
      // > This parameter is returned if the value of **UploadType** is **OSS**.
      shared_ptr<UploadFileJobDetail::UploadOSSParam> uploadOSSParam_ {};
      // The method used to upload the file. Valid values:
      // 
      // *   **URL**
      // *   **OSS**
      shared_ptr<string> uploadType_ {};
      // The URL of the file.
      // 
      // > This parameter is returned if the value of **UploadType** is **URL**.
      shared_ptr<string> uploadURL_ {};
      // The size of the uploaded file. Unit: byte.
      shared_ptr<int64_t> uploadedSize_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->uploadFileJobDetail_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetUserUploadFileJobResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetUserUploadFileJobResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserUploadFileJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUserUploadFileJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // uploadFileJobDetail Field Functions 
    bool hasUploadFileJobDetail() const { return this->uploadFileJobDetail_ != nullptr;};
    void deleteUploadFileJobDetail() { this->uploadFileJobDetail_ = nullptr;};
    inline const GetUserUploadFileJobResponseBody::UploadFileJobDetail & getUploadFileJobDetail() const { DARABONBA_PTR_GET_CONST(uploadFileJobDetail_, GetUserUploadFileJobResponseBody::UploadFileJobDetail) };
    inline GetUserUploadFileJobResponseBody::UploadFileJobDetail getUploadFileJobDetail() { DARABONBA_PTR_GET(uploadFileJobDetail_, GetUserUploadFileJobResponseBody::UploadFileJobDetail) };
    inline GetUserUploadFileJobResponseBody& setUploadFileJobDetail(const GetUserUploadFileJobResponseBody::UploadFileJobDetail & uploadFileJobDetail) { DARABONBA_PTR_SET_VALUE(uploadFileJobDetail_, uploadFileJobDetail) };
    inline GetUserUploadFileJobResponseBody& setUploadFileJobDetail(GetUserUploadFileJobResponseBody::UploadFileJobDetail && uploadFileJobDetail) { DARABONBA_PTR_SET_RVALUE(uploadFileJobDetail_, uploadFileJobDetail) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The details of the file upload task.
    shared_ptr<GetUserUploadFileJobResponseBody::UploadFileJobDetail> uploadFileJobDetail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
