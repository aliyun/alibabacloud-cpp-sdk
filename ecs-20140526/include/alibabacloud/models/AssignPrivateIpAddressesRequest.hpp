// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNPRIVATEIPADDRESSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNPRIVATEIPADDRESSESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class AssignPrivateIpAddressesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignPrivateIpAddressesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Ipv4Prefix, ipv4Prefix_);
      DARABONBA_PTR_TO_JSON(Ipv4PrefixCount, ipv4PrefixCount_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecondaryPrivateIpAddressCount, secondaryPrivateIpAddressCount_);
    };
    friend void from_json(const Darabonba::Json& j, AssignPrivateIpAddressesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Ipv4Prefix, ipv4Prefix_);
      DARABONBA_PTR_FROM_JSON(Ipv4PrefixCount, ipv4PrefixCount_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecondaryPrivateIpAddressCount, secondaryPrivateIpAddressCount_);
    };
    AssignPrivateIpAddressesRequest() = default ;
    AssignPrivateIpAddressesRequest(const AssignPrivateIpAddressesRequest &) = default ;
    AssignPrivateIpAddressesRequest(AssignPrivateIpAddressesRequest &&) = default ;
    AssignPrivateIpAddressesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignPrivateIpAddressesRequest() = default ;
    AssignPrivateIpAddressesRequest& operator=(const AssignPrivateIpAddressesRequest &) = default ;
    AssignPrivateIpAddressesRequest& operator=(AssignPrivateIpAddressesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->ipv4Prefix_ == nullptr && this->ipv4PrefixCount_ == nullptr && this->networkInterfaceId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->privateIpAddress_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->secondaryPrivateIpAddressCount_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AssignPrivateIpAddressesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ipv4Prefix Field Functions 
    bool hasIpv4Prefix() const { return this->ipv4Prefix_ != nullptr;};
    void deleteIpv4Prefix() { this->ipv4Prefix_ = nullptr;};
    inline const vector<string> & getIpv4Prefix() const { DARABONBA_PTR_GET_CONST(ipv4Prefix_, vector<string>) };
    inline vector<string> getIpv4Prefix() { DARABONBA_PTR_GET(ipv4Prefix_, vector<string>) };
    inline AssignPrivateIpAddressesRequest& setIpv4Prefix(const vector<string> & ipv4Prefix) { DARABONBA_PTR_SET_VALUE(ipv4Prefix_, ipv4Prefix) };
    inline AssignPrivateIpAddressesRequest& setIpv4Prefix(vector<string> && ipv4Prefix) { DARABONBA_PTR_SET_RVALUE(ipv4Prefix_, ipv4Prefix) };


    // ipv4PrefixCount Field Functions 
    bool hasIpv4PrefixCount() const { return this->ipv4PrefixCount_ != nullptr;};
    void deleteIpv4PrefixCount() { this->ipv4PrefixCount_ = nullptr;};
    inline int32_t getIpv4PrefixCount() const { DARABONBA_PTR_GET_DEFAULT(ipv4PrefixCount_, 0) };
    inline AssignPrivateIpAddressesRequest& setIpv4PrefixCount(int32_t ipv4PrefixCount) { DARABONBA_PTR_SET_VALUE(ipv4PrefixCount_, ipv4PrefixCount) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline AssignPrivateIpAddressesRequest& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AssignPrivateIpAddressesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AssignPrivateIpAddressesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline const vector<string> & getPrivateIpAddress() const { DARABONBA_PTR_GET_CONST(privateIpAddress_, vector<string>) };
    inline vector<string> getPrivateIpAddress() { DARABONBA_PTR_GET(privateIpAddress_, vector<string>) };
    inline AssignPrivateIpAddressesRequest& setPrivateIpAddress(const vector<string> & privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };
    inline AssignPrivateIpAddressesRequest& setPrivateIpAddress(vector<string> && privateIpAddress) { DARABONBA_PTR_SET_RVALUE(privateIpAddress_, privateIpAddress) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AssignPrivateIpAddressesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AssignPrivateIpAddressesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AssignPrivateIpAddressesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // secondaryPrivateIpAddressCount Field Functions 
    bool hasSecondaryPrivateIpAddressCount() const { return this->secondaryPrivateIpAddressCount_ != nullptr;};
    void deleteSecondaryPrivateIpAddressCount() { this->secondaryPrivateIpAddressCount_ = nullptr;};
    inline int32_t getSecondaryPrivateIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(secondaryPrivateIpAddressCount_, 0) };
    inline AssignPrivateIpAddressesRequest& setSecondaryPrivateIpAddressCount(int32_t secondaryPrivateIpAddressCount) { DARABONBA_PTR_SET_VALUE(secondaryPrivateIpAddressCount_, secondaryPrivateIpAddressCount) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The **token** can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The IPv4 prefixes to assign to the ENI. Valid values of N: 1 to 10.
    // 
    // >  To assign IPv4 prefixes to the ENI, you must specify the Ipv4Prefix.N or Ipv4PrefixCount parameter, but not both.
    shared_ptr<vector<string>> ipv4Prefix_ {};
    // The number of IPv4 prefixes to be randomly generated for the ENI. Valid values: 1 to 10.
    // 
    // >  To assign IPv4 prefixes to the ENI, you must specify the Ipv4Prefix.N or Ipv4PrefixCount parameter, but not both.
    shared_ptr<int32_t> ipv4PrefixCount_ {};
    // The ID of the ENI.
    // 
    // This parameter is required.
    shared_ptr<string> networkInterfaceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Secondary private IP address N to be automatically assigned from the CIDR block of the vSwitch that is connected to the ENI. Valid values of N:
    // 
    // *   When the ENI is in the Available (`Available`) state, the valid values of N are 1 to 50.
    // *   When the ENI is in the InUse (`InUse`) state, the valid values of N are subject to the instance type. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
    // 
    // To assign secondary private IP addresses to the ENI, you must specify `PrivateIpAddress.N` or `SecondaryPrivateIpAddressCount` but not both.
    shared_ptr<vector<string>> privateIpAddress_ {};
    // The region ID of the ENI. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The number of private IP addresses to be automatically assigned from the CIDR block of the vSwitch that is connected to the ENI.
    // 
    // To assign secondary private IP addresses to the ENI, you must specify `PrivateIpAddress.N` or `SecondaryPrivateIpAddressCount` but not both.
    shared_ptr<int32_t> secondaryPrivateIpAddressCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
