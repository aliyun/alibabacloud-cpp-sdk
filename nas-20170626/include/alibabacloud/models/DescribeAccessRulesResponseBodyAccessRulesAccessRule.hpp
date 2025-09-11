// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSRULESRESPONSEBODYACCESSRULESACCESSRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSRULESRESPONSEBODYACCESSRULESACCESSRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeAccessRulesResponseBodyAccessRulesAccessRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessRulesResponseBodyAccessRulesAccessRule& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_TO_JSON(AccessRuleId, accessRuleId_);
      DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_TO_JSON(Ipv6SourceCidrIp, ipv6SourceCidrIp_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RWAccess, RWAccess_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_TO_JSON(UserAccess, userAccess_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessRulesResponseBodyAccessRulesAccessRule& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_FROM_JSON(AccessRuleId, accessRuleId_);
      DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_FROM_JSON(Ipv6SourceCidrIp, ipv6SourceCidrIp_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RWAccess, RWAccess_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_FROM_JSON(UserAccess, userAccess_);
    };
    DescribeAccessRulesResponseBodyAccessRulesAccessRule() = default ;
    DescribeAccessRulesResponseBodyAccessRulesAccessRule(const DescribeAccessRulesResponseBodyAccessRulesAccessRule &) = default ;
    DescribeAccessRulesResponseBodyAccessRulesAccessRule(DescribeAccessRulesResponseBodyAccessRulesAccessRule &&) = default ;
    DescribeAccessRulesResponseBodyAccessRulesAccessRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessRulesResponseBodyAccessRulesAccessRule() = default ;
    DescribeAccessRulesResponseBodyAccessRulesAccessRule& operator=(const DescribeAccessRulesResponseBodyAccessRulesAccessRule &) = default ;
    DescribeAccessRulesResponseBodyAccessRulesAccessRule& operator=(DescribeAccessRulesResponseBodyAccessRulesAccessRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessGroupName_ != nullptr
        && this->accessRuleId_ != nullptr && this->fileSystemType_ != nullptr && this->ipv6SourceCidrIp_ != nullptr && this->priority_ != nullptr && this->RWAccess_ != nullptr
        && this->regionId_ != nullptr && this->sourceCidrIp_ != nullptr && this->userAccess_ != nullptr; };
    // accessGroupName Field Functions 
    bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
    void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
    inline string accessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
    inline DescribeAccessRulesResponseBodyAccessRulesAccessRule& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


    // accessRuleId Field Functions 
    bool hasAccessRuleId() const { return this->accessRuleId_ != nullptr;};
    void deleteAccessRuleId() { this->accessRuleId_ = nullptr;};
    inline string accessRuleId() const { DARABONBA_PTR_GET_DEFAULT(accessRuleId_, "") };
    inline DescribeAccessRulesResponseBodyAccessRulesAccessRule& setAccessRuleId(string accessRuleId) { DARABONBA_PTR_SET_VALUE(accessRuleId_, accessRuleId) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string fileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline DescribeAccessRulesResponseBodyAccessRulesAccessRule& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


    // ipv6SourceCidrIp Field Functions 
    bool hasIpv6SourceCidrIp() const { return this->ipv6SourceCidrIp_ != nullptr;};
    void deleteIpv6SourceCidrIp() { this->ipv6SourceCidrIp_ = nullptr;};
    inline string ipv6SourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6SourceCidrIp_, "") };
    inline DescribeAccessRulesResponseBodyAccessRulesAccessRule& setIpv6SourceCidrIp(string ipv6SourceCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6SourceCidrIp_, ipv6SourceCidrIp) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline DescribeAccessRulesResponseBodyAccessRulesAccessRule& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // RWAccess Field Functions 
    bool hasRWAccess() const { return this->RWAccess_ != nullptr;};
    void deleteRWAccess() { this->RWAccess_ = nullptr;};
    inline string RWAccess() const { DARABONBA_PTR_GET_DEFAULT(RWAccess_, "") };
    inline DescribeAccessRulesResponseBodyAccessRulesAccessRule& setRWAccess(string RWAccess) { DARABONBA_PTR_SET_VALUE(RWAccess_, RWAccess) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAccessRulesResponseBodyAccessRulesAccessRule& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sourceCidrIp Field Functions 
    bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
    void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
    inline string sourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
    inline DescribeAccessRulesResponseBodyAccessRulesAccessRule& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    // userAccess Field Functions 
    bool hasUserAccess() const { return this->userAccess_ != nullptr;};
    void deleteUserAccess() { this->userAccess_ = nullptr;};
    inline string userAccess() const { DARABONBA_PTR_GET_DEFAULT(userAccess_, "") };
    inline DescribeAccessRulesResponseBodyAccessRulesAccessRule& setUserAccess(string userAccess) { DARABONBA_PTR_SET_VALUE(userAccess_, userAccess) };


  protected:
    // The name of the permission group.
    std::shared_ptr<string> accessGroupName_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<string> accessRuleId_ = nullptr;
    // The type of the file system.
    // 
    // Valid values:
    // 
    // *   standard: General-purpose File Storage NAS (NAS) file system
    // *   extreme: Extreme NAS file system
    std::shared_ptr<string> fileSystemType_ = nullptr;
    // The IPv6 address or CIDR block of the authorized object.
    std::shared_ptr<string> ipv6SourceCidrIp_ = nullptr;
    // The priority of the rule.
    // 
    // If multiple rules are attached to the authorized object, the rule with the highest priority takes effect.
    // 
    // Valid values: 1 to 100. The value 1 indicates the highest priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The access permissions of the authorized object on the file system.
    // 
    // Valid values:
    // 
    // *   RDWR (default): the read and write permissions
    // *   RDONLY: the read-only permissions
    std::shared_ptr<string> RWAccess_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The IP address or CIDR block of the authorized object.
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
    std::shared_ptr<string> userAccess_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
