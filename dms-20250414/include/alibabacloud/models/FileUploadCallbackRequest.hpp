// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILEUPLOADCALLBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FILEUPLOADCALLBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class FileUploadCallbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FileUploadCallbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallFrom, callFrom_);
      DARABONBA_PTR_TO_JSON(DmsUnit, dmsUnit_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(Filename, filename_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(UploadLocation, uploadLocation_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, FileUploadCallbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallFrom, callFrom_);
      DARABONBA_PTR_FROM_JSON(DmsUnit, dmsUnit_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(Filename, filename_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(UploadLocation, uploadLocation_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    FileUploadCallbackRequest() = default ;
    FileUploadCallbackRequest(const FileUploadCallbackRequest &) = default ;
    FileUploadCallbackRequest(FileUploadCallbackRequest &&) = default ;
    FileUploadCallbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FileUploadCallbackRequest() = default ;
    FileUploadCallbackRequest& operator=(const FileUploadCallbackRequest &) = default ;
    FileUploadCallbackRequest& operator=(FileUploadCallbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callFrom_ == nullptr
        && this->dmsUnit_ == nullptr && this->fileSize_ == nullptr && this->filename_ == nullptr && this->ossBucket_ == nullptr && this->uploadLocation_ == nullptr
        && this->workspaceId_ == nullptr; };
    // callFrom Field Functions 
    bool hasCallFrom() const { return this->callFrom_ != nullptr;};
    void deleteCallFrom() { this->callFrom_ = nullptr;};
    inline string getCallFrom() const { DARABONBA_PTR_GET_DEFAULT(callFrom_, "") };
    inline FileUploadCallbackRequest& setCallFrom(string callFrom) { DARABONBA_PTR_SET_VALUE(callFrom_, callFrom) };


    // dmsUnit Field Functions 
    bool hasDmsUnit() const { return this->dmsUnit_ != nullptr;};
    void deleteDmsUnit() { this->dmsUnit_ = nullptr;};
    inline string getDmsUnit() const { DARABONBA_PTR_GET_DEFAULT(dmsUnit_, "") };
    inline FileUploadCallbackRequest& setDmsUnit(string dmsUnit) { DARABONBA_PTR_SET_VALUE(dmsUnit_, dmsUnit) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline FileUploadCallbackRequest& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline FileUploadCallbackRequest& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline FileUploadCallbackRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // uploadLocation Field Functions 
    bool hasUploadLocation() const { return this->uploadLocation_ != nullptr;};
    void deleteUploadLocation() { this->uploadLocation_ = nullptr;};
    inline string getUploadLocation() const { DARABONBA_PTR_GET_DEFAULT(uploadLocation_, "") };
    inline FileUploadCallbackRequest& setUploadLocation(string uploadLocation) { DARABONBA_PTR_SET_VALUE(uploadLocation_, uploadLocation) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline FileUploadCallbackRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Used only by the frontend.
    shared_ptr<string> callFrom_ {};
    // The current Data Management unit.
    shared_ptr<string> dmsUnit_ {};
    // The file size, in bytes.
    shared_ptr<int64_t> fileSize_ {};
    // The file name.
    // 
    // This parameter is required.
    shared_ptr<string> filename_ {};
    shared_ptr<string> ossBucket_ {};
    // The full path of the uploaded file.
    // - Format: The UploadDir field returned by the DescribeFileUploadSignature operation concatenated with the file name.
    // - Example: ${UploadDir}/${Filename}
    // 
    // This parameter is required.
    shared_ptr<string> uploadLocation_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
