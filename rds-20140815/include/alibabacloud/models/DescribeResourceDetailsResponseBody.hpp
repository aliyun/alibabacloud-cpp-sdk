// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeResourceDetailsResponseBodyRdsEcsSecurityGroupRel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeResourceDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupDataSize, backupDataSize_);
      DARABONBA_PTR_TO_JSON(BackupLogSize, backupLogSize_);
      DARABONBA_PTR_TO_JSON(BackupSize, backupSize_);
      DARABONBA_PTR_TO_JSON(DbInstanceStorage, dbInstanceStorage_);
      DARABONBA_PTR_TO_JSON(DbProxyInstanceName, dbProxyInstanceName_);
      DARABONBA_PTR_TO_JSON(DiskUsed, diskUsed_);
      DARABONBA_PTR_TO_JSON(InstanceStorageType, instanceStorageType_);
      DARABONBA_PTR_TO_JSON(RdsEcsSecurityGroupRel, rdsEcsSecurityGroupRel_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupDataSize, backupDataSize_);
      DARABONBA_PTR_FROM_JSON(BackupLogSize, backupLogSize_);
      DARABONBA_PTR_FROM_JSON(BackupSize, backupSize_);
      DARABONBA_PTR_FROM_JSON(DbInstanceStorage, dbInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(DbProxyInstanceName, dbProxyInstanceName_);
      DARABONBA_PTR_FROM_JSON(DiskUsed, diskUsed_);
      DARABONBA_PTR_FROM_JSON(InstanceStorageType, instanceStorageType_);
      DARABONBA_PTR_FROM_JSON(RdsEcsSecurityGroupRel, rdsEcsSecurityGroupRel_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeResourceDetailsResponseBody() = default ;
    DescribeResourceDetailsResponseBody(const DescribeResourceDetailsResponseBody &) = default ;
    DescribeResourceDetailsResponseBody(DescribeResourceDetailsResponseBody &&) = default ;
    DescribeResourceDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceDetailsResponseBody() = default ;
    DescribeResourceDetailsResponseBody& operator=(const DescribeResourceDetailsResponseBody &) = default ;
    DescribeResourceDetailsResponseBody& operator=(DescribeResourceDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupDataSize_ == nullptr
        && return this->backupLogSize_ == nullptr && return this->backupSize_ == nullptr && return this->dbInstanceStorage_ == nullptr && return this->dbProxyInstanceName_ == nullptr && return this->diskUsed_ == nullptr
        && return this->instanceStorageType_ == nullptr && return this->rdsEcsSecurityGroupRel_ == nullptr && return this->region_ == nullptr && return this->requestId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->securityIPList_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // backupDataSize Field Functions 
    bool hasBackupDataSize() const { return this->backupDataSize_ != nullptr;};
    void deleteBackupDataSize() { this->backupDataSize_ = nullptr;};
    inline int64_t backupDataSize() const { DARABONBA_PTR_GET_DEFAULT(backupDataSize_, 0L) };
    inline DescribeResourceDetailsResponseBody& setBackupDataSize(int64_t backupDataSize) { DARABONBA_PTR_SET_VALUE(backupDataSize_, backupDataSize) };


    // backupLogSize Field Functions 
    bool hasBackupLogSize() const { return this->backupLogSize_ != nullptr;};
    void deleteBackupLogSize() { this->backupLogSize_ = nullptr;};
    inline int64_t backupLogSize() const { DARABONBA_PTR_GET_DEFAULT(backupLogSize_, 0L) };
    inline DescribeResourceDetailsResponseBody& setBackupLogSize(int64_t backupLogSize) { DARABONBA_PTR_SET_VALUE(backupLogSize_, backupLogSize) };


    // backupSize Field Functions 
    bool hasBackupSize() const { return this->backupSize_ != nullptr;};
    void deleteBackupSize() { this->backupSize_ = nullptr;};
    inline int64_t backupSize() const { DARABONBA_PTR_GET_DEFAULT(backupSize_, 0L) };
    inline DescribeResourceDetailsResponseBody& setBackupSize(int64_t backupSize) { DARABONBA_PTR_SET_VALUE(backupSize_, backupSize) };


    // dbInstanceStorage Field Functions 
    bool hasDbInstanceStorage() const { return this->dbInstanceStorage_ != nullptr;};
    void deleteDbInstanceStorage() { this->dbInstanceStorage_ = nullptr;};
    inline int64_t dbInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceStorage_, 0L) };
    inline DescribeResourceDetailsResponseBody& setDbInstanceStorage(int64_t dbInstanceStorage) { DARABONBA_PTR_SET_VALUE(dbInstanceStorage_, dbInstanceStorage) };


    // dbProxyInstanceName Field Functions 
    bool hasDbProxyInstanceName() const { return this->dbProxyInstanceName_ != nullptr;};
    void deleteDbProxyInstanceName() { this->dbProxyInstanceName_ = nullptr;};
    inline string dbProxyInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbProxyInstanceName_, "") };
    inline DescribeResourceDetailsResponseBody& setDbProxyInstanceName(string dbProxyInstanceName) { DARABONBA_PTR_SET_VALUE(dbProxyInstanceName_, dbProxyInstanceName) };


    // diskUsed Field Functions 
    bool hasDiskUsed() const { return this->diskUsed_ != nullptr;};
    void deleteDiskUsed() { this->diskUsed_ = nullptr;};
    inline int64_t diskUsed() const { DARABONBA_PTR_GET_DEFAULT(diskUsed_, 0L) };
    inline DescribeResourceDetailsResponseBody& setDiskUsed(int64_t diskUsed) { DARABONBA_PTR_SET_VALUE(diskUsed_, diskUsed) };


    // instanceStorageType Field Functions 
    bool hasInstanceStorageType() const { return this->instanceStorageType_ != nullptr;};
    void deleteInstanceStorageType() { this->instanceStorageType_ = nullptr;};
    inline string instanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(instanceStorageType_, "") };
    inline DescribeResourceDetailsResponseBody& setInstanceStorageType(string instanceStorageType) { DARABONBA_PTR_SET_VALUE(instanceStorageType_, instanceStorageType) };


    // rdsEcsSecurityGroupRel Field Functions 
    bool hasRdsEcsSecurityGroupRel() const { return this->rdsEcsSecurityGroupRel_ != nullptr;};
    void deleteRdsEcsSecurityGroupRel() { this->rdsEcsSecurityGroupRel_ = nullptr;};
    inline const vector<DescribeResourceDetailsResponseBodyRdsEcsSecurityGroupRel> & rdsEcsSecurityGroupRel() const { DARABONBA_PTR_GET_CONST(rdsEcsSecurityGroupRel_, vector<DescribeResourceDetailsResponseBodyRdsEcsSecurityGroupRel>) };
    inline vector<DescribeResourceDetailsResponseBodyRdsEcsSecurityGroupRel> rdsEcsSecurityGroupRel() { DARABONBA_PTR_GET(rdsEcsSecurityGroupRel_, vector<DescribeResourceDetailsResponseBodyRdsEcsSecurityGroupRel>) };
    inline DescribeResourceDetailsResponseBody& setRdsEcsSecurityGroupRel(const vector<DescribeResourceDetailsResponseBodyRdsEcsSecurityGroupRel> & rdsEcsSecurityGroupRel) { DARABONBA_PTR_SET_VALUE(rdsEcsSecurityGroupRel_, rdsEcsSecurityGroupRel) };
    inline DescribeResourceDetailsResponseBody& setRdsEcsSecurityGroupRel(vector<DescribeResourceDetailsResponseBodyRdsEcsSecurityGroupRel> && rdsEcsSecurityGroupRel) { DARABONBA_PTR_SET_RVALUE(rdsEcsSecurityGroupRel_, rdsEcsSecurityGroupRel) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeResourceDetailsResponseBody& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeResourceDetailsResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline DescribeResourceDetailsResponseBody& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeResourceDetailsResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeResourceDetailsResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The storage that is occupied by data backup files, excluding archived backup files, on the instance. Unit: bytes.
    std::shared_ptr<int64_t> backupDataSize_ = nullptr;
    // The size of the backup log. Unit: bytes.
    std::shared_ptr<int64_t> backupLogSize_ = nullptr;
    // The size of the backup data. Unit: MB.
    std::shared_ptr<int64_t> backupSize_ = nullptr;
    // The disk capacity of the instance.
    std::shared_ptr<int64_t> dbInstanceStorage_ = nullptr;
    // The name of the proxy instance.
    std::shared_ptr<string> dbProxyInstanceName_ = nullptr;
    // The total storage used. The value is the sum of the DataSize and LogSize values. Unit: bytes. The value -1 indicates that no data files or log files are stored.
    std::shared_ptr<int64_t> diskUsed_ = nullptr;
    // The storage type of the instance.
    std::shared_ptr<string> instanceStorageType_ = nullptr;
    // The rule for the IP address whitelist of the instance.
    std::shared_ptr<vector<DescribeResourceDetailsResponseBodyRdsEcsSecurityGroupRel>> rdsEcsSecurityGroupRel_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The IP address whitelist of the instance. For more information, see [Configure IP address whitelists](https://help.aliyun.com/document_detail/43185.html). If the returned IP address whitelist contains more than one entry, these entries are separated with commas (,). Each entry is unique and up to 1,000 entries are returned. The entries in the IP address whitelist must be in one of the following formats:
    // 
    // *   IP addresses, such as 10.10.XX.XX.
    // *   CIDR blocks, such as 10.10.XX.XX/24. In this example, 24 indicates that the prefix of each IP address in the IP address whitelist is 24 bits in length. You can replace 24 with a value within the range of 1 to 32.
    // 
    // If this parameter is not specified, the default IP address whitelist is used.
    std::shared_ptr<string> securityIPList_ = nullptr;
    // The vSwitch ID.
    // 
    // >  The vSwitch must belong to the same zone as the instance.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
