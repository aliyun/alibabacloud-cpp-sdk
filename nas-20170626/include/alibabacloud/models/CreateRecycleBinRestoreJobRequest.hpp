// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERECYCLEBINRESTOREJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERECYCLEBINRESTOREJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateRecycleBinRestoreJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRecycleBinRestoreJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(TargetFileId, targetFileId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRecycleBinRestoreJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(TargetFileId, targetFileId_);
    };
    CreateRecycleBinRestoreJobRequest() = default ;
    CreateRecycleBinRestoreJobRequest(const CreateRecycleBinRestoreJobRequest &) = default ;
    CreateRecycleBinRestoreJobRequest(CreateRecycleBinRestoreJobRequest &&) = default ;
    CreateRecycleBinRestoreJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRecycleBinRestoreJobRequest() = default ;
    CreateRecycleBinRestoreJobRequest& operator=(const CreateRecycleBinRestoreJobRequest &) = default ;
    CreateRecycleBinRestoreJobRequest& operator=(CreateRecycleBinRestoreJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->fileId_ == nullptr && this->fileSystemId_ == nullptr && this->targetFileId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateRecycleBinRestoreJobRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline CreateRecycleBinRestoreJobRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateRecycleBinRestoreJobRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // targetFileId Field Functions 
    bool hasTargetFileId() const { return this->targetFileId_ != nullptr;};
    void deleteTargetFileId() { this->targetFileId_ = nullptr;};
    inline string getTargetFileId() const { DARABONBA_PTR_GET_DEFAULT(targetFileId_, "") };
    inline CreateRecycleBinRestoreJobRequest& setTargetFileId(string targetFileId) { DARABONBA_PTR_SET_VALUE(targetFileId_, targetFileId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // Generate a value from your client to ensure that the value is unique among different requests. The ClientToken value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // >If you do not specify ClientToken, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may vary for each API request.
    shared_ptr<string> clientToken_ {};
    // The FileId of the file or directory to restore.
    // 
    // You can call the [ListRecycledDirectoriesAndFiles](https://help.aliyun.com/document_detail/2412174.html) operation to query the FileId of deleted data.
    // 
    // This parameter is required.
    shared_ptr<string> fileId_ {};
    // The file system ID. **Required**.
    // 
    // **How to obtain**:
    // - Call [DescribeFileSystems](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-describefilesystems) to query the file system list and obtain the FileSystemId.
    // - Call [CreateFileSystem](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createfilesystem) to create a file system and obtain the FileSystemId from the response.
    // 
    // **Usage notes**:
    // - This operation applies only to General-purpose NAS file systems.
    // - Before calling this operation, make sure that the recycle bin feature is enabled for the file system.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The FileId of the directory to which the file is restored.
    // 
    // - You can call the [ListRecentlyRecycledDirectories](https://help.aliyun.com/document_detail/2412173.html) operation to query the TargetFileId of directories from which files have been deleted.
    // 
    // - You can call the [ListDirectoriesAndFiles](https://help.aliyun.com/document_detail/2412163.html) operation to query the TargetFileId of existing directories in the file system.
    // 
    // **Special notes**:
    // - The FileId of the root directory of a file system is fixed to `2`. You can directly use this value as the TargetFileId to restore a file to the root directory without querying.
    // 
    // This parameter is required.
    shared_ptr<string> targetFileId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
