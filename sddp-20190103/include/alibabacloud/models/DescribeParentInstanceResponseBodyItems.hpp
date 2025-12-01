// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARENTINSTANCERESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARENTINSTANCERESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeParentInstanceResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParentInstanceResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_TO_JSON(AuthStatus, authStatus_);
      DARABONBA_PTR_TO_JSON(AuthTime, authTime_);
      DARABONBA_PTR_TO_JSON(ClusterStatus, clusterStatus_);
      DARABONBA_PTR_TO_JSON(ConnectNode, connectNode_);
      DARABONBA_PTR_TO_JSON(DbNum, dbNum_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceSize, instanceSize_);
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(MemberAccount, memberAccount_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SupportConnectNodes, supportConnectNodes_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TenantName, tenantName_);
      DARABONBA_PTR_TO_JSON(UnConnectDbCount, unConnectDbCount_);
      DARABONBA_PTR_TO_JSON(UnSupportOneClickAuthReason, unSupportOneClickAuthReason_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParentInstanceResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_FROM_JSON(AuthStatus, authStatus_);
      DARABONBA_PTR_FROM_JSON(AuthTime, authTime_);
      DARABONBA_PTR_FROM_JSON(ClusterStatus, clusterStatus_);
      DARABONBA_PTR_FROM_JSON(ConnectNode, connectNode_);
      DARABONBA_PTR_FROM_JSON(DbNum, dbNum_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceSize, instanceSize_);
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(MemberAccount, memberAccount_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SupportConnectNodes, supportConnectNodes_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TenantName, tenantName_);
      DARABONBA_PTR_FROM_JSON(UnConnectDbCount, unConnectDbCount_);
      DARABONBA_PTR_FROM_JSON(UnSupportOneClickAuthReason, unSupportOneClickAuthReason_);
    };
    DescribeParentInstanceResponseBodyItems() = default ;
    DescribeParentInstanceResponseBodyItems(const DescribeParentInstanceResponseBodyItems &) = default ;
    DescribeParentInstanceResponseBodyItems(DescribeParentInstanceResponseBodyItems &&) = default ;
    DescribeParentInstanceResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParentInstanceResponseBodyItems() = default ;
    DescribeParentInstanceResponseBodyItems& operator=(const DescribeParentInstanceResponseBodyItems &) = default ;
    DescribeParentInstanceResponseBodyItems& operator=(DescribeParentInstanceResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditStatus_ == nullptr
        && return this->authStatus_ == nullptr && return this->authTime_ == nullptr && return this->clusterStatus_ == nullptr && return this->connectNode_ == nullptr && return this->dbNum_ == nullptr
        && return this->engineType_ == nullptr && return this->instanceDescription_ == nullptr && return this->instanceId_ == nullptr && return this->instanceSize_ == nullptr && return this->localName_ == nullptr
        && return this->memberAccount_ == nullptr && return this->parentId_ == nullptr && return this->regionId_ == nullptr && return this->resourceType_ == nullptr && return this->supportConnectNodes_ == nullptr
        && return this->tenantId_ == nullptr && return this->tenantName_ == nullptr && return this->unConnectDbCount_ == nullptr && return this->unSupportOneClickAuthReason_ == nullptr; };
    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline int32_t auditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, 0) };
    inline DescribeParentInstanceResponseBodyItems& setAuditStatus(int32_t auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // authStatus Field Functions 
    bool hasAuthStatus() const { return this->authStatus_ != nullptr;};
    void deleteAuthStatus() { this->authStatus_ = nullptr;};
    inline int32_t authStatus() const { DARABONBA_PTR_GET_DEFAULT(authStatus_, 0) };
    inline DescribeParentInstanceResponseBodyItems& setAuthStatus(int32_t authStatus) { DARABONBA_PTR_SET_VALUE(authStatus_, authStatus) };


    // authTime Field Functions 
    bool hasAuthTime() const { return this->authTime_ != nullptr;};
    void deleteAuthTime() { this->authTime_ = nullptr;};
    inline int64_t authTime() const { DARABONBA_PTR_GET_DEFAULT(authTime_, 0L) };
    inline DescribeParentInstanceResponseBodyItems& setAuthTime(int64_t authTime) { DARABONBA_PTR_SET_VALUE(authTime_, authTime) };


    // clusterStatus Field Functions 
    bool hasClusterStatus() const { return this->clusterStatus_ != nullptr;};
    void deleteClusterStatus() { this->clusterStatus_ = nullptr;};
    inline string clusterStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterStatus_, "") };
    inline DescribeParentInstanceResponseBodyItems& setClusterStatus(string clusterStatus) { DARABONBA_PTR_SET_VALUE(clusterStatus_, clusterStatus) };


    // connectNode Field Functions 
    bool hasConnectNode() const { return this->connectNode_ != nullptr;};
    void deleteConnectNode() { this->connectNode_ = nullptr;};
    inline string connectNode() const { DARABONBA_PTR_GET_DEFAULT(connectNode_, "") };
    inline DescribeParentInstanceResponseBodyItems& setConnectNode(string connectNode) { DARABONBA_PTR_SET_VALUE(connectNode_, connectNode) };


    // dbNum Field Functions 
    bool hasDbNum() const { return this->dbNum_ != nullptr;};
    void deleteDbNum() { this->dbNum_ = nullptr;};
    inline string dbNum() const { DARABONBA_PTR_GET_DEFAULT(dbNum_, "") };
    inline DescribeParentInstanceResponseBodyItems& setDbNum(string dbNum) { DARABONBA_PTR_SET_VALUE(dbNum_, dbNum) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline DescribeParentInstanceResponseBodyItems& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // instanceDescription Field Functions 
    bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
    void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
    inline string instanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
    inline DescribeParentInstanceResponseBodyItems& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeParentInstanceResponseBodyItems& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceSize Field Functions 
    bool hasInstanceSize() const { return this->instanceSize_ != nullptr;};
    void deleteInstanceSize() { this->instanceSize_ = nullptr;};
    inline int64_t instanceSize() const { DARABONBA_PTR_GET_DEFAULT(instanceSize_, 0L) };
    inline DescribeParentInstanceResponseBodyItems& setInstanceSize(int64_t instanceSize) { DARABONBA_PTR_SET_VALUE(instanceSize_, instanceSize) };


    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline DescribeParentInstanceResponseBodyItems& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // memberAccount Field Functions 
    bool hasMemberAccount() const { return this->memberAccount_ != nullptr;};
    void deleteMemberAccount() { this->memberAccount_ = nullptr;};
    inline int64_t memberAccount() const { DARABONBA_PTR_GET_DEFAULT(memberAccount_, 0L) };
    inline DescribeParentInstanceResponseBodyItems& setMemberAccount(int64_t memberAccount) { DARABONBA_PTR_SET_VALUE(memberAccount_, memberAccount) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline DescribeParentInstanceResponseBodyItems& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeParentInstanceResponseBodyItems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeParentInstanceResponseBodyItems& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // supportConnectNodes Field Functions 
    bool hasSupportConnectNodes() const { return this->supportConnectNodes_ != nullptr;};
    void deleteSupportConnectNodes() { this->supportConnectNodes_ = nullptr;};
    inline string supportConnectNodes() const { DARABONBA_PTR_GET_DEFAULT(supportConnectNodes_, "") };
    inline DescribeParentInstanceResponseBodyItems& setSupportConnectNodes(string supportConnectNodes) { DARABONBA_PTR_SET_VALUE(supportConnectNodes_, supportConnectNodes) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DescribeParentInstanceResponseBodyItems& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // tenantName Field Functions 
    bool hasTenantName() const { return this->tenantName_ != nullptr;};
    void deleteTenantName() { this->tenantName_ = nullptr;};
    inline string tenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
    inline DescribeParentInstanceResponseBodyItems& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


    // unConnectDbCount Field Functions 
    bool hasUnConnectDbCount() const { return this->unConnectDbCount_ != nullptr;};
    void deleteUnConnectDbCount() { this->unConnectDbCount_ = nullptr;};
    inline string unConnectDbCount() const { DARABONBA_PTR_GET_DEFAULT(unConnectDbCount_, "") };
    inline DescribeParentInstanceResponseBodyItems& setUnConnectDbCount(string unConnectDbCount) { DARABONBA_PTR_SET_VALUE(unConnectDbCount_, unConnectDbCount) };


    // unSupportOneClickAuthReason Field Functions 
    bool hasUnSupportOneClickAuthReason() const { return this->unSupportOneClickAuthReason_ != nullptr;};
    void deleteUnSupportOneClickAuthReason() { this->unSupportOneClickAuthReason_ = nullptr;};
    inline string unSupportOneClickAuthReason() const { DARABONBA_PTR_GET_DEFAULT(unSupportOneClickAuthReason_, "") };
    inline DescribeParentInstanceResponseBodyItems& setUnSupportOneClickAuthReason(string unSupportOneClickAuthReason) { DARABONBA_PTR_SET_VALUE(unSupportOneClickAuthReason_, unSupportOneClickAuthReason) };


  protected:
    // Audit authorization status. The values are as follows:
    // - **1**: Authorized
    // - **0**: Unauthorized
    std::shared_ptr<int32_t> auditStatus_ = nullptr;
    // Authorization status of the data asset instance.
    // - **0**: Unauthorized
    // - **1**: Authorized
    std::shared_ptr<int32_t> authStatus_ = nullptr;
    // Instance authorization time, in milliseconds.
    std::shared_ptr<int64_t> authTime_ = nullptr;
    // Instance status.
    std::shared_ptr<string> clusterStatus_ = nullptr;
    // Connection node type, valid only for MongoDB assets.
    std::shared_ptr<string> connectNode_ = nullptr;
    // Number of databases under the instance.
    std::shared_ptr<string> dbNum_ = nullptr;
    // The engine type. Valid values:
    // - **MySQL**
    // - **MariaDB**
    // - **Oracle**
    // - **PostgreSQL**
    // - **SQLServer**
    std::shared_ptr<string> engineType_ = nullptr;
    // Description of the instance.
    std::shared_ptr<string> instanceDescription_ = nullptr;
    // Instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Instance space size, valid only for OSS assets. Unit: bytes.
    std::shared_ptr<int64_t> instanceSize_ = nullptr;
    // Region name. The values are as follows:
    // 
    // - **China (Hangzhou)**
    // - **China (Shanghai)**
    // - **China (Beijing)**
    // - **China (Zhangjiakou)**
    // - **China (Shenzhen)**
    // - **China (Guangzhou)**
    // - **China (Hong Kong)**
    // - **Singapore**
    // - **US (Silicon Valley)**
    std::shared_ptr<string> localName_ = nullptr;
    // Member account ID.
    std::shared_ptr<int64_t> memberAccount_ = nullptr;
    // Identifier for the authorized asset. For structured data, it is identified by `instanceID.databaseName`.
    std::shared_ptr<string> parentId_ = nullptr;
    // The region in which the asset resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // Asset type name. The values are as follows:
    // - **MaxCompute**
    // - **OSS**
    // - **ADB-MYSQL**
    // - **TableStore**
    // - **RDS**
    // - **SelfDB**
    // - **PolarDB-X**
    // - **PolarDB**
    // - **ADB-PG**
    // - **OceanBase**
    // - **MongoDB**
    // - **Redis**
    std::shared_ptr<string> resourceType_ = nullptr;
    // Supported connection nodes, separated by commas.
    std::shared_ptr<string> supportConnectNodes_ = nullptr;
    // Tenant ID, valid only for OceanBase assets.
    std::shared_ptr<string> tenantId_ = nullptr;
    // Tenant name, valid only for OceanBase assets.
    std::shared_ptr<string> tenantName_ = nullptr;
    // Number of unconnected databases under the instance.
    std::shared_ptr<string> unConnectDbCount_ = nullptr;
    // Reason for not supporting one-click authorization.
    std::shared_ptr<string> unSupportOneClickAuthReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
