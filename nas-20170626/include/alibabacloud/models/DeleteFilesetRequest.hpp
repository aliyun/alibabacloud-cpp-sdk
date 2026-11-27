// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFILESETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFILESETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DeleteFilesetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFilesetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FsetId, fsetId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFilesetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FsetId, fsetId_);
    };
    DeleteFilesetRequest() = default ;
    DeleteFilesetRequest(const DeleteFilesetRequest &) = default ;
    DeleteFilesetRequest(DeleteFilesetRequest &&) = default ;
    DeleteFilesetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFilesetRequest() = default ;
    DeleteFilesetRequest& operator=(const DeleteFilesetRequest &) = default ;
    DeleteFilesetRequest& operator=(DeleteFilesetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->fileSystemId_ == nullptr && this->fsetId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteFilesetRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteFilesetRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DeleteFilesetRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fsetId Field Functions 
    bool hasFsetId() const { return this->fsetId_ != nullptr;};
    void deleteFsetId() { this->fsetId_ = nullptr;};
    inline string getFsetId() const { DARABONBA_PTR_GET_DEFAULT(fsetId_, "") };
    inline DeleteFilesetRequest& setFsetId(string fsetId) { DARABONBA_PTR_SET_VALUE(fsetId_, fsetId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can generate the value on your client, but you must ensure that the value is unique among different requests.
    // 
    // The client token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the client token. The RequestId of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run on the delete request.
    // 
    // A dry run helps you check parameter validity and resource availability without actually deleting the instance.
    // 
    // Valid values:
    // 
    // - true: performs a dry run and does not delete the instance. The system checks whether required parameters are specified, the request format is valid, and service limits are met. If the request fails the dry run, an error is returned. If the request passes the dry run, the HTTP status code 200 is returned.
    // 
    // - false (default): sends a normal request and directly deletes the instance after it passes the check.
    shared_ptr<bool> dryRun_ {};
    // The ID of the file system.
    // 
    // - CPFS: The ID must start with `cpfs-`. Example: cpfs-099394bd928c****.
    // 
    // - CPFS for Lingjun: The ID must start with `bmcpfs-`. Example: bmcpfs-290w65p03ok64ya****.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The fileset ID.
    // 
    // This parameter is required.
    shared_ptr<string> fsetId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
