// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPUBLISHEDROUTEENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPUBLISHEDROUTEENTRIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribePublishedRouteEntriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePublishedRouteEntriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceRegionId, childInstanceRegionId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceRouteTableId, childInstanceRouteTableId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePublishedRouteEntriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceRegionId, childInstanceRegionId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceRouteTableId, childInstanceRouteTableId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribePublishedRouteEntriesRequest() = default ;
    DescribePublishedRouteEntriesRequest(const DescribePublishedRouteEntriesRequest &) = default ;
    DescribePublishedRouteEntriesRequest(DescribePublishedRouteEntriesRequest &&) = default ;
    DescribePublishedRouteEntriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePublishedRouteEntriesRequest() = default ;
    DescribePublishedRouteEntriesRequest& operator=(const DescribePublishedRouteEntriesRequest &) = default ;
    DescribePublishedRouteEntriesRequest& operator=(DescribePublishedRouteEntriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->childInstanceId_ != nullptr && this->childInstanceRegionId_ != nullptr && this->childInstanceRouteTableId_ != nullptr && this->childInstanceType_ != nullptr && this->destinationCidrBlock_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribePublishedRouteEntriesRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // childInstanceId Field Functions 
    bool hasChildInstanceId() const { return this->childInstanceId_ != nullptr;};
    void deleteChildInstanceId() { this->childInstanceId_ = nullptr;};
    inline string childInstanceId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceId_, "") };
    inline DescribePublishedRouteEntriesRequest& setChildInstanceId(string childInstanceId) { DARABONBA_PTR_SET_VALUE(childInstanceId_, childInstanceId) };


    // childInstanceRegionId Field Functions 
    bool hasChildInstanceRegionId() const { return this->childInstanceRegionId_ != nullptr;};
    void deleteChildInstanceRegionId() { this->childInstanceRegionId_ = nullptr;};
    inline string childInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceRegionId_, "") };
    inline DescribePublishedRouteEntriesRequest& setChildInstanceRegionId(string childInstanceRegionId) { DARABONBA_PTR_SET_VALUE(childInstanceRegionId_, childInstanceRegionId) };


    // childInstanceRouteTableId Field Functions 
    bool hasChildInstanceRouteTableId() const { return this->childInstanceRouteTableId_ != nullptr;};
    void deleteChildInstanceRouteTableId() { this->childInstanceRouteTableId_ = nullptr;};
    inline string childInstanceRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceRouteTableId_, "") };
    inline DescribePublishedRouteEntriesRequest& setChildInstanceRouteTableId(string childInstanceRouteTableId) { DARABONBA_PTR_SET_VALUE(childInstanceRouteTableId_, childInstanceRouteTableId) };


    // childInstanceType Field Functions 
    bool hasChildInstanceType() const { return this->childInstanceType_ != nullptr;};
    void deleteChildInstanceType() { this->childInstanceType_ = nullptr;};
    inline string childInstanceType() const { DARABONBA_PTR_GET_DEFAULT(childInstanceType_, "") };
    inline DescribePublishedRouteEntriesRequest& setChildInstanceType(string childInstanceType) { DARABONBA_PTR_SET_VALUE(childInstanceType_, childInstanceType) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline DescribePublishedRouteEntriesRequest& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePublishedRouteEntriesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePublishedRouteEntriesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribePublishedRouteEntriesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribePublishedRouteEntriesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the CEN instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenId_ = nullptr;
    // The ID of the network instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> childInstanceId_ = nullptr;
    // The ID of the region where the network instance is deployed.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> childInstanceRegionId_ = nullptr;
    // The ID of the route table of the network instance.
    std::shared_ptr<string> childInstanceRouteTableId_ = nullptr;
    // The type of the network instance. Valid values:
    // 
    // *   **VPC**: VPC
    // *   **VBR**: VBR
    // *   **CCN**: Cloud Connect Network (CCN) instance
    // 
    // This parameter is required.
    std::shared_ptr<string> childInstanceType_ = nullptr;
    // The destination CIDR block of the route that you want to query.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
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
