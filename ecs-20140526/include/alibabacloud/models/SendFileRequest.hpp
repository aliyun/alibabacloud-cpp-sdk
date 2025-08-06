// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SendFileRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class SendFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileGroup, fileGroup_);
      DARABONBA_PTR_TO_JSON(FileMode, fileMode_);
      DARABONBA_PTR_TO_JSON(FileOwner, fileOwner_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TargetDir, targetDir_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, SendFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileGroup, fileGroup_);
      DARABONBA_PTR_FROM_JSON(FileMode, fileMode_);
      DARABONBA_PTR_FROM_JSON(FileOwner, fileOwner_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TargetDir, targetDir_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    SendFileRequest() = default ;
    SendFileRequest(const SendFileRequest &) = default ;
    SendFileRequest(SendFileRequest &&) = default ;
    SendFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendFileRequest() = default ;
    SendFileRequest& operator=(const SendFileRequest &) = default ;
    SendFileRequest& operator=(SendFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->contentType_ != nullptr && this->description_ != nullptr && this->fileGroup_ != nullptr && this->fileMode_ != nullptr && this->fileOwner_ != nullptr
        && this->instanceId_ != nullptr && this->name_ != nullptr && this->overwrite_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->tag_ != nullptr
        && this->targetDir_ != nullptr && this->timeout_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SendFileRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline SendFileRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SendFileRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileGroup Field Functions 
    bool hasFileGroup() const { return this->fileGroup_ != nullptr;};
    void deleteFileGroup() { this->fileGroup_ = nullptr;};
    inline string fileGroup() const { DARABONBA_PTR_GET_DEFAULT(fileGroup_, "") };
    inline SendFileRequest& setFileGroup(string fileGroup) { DARABONBA_PTR_SET_VALUE(fileGroup_, fileGroup) };


    // fileMode Field Functions 
    bool hasFileMode() const { return this->fileMode_ != nullptr;};
    void deleteFileMode() { this->fileMode_ = nullptr;};
    inline string fileMode() const { DARABONBA_PTR_GET_DEFAULT(fileMode_, "") };
    inline SendFileRequest& setFileMode(string fileMode) { DARABONBA_PTR_SET_VALUE(fileMode_, fileMode) };


    // fileOwner Field Functions 
    bool hasFileOwner() const { return this->fileOwner_ != nullptr;};
    void deleteFileOwner() { this->fileOwner_ = nullptr;};
    inline string fileOwner() const { DARABONBA_PTR_GET_DEFAULT(fileOwner_, "") };
    inline SendFileRequest& setFileOwner(string fileOwner) { DARABONBA_PTR_SET_VALUE(fileOwner_, fileOwner) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const vector<string> & instanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
    inline vector<string> instanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
    inline SendFileRequest& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline SendFileRequest& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SendFileRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // overwrite Field Functions 
    bool hasOverwrite() const { return this->overwrite_ != nullptr;};
    void deleteOverwrite() { this->overwrite_ = nullptr;};
    inline bool overwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, false) };
    inline SendFileRequest& setOverwrite(bool overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SendFileRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SendFileRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SendFileRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline SendFileRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SendFileRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SendFileRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<SendFileRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<SendFileRequestTag>) };
    inline vector<SendFileRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<SendFileRequestTag>) };
    inline SendFileRequest& setTag(const vector<SendFileRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline SendFileRequest& setTag(vector<SendFileRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // targetDir Field Functions 
    bool hasTargetDir() const { return this->targetDir_ != nullptr;};
    void deleteTargetDir() { this->targetDir_ = nullptr;};
    inline string targetDir() const { DARABONBA_PTR_GET_DEFAULT(targetDir_, "") };
    inline SendFileRequest& setTargetDir(string targetDir) { DARABONBA_PTR_SET_VALUE(targetDir_, targetDir) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline SendFileRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The content of the file. The file must not exceed 32 KB in size after it is encoded in Base64.
    // 
    // *   If `ContentType` is set to `PlainText`, the value of Content is in plaintext.
    // *   If `ContentType` is set to `Base64`, the value of Content is Base64-encoded.
    // 
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // The content type of the file. Valid values:
    // 
    // *   PlainText: The file content is not encoded.
    // *   Base64: The file content is encoded in Base64.
    // 
    // Default value: PlainText.
    std::shared_ptr<string> contentType_ = nullptr;
    // The description of the file. The description can be up to 512 characters in length and can contain any characters.
    std::shared_ptr<string> description_ = nullptr;
    // The group of the file. This parameter takes effect only on Linux instances. Default value: root. The value can be up to 64 characters in length.
    // 
    // >  If you want to use a non-root user group, make sure that the user group exists in the instances.
    std::shared_ptr<string> fileGroup_ = nullptr;
    // The permissions on the file. This parameter takes effect only on Linux instances. You can configure this parameter in the same way as you configure the chmod command.
    // 
    // Default value: 0644, which indicates that the owner of the file has the read and write permissions on the file and that the user group of the file and other users have the read-only permissions on the file.
    std::shared_ptr<string> fileMode_ = nullptr;
    // The owner of the file. This parameter takes effect only on Linux instances. Default value: root. The value can be up to 64 characters in length.
    // 
    // >  If you want to use a non-root user, make sure that the user exists in the instances.
    std::shared_ptr<string> fileOwner_ = nullptr;
    // The IDs of instances to which to send the file. You can specify up to 50 instance IDs in each request. Valid values of N: 1 to 50.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> instanceId_ = nullptr;
    // The name of the file. The name can be up to 255 characters in length and can contain any characters.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // Specifies whether to overwrite a file in the destination directory if the file has the same name as the sent file.
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> overwrite_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the instance to which to send the file. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group. When you specify this parameter, take note of the following items:
    // 
    // *   The instance specified by the InstanceId parameter must belong to the specified resource group.
    // *   If you specify this parameter, you can call the [DescribeSendFileResults](https://help.aliyun.com/document_detail/184117.html) operation to query file sending results in the specified resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tags to add to the file sending task.
    std::shared_ptr<vector<SendFileRequestTag>> tag_ = nullptr;
    // The destination directory on the instance to which to send the file. If the specified directory does not exist, the system creates the directory on the instance. The value cannot exceed 255 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetDir_ = nullptr;
    // The timeout period for the file sending task. Unit: seconds.
    // 
    // *   A timeout error occurs when a file cannot be sent because the process slows down or because a specific module or Cloud Assistant Agent does not exist.
    // *   If the specified timeout period is less than 10 seconds, the system sets the timeout period to 10 seconds to ensure that the file can be sent to the instances.
    // 
    // Default value: 60.
    std::shared_ptr<int64_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
