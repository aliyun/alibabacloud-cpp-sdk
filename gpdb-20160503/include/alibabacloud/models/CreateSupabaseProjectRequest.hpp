// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUPABASEPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESUPABASEPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateSupabaseProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSupabaseProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DiskPerformanceLevel, diskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(ProjectSpec, projectSpec_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSupabaseProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DiskPerformanceLevel, diskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(ProjectSpec, projectSpec_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateSupabaseProjectRequest() = default ;
    CreateSupabaseProjectRequest(const CreateSupabaseProjectRequest &) = default ;
    CreateSupabaseProjectRequest(CreateSupabaseProjectRequest &&) = default ;
    CreateSupabaseProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSupabaseProjectRequest() = default ;
    CreateSupabaseProjectRequest& operator=(const CreateSupabaseProjectRequest &) = default ;
    CreateSupabaseProjectRequest& operator=(CreateSupabaseProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountPassword_ == nullptr
        && return this->clientToken_ == nullptr && return this->diskPerformanceLevel_ == nullptr && return this->projectName_ == nullptr && return this->projectSpec_ == nullptr && return this->regionId_ == nullptr
        && return this->securityIPList_ == nullptr && return this->storageSize_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // accountPassword Field Functions 
    bool hasAccountPassword() const { return this->accountPassword_ != nullptr;};
    void deleteAccountPassword() { this->accountPassword_ = nullptr;};
    inline string accountPassword() const { DARABONBA_PTR_GET_DEFAULT(accountPassword_, "") };
    inline CreateSupabaseProjectRequest& setAccountPassword(string accountPassword) { DARABONBA_PTR_SET_VALUE(accountPassword_, accountPassword) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSupabaseProjectRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // diskPerformanceLevel Field Functions 
    bool hasDiskPerformanceLevel() const { return this->diskPerformanceLevel_ != nullptr;};
    void deleteDiskPerformanceLevel() { this->diskPerformanceLevel_ = nullptr;};
    inline string diskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(diskPerformanceLevel_, "") };
    inline CreateSupabaseProjectRequest& setDiskPerformanceLevel(string diskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(diskPerformanceLevel_, diskPerformanceLevel) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateSupabaseProjectRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // projectSpec Field Functions 
    bool hasProjectSpec() const { return this->projectSpec_ != nullptr;};
    void deleteProjectSpec() { this->projectSpec_ = nullptr;};
    inline string projectSpec() const { DARABONBA_PTR_GET_DEFAULT(projectSpec_, "") };
    inline CreateSupabaseProjectRequest& setProjectSpec(string projectSpec) { DARABONBA_PTR_SET_VALUE(projectSpec_, projectSpec) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSupabaseProjectRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline CreateSupabaseProjectRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int64_t storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
    inline CreateSupabaseProjectRequest& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateSupabaseProjectRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateSupabaseProjectRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateSupabaseProjectRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The password of the initial account.
    // 
    // *   The password must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    // *   Special characters include `! @ # $ % ^ & * ( ) _ + - =`
    // *   The password must be 8 to 32 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountPassword_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/327176.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The performance level of Enterprise SSDs (ESSDs). Default value: PL0. Valid values:
    // 
    // *   PL0
    // *   PL1
    std::shared_ptr<string> diskPerformanceLevel_ = nullptr;
    // The name of the Supabase project. The name must meet the following requirements:
    // 
    // *   The name must be 1 to 128 characters in length.
    // *   The name can contain only letters, digits, hyphens (-), and underscores (_).
    // *   The name must start with a letter or an underscore (_).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The specifications of the Supabase project. Default value: 1C1G.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectSpec_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The IP address whitelist.
    // 
    // A value of 127.0.0.1 denies access from any external IP address. You can call the [ModifySecurityIps](https://help.aliyun.com/document_detail/86928.html) operation to modify the IP address whitelist after you create a project.
    // 
    // This parameter is required.
    std::shared_ptr<string> securityIPList_ = nullptr;
    // The storage size. Unit: GB. Default value: 1.
    std::shared_ptr<int64_t> storageSize_ = nullptr;
    // The vSwitch ID.
    // 
    // > 
    // 
    // *   **This parameter** must be specified.
    // 
    // *   The zone where the **vSwitch** resides must be the same as the zone that is specified by **ZoneId**.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The virtual private cloud (VPC) ID.
    // 
    // > 
    // 
    // *   You can call the [DescribeRdsVpcs](https://help.aliyun.com/document_detail/208327.html) operation to query the available VPC IDs.
    // 
    // *   This parameter must be specified.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The zone ID.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the most recent zone list.
    // 
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
