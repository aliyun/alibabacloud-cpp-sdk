// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCESSRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCESSRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ModifyAccessRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccessRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_TO_JSON(AccessRuleId, accessRuleId_);
      DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_TO_JSON(Ipv6SourceCidrIp, ipv6SourceCidrIp_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RWAccessType, RWAccessType_);
      DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_TO_JSON(UserAccessType, userAccessType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccessRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_FROM_JSON(AccessRuleId, accessRuleId_);
      DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_FROM_JSON(Ipv6SourceCidrIp, ipv6SourceCidrIp_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RWAccessType, RWAccessType_);
      DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_FROM_JSON(UserAccessType, userAccessType_);
    };
    ModifyAccessRuleRequest() = default ;
    ModifyAccessRuleRequest(const ModifyAccessRuleRequest &) = default ;
    ModifyAccessRuleRequest(ModifyAccessRuleRequest &&) = default ;
    ModifyAccessRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccessRuleRequest() = default ;
    ModifyAccessRuleRequest& operator=(const ModifyAccessRuleRequest &) = default ;
    ModifyAccessRuleRequest& operator=(ModifyAccessRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroupName_ == nullptr
        && this->accessRuleId_ == nullptr && this->fileSystemType_ == nullptr && this->ipv6SourceCidrIp_ == nullptr && this->priority_ == nullptr && this->RWAccessType_ == nullptr
        && this->sourceCidrIp_ == nullptr && this->userAccessType_ == nullptr; };
    // accessGroupName Field Functions 
    bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
    void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
    inline string getAccessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
    inline ModifyAccessRuleRequest& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


    // accessRuleId Field Functions 
    bool hasAccessRuleId() const { return this->accessRuleId_ != nullptr;};
    void deleteAccessRuleId() { this->accessRuleId_ = nullptr;};
    inline string getAccessRuleId() const { DARABONBA_PTR_GET_DEFAULT(accessRuleId_, "") };
    inline ModifyAccessRuleRequest& setAccessRuleId(string accessRuleId) { DARABONBA_PTR_SET_VALUE(accessRuleId_, accessRuleId) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string getFileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline ModifyAccessRuleRequest& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


    // ipv6SourceCidrIp Field Functions 
    bool hasIpv6SourceCidrIp() const { return this->ipv6SourceCidrIp_ != nullptr;};
    void deleteIpv6SourceCidrIp() { this->ipv6SourceCidrIp_ = nullptr;};
    inline string getIpv6SourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6SourceCidrIp_, "") };
    inline ModifyAccessRuleRequest& setIpv6SourceCidrIp(string ipv6SourceCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6SourceCidrIp_, ipv6SourceCidrIp) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ModifyAccessRuleRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // RWAccessType Field Functions 
    bool hasRWAccessType() const { return this->RWAccessType_ != nullptr;};
    void deleteRWAccessType() { this->RWAccessType_ = nullptr;};
    inline string getRWAccessType() const { DARABONBA_PTR_GET_DEFAULT(RWAccessType_, "") };
    inline ModifyAccessRuleRequest& setRWAccessType(string RWAccessType) { DARABONBA_PTR_SET_VALUE(RWAccessType_, RWAccessType) };


    // sourceCidrIp Field Functions 
    bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
    void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
    inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
    inline ModifyAccessRuleRequest& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    // userAccessType Field Functions 
    bool hasUserAccessType() const { return this->userAccessType_ != nullptr;};
    void deleteUserAccessType() { this->userAccessType_ = nullptr;};
    inline string getUserAccessType() const { DARABONBA_PTR_GET_DEFAULT(userAccessType_, "") };
    inline ModifyAccessRuleRequest& setUserAccessType(string userAccessType) { DARABONBA_PTR_SET_VALUE(userAccessType_, userAccessType) };


  protected:
    // The name of the permission group.
    // 
    // This parameter is required.
    shared_ptr<string> accessGroupName_ {};
    // The ID of the permission rule.
    // 
    // This parameter is required.
    shared_ptr<string> accessRuleId_ {};
    // The type of the file system.
    // 
    // Valid values:
    // 
    // - standard (default): General-purpose NAS.
    // - extreme: Extreme NAS.
    shared_ptr<string> fileSystemType_ {};
    // The source IPv6 CIDR block.
    // 
    // IPv6 addresses and CIDR blocks are supported.
    // 
    // > - Only Extreme NAS file systems in the China (Hohhot) region support IPv6 CIDR blocks.
    // > - Only VPCs are supported.
    // > - IPv4 and IPv6 are mutually exclusive. You cannot convert between the two types.
    // > - You must specify either SourceCidrIp or Ipv6SourceCidrIp. You cannot leave both parameters empty, and you cannot specify both parameters at the same time.
    shared_ptr<string> ipv6SourceCidrIp_ {};
    // The priority of the permission rule.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 1 (highest priority).
    shared_ptr<int32_t> priority_ {};
    // The read and write permission that the authorized object has on the file system.
    // 
    // Valid values:
    // 
    // - RDWR (default): read and write.
    // - RDONLY: read-only.
    shared_ptr<string> RWAccessType_ {};
    // The IP address or CIDR block.
    // 
    // The value must be a single IP address or a CIDR block.
    // 
    // > You must specify either SourceCidrIp or Ipv6SourceCidrIp. You cannot leave both parameters empty, and you cannot specify both parameters at the same time.
    shared_ptr<string> sourceCidrIp_ {};
    // The access permissions that the system user of the authorization object has on the file system.
    // 
    // Valid values:
    // 
    // - no_squash: allows access to the file system as the root user.
    // - root_squash: maps the root user to the nobody user when the root user accesses the file system.
    // - all_squash: maps all users to the nobody user regardless of the user identity used to access the file system.
    // 
    // The nobody user is a default user in Linux. This user can access only public content on the server and has low privileges and high security.
    shared_ptr<string> userAccessType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
