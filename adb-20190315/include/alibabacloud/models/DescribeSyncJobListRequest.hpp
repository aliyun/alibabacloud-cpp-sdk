// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCJOBLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCJOBLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeSyncJobListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyncJobListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(GetSourceDetail, getSourceDetail_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceDBClusterDescription, sourceDBClusterDescription_);
      DARABONBA_PTR_TO_JSON(SourceDBClusterId, sourceDBClusterId_);
      DARABONBA_PTR_TO_JSON(SourceDBType, sourceDBType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyncJobListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(GetSourceDetail, getSourceDetail_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceDBClusterDescription, sourceDBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(SourceDBClusterId, sourceDBClusterId_);
      DARABONBA_PTR_FROM_JSON(SourceDBType, sourceDBType_);
    };
    DescribeSyncJobListRequest() = default ;
    DescribeSyncJobListRequest(const DescribeSyncJobListRequest &) = default ;
    DescribeSyncJobListRequest(DescribeSyncJobListRequest &&) = default ;
    DescribeSyncJobListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyncJobListRequest() = default ;
    DescribeSyncJobListRequest& operator=(const DescribeSyncJobListRequest &) = default ;
    DescribeSyncJobListRequest& operator=(DescribeSyncJobListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->getSourceDetail_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->sourceDBClusterDescription_ == nullptr && return this->sourceDBClusterId_ == nullptr
        && return this->sourceDBType_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeSyncJobListRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // getSourceDetail Field Functions 
    bool hasGetSourceDetail() const { return this->getSourceDetail_ != nullptr;};
    void deleteGetSourceDetail() { this->getSourceDetail_ = nullptr;};
    inline bool getSourceDetail() const { DARABONBA_PTR_GET_DEFAULT(getSourceDetail_, false) };
    inline DescribeSyncJobListRequest& setGetSourceDetail(bool getSourceDetail) { DARABONBA_PTR_SET_VALUE(getSourceDetail_, getSourceDetail) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeSyncJobListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeSyncJobListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSyncJobListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSyncJobListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSyncJobListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeSyncJobListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeSyncJobListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceDBClusterDescription Field Functions 
    bool hasSourceDBClusterDescription() const { return this->sourceDBClusterDescription_ != nullptr;};
    void deleteSourceDBClusterDescription() { this->sourceDBClusterDescription_ = nullptr;};
    inline string sourceDBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(sourceDBClusterDescription_, "") };
    inline DescribeSyncJobListRequest& setSourceDBClusterDescription(string sourceDBClusterDescription) { DARABONBA_PTR_SET_VALUE(sourceDBClusterDescription_, sourceDBClusterDescription) };


    // sourceDBClusterId Field Functions 
    bool hasSourceDBClusterId() const { return this->sourceDBClusterId_ != nullptr;};
    void deleteSourceDBClusterId() { this->sourceDBClusterId_ = nullptr;};
    inline string sourceDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(sourceDBClusterId_, "") };
    inline DescribeSyncJobListRequest& setSourceDBClusterId(string sourceDBClusterId) { DARABONBA_PTR_SET_VALUE(sourceDBClusterId_, sourceDBClusterId) };


    // sourceDBType Field Functions 
    bool hasSourceDBType() const { return this->sourceDBType_ != nullptr;};
    void deleteSourceDBType() { this->sourceDBType_ = nullptr;};
    inline string sourceDBType() const { DARABONBA_PTR_GET_DEFAULT(sourceDBType_, "") };
    inline DescribeSyncJobListRequest& setSourceDBType(string sourceDBType) { DARABONBA_PTR_SET_VALUE(sourceDBType_, sourceDBType) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Warehouse Edition cluster.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the IDs of all AnalyticDB for MySQL Data Warehouse Edition clusters within a region.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Specifies whether to obtain details about the source instance or cluster.
    std::shared_ptr<bool> getSourceDetail_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/143074.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The description of the source cluster.
    std::shared_ptr<string> sourceDBClusterDescription_ = nullptr;
    // The ID of the source cluster. You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/170879.html) operation to query backup set IDs.
    // 
    // >  If you want to restore the data of an ApsaraDB for ClickHouse cluster, this parameter is required.
    std::shared_ptr<string> sourceDBClusterId_ = nullptr;
    // The source database type.
    std::shared_ptr<string> sourceDBType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
