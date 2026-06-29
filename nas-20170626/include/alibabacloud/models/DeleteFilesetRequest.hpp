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
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may differ for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run for this deletion request.
    // 
    // A dry run checks parameter validity and resource availability without actually deleting the instance.
    // 
    // Valid values:
    // 
    // - true: Sends a check request without deleting the instance. The check items include whether required parameters are specified, the request format, and business limitations. If the check fails, the corresponding error is returned. If the check passes, HTTP status code 200 is returned.
    // 
    // - false (default): Sends a normal request. After the check passes, the instance is directly deleted.
    shared_ptr<bool> dryRun_ {};
    // The file system ID.
    // 
    // - CPFS: The ID must start with `cpfs-`, such as cpfs-099394bd928c****.
    // 
    // - CPFS for Lingjun: The ID must start with `bmcpfs-`, such as bmcpfs-290w65p03ok64ya****.
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
