// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSWITHBACKUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSWITHBACKUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClustersWithBackupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClustersWithBackupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterIds, DBClusterIds_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClustersWithBackupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterIds, DBClusterIds_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribeDBClustersWithBackupsRequest() = default ;
    DescribeDBClustersWithBackupsRequest(const DescribeDBClustersWithBackupsRequest &) = default ;
    DescribeDBClustersWithBackupsRequest(DescribeDBClustersWithBackupsRequest &&) = default ;
    DescribeDBClustersWithBackupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClustersWithBackupsRequest() = default ;
    DescribeDBClustersWithBackupsRequest& operator=(const DescribeDBClustersWithBackupsRequest &) = default ;
    DescribeDBClustersWithBackupsRequest& operator=(DescribeDBClustersWithBackupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterDescription_ == nullptr
        && this->DBClusterIds_ == nullptr && this->DBType_ == nullptr && this->DBVersion_ == nullptr && this->isDeleted_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string getDBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline DescribeDBClustersWithBackupsRequest& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterIds Field Functions 
    bool hasDBClusterIds() const { return this->DBClusterIds_ != nullptr;};
    void deleteDBClusterIds() { this->DBClusterIds_ = nullptr;};
    inline string getDBClusterIds() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIds_, "") };
    inline DescribeDBClustersWithBackupsRequest& setDBClusterIds(string DBClusterIds) { DARABONBA_PTR_SET_VALUE(DBClusterIds_, DBClusterIds) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeDBClustersWithBackupsRequest& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDBClustersWithBackupsRequest& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // isDeleted Field Functions 
    bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
    void deleteIsDeleted() { this->isDeleted_ = nullptr;};
    inline int32_t getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, 0) };
    inline DescribeDBClustersWithBackupsRequest& setIsDeleted(int32_t isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeDBClustersWithBackupsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeDBClustersWithBackupsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBClustersWithBackupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDBClustersWithBackupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBClustersWithBackupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBClustersWithBackupsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeDBClustersWithBackupsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeDBClustersWithBackupsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The name of the cluster. The name must meet the following requirements:
    // 
    // *   It cannot start with `http://` or `https://`.
    // *   It must be 2 to 256 characters in length.
    shared_ptr<string> DBClusterDescription_ {};
    // The ID of the cluster. If you need to specify multiple cluster IDs, separate the cluster IDs with commas (,).
    shared_ptr<string> DBClusterIds_ {};
    // The type of the database engine. Valid values:
    // 
    // *   **MySQL**
    // *   **PostgreSQL**
    // *   **Oracle**
    shared_ptr<string> DBType_ {};
    // The version of the database engine.
    // 
    // *   Valid values for the MySQL database engine:
    // 
    //     *   **5.6**
    //     *   **5.7**
    //     *   **8.0**
    // 
    // *   Valid values for the PostgreSQL database engine:
    // 
    //     *   **11**
    //     *   **14**
    // 
    // *   Valid value for the Oracle database engine: **11**
    shared_ptr<string> DBVersion_ {};
    // Specifies whether the cluster is deleted. Valid values:
    // 
    // *   **0**: not deleted
    // *   **1**: deleted
    shared_ptr<int32_t> isDeleted_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The number of the page to return. The value must be a positive integer that does not exceed the maximum value of the INTEGER data type. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values:
    // 
    // *   **30**
    // *   **50**
    // *   **100**
    // 
    // Default value: 30.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the cluster.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query information about regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
