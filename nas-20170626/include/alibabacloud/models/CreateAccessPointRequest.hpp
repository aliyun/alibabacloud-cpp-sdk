// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCESSPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCESSPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAccessPointRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateAccessPointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccessPointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroup, accessGroup_);
      DARABONBA_PTR_TO_JSON(AccessPointName, accessPointName_);
      DARABONBA_PTR_TO_JSON(EnabledRam, enabledRam_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(OwnerGroupId, ownerGroupId_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(Permission, permission_);
      DARABONBA_PTR_TO_JSON(PosixGroupId, posixGroupId_);
      DARABONBA_PTR_TO_JSON(PosixSecondaryGroupIds, posixSecondaryGroupIds_);
      DARABONBA_PTR_TO_JSON(PosixUserId, posixUserId_);
      DARABONBA_PTR_TO_JSON(RootDirectory, rootDirectory_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswId, vswId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccessPointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroup, accessGroup_);
      DARABONBA_PTR_FROM_JSON(AccessPointName, accessPointName_);
      DARABONBA_PTR_FROM_JSON(EnabledRam, enabledRam_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(OwnerGroupId, ownerGroupId_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(Permission, permission_);
      DARABONBA_PTR_FROM_JSON(PosixGroupId, posixGroupId_);
      DARABONBA_PTR_FROM_JSON(PosixSecondaryGroupIds, posixSecondaryGroupIds_);
      DARABONBA_PTR_FROM_JSON(PosixUserId, posixUserId_);
      DARABONBA_PTR_FROM_JSON(RootDirectory, rootDirectory_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswId, vswId_);
    };
    CreateAccessPointRequest() = default ;
    CreateAccessPointRequest(const CreateAccessPointRequest &) = default ;
    CreateAccessPointRequest(CreateAccessPointRequest &&) = default ;
    CreateAccessPointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccessPointRequest() = default ;
    CreateAccessPointRequest& operator=(const CreateAccessPointRequest &) = default ;
    CreateAccessPointRequest& operator=(CreateAccessPointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroup_ == nullptr
        && return this->accessPointName_ == nullptr && return this->enabledRam_ == nullptr && return this->fileSystemId_ == nullptr && return this->ownerGroupId_ == nullptr && return this->ownerUserId_ == nullptr
        && return this->permission_ == nullptr && return this->posixGroupId_ == nullptr && return this->posixSecondaryGroupIds_ == nullptr && return this->posixUserId_ == nullptr && return this->rootDirectory_ == nullptr
        && return this->tag_ == nullptr && return this->vpcId_ == nullptr && return this->vswId_ == nullptr; };
    // accessGroup Field Functions 
    bool hasAccessGroup() const { return this->accessGroup_ != nullptr;};
    void deleteAccessGroup() { this->accessGroup_ = nullptr;};
    inline string accessGroup() const { DARABONBA_PTR_GET_DEFAULT(accessGroup_, "") };
    inline CreateAccessPointRequest& setAccessGroup(string accessGroup) { DARABONBA_PTR_SET_VALUE(accessGroup_, accessGroup) };


    // accessPointName Field Functions 
    bool hasAccessPointName() const { return this->accessPointName_ != nullptr;};
    void deleteAccessPointName() { this->accessPointName_ = nullptr;};
    inline string accessPointName() const { DARABONBA_PTR_GET_DEFAULT(accessPointName_, "") };
    inline CreateAccessPointRequest& setAccessPointName(string accessPointName) { DARABONBA_PTR_SET_VALUE(accessPointName_, accessPointName) };


    // enabledRam Field Functions 
    bool hasEnabledRam() const { return this->enabledRam_ != nullptr;};
    void deleteEnabledRam() { this->enabledRam_ = nullptr;};
    inline bool enabledRam() const { DARABONBA_PTR_GET_DEFAULT(enabledRam_, false) };
    inline CreateAccessPointRequest& setEnabledRam(bool enabledRam) { DARABONBA_PTR_SET_VALUE(enabledRam_, enabledRam) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateAccessPointRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // ownerGroupId Field Functions 
    bool hasOwnerGroupId() const { return this->ownerGroupId_ != nullptr;};
    void deleteOwnerGroupId() { this->ownerGroupId_ = nullptr;};
    inline int32_t ownerGroupId() const { DARABONBA_PTR_GET_DEFAULT(ownerGroupId_, 0) };
    inline CreateAccessPointRequest& setOwnerGroupId(int32_t ownerGroupId) { DARABONBA_PTR_SET_VALUE(ownerGroupId_, ownerGroupId) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline int32_t ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, 0) };
    inline CreateAccessPointRequest& setOwnerUserId(int32_t ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline string permission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
    inline CreateAccessPointRequest& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


    // posixGroupId Field Functions 
    bool hasPosixGroupId() const { return this->posixGroupId_ != nullptr;};
    void deletePosixGroupId() { this->posixGroupId_ = nullptr;};
    inline int32_t posixGroupId() const { DARABONBA_PTR_GET_DEFAULT(posixGroupId_, 0) };
    inline CreateAccessPointRequest& setPosixGroupId(int32_t posixGroupId) { DARABONBA_PTR_SET_VALUE(posixGroupId_, posixGroupId) };


    // posixSecondaryGroupIds Field Functions 
    bool hasPosixSecondaryGroupIds() const { return this->posixSecondaryGroupIds_ != nullptr;};
    void deletePosixSecondaryGroupIds() { this->posixSecondaryGroupIds_ = nullptr;};
    inline string posixSecondaryGroupIds() const { DARABONBA_PTR_GET_DEFAULT(posixSecondaryGroupIds_, "") };
    inline CreateAccessPointRequest& setPosixSecondaryGroupIds(string posixSecondaryGroupIds) { DARABONBA_PTR_SET_VALUE(posixSecondaryGroupIds_, posixSecondaryGroupIds) };


    // posixUserId Field Functions 
    bool hasPosixUserId() const { return this->posixUserId_ != nullptr;};
    void deletePosixUserId() { this->posixUserId_ = nullptr;};
    inline int32_t posixUserId() const { DARABONBA_PTR_GET_DEFAULT(posixUserId_, 0) };
    inline CreateAccessPointRequest& setPosixUserId(int32_t posixUserId) { DARABONBA_PTR_SET_VALUE(posixUserId_, posixUserId) };


    // rootDirectory Field Functions 
    bool hasRootDirectory() const { return this->rootDirectory_ != nullptr;};
    void deleteRootDirectory() { this->rootDirectory_ = nullptr;};
    inline string rootDirectory() const { DARABONBA_PTR_GET_DEFAULT(rootDirectory_, "") };
    inline CreateAccessPointRequest& setRootDirectory(string rootDirectory) { DARABONBA_PTR_SET_VALUE(rootDirectory_, rootDirectory) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateAccessPointRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateAccessPointRequestTag>) };
    inline vector<CreateAccessPointRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateAccessPointRequestTag>) };
    inline CreateAccessPointRequest& setTag(const vector<CreateAccessPointRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateAccessPointRequest& setTag(vector<CreateAccessPointRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateAccessPointRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswId Field Functions 
    bool hasVswId() const { return this->vswId_ != nullptr;};
    void deleteVswId() { this->vswId_ = nullptr;};
    inline string vswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
    inline CreateAccessPointRequest& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


  protected:
    // The name of the permission group.
    // 
    // This parameter is required for a General-purpose File Storage NAS (NAS) file system.
    // 
    // The default permission group for virtual private clouds (VPCs) is named DEFAULT_VPC_GROUP_NAME.
    // 
    // This parameter is required.
    std::shared_ptr<string> accessGroup_ = nullptr;
    // The name of the access point.
    std::shared_ptr<string> accessPointName_ = nullptr;
    // Specifies whether to enable the RAM policy. Valid values:
    // 
    // *   true: The RAM policy is enabled.
    // *   false (default): The RAM policy is disabled.
    // 
    // >  After the RAM policy is enabled for access points, no RAM user is allowed to use access points to mount and access data by default. To use access points to mount and access data as a RAM user, you must grant the related access permissions to the RAM user. If the RAM policy is disabled, access points can be anonymously mounted. For more information about how to configure permissions on access points, see [Configure a policy for the access point](https://help.aliyun.com/document_detail/2545998.html).
    std::shared_ptr<bool> enabledRam_ = nullptr;
    // The ID of the file system.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The ID of the owner group.
    // 
    // This parameter is required if the RootDirectory directory does not exist.
    std::shared_ptr<int32_t> ownerGroupId_ = nullptr;
    // The owner ID.
    // 
    // This parameter is required if the RootDirectory directory does not exist.
    std::shared_ptr<int32_t> ownerUserId_ = nullptr;
    // The Portable Operating System Interface for UNIX (POSIX) permission. Default value: 0777.
    // 
    // This field takes effect only if you specify the OwnerUserId and OwnerGroupId parameters.
    std::shared_ptr<string> permission_ = nullptr;
    // The ID of the POSIX user group.
    std::shared_ptr<int32_t> posixGroupId_ = nullptr;
    // The secondary user group. Separate multiple user group IDs with commas (,).
    std::shared_ptr<string> posixSecondaryGroupIds_ = nullptr;
    // The ID of the POSIX user.
    std::shared_ptr<int32_t> posixUserId_ = nullptr;
    // The root directory of the access point. The default value is /. If the directory does not exist, you must also specify the OwnerUserId and OwnerGroupId parameters.
    std::shared_ptr<string> rootDirectory_ = nullptr;
    std::shared_ptr<vector<CreateAccessPointRequestTag>> tag_ = nullptr;
    // The VPC ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The vSwitch ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> vswId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
