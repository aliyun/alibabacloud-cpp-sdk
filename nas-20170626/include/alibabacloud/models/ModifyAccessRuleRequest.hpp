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
        && return this->accessRuleId_ == nullptr && return this->fileSystemType_ == nullptr && return this->ipv6SourceCidrIp_ == nullptr && return this->priority_ == nullptr && return this->RWAccessType_ == nullptr
        && return this->sourceCidrIp_ == nullptr && return this->userAccessType_ == nullptr; };
    // accessGroupName Field Functions 
    bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
    void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
    inline string accessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
    inline ModifyAccessRuleRequest& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


    // accessRuleId Field Functions 
    bool hasAccessRuleId() const { return this->accessRuleId_ != nullptr;};
    void deleteAccessRuleId() { this->accessRuleId_ = nullptr;};
    inline string accessRuleId() const { DARABONBA_PTR_GET_DEFAULT(accessRuleId_, "") };
    inline ModifyAccessRuleRequest& setAccessRuleId(string accessRuleId) { DARABONBA_PTR_SET_VALUE(accessRuleId_, accessRuleId) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string fileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline ModifyAccessRuleRequest& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


    // ipv6SourceCidrIp Field Functions 
    bool hasIpv6SourceCidrIp() const { return this->ipv6SourceCidrIp_ != nullptr;};
    void deleteIpv6SourceCidrIp() { this->ipv6SourceCidrIp_ = nullptr;};
    inline string ipv6SourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6SourceCidrIp_, "") };
    inline ModifyAccessRuleRequest& setIpv6SourceCidrIp(string ipv6SourceCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6SourceCidrIp_, ipv6SourceCidrIp) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ModifyAccessRuleRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // RWAccessType Field Functions 
    bool hasRWAccessType() const { return this->RWAccessType_ != nullptr;};
    void deleteRWAccessType() { this->RWAccessType_ = nullptr;};
    inline string RWAccessType() const { DARABONBA_PTR_GET_DEFAULT(RWAccessType_, "") };
    inline ModifyAccessRuleRequest& setRWAccessType(string RWAccessType) { DARABONBA_PTR_SET_VALUE(RWAccessType_, RWAccessType) };


    // sourceCidrIp Field Functions 
    bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
    void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
    inline string sourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
    inline ModifyAccessRuleRequest& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    // userAccessType Field Functions 
    bool hasUserAccessType() const { return this->userAccessType_ != nullptr;};
    void deleteUserAccessType() { this->userAccessType_ = nullptr;};
    inline string userAccessType() const { DARABONBA_PTR_GET_DEFAULT(userAccessType_, "") };
    inline ModifyAccessRuleRequest& setUserAccessType(string userAccessType) { DARABONBA_PTR_SET_VALUE(userAccessType_, userAccessType) };


  protected:
    // The name of the permission group.
    // 
    // This parameter is required.
    std::shared_ptr<string> accessGroupName_ = nullptr;
    // The rule ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> accessRuleId_ = nullptr;
    // The type of the file system.
    // 
    // Valid values:
    // 
    // *   standard (default): General-purpose NAS file system.
    // *   extreme: Extreme NAS file system.
    std::shared_ptr<string> fileSystemType_ = nullptr;
    // The IPv6 address or CIDR block of the authorized object.
    // 
    // You must set this parameter to an IPv6 IP address or CIDR block.
    // 
    // > *   Only Extreme NAS file systems that reside in the China (Hohhot) region support IPv6.
    // >*   Only permission groups that reside in virtual private clouds (VPCs) support IPv6.
    // >*   This parameter is unavailable if you specify the SourceCidrIp parameter.
    std::shared_ptr<string> ipv6SourceCidrIp_ = nullptr;
    // The priority of the rule.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 1, which indicates the highest priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The access permissions of the authorized object on the file system.
    // 
    // Valid values:
    // 
    // *   RDWR (default): the read and write permissions.
    // *   RDONLY: the read-only permissions.
    std::shared_ptr<string> RWAccessType_ = nullptr;
    // The IP address or CIDR block of the authorized object.
    // 
    // You must set this parameter to an IP address or CIDR block.
    std::shared_ptr<string> sourceCidrIp_ = nullptr;
    // The access permissions for different types of users in the authorized object.
    // 
    // Valid values:
    // 
    // *   no_squash: allows access from root users to the file system.
    // *   root_squash: grants root users the least permissions as the nobody user.
    // *   all_squash: grants all users the least permissions as the nobody user.
    // 
    // The nobody user has the least permissions in Linux and can access only the public content of the file system. This ensures the security of the file system.
    std::shared_ptr<string> userAccessType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
