// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class RdsEcsSecurityGroupRel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RdsEcsSecurityGroupRel& obj) { 
        DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
      };
      friend void from_json(const Darabonba::Json& j, RdsEcsSecurityGroupRel& obj) { 
        DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
      };
      RdsEcsSecurityGroupRel() = default ;
      RdsEcsSecurityGroupRel(const RdsEcsSecurityGroupRel &) = default ;
      RdsEcsSecurityGroupRel(RdsEcsSecurityGroupRel &&) = default ;
      RdsEcsSecurityGroupRel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RdsEcsSecurityGroupRel() = default ;
      RdsEcsSecurityGroupRel& operator=(const RdsEcsSecurityGroupRel &) = default ;
      RdsEcsSecurityGroupRel& operator=(RdsEcsSecurityGroupRel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->securityGroupName_ == nullptr; };
      // securityGroupName Field Functions 
      bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
      void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
      inline string getSecurityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
      inline RdsEcsSecurityGroupRel& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


    protected:
      // The name of the security group.
      shared_ptr<string> securityGroupName_ {};
    };

    virtual bool empty() const override { return this->backupDataSize_ == nullptr
        && this->backupLogSize_ == nullptr && this->backupSize_ == nullptr && this->dbInstanceStorage_ == nullptr && this->dbProxyInstanceName_ == nullptr && this->diskUsed_ == nullptr
        && this->instanceStorageType_ == nullptr && this->rdsEcsSecurityGroupRel_ == nullptr && this->region_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->securityIPList_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
    // backupDataSize Field Functions 
    bool hasBackupDataSize() const { return this->backupDataSize_ != nullptr;};
    void deleteBackupDataSize() { this->backupDataSize_ = nullptr;};
    inline int64_t getBackupDataSize() const { DARABONBA_PTR_GET_DEFAULT(backupDataSize_, 0L) };
    inline DescribeResourceDetailsResponseBody& setBackupDataSize(int64_t backupDataSize) { DARABONBA_PTR_SET_VALUE(backupDataSize_, backupDataSize) };


    // backupLogSize Field Functions 
    bool hasBackupLogSize() const { return this->backupLogSize_ != nullptr;};
    void deleteBackupLogSize() { this->backupLogSize_ = nullptr;};
    inline int64_t getBackupLogSize() const { DARABONBA_PTR_GET_DEFAULT(backupLogSize_, 0L) };
    inline DescribeResourceDetailsResponseBody& setBackupLogSize(int64_t backupLogSize) { DARABONBA_PTR_SET_VALUE(backupLogSize_, backupLogSize) };


    // backupSize Field Functions 
    bool hasBackupSize() const { return this->backupSize_ != nullptr;};
    void deleteBackupSize() { this->backupSize_ = nullptr;};
    inline int64_t getBackupSize() const { DARABONBA_PTR_GET_DEFAULT(backupSize_, 0L) };
    inline DescribeResourceDetailsResponseBody& setBackupSize(int64_t backupSize) { DARABONBA_PTR_SET_VALUE(backupSize_, backupSize) };


    // dbInstanceStorage Field Functions 
    bool hasDbInstanceStorage() const { return this->dbInstanceStorage_ != nullptr;};
    void deleteDbInstanceStorage() { this->dbInstanceStorage_ = nullptr;};
    inline int64_t getDbInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceStorage_, 0L) };
    inline DescribeResourceDetailsResponseBody& setDbInstanceStorage(int64_t dbInstanceStorage) { DARABONBA_PTR_SET_VALUE(dbInstanceStorage_, dbInstanceStorage) };


    // dbProxyInstanceName Field Functions 
    bool hasDbProxyInstanceName() const { return this->dbProxyInstanceName_ != nullptr;};
    void deleteDbProxyInstanceName() { this->dbProxyInstanceName_ = nullptr;};
    inline string getDbProxyInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbProxyInstanceName_, "") };
    inline DescribeResourceDetailsResponseBody& setDbProxyInstanceName(string dbProxyInstanceName) { DARABONBA_PTR_SET_VALUE(dbProxyInstanceName_, dbProxyInstanceName) };


    // diskUsed Field Functions 
    bool hasDiskUsed() const { return this->diskUsed_ != nullptr;};
    void deleteDiskUsed() { this->diskUsed_ = nullptr;};
    inline int64_t getDiskUsed() const { DARABONBA_PTR_GET_DEFAULT(diskUsed_, 0L) };
    inline DescribeResourceDetailsResponseBody& setDiskUsed(int64_t diskUsed) { DARABONBA_PTR_SET_VALUE(diskUsed_, diskUsed) };


    // instanceStorageType Field Functions 
    bool hasInstanceStorageType() const { return this->instanceStorageType_ != nullptr;};
    void deleteInstanceStorageType() { this->instanceStorageType_ = nullptr;};
    inline string getInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(instanceStorageType_, "") };
    inline DescribeResourceDetailsResponseBody& setInstanceStorageType(string instanceStorageType) { DARABONBA_PTR_SET_VALUE(instanceStorageType_, instanceStorageType) };


    // rdsEcsSecurityGroupRel Field Functions 
    bool hasRdsEcsSecurityGroupRel() const { return this->rdsEcsSecurityGroupRel_ != nullptr;};
    void deleteRdsEcsSecurityGroupRel() { this->rdsEcsSecurityGroupRel_ = nullptr;};
    inline const vector<DescribeResourceDetailsResponseBody::RdsEcsSecurityGroupRel> & getRdsEcsSecurityGroupRel() const { DARABONBA_PTR_GET_CONST(rdsEcsSecurityGroupRel_, vector<DescribeResourceDetailsResponseBody::RdsEcsSecurityGroupRel>) };
    inline vector<DescribeResourceDetailsResponseBody::RdsEcsSecurityGroupRel> getRdsEcsSecurityGroupRel() { DARABONBA_PTR_GET(rdsEcsSecurityGroupRel_, vector<DescribeResourceDetailsResponseBody::RdsEcsSecurityGroupRel>) };
    inline DescribeResourceDetailsResponseBody& setRdsEcsSecurityGroupRel(const vector<DescribeResourceDetailsResponseBody::RdsEcsSecurityGroupRel> & rdsEcsSecurityGroupRel) { DARABONBA_PTR_SET_VALUE(rdsEcsSecurityGroupRel_, rdsEcsSecurityGroupRel) };
    inline DescribeResourceDetailsResponseBody& setRdsEcsSecurityGroupRel(vector<DescribeResourceDetailsResponseBody::RdsEcsSecurityGroupRel> && rdsEcsSecurityGroupRel) { DARABONBA_PTR_SET_RVALUE(rdsEcsSecurityGroupRel_, rdsEcsSecurityGroupRel) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeResourceDetailsResponseBody& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeResourceDetailsResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline DescribeResourceDetailsResponseBody& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeResourceDetailsResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeResourceDetailsResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The storage that is occupied by data backup files, excluding archived backup files, on the instance. Unit: bytes.
    shared_ptr<int64_t> backupDataSize_ {};
    // The size of the backup log. Unit: bytes.
    shared_ptr<int64_t> backupLogSize_ {};
    // The size of the backup data. Unit: MB.
    shared_ptr<int64_t> backupSize_ {};
    // The disk capacity of the instance.
    shared_ptr<int64_t> dbInstanceStorage_ {};
    // The name of the proxy instance.
    shared_ptr<string> dbProxyInstanceName_ {};
    // The total storage used. The value is the sum of the DataSize and LogSize values. Unit: bytes. The value -1 indicates that no data files or log files are stored.
    shared_ptr<int64_t> diskUsed_ {};
    // The storage type of the instance.
    shared_ptr<string> instanceStorageType_ {};
    // The rule for the IP address whitelist of the instance.
    shared_ptr<vector<DescribeResourceDetailsResponseBody::RdsEcsSecurityGroupRel>> rdsEcsSecurityGroupRel_ {};
    // The region ID.
    shared_ptr<string> region_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The IP address whitelist of the instance. For more information, see [Configure IP address whitelists](https://help.aliyun.com/document_detail/43185.html). If the returned IP address whitelist contains more than one entry, these entries are separated with commas (,). Each entry is unique and up to 1,000 entries are returned. The entries in the IP address whitelist must be in one of the following formats:
    // 
    // *   IP addresses, such as 10.10.XX.XX.
    // *   CIDR blocks, such as 10.10.XX.XX/24. In this example, 24 indicates that the prefix of each IP address in the IP address whitelist is 24 bits in length. You can replace 24 with a value within the range of 1 to 32.
    // 
    // If this parameter is not specified, the default IP address whitelist is used.
    shared_ptr<string> securityIPList_ {};
    // The vSwitch ID.
    // 
    // >  The vSwitch must belong to the same zone as the instance.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the virtual private cloud (VPC).
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
