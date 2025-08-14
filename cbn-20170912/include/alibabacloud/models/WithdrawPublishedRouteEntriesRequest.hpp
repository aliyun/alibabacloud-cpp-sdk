// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WITHDRAWPUBLISHEDROUTEENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_WITHDRAWPUBLISHEDROUTEENTRIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class WithdrawPublishedRouteEntriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WithdrawPublishedRouteEntriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceRegionId, childInstanceRegionId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceRouteTableId, childInstanceRouteTableId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, WithdrawPublishedRouteEntriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceRegionId, childInstanceRegionId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceRouteTableId, childInstanceRouteTableId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    WithdrawPublishedRouteEntriesRequest() = default ;
    WithdrawPublishedRouteEntriesRequest(const WithdrawPublishedRouteEntriesRequest &) = default ;
    WithdrawPublishedRouteEntriesRequest(WithdrawPublishedRouteEntriesRequest &&) = default ;
    WithdrawPublishedRouteEntriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WithdrawPublishedRouteEntriesRequest() = default ;
    WithdrawPublishedRouteEntriesRequest& operator=(const WithdrawPublishedRouteEntriesRequest &) = default ;
    WithdrawPublishedRouteEntriesRequest& operator=(WithdrawPublishedRouteEntriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->childInstanceId_ != nullptr && this->childInstanceRegionId_ != nullptr && this->childInstanceRouteTableId_ != nullptr && this->childInstanceType_ != nullptr && this->destinationCidrBlock_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline WithdrawPublishedRouteEntriesRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // childInstanceId Field Functions 
    bool hasChildInstanceId() const { return this->childInstanceId_ != nullptr;};
    void deleteChildInstanceId() { this->childInstanceId_ = nullptr;};
    inline string childInstanceId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceId_, "") };
    inline WithdrawPublishedRouteEntriesRequest& setChildInstanceId(string childInstanceId) { DARABONBA_PTR_SET_VALUE(childInstanceId_, childInstanceId) };


    // childInstanceRegionId Field Functions 
    bool hasChildInstanceRegionId() const { return this->childInstanceRegionId_ != nullptr;};
    void deleteChildInstanceRegionId() { this->childInstanceRegionId_ = nullptr;};
    inline string childInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceRegionId_, "") };
    inline WithdrawPublishedRouteEntriesRequest& setChildInstanceRegionId(string childInstanceRegionId) { DARABONBA_PTR_SET_VALUE(childInstanceRegionId_, childInstanceRegionId) };


    // childInstanceRouteTableId Field Functions 
    bool hasChildInstanceRouteTableId() const { return this->childInstanceRouteTableId_ != nullptr;};
    void deleteChildInstanceRouteTableId() { this->childInstanceRouteTableId_ = nullptr;};
    inline string childInstanceRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceRouteTableId_, "") };
    inline WithdrawPublishedRouteEntriesRequest& setChildInstanceRouteTableId(string childInstanceRouteTableId) { DARABONBA_PTR_SET_VALUE(childInstanceRouteTableId_, childInstanceRouteTableId) };


    // childInstanceType Field Functions 
    bool hasChildInstanceType() const { return this->childInstanceType_ != nullptr;};
    void deleteChildInstanceType() { this->childInstanceType_ = nullptr;};
    inline string childInstanceType() const { DARABONBA_PTR_GET_DEFAULT(childInstanceType_, "") };
    inline WithdrawPublishedRouteEntriesRequest& setChildInstanceType(string childInstanceType) { DARABONBA_PTR_SET_VALUE(childInstanceType_, childInstanceType) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline WithdrawPublishedRouteEntriesRequest& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline WithdrawPublishedRouteEntriesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline WithdrawPublishedRouteEntriesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the CEN instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenId_ = nullptr;
    // The ID of the attached network instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> childInstanceId_ = nullptr;
    // The ID of the region where the attached network instance is created.
    // 
    // This parameter is required.
    std::shared_ptr<string> childInstanceRegionId_ = nullptr;
    // The ID of the route table of the attached network instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> childInstanceRouteTableId_ = nullptr;
    // The type of the attached network instance.
    // 
    // Set the value to **VPC**, which indicates a virtual private cloud (VPC).
    // 
    // This parameter is required.
    std::shared_ptr<string> childInstanceType_ = nullptr;
    // The destination CIDR block of the route that you want to withdraw.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
