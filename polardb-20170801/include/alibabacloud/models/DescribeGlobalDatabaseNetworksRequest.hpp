// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATABASENETWORKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATABASENETWORKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeGlobalDatabaseNetworksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDatabaseNetworksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FilterRegion, filterRegion_);
      DARABONBA_PTR_TO_JSON(GDNDescription, GDNDescription_);
      DARABONBA_PTR_TO_JSON(GDNId, GDNId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDatabaseNetworksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FilterRegion, filterRegion_);
      DARABONBA_PTR_FROM_JSON(GDNDescription, GDNDescription_);
      DARABONBA_PTR_FROM_JSON(GDNId, GDNId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DescribeGlobalDatabaseNetworksRequest() = default ;
    DescribeGlobalDatabaseNetworksRequest(const DescribeGlobalDatabaseNetworksRequest &) = default ;
    DescribeGlobalDatabaseNetworksRequest(DescribeGlobalDatabaseNetworksRequest &&) = default ;
    DescribeGlobalDatabaseNetworksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDatabaseNetworksRequest() = default ;
    DescribeGlobalDatabaseNetworksRequest& operator=(const DescribeGlobalDatabaseNetworksRequest &) = default ;
    DescribeGlobalDatabaseNetworksRequest& operator=(DescribeGlobalDatabaseNetworksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->filterRegion_ != nullptr && this->GDNDescription_ != nullptr && this->GDNId_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->securityToken_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeGlobalDatabaseNetworksRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // filterRegion Field Functions 
    bool hasFilterRegion() const { return this->filterRegion_ != nullptr;};
    void deleteFilterRegion() { this->filterRegion_ = nullptr;};
    inline string filterRegion() const { DARABONBA_PTR_GET_DEFAULT(filterRegion_, "") };
    inline DescribeGlobalDatabaseNetworksRequest& setFilterRegion(string filterRegion) { DARABONBA_PTR_SET_VALUE(filterRegion_, filterRegion) };


    // GDNDescription Field Functions 
    bool hasGDNDescription() const { return this->GDNDescription_ != nullptr;};
    void deleteGDNDescription() { this->GDNDescription_ = nullptr;};
    inline string GDNDescription() const { DARABONBA_PTR_GET_DEFAULT(GDNDescription_, "") };
    inline DescribeGlobalDatabaseNetworksRequest& setGDNDescription(string GDNDescription) { DARABONBA_PTR_SET_VALUE(GDNDescription_, GDNDescription) };


    // GDNId Field Functions 
    bool hasGDNId() const { return this->GDNId_ != nullptr;};
    void deleteGDNId() { this->GDNId_ = nullptr;};
    inline string GDNId() const { DARABONBA_PTR_GET_DEFAULT(GDNId_, "") };
    inline DescribeGlobalDatabaseNetworksRequest& setGDNId(string GDNId) { DARABONBA_PTR_SET_VALUE(GDNId_, GDNId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeGlobalDatabaseNetworksRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeGlobalDatabaseNetworksRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGlobalDatabaseNetworksRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGlobalDatabaseNetworksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeGlobalDatabaseNetworksRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeGlobalDatabaseNetworksRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeGlobalDatabaseNetworksRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeGlobalDatabaseNetworksRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the cluster.
    // 
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query information about all clusters that are deployed in a specified region, such as the cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Specify the region in which you want to query GDNs. You can create secondary clusters for the GDNs.
    std::shared_ptr<string> filterRegion_ = nullptr;
    // The description of the GDN. The description must meet the following requirements:
    // 
    // *   It cannot start with `http://` or `https://`.
    // *   It must start with a letter.
    // *   It can contain letters, digits, underscores (_), and hyphens (-).
    // *   It must be 2 to 126 characters in length.
    std::shared_ptr<string> GDNDescription_ = nullptr;
    // The ID of the GDN.
    std::shared_ptr<string> GDNId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of the page to return. Default value: 1. The value must be an integer that is greater than 0.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 30. Valid values:
    // 
    // *   30
    // *   50
    // *   100
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
