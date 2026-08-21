// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERSONALFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERSONALFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreatePersonalFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePersonalFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(fileExt, fileExt_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(filePath, filePath_);
      DARABONBA_PTR_TO_JSON(filePublicUrl, filePublicUrl_);
      DARABONBA_PTR_TO_JSON(fileRecordId, fileRecordId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePersonalFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(fileExt, fileExt_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(filePath, filePath_);
      DARABONBA_PTR_FROM_JSON(filePublicUrl, filePublicUrl_);
      DARABONBA_PTR_FROM_JSON(fileRecordId, fileRecordId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CreatePersonalFileRequest() = default ;
    CreatePersonalFileRequest(const CreatePersonalFileRequest &) = default ;
    CreatePersonalFileRequest(CreatePersonalFileRequest &&) = default ;
    CreatePersonalFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePersonalFileRequest() = default ;
    CreatePersonalFileRequest& operator=(const CreatePersonalFileRequest &) = default ;
    CreatePersonalFileRequest& operator=(CreatePersonalFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->directoryId_ == nullptr && this->fileExt_ == nullptr && this->fileName_ == nullptr && this->filePath_ == nullptr && this->filePublicUrl_ == nullptr
        && this->fileRecordId_ == nullptr && this->name_ == nullptr && this->operatingObjectName_ == nullptr && this->tenantId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePersonalFileRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreatePersonalFileRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // fileExt Field Functions 
    bool hasFileExt() const { return this->fileExt_ != nullptr;};
    void deleteFileExt() { this->fileExt_ = nullptr;};
    inline string getFileExt() const { DARABONBA_PTR_GET_DEFAULT(fileExt_, "") };
    inline CreatePersonalFileRequest& setFileExt(string fileExt) { DARABONBA_PTR_SET_VALUE(fileExt_, fileExt) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreatePersonalFileRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline CreatePersonalFileRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // filePublicUrl Field Functions 
    bool hasFilePublicUrl() const { return this->filePublicUrl_ != nullptr;};
    void deleteFilePublicUrl() { this->filePublicUrl_ = nullptr;};
    inline string getFilePublicUrl() const { DARABONBA_PTR_GET_DEFAULT(filePublicUrl_, "") };
    inline CreatePersonalFileRequest& setFilePublicUrl(string filePublicUrl) { DARABONBA_PTR_SET_VALUE(filePublicUrl_, filePublicUrl) };


    // fileRecordId Field Functions 
    bool hasFileRecordId() const { return this->fileRecordId_ != nullptr;};
    void deleteFileRecordId() { this->fileRecordId_ = nullptr;};
    inline string getFileRecordId() const { DARABONBA_PTR_GET_DEFAULT(fileRecordId_, "") };
    inline CreatePersonalFileRequest& setFileRecordId(string fileRecordId) { DARABONBA_PTR_SET_VALUE(fileRecordId_, fileRecordId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePersonalFileRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline CreatePersonalFileRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreatePersonalFileRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The pipeline description.
    shared_ptr<string> description_ {};
    // The directory ID.
    shared_ptr<string> directoryId_ {};
    // The file extension (optional, such as pdf or docx).
    shared_ptr<string> fileExt_ {};
    // The file name.
    shared_ptr<string> fileName_ {};
    // The file path.
    // 
    // This parameter is required.
    shared_ptr<string> filePath_ {};
    // The publicly accessible URL of the Alibaba DingTalk online document.
    shared_ptr<string> filePublicUrl_ {};
    // The file record ID (optional, corresponding to settings.file_record_id).
    shared_ptr<string> fileRecordId_ {};
    // The pipeline name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The name of the digital employee (operating object name, optional).
    shared_ptr<string> operatingObjectName_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
