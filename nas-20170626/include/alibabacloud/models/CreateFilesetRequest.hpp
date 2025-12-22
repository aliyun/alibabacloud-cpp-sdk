// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILESETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILESETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateFilesetRequestQuota.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateFilesetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFilesetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FileSystemPath, fileSystemPath_);
      DARABONBA_PTR_TO_JSON(Quota, quota_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFilesetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FileSystemPath, fileSystemPath_);
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
    };
    CreateFilesetRequest() = default ;
    CreateFilesetRequest(const CreateFilesetRequest &) = default ;
    CreateFilesetRequest(CreateFilesetRequest &&) = default ;
    CreateFilesetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFilesetRequest() = default ;
    CreateFilesetRequest& operator=(const CreateFilesetRequest &) = default ;
    CreateFilesetRequest& operator=(CreateFilesetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->deletionProtection_ == nullptr && return this->description_ == nullptr && return this->dryRun_ == nullptr && return this->fileSystemId_ == nullptr && return this->fileSystemPath_ == nullptr
        && return this->quota_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateFilesetRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline CreateFilesetRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFilesetRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateFilesetRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateFilesetRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fileSystemPath Field Functions 
    bool hasFileSystemPath() const { return this->fileSystemPath_ != nullptr;};
    void deleteFileSystemPath() { this->fileSystemPath_ = nullptr;};
    inline string fileSystemPath() const { DARABONBA_PTR_GET_DEFAULT(fileSystemPath_, "") };
    inline CreateFilesetRequest& setFileSystemPath(string fileSystemPath) { DARABONBA_PTR_SET_VALUE(fileSystemPath_, fileSystemPath) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const CreateFilesetRequestQuota & quota() const { DARABONBA_PTR_GET_CONST(quota_, CreateFilesetRequestQuota) };
    inline CreateFilesetRequestQuota quota() { DARABONBA_PTR_GET(quota_, CreateFilesetRequestQuota) };
    inline CreateFilesetRequest& setQuota(const CreateFilesetRequestQuota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline CreateFilesetRequest& setQuota(CreateFilesetRequestQuota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to enable deletion protection to allow you to release the fileset by using the console or by calling the [DeleteFileset](https://help.aliyun.com/document_detail/2402263.html) operation.
    // 
    // *   true: enables release protection.
    // *   false (default): disables release protection.
    // 
    // >  This parameter can protect filesets only against manual releases, but not against automatic releases.
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The description of the fileset.
    // 
    // *   The description must be 2 to 128 characters in length.
    // *   The name must start with a letter and cannot start with http:// or https://.
    // *   The description can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to perform a dry run.
    // 
    // During the dry run, the system checks whether the request parameters are valid and whether the requested resources are available. During the dry run, no fileset is created and no fee is incurred.
    // 
    // Valid value:
    // 
    // *   true: performs a dry run. The system checks the required parameters, request syntax, service limits, and available Apsara File Storage NAS (NAS) resources. Otherwise, an error message is returned. If the request passes the dry run, the HTTP status code 200 is returned. No value is returned for the FsetId parameter.
    // *   false (default): performs a dry run and sends the request. If the request passes the dry run, a fileset is created.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The ID of the file system.
    // 
    // *   The IDs of CPFS file systems must start with `cpfs-`. Example: cpfs-099394bd928c\\*\\*\\*\\*.
    // *   The IDs of CPFS for Lingjun file systems must start with `bmcpfs-`. Example: bmcpfs-290w65p03ok64ya\\*\\*\\*\\*.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The absolute path of the fileset.
    // 
    // *   CPFS path limits.
    // 
    //     *   The parent directory of the path that you specify must be an existing directory in the file system.
    //     *   The path must be 2 to 1024 characters in length.
    //     *   The path must start and end with a forward slash (/).
    // 
    // *   Path limit of CPFS for Lingjun
    // 
    //     *   The path must be 2 to 1024 characters in length.
    //     *   The path must start and end with a forward slash (/).
    //     *   The fileset path must be a new path and cannot be an existing path. Fileset paths cannot be renamed and cannot be symbolic links.
    //     *   The maximum depth supported by a fileset path is eight levels. The depth of the root directory / is 0 levels. For example, the fileset path /test/aaa/ccc/ has three levels.
    //     *   If the fileset path is a multi-level path, the parent directory must be an existing directory.
    //     *   Nested filesets are not supported. If a fileset is specified as a parent directory, its subdirectory cannot be a fileset. A fileset path supports only one quota.
    //     *   The path cannot exceed 990 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemPath_ = nullptr;
    // The quota information.
    // 
    // >  Only CPFS for Lingjun V2.7.0 and later support this parameter.
    std::shared_ptr<CreateFilesetRequestQuota> quota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
