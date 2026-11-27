// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFILESETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFILESETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ModifyFilesetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyFilesetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FsetId, fsetId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyFilesetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FsetId, fsetId_);
    };
    ModifyFilesetRequest() = default ;
    ModifyFilesetRequest(const ModifyFilesetRequest &) = default ;
    ModifyFilesetRequest(ModifyFilesetRequest &&) = default ;
    ModifyFilesetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyFilesetRequest() = default ;
    ModifyFilesetRequest& operator=(const ModifyFilesetRequest &) = default ;
    ModifyFilesetRequest& operator=(ModifyFilesetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->deletionProtection_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr && this->fileSystemId_ == nullptr && this->fsetId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyFilesetRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline ModifyFilesetRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyFilesetRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyFilesetRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ModifyFilesetRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fsetId Field Functions 
    bool hasFsetId() const { return this->fsetId_ != nullptr;};
    void deleteFsetId() { this->fsetId_ = nullptr;};
    inline string getFsetId() const { DARABONBA_PTR_GET_DEFAULT(fsetId_, "") };
    inline ModifyFilesetRequest& setFsetId(string fsetId) { DARABONBA_PTR_SET_VALUE(fsetId_, fsetId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // The release protection property of the instance. Specifies whether the instance can be released by using the console or by calling the [DeleteFileset](https://help.aliyun.com/document_detail/2402263.html) operation.
    // 
    // - true: enables release protection for the instance.
    // - false: disables release protection for the instance.
    // 
    // > This property only restricts manual release operations and does not take effect on system release operations.
    shared_ptr<bool> deletionProtection_ {};
    // The description of the fileset.
    shared_ptr<string> description_ {};
    // Specifies whether to perform a dry run on the modification request.
    // 
    // A dry run checks parameter validity and inventory without actually modifying the instance or incurring fees.
    // 
    // Valid values:
    // 
    // - true: performs a dry run. The instance is not modified. The system checks whether required parameters are specified, the request format, business limits, and NAS inventory. If the request fails the dry run, an error is returned. If the request passes the dry run, the HTTP status code 200 is returned.
    // - false: performs a regular request. If the request passes the dry run, the instance is modified.
    // 
    // Default value: false.
    shared_ptr<bool> dryRun_ {};
    // The file system ID.
    // 
    // - CPFS: must start with `cpfs-`, such as cpfs-099394bd928c****.
    // 
    // - CPFS for Lingjun: must start with `bmcpfs-`, such as bmcpfs-290w65p03ok64ya****.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The Fileset ID.
    // 
    // This parameter is required.
    shared_ptr<string> fsetId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
