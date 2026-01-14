// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARENTINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARENTINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeParentInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParentInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParentInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeParentInstanceResponseBody() = default ;
    DescribeParentInstanceResponseBody(const DescribeParentInstanceResponseBody &) = default ;
    DescribeParentInstanceResponseBody(DescribeParentInstanceResponseBody &&) = default ;
    DescribeParentInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParentInstanceResponseBody() = default ;
    DescribeParentInstanceResponseBody& operator=(const DescribeParentInstanceResponseBody &) = default ;
    DescribeParentInstanceResponseBody& operator=(DescribeParentInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
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
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->auditStatus_ == nullptr
        && this->authStatus_ == nullptr && this->authTime_ == nullptr && this->clusterStatus_ == nullptr && this->connectNode_ == nullptr && this->dbNum_ == nullptr
        && this->engineType_ == nullptr && this->instanceDescription_ == nullptr && this->instanceId_ == nullptr && this->instanceSize_ == nullptr && this->localName_ == nullptr
        && this->memberAccount_ == nullptr && this->parentId_ == nullptr && this->regionId_ == nullptr && this->resourceType_ == nullptr && this->supportConnectNodes_ == nullptr
        && this->tenantId_ == nullptr && this->tenantName_ == nullptr && this->unConnectDbCount_ == nullptr && this->unSupportOneClickAuthReason_ == nullptr; };
      // auditStatus Field Functions 
      bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
      void deleteAuditStatus() { this->auditStatus_ = nullptr;};
      inline int32_t getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, 0) };
      inline Items& setAuditStatus(int32_t auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


      // authStatus Field Functions 
      bool hasAuthStatus() const { return this->authStatus_ != nullptr;};
      void deleteAuthStatus() { this->authStatus_ = nullptr;};
      inline int32_t getAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(authStatus_, 0) };
      inline Items& setAuthStatus(int32_t authStatus) { DARABONBA_PTR_SET_VALUE(authStatus_, authStatus) };


      // authTime Field Functions 
      bool hasAuthTime() const { return this->authTime_ != nullptr;};
      void deleteAuthTime() { this->authTime_ = nullptr;};
      inline int64_t getAuthTime() const { DARABONBA_PTR_GET_DEFAULT(authTime_, 0L) };
      inline Items& setAuthTime(int64_t authTime) { DARABONBA_PTR_SET_VALUE(authTime_, authTime) };


      // clusterStatus Field Functions 
      bool hasClusterStatus() const { return this->clusterStatus_ != nullptr;};
      void deleteClusterStatus() { this->clusterStatus_ = nullptr;};
      inline string getClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterStatus_, "") };
      inline Items& setClusterStatus(string clusterStatus) { DARABONBA_PTR_SET_VALUE(clusterStatus_, clusterStatus) };


      // connectNode Field Functions 
      bool hasConnectNode() const { return this->connectNode_ != nullptr;};
      void deleteConnectNode() { this->connectNode_ = nullptr;};
      inline string getConnectNode() const { DARABONBA_PTR_GET_DEFAULT(connectNode_, "") };
      inline Items& setConnectNode(string connectNode) { DARABONBA_PTR_SET_VALUE(connectNode_, connectNode) };


      // dbNum Field Functions 
      bool hasDbNum() const { return this->dbNum_ != nullptr;};
      void deleteDbNum() { this->dbNum_ = nullptr;};
      inline string getDbNum() const { DARABONBA_PTR_GET_DEFAULT(dbNum_, "") };
      inline Items& setDbNum(string dbNum) { DARABONBA_PTR_SET_VALUE(dbNum_, dbNum) };


      // engineType Field Functions 
      bool hasEngineType() const { return this->engineType_ != nullptr;};
      void deleteEngineType() { this->engineType_ = nullptr;};
      inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
      inline Items& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


      // instanceDescription Field Functions 
      bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
      void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
      inline string getInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
      inline Items& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Items& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceSize Field Functions 
      bool hasInstanceSize() const { return this->instanceSize_ != nullptr;};
      void deleteInstanceSize() { this->instanceSize_ = nullptr;};
      inline int64_t getInstanceSize() const { DARABONBA_PTR_GET_DEFAULT(instanceSize_, 0L) };
      inline Items& setInstanceSize(int64_t instanceSize) { DARABONBA_PTR_SET_VALUE(instanceSize_, instanceSize) };


      // localName Field Functions 
      bool hasLocalName() const { return this->localName_ != nullptr;};
      void deleteLocalName() { this->localName_ = nullptr;};
      inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
      inline Items& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


      // memberAccount Field Functions 
      bool hasMemberAccount() const { return this->memberAccount_ != nullptr;};
      void deleteMemberAccount() { this->memberAccount_ = nullptr;};
      inline int64_t getMemberAccount() const { DARABONBA_PTR_GET_DEFAULT(memberAccount_, 0L) };
      inline Items& setMemberAccount(int64_t memberAccount) { DARABONBA_PTR_SET_VALUE(memberAccount_, memberAccount) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
      inline Items& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Items& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Items& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // supportConnectNodes Field Functions 
      bool hasSupportConnectNodes() const { return this->supportConnectNodes_ != nullptr;};
      void deleteSupportConnectNodes() { this->supportConnectNodes_ = nullptr;};
      inline string getSupportConnectNodes() const { DARABONBA_PTR_GET_DEFAULT(supportConnectNodes_, "") };
      inline Items& setSupportConnectNodes(string supportConnectNodes) { DARABONBA_PTR_SET_VALUE(supportConnectNodes_, supportConnectNodes) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Items& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // tenantName Field Functions 
      bool hasTenantName() const { return this->tenantName_ != nullptr;};
      void deleteTenantName() { this->tenantName_ = nullptr;};
      inline string getTenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
      inline Items& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


      // unConnectDbCount Field Functions 
      bool hasUnConnectDbCount() const { return this->unConnectDbCount_ != nullptr;};
      void deleteUnConnectDbCount() { this->unConnectDbCount_ = nullptr;};
      inline string getUnConnectDbCount() const { DARABONBA_PTR_GET_DEFAULT(unConnectDbCount_, "") };
      inline Items& setUnConnectDbCount(string unConnectDbCount) { DARABONBA_PTR_SET_VALUE(unConnectDbCount_, unConnectDbCount) };


      // unSupportOneClickAuthReason Field Functions 
      bool hasUnSupportOneClickAuthReason() const { return this->unSupportOneClickAuthReason_ != nullptr;};
      void deleteUnSupportOneClickAuthReason() { this->unSupportOneClickAuthReason_ = nullptr;};
      inline string getUnSupportOneClickAuthReason() const { DARABONBA_PTR_GET_DEFAULT(unSupportOneClickAuthReason_, "") };
      inline Items& setUnSupportOneClickAuthReason(string unSupportOneClickAuthReason) { DARABONBA_PTR_SET_VALUE(unSupportOneClickAuthReason_, unSupportOneClickAuthReason) };


    protected:
      // Audit authorization status. The values are as follows:
      // - **1**: Authorized
      // - **0**: Unauthorized
      shared_ptr<int32_t> auditStatus_ {};
      // Authorization status of the data asset instance.
      // - **0**: Unauthorized
      // - **1**: Authorized
      shared_ptr<int32_t> authStatus_ {};
      // Instance authorization time, in milliseconds.
      shared_ptr<int64_t> authTime_ {};
      // Instance status.
      shared_ptr<string> clusterStatus_ {};
      // Connection node type, valid only for MongoDB assets.
      shared_ptr<string> connectNode_ {};
      // Number of databases under the instance.
      shared_ptr<string> dbNum_ {};
      // The engine type. Valid values:
      // - **MySQL**
      // - **MariaDB**
      // - **Oracle**
      // - **PostgreSQL**
      // - **SQLServer**
      shared_ptr<string> engineType_ {};
      // Description of the instance.
      shared_ptr<string> instanceDescription_ {};
      // Instance ID.
      shared_ptr<string> instanceId_ {};
      // Instance space size, valid only for OSS assets. Unit: bytes.
      shared_ptr<int64_t> instanceSize_ {};
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
      shared_ptr<string> localName_ {};
      // Member account ID.
      shared_ptr<int64_t> memberAccount_ {};
      // Identifier for the authorized asset. For structured data, it is identified by `instanceID.databaseName`.
      shared_ptr<string> parentId_ {};
      // The region in which the asset resides.
      shared_ptr<string> regionId_ {};
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
      shared_ptr<string> resourceType_ {};
      // Supported connection nodes, separated by commas.
      shared_ptr<string> supportConnectNodes_ {};
      // Tenant ID, valid only for OceanBase assets.
      shared_ptr<string> tenantId_ {};
      // Tenant name, valid only for OceanBase assets.
      shared_ptr<string> tenantName_ {};
      // Number of unconnected databases under the instance.
      shared_ptr<string> unConnectDbCount_ {};
      // Reason for not supporting one-click authorization.
      shared_ptr<string> unSupportOneClickAuthReason_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeParentInstanceResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeParentInstanceResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeParentInstanceResponseBody::Items>) };
    inline vector<DescribeParentInstanceResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeParentInstanceResponseBody::Items>) };
    inline DescribeParentInstanceResponseBody& setItems(const vector<DescribeParentInstanceResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeParentInstanceResponseBody& setItems(vector<DescribeParentInstanceResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeParentInstanceResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParentInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeParentInstanceResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // When performing a paginated query, set the current page number. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The assets.
    shared_ptr<vector<DescribeParentInstanceResponseBody::Items>> items_ {};
    // When performing a paginated query, set the maximum number of data asset instances displayed per page. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // Request ID of the result.
    shared_ptr<string> requestId_ {};
    // Total number of data items in the result.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
