// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMOUNTTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMOUNTTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateMountTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMountTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMountTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateMountTargetRequest() = default ;
    CreateMountTargetRequest(const CreateMountTargetRequest &) = default ;
    CreateMountTargetRequest(CreateMountTargetRequest &&) = default ;
    CreateMountTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMountTargetRequest() = default ;
    CreateMountTargetRequest& operator=(const CreateMountTargetRequest &) = default ;
    CreateMountTargetRequest& operator=(CreateMountTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroupName_ == nullptr
        && this->dryRun_ == nullptr && this->enableIpv6_ == nullptr && this->fileSystemId_ == nullptr && this->networkType_ == nullptr && this->securityGroupId_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
    // accessGroupName Field Functions 
    bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
    void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
    inline string getAccessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
    inline CreateMountTargetRequest& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateMountTargetRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // enableIpv6 Field Functions 
    bool hasEnableIpv6() const { return this->enableIpv6_ != nullptr;};
    void deleteEnableIpv6() { this->enableIpv6_ = nullptr;};
    inline bool getEnableIpv6() const { DARABONBA_PTR_GET_DEFAULT(enableIpv6_, false) };
    inline CreateMountTargetRequest& setEnableIpv6(bool enableIpv6) { DARABONBA_PTR_SET_VALUE(enableIpv6_, enableIpv6) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateMountTargetRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateMountTargetRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateMountTargetRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateMountTargetRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateMountTargetRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The name of the permission group.
    // 
    // This parameter is required if the file system is a General-purpose NAS or Extreme NAS file system.
    // 
    // Default permission group: DEFAULT_VPC_GROUP_NAME (the default permission group for VPCs).
    shared_ptr<string> accessGroupName_ {};
    // Specifies whether to check for existing mount targets. Only CPFS file systems are supported.
    // 
    // A dry run checks parameter validity and inventory without actually creating a mount target or incurring fees.
    // 
    // - true: sends a dry run request without creating a mount target. The check items include required parameters, request format, business limits, and CPFS inventory. If the check fails, the corresponding error is returned. If the check passes, `200 HttpCode` is returned, but `MountTargetDomain` is empty.
    // - false (default): sends a normal request. After the check passes, a mount target is created.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to create an IPv6 mount target.
    // 
    // Valid values:
    // 
    // - true: creates an IPv6 mount target.
    // - false (default): does not create an IPv6 mount target.
    // 
    // > IPv6 is supported only by Extreme NAS file systems in all regions in the Chinese mainland. The file system must have IPv6 enabled.
    shared_ptr<bool> enableIpv6_ {};
    // The file system ID.
    // 
    // - General-purpose NAS: 31a8e4\\*\\*\\*\\*.
    // 
    // - Extreme NAS: The ID must start with `extreme-`, such as extreme-0015\\*\\*\\*\\*.
    // 
    // - Cloud Parallel File Storage (CPFS): The ID must start with `cpfs-`, such as cpfs-125487\\*\\*\\*\\*.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The network type of the mount target. Set the value to **Vpc**, which indicates a virtual private cloud (VPC).
    // 
    // This parameter is required.
    shared_ptr<string> networkType_ {};
    // The security group ID.
    shared_ptr<string> securityGroupId_ {};
    // The vSwitch ID.
    // 
    // This parameter is required and valid only when the network type is VPC.
    // For example:
    // If NetworkType is set to VPC, VSwitchId is required.
    shared_ptr<string> vSwitchId_ {};
    // The VPC ID.
    // 
    // This parameter is required and valid only when the network type is VPC.
    // For example:
    // If NetworkType is set to VPC, VpcId is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
