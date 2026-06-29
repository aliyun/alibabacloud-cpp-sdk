// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCESSPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCESSPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(AgenticSpaceId, agenticSpaceId_);
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
      DARABONBA_PTR_FROM_JSON(AgenticSpaceId, agenticSpaceId_);
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
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      // Limits:
      // 
      // - Cannot be empty or an empty string.
      // - Can be up to 128 characters in length.
      // - Cannot start with aliyun or acs:.
      // - Cannot contain http:// or https://.
      shared_ptr<string> key_ {};
      // The tag value.
      // Limits:
      // 
      // - Cannot be empty or an empty string.
      // - Can be up to 128 characters in length.
      // - Cannot contain http:// or https://.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->accessGroup_ == nullptr
        && this->accessPointName_ == nullptr && this->agenticSpaceId_ == nullptr && this->enabledRam_ == nullptr && this->fileSystemId_ == nullptr && this->ownerGroupId_ == nullptr
        && this->ownerUserId_ == nullptr && this->permission_ == nullptr && this->posixGroupId_ == nullptr && this->posixSecondaryGroupIds_ == nullptr && this->posixUserId_ == nullptr
        && this->rootDirectory_ == nullptr && this->tag_ == nullptr && this->vpcId_ == nullptr && this->vswId_ == nullptr; };
    // accessGroup Field Functions 
    bool hasAccessGroup() const { return this->accessGroup_ != nullptr;};
    void deleteAccessGroup() { this->accessGroup_ = nullptr;};
    inline string getAccessGroup() const { DARABONBA_PTR_GET_DEFAULT(accessGroup_, "") };
    inline CreateAccessPointRequest& setAccessGroup(string accessGroup) { DARABONBA_PTR_SET_VALUE(accessGroup_, accessGroup) };


    // accessPointName Field Functions 
    bool hasAccessPointName() const { return this->accessPointName_ != nullptr;};
    void deleteAccessPointName() { this->accessPointName_ = nullptr;};
    inline string getAccessPointName() const { DARABONBA_PTR_GET_DEFAULT(accessPointName_, "") };
    inline CreateAccessPointRequest& setAccessPointName(string accessPointName) { DARABONBA_PTR_SET_VALUE(accessPointName_, accessPointName) };


    // agenticSpaceId Field Functions 
    bool hasAgenticSpaceId() const { return this->agenticSpaceId_ != nullptr;};
    void deleteAgenticSpaceId() { this->agenticSpaceId_ = nullptr;};
    inline string getAgenticSpaceId() const { DARABONBA_PTR_GET_DEFAULT(agenticSpaceId_, "") };
    inline CreateAccessPointRequest& setAgenticSpaceId(string agenticSpaceId) { DARABONBA_PTR_SET_VALUE(agenticSpaceId_, agenticSpaceId) };


    // enabledRam Field Functions 
    bool hasEnabledRam() const { return this->enabledRam_ != nullptr;};
    void deleteEnabledRam() { this->enabledRam_ = nullptr;};
    inline bool getEnabledRam() const { DARABONBA_PTR_GET_DEFAULT(enabledRam_, false) };
    inline CreateAccessPointRequest& setEnabledRam(bool enabledRam) { DARABONBA_PTR_SET_VALUE(enabledRam_, enabledRam) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateAccessPointRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // ownerGroupId Field Functions 
    bool hasOwnerGroupId() const { return this->ownerGroupId_ != nullptr;};
    void deleteOwnerGroupId() { this->ownerGroupId_ = nullptr;};
    inline int32_t getOwnerGroupId() const { DARABONBA_PTR_GET_DEFAULT(ownerGroupId_, 0) };
    inline CreateAccessPointRequest& setOwnerGroupId(int32_t ownerGroupId) { DARABONBA_PTR_SET_VALUE(ownerGroupId_, ownerGroupId) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline int32_t getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, 0) };
    inline CreateAccessPointRequest& setOwnerUserId(int32_t ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline string getPermission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
    inline CreateAccessPointRequest& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


    // posixGroupId Field Functions 
    bool hasPosixGroupId() const { return this->posixGroupId_ != nullptr;};
    void deletePosixGroupId() { this->posixGroupId_ = nullptr;};
    inline int32_t getPosixGroupId() const { DARABONBA_PTR_GET_DEFAULT(posixGroupId_, 0) };
    inline CreateAccessPointRequest& setPosixGroupId(int32_t posixGroupId) { DARABONBA_PTR_SET_VALUE(posixGroupId_, posixGroupId) };


    // posixSecondaryGroupIds Field Functions 
    bool hasPosixSecondaryGroupIds() const { return this->posixSecondaryGroupIds_ != nullptr;};
    void deletePosixSecondaryGroupIds() { this->posixSecondaryGroupIds_ = nullptr;};
    inline string getPosixSecondaryGroupIds() const { DARABONBA_PTR_GET_DEFAULT(posixSecondaryGroupIds_, "") };
    inline CreateAccessPointRequest& setPosixSecondaryGroupIds(string posixSecondaryGroupIds) { DARABONBA_PTR_SET_VALUE(posixSecondaryGroupIds_, posixSecondaryGroupIds) };


    // posixUserId Field Functions 
    bool hasPosixUserId() const { return this->posixUserId_ != nullptr;};
    void deletePosixUserId() { this->posixUserId_ = nullptr;};
    inline int32_t getPosixUserId() const { DARABONBA_PTR_GET_DEFAULT(posixUserId_, 0) };
    inline CreateAccessPointRequest& setPosixUserId(int32_t posixUserId) { DARABONBA_PTR_SET_VALUE(posixUserId_, posixUserId) };


    // rootDirectory Field Functions 
    bool hasRootDirectory() const { return this->rootDirectory_ != nullptr;};
    void deleteRootDirectory() { this->rootDirectory_ = nullptr;};
    inline string getRootDirectory() const { DARABONBA_PTR_GET_DEFAULT(rootDirectory_, "") };
    inline CreateAccessPointRequest& setRootDirectory(string rootDirectory) { DARABONBA_PTR_SET_VALUE(rootDirectory_, rootDirectory) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateAccessPointRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateAccessPointRequest::Tag>) };
    inline vector<CreateAccessPointRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateAccessPointRequest::Tag>) };
    inline CreateAccessPointRequest& setTag(const vector<CreateAccessPointRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateAccessPointRequest& setTag(vector<CreateAccessPointRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateAccessPointRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswId Field Functions 
    bool hasVswId() const { return this->vswId_ != nullptr;};
    void deleteVswId() { this->vswId_ = nullptr;};
    inline string getVswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
    inline CreateAccessPointRequest& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


  protected:
    // The name of the permission group.
    // 
    // This parameter is required if the file system is a General-purpose NAS file system.
    // 
    // Default permission group: DEFAULT_VPC_GROUP_NAME (the default permission group for VPCs).
    // >Not supported for Agentic file systems.
    shared_ptr<string> accessGroup_ {};
    // The name of the access point.
    shared_ptr<string> accessPointName_ {};
    // The AgenticSpace ID.
    // >This parameter is required for Agentic file systems.
    shared_ptr<string> agenticSpaceId_ {};
    // Specifies whether to enable access point policy.
    // Valid values:
    // 
    // - true: enabled.
    // - false (default): not enabled.
    // 
    // > After you enable access point policy for the access point, all Resource Access Management (RAM) users are denied access to mount and access data through the access point by default. You must grant the corresponding access permissions through authorization and then mount and access the file system through the access point. After you disable access point policy, the access point allows anonymity mounting. For more information about how to configure access point permissions, see [Configure access point policies](https://help.aliyun.com/document_detail/2545998.html).
    // 
    // >For Agentic file systems, this parameter must be set to true.
    shared_ptr<bool> enabledRam_ {};
    // The file system ID.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The owner group ID.
    // 
    // This parameter is required if the RootDirectory directory does not exist.
    // >Not supported for Agentic file systems.
    shared_ptr<int32_t> ownerGroupId_ {};
    // The owner user ID.
    // 
    // This parameter is required if the RootDirectory directory does not exist.
    // >Not supported for Agentic file systems.
    shared_ptr<int32_t> ownerUserId_ {};
    // The POSIX permission. Default value: "0755". The value must be a four-digit octal number that starts with 0.
    // 
    // This parameter takes effect only after you specify the OwnerUserId and OwnerGroupId parameters.
    // >Not supported for Agentic file systems.
    shared_ptr<string> permission_ {};
    // The POSIX group ID.
    // >Not supported for Agentic file systems.
    shared_ptr<int32_t> posixGroupId_ {};
    // The secondary group IDs. Separate multiple group IDs with commas (,).
    // >Not supported for Agentic file systems.
    shared_ptr<string> posixSecondaryGroupIds_ {};
    // The POSIX user ID.
    // >Not supported for Agentic file systems.
    shared_ptr<int32_t> posixUserId_ {};
    // The root directory of the access point.
    // Default value: "/". If the access point directory does not exist, you must also specify the OwnerUserId and OwnerGroupId parameters.
    // >Supported only for Agentic file systems.
    shared_ptr<string> rootDirectory_ {};
    // The list of access point tags.
    shared_ptr<vector<CreateAccessPointRequest::Tag>> tag_ {};
    // The virtual private cloud (VPC) ID.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The vSwitch ID.
    // 
    // This parameter is required.
    shared_ptr<string> vswId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
