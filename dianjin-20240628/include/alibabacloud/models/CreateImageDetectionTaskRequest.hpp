// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEDETECTIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEDETECTIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateImageDetectionTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageDetectionTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fileInfo, fileInfo_);
      DARABONBA_PTR_TO_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageDetectionTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fileInfo, fileInfo_);
      DARABONBA_PTR_FROM_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    CreateImageDetectionTaskRequest() = default ;
    CreateImageDetectionTaskRequest(const CreateImageDetectionTaskRequest &) = default ;
    CreateImageDetectionTaskRequest(CreateImageDetectionTaskRequest &&) = default ;
    CreateImageDetectionTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageDetectionTaskRequest() = default ;
    CreateImageDetectionTaskRequest& operator=(const CreateImageDetectionTaskRequest &) = default ;
    CreateImageDetectionTaskRequest& operator=(CreateImageDetectionTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FileInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileInfo& obj) { 
        DARABONBA_PTR_TO_JSON(fileId, fileId_);
        DARABONBA_PTR_TO_JSON(fileName, fileName_);
        DARABONBA_PTR_TO_JSON(fileTraceId, fileTraceId_);
        DARABONBA_PTR_TO_JSON(ossKey, ossKey_);
      };
      friend void from_json(const Darabonba::Json& j, FileInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(fileId, fileId_);
        DARABONBA_PTR_FROM_JSON(fileName, fileName_);
        DARABONBA_PTR_FROM_JSON(fileTraceId, fileTraceId_);
        DARABONBA_PTR_FROM_JSON(ossKey, ossKey_);
      };
      FileInfo() = default ;
      FileInfo(const FileInfo &) = default ;
      FileInfo(FileInfo &&) = default ;
      FileInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FileInfo() = default ;
      FileInfo& operator=(const FileInfo &) = default ;
      FileInfo& operator=(FileInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileId_ == nullptr
        && this->fileName_ == nullptr && this->fileTraceId_ == nullptr && this->ossKey_ == nullptr; };
      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline FileInfo& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline FileInfo& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileTraceId Field Functions 
      bool hasFileTraceId() const { return this->fileTraceId_ != nullptr;};
      void deleteFileTraceId() { this->fileTraceId_ = nullptr;};
      inline string getFileTraceId() const { DARABONBA_PTR_GET_DEFAULT(fileTraceId_, "") };
      inline FileInfo& setFileTraceId(string fileTraceId) { DARABONBA_PTR_SET_VALUE(fileTraceId_, fileTraceId) };


      // ossKey Field Functions 
      bool hasOssKey() const { return this->ossKey_ != nullptr;};
      void deleteOssKey() { this->ossKey_ = nullptr;};
      inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
      inline FileInfo& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


    protected:
      shared_ptr<string> fileId_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<string> fileTraceId_ {};
      shared_ptr<string> ossKey_ {};
    };

    virtual bool empty() const override { return this->fileInfo_ == nullptr
        && this->fileUrl_ == nullptr && this->requestId_ == nullptr && this->userId_ == nullptr; };
    // fileInfo Field Functions 
    bool hasFileInfo() const { return this->fileInfo_ != nullptr;};
    void deleteFileInfo() { this->fileInfo_ = nullptr;};
    inline const CreateImageDetectionTaskRequest::FileInfo & getFileInfo() const { DARABONBA_PTR_GET_CONST(fileInfo_, CreateImageDetectionTaskRequest::FileInfo) };
    inline CreateImageDetectionTaskRequest::FileInfo getFileInfo() { DARABONBA_PTR_GET(fileInfo_, CreateImageDetectionTaskRequest::FileInfo) };
    inline CreateImageDetectionTaskRequest& setFileInfo(const CreateImageDetectionTaskRequest::FileInfo & fileInfo) { DARABONBA_PTR_SET_VALUE(fileInfo_, fileInfo) };
    inline CreateImageDetectionTaskRequest& setFileInfo(CreateImageDetectionTaskRequest::FileInfo && fileInfo) { DARABONBA_PTR_SET_RVALUE(fileInfo_, fileInfo) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline CreateImageDetectionTaskRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateImageDetectionTaskRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateImageDetectionTaskRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<CreateImageDetectionTaskRequest::FileInfo> fileInfo_ {};
    shared_ptr<string> fileUrl_ {};
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
