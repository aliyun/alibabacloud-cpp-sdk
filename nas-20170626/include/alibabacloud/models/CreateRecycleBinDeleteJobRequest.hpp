// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERECYCLEBINDELETEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERECYCLEBINDELETEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateRecycleBinDeleteJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRecycleBinDeleteJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRecycleBinDeleteJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
    };
    CreateRecycleBinDeleteJobRequest() = default ;
    CreateRecycleBinDeleteJobRequest(const CreateRecycleBinDeleteJobRequest &) = default ;
    CreateRecycleBinDeleteJobRequest(CreateRecycleBinDeleteJobRequest &&) = default ;
    CreateRecycleBinDeleteJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRecycleBinDeleteJobRequest() = default ;
    CreateRecycleBinDeleteJobRequest& operator=(const CreateRecycleBinDeleteJobRequest &) = default ;
    CreateRecycleBinDeleteJobRequest& operator=(CreateRecycleBinDeleteJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->fileId_ == nullptr && this->fileSystemId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateRecycleBinDeleteJobRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline CreateRecycleBinDeleteJobRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateRecycleBinDeleteJobRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


  protected:
    // Ensures the idempotence of the request.
    // 
    // Generate a parameter value from your client to ensure that the value is unique among different requests. The value of ClientToken can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // >If you do not specify ClientToken, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may vary for each API request.
    shared_ptr<string> clientToken_ {};
    // The FileId of the file or directory that you want to permanently delete.
    // 
    // You can call the [ListRecycledDirectoriesAndFiles](https://help.aliyun.com/document_detail/2412174.html) operation to query the FileId of deleted data.
    // 
    // This parameter is required.
    shared_ptr<string> fileId_ {};
    // The file system ID.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
