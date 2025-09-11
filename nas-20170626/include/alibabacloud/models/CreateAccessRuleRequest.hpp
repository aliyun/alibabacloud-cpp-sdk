// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCESSRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCESSRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateAccessRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccessRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_TO_JSON(Ipv6SourceCidrIp, ipv6SourceCidrIp_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RWAccessType, RWAccessType_);
      DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_TO_JSON(UserAccessType, userAccessType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccessRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_FROM_JSON(Ipv6SourceCidrIp, ipv6SourceCidrIp_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RWAccessType, RWAccessType_);
      DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_FROM_JSON(UserAccessType, userAccessType_);
    };
    CreateAccessRuleRequest() = default ;
    CreateAccessRuleRequest(const CreateAccessRuleRequest &) = default ;
    CreateAccessRuleRequest(CreateAccessRuleRequest &&) = default ;
    CreateAccessRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccessRuleRequest() = default ;
    CreateAccessRuleRequest& operator=(const CreateAccessRuleRequest &) = default ;
    CreateAccessRuleRequest& operator=(CreateAccessRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessGroupName_ != nullptr
        && this->fileSystemType_ != nullptr && this->ipv6SourceCidrIp_ != nullptr && this->priority_ != nullptr && this->RWAccessType_ != nullptr && this->sourceCidrIp_ != nullptr
        && this->userAccessType_ != nullptr; };
    // accessGroupName Field Functions 
    bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
    void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
    inline string accessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
    inline CreateAccessRuleRequest& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string fileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline CreateAccessRuleRequest& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


    // ipv6SourceCidrIp Field Functions 
    bool hasIpv6SourceCidrIp() const { return this->ipv6SourceCidrIp_ != nullptr;};
    void deleteIpv6SourceCidrIp() { this->ipv6SourceCidrIp_ = nullptr;};
    inline string ipv6SourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6SourceCidrIp_, "") };
    inline CreateAccessRuleRequest& setIpv6SourceCidrIp(string ipv6SourceCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6SourceCidrIp_, ipv6SourceCidrIp) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateAccessRuleRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // RWAccessType Field Functions 
    bool hasRWAccessType() const { return this->RWAccessType_ != nullptr;};
    void deleteRWAccessType() { this->RWAccessType_ = nullptr;};
    inline string RWAccessType() const { DARABONBA_PTR_GET_DEFAULT(RWAccessType_, "") };
    inline CreateAccessRuleRequest& setRWAccessType(string RWAccessType) { DARABONBA_PTR_SET_VALUE(RWAccessType_, RWAccessType) };


    // sourceCidrIp Field Functions 
    bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
    void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
    inline string sourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
    inline CreateAccessRuleRequest& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    // userAccessType Field Functions 
    bool hasUserAccessType() const { return this->userAccessType_ != nullptr;};
    void deleteUserAccessType() { this->userAccessType_ = nullptr;};
    inline string userAccessType() const { DARABONBA_PTR_GET_DEFAULT(userAccessType_, "") };
    inline CreateAccessRuleRequest& setUserAccessType(string userAccessType) { DARABONBA_PTR_SET_VALUE(userAccessType_, userAccessType) };


  protected:
    // The name of the permission group.
    // 
    // This parameter is required.
    std::shared_ptr<string> accessGroupName_ = nullptr;
    // The type of the file system.
    // 
    // Valid values:
    // 
    // *   standard (default): General-purpose NAS file system
    // *   extreme: Extreme NAS file system
    std::shared_ptr<string> fileSystemType_ = nullptr;
    // The IPv6 address or CIDR block of the authorized object.
    // 
    // You must set this parameter to an IPv6 address or CIDR block.
    // 
    // > *   Only Extreme NAS file systems that reside in the Chinese mainland support IPv6. If you specify this parameter, you must enable IPv6 for the file system.
    // >*   Only permission groups that reside in virtual private clouds (VPCs) support IPv6.
    // >*   You cannot specify an IPv4 address and an IPv6 address at the same time.
    std::shared_ptr<string> ipv6SourceCidrIp_ = nullptr;
    // The priority of the rule.
    // 
    // The rule with the highest priority takes effect if multiple rules are attached to the authorized object.
    // 
    // Valid values: 1 to 100. The value 1 indicates the highest priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The access permissions of the authorized object on the file system.
    // 
    // Valid values:
    // 
    // *   RDWR (default): the read and write permissions
    // *   RDONLY: the read-only permissions
    std::shared_ptr<string> RWAccessType_ = nullptr;
    // The IP address or CIDR block of the authorized object.
    // 
    // You must set this parameter to an IP address or CIDR block.
    // 
    // > If the permission group resides in the classic network, you must set this parameter to an IP address.
    std::shared_ptr<string> sourceCidrIp_ = nullptr;
    // The access permissions for different types of users in the authorized object.
    // 
    // Valid values:
    // 
    // *   no_squash (default): grants root users the permissions to access the file system.
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
