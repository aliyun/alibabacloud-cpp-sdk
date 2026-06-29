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
    virtual bool empty() const override { return this->accessGroupName_ == nullptr
        && this->fileSystemType_ == nullptr && this->ipv6SourceCidrIp_ == nullptr && this->priority_ == nullptr && this->RWAccessType_ == nullptr && this->sourceCidrIp_ == nullptr
        && this->userAccessType_ == nullptr; };
    // accessGroupName Field Functions 
    bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
    void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
    inline string getAccessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
    inline CreateAccessRuleRequest& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string getFileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline CreateAccessRuleRequest& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


    // ipv6SourceCidrIp Field Functions 
    bool hasIpv6SourceCidrIp() const { return this->ipv6SourceCidrIp_ != nullptr;};
    void deleteIpv6SourceCidrIp() { this->ipv6SourceCidrIp_ = nullptr;};
    inline string getIpv6SourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6SourceCidrIp_, "") };
    inline CreateAccessRuleRequest& setIpv6SourceCidrIp(string ipv6SourceCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6SourceCidrIp_, ipv6SourceCidrIp) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateAccessRuleRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // RWAccessType Field Functions 
    bool hasRWAccessType() const { return this->RWAccessType_ != nullptr;};
    void deleteRWAccessType() { this->RWAccessType_ = nullptr;};
    inline string getRWAccessType() const { DARABONBA_PTR_GET_DEFAULT(RWAccessType_, "") };
    inline CreateAccessRuleRequest& setRWAccessType(string RWAccessType) { DARABONBA_PTR_SET_VALUE(RWAccessType_, RWAccessType) };


    // sourceCidrIp Field Functions 
    bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
    void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
    inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
    inline CreateAccessRuleRequest& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    // userAccessType Field Functions 
    bool hasUserAccessType() const { return this->userAccessType_ != nullptr;};
    void deleteUserAccessType() { this->userAccessType_ = nullptr;};
    inline string getUserAccessType() const { DARABONBA_PTR_GET_DEFAULT(userAccessType_, "") };
    inline CreateAccessRuleRequest& setUserAccessType(string userAccessType) { DARABONBA_PTR_SET_VALUE(userAccessType_, userAccessType) };


  protected:
    // The name of the permission group.
    // 
    // This parameter is required.
    shared_ptr<string> accessGroupName_ {};
    // The type of the file system.
    // 
    // Valid values:
    // 
    // - standard (default): General-purpose NAS.
    // - extreme: Extreme NAS.
    shared_ptr<string> fileSystemType_ {};
    // The source IPv6 CIDR block.
    // 
    // The value supports CIDR format and IPv6 format address range.
    // 
    // > - The IPv6 feature is supported only by Extreme NAS file systems in regions in the Chinese mainland, and IPv6 must be enabled for the file system.
    // >- Only VPC networks are supported.
    // >- IPv4 and IPv6 are mutually exclusive.
    shared_ptr<string> ipv6SourceCidrIp_ {};
    // The priority of the permission rule.
    // 
    // If an authorized address matches multiple rules, the rule with the highest priority takes effect.
    // 
    // Valid values: 1 to 100. The value 1 indicates the highest priority.
    shared_ptr<int32_t> priority_ {};
    // The read and write permissions of the authorized address on the file system.
    // 
    // Valid values:
    // - RDWR (default): read and write.
    // - RDONLY: read-only.
    shared_ptr<string> RWAccessType_ {};
    // The IP address or CIDR block of the authorized address.
    // 
    // The value must be a single IP address or a CIDR block.
    // > Permission groups of the classic network type support only IP addresses.
    shared_ptr<string> sourceCidrIp_ {};
    // The access permissions of the system user of the authorized address on the file system.
    // 
    // Valid values:
    // - no_squash (default): allows access to the file system as the root user.
    // - root_squash: maps the root user to the nobody user when the root user accesses the file system.
    // - all_squash: maps all users to the nobody user regardless of the user identity.
    // 
    // The nobody user is a default user in Linux. The nobody user can access only public content on the server and has low privileges and high security. Authorization is required for the system user to access the file system.
    shared_ptr<string> userAccessType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
