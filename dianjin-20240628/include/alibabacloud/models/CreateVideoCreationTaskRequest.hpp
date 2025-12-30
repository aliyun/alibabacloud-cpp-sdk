// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIDEOCREATIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIDEOCREATIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateVideoCreationTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVideoCreationTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(creationInstruction, creationInstruction_);
      DARABONBA_PTR_TO_JSON(fileInfo, fileInfo_);
      DARABONBA_PTR_TO_JSON(imageDetectionTaskId, imageDetectionTaskId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVideoCreationTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(creationInstruction, creationInstruction_);
      DARABONBA_PTR_FROM_JSON(fileInfo, fileInfo_);
      DARABONBA_PTR_FROM_JSON(imageDetectionTaskId, imageDetectionTaskId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    CreateVideoCreationTaskRequest() = default ;
    CreateVideoCreationTaskRequest(const CreateVideoCreationTaskRequest &) = default ;
    CreateVideoCreationTaskRequest(CreateVideoCreationTaskRequest &&) = default ;
    CreateVideoCreationTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVideoCreationTaskRequest() = default ;
    CreateVideoCreationTaskRequest& operator=(const CreateVideoCreationTaskRequest &) = default ;
    CreateVideoCreationTaskRequest& operator=(CreateVideoCreationTaskRequest &&) = default ;
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

    class CreationInstruction : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreationInstruction& obj) { 
        DARABONBA_PTR_TO_JSON(instruction, instruction_);
        DARABONBA_PTR_TO_JSON(templateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, CreationInstruction& obj) { 
        DARABONBA_PTR_FROM_JSON(instruction, instruction_);
        DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      };
      CreationInstruction() = default ;
      CreationInstruction(const CreationInstruction &) = default ;
      CreationInstruction(CreationInstruction &&) = default ;
      CreationInstruction(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreationInstruction() = default ;
      CreationInstruction& operator=(const CreationInstruction &) = default ;
      CreationInstruction& operator=(CreationInstruction &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instruction_ == nullptr
        && this->templateId_ == nullptr; };
      // instruction Field Functions 
      bool hasInstruction() const { return this->instruction_ != nullptr;};
      void deleteInstruction() { this->instruction_ = nullptr;};
      inline string getInstruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
      inline CreationInstruction& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline CreationInstruction& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      shared_ptr<string> instruction_ {};
      shared_ptr<string> templateId_ {};
    };

    virtual bool empty() const override { return this->creationInstruction_ == nullptr
        && this->fileInfo_ == nullptr && this->imageDetectionTaskId_ == nullptr && this->requestId_ == nullptr && this->userId_ == nullptr; };
    // creationInstruction Field Functions 
    bool hasCreationInstruction() const { return this->creationInstruction_ != nullptr;};
    void deleteCreationInstruction() { this->creationInstruction_ = nullptr;};
    inline const CreateVideoCreationTaskRequest::CreationInstruction & getCreationInstruction() const { DARABONBA_PTR_GET_CONST(creationInstruction_, CreateVideoCreationTaskRequest::CreationInstruction) };
    inline CreateVideoCreationTaskRequest::CreationInstruction getCreationInstruction() { DARABONBA_PTR_GET(creationInstruction_, CreateVideoCreationTaskRequest::CreationInstruction) };
    inline CreateVideoCreationTaskRequest& setCreationInstruction(const CreateVideoCreationTaskRequest::CreationInstruction & creationInstruction) { DARABONBA_PTR_SET_VALUE(creationInstruction_, creationInstruction) };
    inline CreateVideoCreationTaskRequest& setCreationInstruction(CreateVideoCreationTaskRequest::CreationInstruction && creationInstruction) { DARABONBA_PTR_SET_RVALUE(creationInstruction_, creationInstruction) };


    // fileInfo Field Functions 
    bool hasFileInfo() const { return this->fileInfo_ != nullptr;};
    void deleteFileInfo() { this->fileInfo_ = nullptr;};
    inline const CreateVideoCreationTaskRequest::FileInfo & getFileInfo() const { DARABONBA_PTR_GET_CONST(fileInfo_, CreateVideoCreationTaskRequest::FileInfo) };
    inline CreateVideoCreationTaskRequest::FileInfo getFileInfo() { DARABONBA_PTR_GET(fileInfo_, CreateVideoCreationTaskRequest::FileInfo) };
    inline CreateVideoCreationTaskRequest& setFileInfo(const CreateVideoCreationTaskRequest::FileInfo & fileInfo) { DARABONBA_PTR_SET_VALUE(fileInfo_, fileInfo) };
    inline CreateVideoCreationTaskRequest& setFileInfo(CreateVideoCreationTaskRequest::FileInfo && fileInfo) { DARABONBA_PTR_SET_RVALUE(fileInfo_, fileInfo) };


    // imageDetectionTaskId Field Functions 
    bool hasImageDetectionTaskId() const { return this->imageDetectionTaskId_ != nullptr;};
    void deleteImageDetectionTaskId() { this->imageDetectionTaskId_ = nullptr;};
    inline string getImageDetectionTaskId() const { DARABONBA_PTR_GET_DEFAULT(imageDetectionTaskId_, "") };
    inline CreateVideoCreationTaskRequest& setImageDetectionTaskId(string imageDetectionTaskId) { DARABONBA_PTR_SET_VALUE(imageDetectionTaskId_, imageDetectionTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVideoCreationTaskRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateVideoCreationTaskRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<CreateVideoCreationTaskRequest::CreationInstruction> creationInstruction_ {};
    shared_ptr<CreateVideoCreationTaskRequest::FileInfo> fileInfo_ {};
    // This parameter is required.
    shared_ptr<string> imageDetectionTaskId_ {};
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
