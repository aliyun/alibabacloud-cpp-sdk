// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILESETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILESETREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class Quota : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Quota& obj) { 
        DARABONBA_PTR_TO_JSON(FileCountLimit, fileCountLimit_);
        DARABONBA_PTR_TO_JSON(SizeLimit, sizeLimit_);
      };
      friend void from_json(const Darabonba::Json& j, Quota& obj) { 
        DARABONBA_PTR_FROM_JSON(FileCountLimit, fileCountLimit_);
        DARABONBA_PTR_FROM_JSON(SizeLimit, sizeLimit_);
      };
      Quota() = default ;
      Quota(const Quota &) = default ;
      Quota(Quota &&) = default ;
      Quota(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Quota() = default ;
      Quota& operator=(const Quota &) = default ;
      Quota& operator=(Quota &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileCountLimit_ == nullptr
        && this->sizeLimit_ == nullptr; };
      // fileCountLimit Field Functions 
      bool hasFileCountLimit() const { return this->fileCountLimit_ != nullptr;};
      void deleteFileCountLimit() { this->fileCountLimit_ = nullptr;};
      inline int64_t getFileCountLimit() const { DARABONBA_PTR_GET_DEFAULT(fileCountLimit_, 0L) };
      inline Quota& setFileCountLimit(int64_t fileCountLimit) { DARABONBA_PTR_SET_VALUE(fileCountLimit_, fileCountLimit) };


      // sizeLimit Field Functions 
      bool hasSizeLimit() const { return this->sizeLimit_ != nullptr;};
      void deleteSizeLimit() { this->sizeLimit_ = nullptr;};
      inline int64_t getSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(sizeLimit_, 0L) };
      inline Quota& setSizeLimit(int64_t sizeLimit) { DARABONBA_PTR_SET_VALUE(sizeLimit_, sizeLimit) };


    protected:
      // The file count limit of the quota. Valid values:
      // 
      // - Minimum value: 10,000.
      // 
      // - Maximum value: 10,000,000,000.
      shared_ptr<int64_t> fileCountLimit_ {};
      // The total capacity limit of the quota. Unit: bytes.
      // 
      // Valid values:
      // 
      // - Minimum value: 10,737,418,240 (10 GiB).
      // 
      // - Increment: 1,073,741,824 (1 GiB).
      shared_ptr<int64_t> sizeLimit_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->deletionProtection_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr && this->fileSystemId_ == nullptr && this->fileSystemPath_ == nullptr
        && this->quota_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateFilesetRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline CreateFilesetRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFilesetRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateFilesetRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateFilesetRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fileSystemPath Field Functions 
    bool hasFileSystemPath() const { return this->fileSystemPath_ != nullptr;};
    void deleteFileSystemPath() { this->fileSystemPath_ = nullptr;};
    inline string getFileSystemPath() const { DARABONBA_PTR_GET_DEFAULT(fileSystemPath_, "") };
    inline CreateFilesetRequest& setFileSystemPath(string fileSystemPath) { DARABONBA_PTR_SET_VALUE(fileSystemPath_, fileSystemPath) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const CreateFilesetRequest::Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, CreateFilesetRequest::Quota) };
    inline CreateFilesetRequest::Quota getQuota() { DARABONBA_PTR_GET(quota_, CreateFilesetRequest::Quota) };
    inline CreateFilesetRequest& setQuota(const CreateFilesetRequest::Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline CreateFilesetRequest& setQuota(CreateFilesetRequest::Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // The release protection property of the instance. Specifies whether the instance can be released by using the console or the [DeleteFileset](https://help.aliyun.com/document_detail/2402263.html) operation.
    // 
    // - true: Enables release protection for the instance.
    // - false (default): Disables release protection for the instance.
    // 
    // > This property only restricts manual release operations and does not take effect on system-initiated release operations.
    shared_ptr<bool> deletionProtection_ {};
    // The description of the fileset.
    // 
    // - The description must be 2 to 128 characters in length.
    // - The description must start with a letter or Chinese character and cannot start with http:// or https://.
    // - The description can contain digits, colons (:), underscores (_), or hyphens (-).
    shared_ptr<string> description_ {};
    // Specifies whether to perform a dry run for this request.
    // 
    // A dry run checks parameter validity and resource availability without actually creating the instance or incurring charges.
    // 
    // Valid values:
    // 
    // - true: Sends a dry run request without creating the instance. The check items include required parameters, request format, business restrictions, and NAS inventory. If the check fails, the corresponding error is returned. If the check succeeds, HTTP status code 200 is returned, but FsetId is empty.
    // - false (default): Sends a normal request. After the check succeeds, the instance is created.
    shared_ptr<bool> dryRun_ {};
    // The file system ID.
    // 
    // - CPFS: The ID must start with `cpfs-`, such as cpfs-099394bd928c\\*\\*\\*\\*.
    // 
    // - CPFS for Lingjun: The ID must start with `bmcpfs-`, such as bmcpfs-290w65p03ok64ya\\*\\*\\*\\*.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The absolute path of the fileset to create.
    // 
    // - Path restrictions for CPFS:
    //   - The parent directory of the specified directory must be an existing directory in the file system.
    //   - The path must be 2 to 1,024 characters in length.
    //   - The specified directory must start and end with a forward slash (/).
    // - Path restrictions for CPFS for Lingjun:
    //   - The path must be 2 to 1,024 characters in length.
    //   - The specified directory must start and end with a forward slash (/).
    //   - The fileset path must be a new path and cannot be an existing path. Renaming a fileset path is not supported, and the path cannot be a symbolic link.
    //   - The maximum depth of a fileset path is 8 levels, with the root directory / as level 0. For example, a fileset path of /test/aaa/ccc/ has a depth of 3 levels.
    //   - If the fileset path contains multiple directory levels, the parent directory must be an existing directory.
    //   - Nesting filesets within a fileset is not supported. If a parent directory is already specified as a fileset, its subdirectories cannot be specified as filesets. Only one quota is supported for each fileset path.
    //   - The total path length cannot exceed 990 characters.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemPath_ {};
    // The quota information.
    // > This parameter is supported only for CPFS for Lingjun 2.7.0 and later.
    shared_ptr<CreateFilesetRequest::Quota> quota_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
