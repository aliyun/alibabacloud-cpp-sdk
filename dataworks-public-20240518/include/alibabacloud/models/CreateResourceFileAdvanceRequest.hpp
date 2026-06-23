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
      // resourceFileObject_ is stream
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
      // resourceFileObject_ is stream
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
        && this->fileDescription_ == nullptr && this->fileFolderPath_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr && this->originResourceName_ == nullptr
        && this->owner_ == nullptr && this->projectId_ == nullptr && this->registerToCalcEngine_ == nullptr && this->resourceFileObject_ == nullptr && this->storageURL_ == nullptr
        && this->uploadMode_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateResourceFileAdvanceRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // fileDescription Field Functions 
    bool hasFileDescription() const { return this->fileDescription_ != nullptr;};
    void deleteFileDescription() { this->fileDescription_ = nullptr;};
    inline string getFileDescription() const { DARABONBA_PTR_GET_DEFAULT(fileDescription_, "") };
    inline CreateResourceFileAdvanceRequest& setFileDescription(string fileDescription) { DARABONBA_PTR_SET_VALUE(fileDescription_, fileDescription) };


    // fileFolderPath Field Functions 
    bool hasFileFolderPath() const { return this->fileFolderPath_ != nullptr;};
    void deleteFileFolderPath() { this->fileFolderPath_ = nullptr;};
    inline string getFileFolderPath() const { DARABONBA_PTR_GET_DEFAULT(fileFolderPath_, "") };
    inline CreateResourceFileAdvanceRequest& setFileFolderPath(string fileFolderPath) { DARABONBA_PTR_SET_VALUE(fileFolderPath_, fileFolderPath) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateResourceFileAdvanceRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline int32_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
    inline CreateResourceFileAdvanceRequest& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // originResourceName Field Functions 
    bool hasOriginResourceName() const { return this->originResourceName_ != nullptr;};
    void deleteOriginResourceName() { this->originResourceName_ = nullptr;};
    inline string getOriginResourceName() const { DARABONBA_PTR_GET_DEFAULT(originResourceName_, "") };
    inline CreateResourceFileAdvanceRequest& setOriginResourceName(string originResourceName) { DARABONBA_PTR_SET_VALUE(originResourceName_, originResourceName) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline CreateResourceFileAdvanceRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateResourceFileAdvanceRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // registerToCalcEngine Field Functions 
    bool hasRegisterToCalcEngine() const { return this->registerToCalcEngine_ != nullptr;};
    void deleteRegisterToCalcEngine() { this->registerToCalcEngine_ = nullptr;};
    inline bool getRegisterToCalcEngine() const { DARABONBA_PTR_GET_DEFAULT(registerToCalcEngine_, false) };
    inline CreateResourceFileAdvanceRequest& setRegisterToCalcEngine(bool registerToCalcEngine) { DARABONBA_PTR_SET_VALUE(registerToCalcEngine_, registerToCalcEngine) };


    // resourceFileObject Field Functions 
    bool hasResourceFileObject() const { return this->resourceFileObject_ != nullptr;};
    void deleteResourceFileObject() { this->resourceFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getResourceFileObject() const { DARABONBA_GET(resourceFileObject_) };
    inline CreateResourceFileAdvanceRequest& setResourceFileObject(shared_ptr<Darabonba::IStream> resourceFileObject) { DARABONBA_SET_VALUE(resourceFileObject_, resourceFileObject) };


    // storageURL Field Functions 
    bool hasStorageURL() const { return this->storageURL_ != nullptr;};
    void deleteStorageURL() { this->storageURL_ = nullptr;};
    inline string getStorageURL() const { DARABONBA_PTR_GET_DEFAULT(storageURL_, "") };
    inline CreateResourceFileAdvanceRequest& setStorageURL(string storageURL) { DARABONBA_PTR_SET_VALUE(storageURL_, storageURL) };


    // uploadMode Field Functions 
    bool hasUploadMode() const { return this->uploadMode_ != nullptr;};
    void deleteUploadMode() { this->uploadMode_ = nullptr;};
    inline bool getUploadMode() const { DARABONBA_PTR_GET_DEFAULT(uploadMode_, false) };
    inline CreateResourceFileAdvanceRequest& setUploadMode(bool uploadMode) { DARABONBA_PTR_SET_VALUE(uploadMode_, uploadMode) };


  protected:
    // The code content of the file. The code format varies depending on the code type (fileType). You can locate a job of the corresponding type in the Operation Center, right-click it, and select View Code to check the specific code format.
    shared_ptr<string> content_ {};
    // The description of the file.
    shared_ptr<string> fileDescription_ {};
    // The path of the file.
    // 
    // This parameter is required.
    shared_ptr<string> fileFolderPath_ {};
    // The name of the file.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The code type of the file.
    // 
    // Different file types correspond to different code types. For more information, see [DataWorks Node Types](https://help.aliyun.com/document_detail/600169.html).<br>
    // You can also invoke the [ListFileType](https://help.aliyun.com/document_detail/212428.html) API to query the code types of files.
    // 
    // This parameter is required.
    shared_ptr<int32_t> fileType_ {};
    // The name of the original resource file.
    // 
    // This parameter is required.
    shared_ptr<string> originResourceName_ {};
    // The Alibaba Cloud User ID of the file owner. If this parameter is empty, the Alibaba Cloud User ID of the caller is used by default.
    shared_ptr<string> owner_ {};
    // The ID of the DataWorks workspace. You can log on to the DataWorks console, go to the workspace configuration page, and obtain the workspace ID. This parameter is required to identify the DataWorks workspace for this API call.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // Indicates whether to synchronize and upload the resource to the compute engine.
    // 
    // This parameter is required.
    shared_ptr<bool> registerToCalcEngine_ {};
    // The OSS URL for file upload provided by POP.
    shared_ptr<Darabonba::IStream> resourceFileObject_ {};
    // The Storage Path of the resource file on the compute engine. This field is currently used only by EMR and CDH. The EMR format is [osshdfs]://path/to/object, and for CDH, the default value must be /user/admin/lib.
    shared_ptr<string> storageURL_ {};
    // The upload mode for the resource file. This parameter currently applies only to File-type files in MaxCompute. Valid values:
    // 
    // - true: Downloadable resource mode.
    // 
    // - false: Online-editable text mode.
    shared_ptr<bool> uploadMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
