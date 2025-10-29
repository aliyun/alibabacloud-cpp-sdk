// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEFILEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEFILEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateResourceFileAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceFileAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(FileDescription, fileDescription_);
      DARABONBA_PTR_TO_JSON(FileFolderPath, fileFolderPath_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(OriginResourceName, originResourceName_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegisterToCalcEngine, registerToCalcEngine_);
      DARABONBA_TO_JSON(ResourceFile, resourceFileObject_);
      DARABONBA_PTR_TO_JSON(StorageURL, storageURL_);
      DARABONBA_PTR_TO_JSON(UploadMode, uploadMode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceFileAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(FileDescription, fileDescription_);
      DARABONBA_PTR_FROM_JSON(FileFolderPath, fileFolderPath_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(OriginResourceName, originResourceName_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegisterToCalcEngine, registerToCalcEngine_);
      DARABONBA_FROM_JSON(ResourceFile, resourceFileObject_);
      DARABONBA_PTR_FROM_JSON(StorageURL, storageURL_);
      DARABONBA_PTR_FROM_JSON(UploadMode, uploadMode_);
    };
    CreateResourceFileAdvanceRequest() = default ;
    CreateResourceFileAdvanceRequest(const CreateResourceFileAdvanceRequest &) = default ;
    CreateResourceFileAdvanceRequest(CreateResourceFileAdvanceRequest &&) = default ;
    CreateResourceFileAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceFileAdvanceRequest() = default ;
    CreateResourceFileAdvanceRequest& operator=(const CreateResourceFileAdvanceRequest &) = default ;
    CreateResourceFileAdvanceRequest& operator=(CreateResourceFileAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->fileDescription_ == nullptr && return this->fileFolderPath_ == nullptr && return this->fileName_ == nullptr && return this->fileType_ == nullptr && return this->originResourceName_ == nullptr
        && return this->owner_ == nullptr && return this->projectId_ == nullptr && return this->registerToCalcEngine_ == nullptr && return this->resourceFileObject_ == nullptr && return this->storageURL_ == nullptr
        && return this->uploadMode_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateResourceFileAdvanceRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // fileDescription Field Functions 
    bool hasFileDescription() const { return this->fileDescription_ != nullptr;};
    void deleteFileDescription() { this->fileDescription_ = nullptr;};
    inline string fileDescription() const { DARABONBA_PTR_GET_DEFAULT(fileDescription_, "") };
    inline CreateResourceFileAdvanceRequest& setFileDescription(string fileDescription) { DARABONBA_PTR_SET_VALUE(fileDescription_, fileDescription) };


    // fileFolderPath Field Functions 
    bool hasFileFolderPath() const { return this->fileFolderPath_ != nullptr;};
    void deleteFileFolderPath() { this->fileFolderPath_ = nullptr;};
    inline string fileFolderPath() const { DARABONBA_PTR_GET_DEFAULT(fileFolderPath_, "") };
    inline CreateResourceFileAdvanceRequest& setFileFolderPath(string fileFolderPath) { DARABONBA_PTR_SET_VALUE(fileFolderPath_, fileFolderPath) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateResourceFileAdvanceRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline int32_t fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
    inline CreateResourceFileAdvanceRequest& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // originResourceName Field Functions 
    bool hasOriginResourceName() const { return this->originResourceName_ != nullptr;};
    void deleteOriginResourceName() { this->originResourceName_ = nullptr;};
    inline string originResourceName() const { DARABONBA_PTR_GET_DEFAULT(originResourceName_, "") };
    inline CreateResourceFileAdvanceRequest& setOriginResourceName(string originResourceName) { DARABONBA_PTR_SET_VALUE(originResourceName_, originResourceName) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline CreateResourceFileAdvanceRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateResourceFileAdvanceRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // registerToCalcEngine Field Functions 
    bool hasRegisterToCalcEngine() const { return this->registerToCalcEngine_ != nullptr;};
    void deleteRegisterToCalcEngine() { this->registerToCalcEngine_ = nullptr;};
    inline bool registerToCalcEngine() const { DARABONBA_PTR_GET_DEFAULT(registerToCalcEngine_, false) };
    inline CreateResourceFileAdvanceRequest& setRegisterToCalcEngine(bool registerToCalcEngine) { DARABONBA_PTR_SET_VALUE(registerToCalcEngine_, registerToCalcEngine) };


    // resourceFileObject Field Functions 
    bool hasResourceFileObject() const { return this->resourceFileObject_ != nullptr;};
    void deleteResourceFileObject() { this->resourceFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> resourceFileObject() const { DARABONBA_GET(resourceFileObject_) };
    inline CreateResourceFileAdvanceRequest& setResourceFileObject(shared_ptr<Darabonba::IStream> resourceFileObject) { DARABONBA_SET_VALUE(resourceFileObject_, resourceFileObject) };


    // storageURL Field Functions 
    bool hasStorageURL() const { return this->storageURL_ != nullptr;};
    void deleteStorageURL() { this->storageURL_ = nullptr;};
    inline string storageURL() const { DARABONBA_PTR_GET_DEFAULT(storageURL_, "") };
    inline CreateResourceFileAdvanceRequest& setStorageURL(string storageURL) { DARABONBA_PTR_SET_VALUE(storageURL_, storageURL) };


    // uploadMode Field Functions 
    bool hasUploadMode() const { return this->uploadMode_ != nullptr;};
    void deleteUploadMode() { this->uploadMode_ = nullptr;};
    inline bool uploadMode() const { DARABONBA_PTR_GET_DEFAULT(uploadMode_, false) };
    inline CreateResourceFileAdvanceRequest& setUploadMode(bool uploadMode) { DARABONBA_PTR_SET_VALUE(uploadMode_, uploadMode) };


  protected:
    // The code for the file. The code format varies based on the file type. To view the code format for a specific file type, go to Operation Center, open the directed acyclic graph (DAG) of a node of the file type, right-click the node, and then select View Code.
    std::shared_ptr<string> content_ = nullptr;
    // The description of the file.
    std::shared_ptr<string> fileDescription_ = nullptr;
    // The path of the file.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileFolderPath_ = nullptr;
    // The name of the file.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // The type of the code for the file.
    // 
    // The code for files varies based on the file type. For more information, see [DataWorks nodes](https://help.aliyun.com/document_detail/600169.html). You can call the [ListFileType](https://help.aliyun.com/document_detail/212428.html) operation to query the type of the code for the file.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> fileType_ = nullptr;
    // The name of the original resource file.
    // 
    // This parameter is required.
    std::shared_ptr<string> originResourceName_ = nullptr;
    // The ID of the Alibaba Cloud account used by the file owner. If this parameter is not configured, the ID of the Alibaba Cloud account of the user who calls the operation is used by default.
    std::shared_ptr<string> owner_ = nullptr;
    // The DataWorks workspace ID. You can log on to the DataWorks console and go to the Workspace page to query the ID. You must configure this parameter to specify the DataWorks workspace to which the operation is applied.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // Specifies whether to upload the resource file to a desired compute engine.
    // 
    // This parameter is required.
    std::shared_ptr<bool> registerToCalcEngine_ = nullptr;
    // The URL of the Object Storage Service (OSS) bucket to which you upload the file. The URL is provided by the POP platform.
    shared_ptr<Darabonba::IStream> resourceFileObject_ = nullptr;
    // The storage path of the resource file in a desired compute engine. This parameter takes effect only for E-MapReduce (EMR) and Cloudera\\"s Distribution including Apache Hadoop (CDH) compute engines. In an EMR compute engine, this parameter is configured in the [osshdfs]://path/to/object format. In a CDH compute engine, this parameter is set to /user/admin/lib by default.
    std::shared_ptr<string> storageURL_ = nullptr;
    // The upload mode of MaxCompute file resources. This parameter takes effect only for MaxCompute file resources. Valid values:
    // 
    // *   true: indicates the resource upload and download mode.
    // *   false: indicates the online editing mode.
    std::shared_ptr<bool> uploadMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
