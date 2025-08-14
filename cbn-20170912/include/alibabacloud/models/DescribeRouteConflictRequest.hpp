// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTECONFLICTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTECONFLICTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeRouteConflictRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteConflictRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceRegionId, childInstanceRegionId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceRouteTableId, childInstanceRouteTableId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteConflictRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceRegionId, childInstanceRegionId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceRouteTableId, childInstanceRouteTableId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribeRouteConflictRequest() = default ;
    DescribeRouteConflictRequest(const DescribeRouteConflictRequest &) = default ;
    DescribeRouteConflictRequest(DescribeRouteConflictRequest &&) = default ;
    DescribeRouteConflictRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteConflictRequest() = default ;
    DescribeRouteConflictRequest& operator=(const DescribeRouteConflictRequest &) = default ;
    DescribeRouteConflictRequest& operator=(DescribeRouteConflictRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->childInstanceId_ != nullptr
        && this->childInstanceRegionId_ != nullptr && this->childInstanceRouteTableId_ != nullptr && this->childInstanceType_ != nullptr && this->destinationCidrBlock_ != nullptr && this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // childInstanceId Field Functions 
    bool hasChildInstanceId() const { return this->childInstanceId_ != nullptr;};
    void deleteChildInstanceId() { this->childInstanceId_ = nullptr;};
    inline string childInstanceId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceId_, "") };
    inline DescribeRouteConflictRequest& setChildInstanceId(string childInstanceId) { DARABONBA_PTR_SET_VALUE(childInstanceId_, childInstanceId) };


    // childInstanceRegionId Field Functions 
    bool hasChildInstanceRegionId() const { return this->childInstanceRegionId_ != nullptr;};
    void deleteChildInstanceRegionId() { this->childInstanceRegionId_ = nullptr;};
    inline string childInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceRegionId_, "") };
    inline DescribeRouteConflictRequest& setChildInstanceRegionId(string childInstanceRegionId) { DARABONBA_PTR_SET_VALUE(childInstanceRegionId_, childInstanceRegionId) };


    // childInstanceRouteTableId Field Functions 
    bool hasChildInstanceRouteTableId() const { return this->childInstanceRouteTableId_ != nullptr;};
    void deleteChildInstanceRouteTableId() { this->childInstanceRouteTableId_ = nullptr;};
    inline string childInstanceRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceRouteTableId_, "") };
    inline DescribeRouteConflictRequest& setChildInstanceRouteTableId(string childInstanceRouteTableId) { DARABONBA_PTR_SET_VALUE(childInstanceRouteTableId_, childInstanceRouteTableId) };


    // childInstanceType Field Functions 
    bool hasChildInstanceType() const { return this->childInstanceType_ != nullptr;};
    void deleteChildInstanceType() { this->childInstanceType_ = nullptr;};
    inline string childInstanceType() const { DARABONBA_PTR_GET_DEFAULT(childInstanceType_, "") };
    inline DescribeRouteConflictRequest& setChildInstanceType(string childInstanceType) { DARABONBA_PTR_SET_VALUE(childInstanceType_, childInstanceType) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline DescribeRouteConflictRequest& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeRouteConflictRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeRouteConflictRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRouteConflictRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRouteConflictRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeRouteConflictRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeRouteConflictRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the network instance that you want to query.
    // 
    // This parameter is required.
    std::shared_ptr<string> childInstanceId_ = nullptr;
    // The ID of the region where the network instance is deployed.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> childInstanceRegionId_ = nullptr;
    // The ID of the route table that is configured on the network instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> childInstanceRouteTableId_ = nullptr;
    // The type of the network instance. Valid values:
    // 
    // *   **VPC**: virtual private cloud (VPC)
    // *   **VBR**: virtual border router (VBR)
    // *   **CCN**: Cloud Connect Network (CCN) instance
    // 
    // This parameter is required.
    std::shared_ptr<string> childInstanceType_ = nullptr;
    // The destination CIDR block of the conflicting route.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Default value: **10**. Valid values: **1** to **50**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
