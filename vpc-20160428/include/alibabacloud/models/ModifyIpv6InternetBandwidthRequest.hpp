// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYIPV6INTERNETBANDWIDTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYIPV6INTERNETBANDWIDTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyIpv6InternetBandwidthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyIpv6InternetBandwidthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressId, ipv6AddressId_);
      DARABONBA_PTR_TO_JSON(Ipv6InternetBandwidthId, ipv6InternetBandwidthId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyIpv6InternetBandwidthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressId, ipv6AddressId_);
      DARABONBA_PTR_FROM_JSON(Ipv6InternetBandwidthId, ipv6InternetBandwidthId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyIpv6InternetBandwidthRequest() = default ;
    ModifyIpv6InternetBandwidthRequest(const ModifyIpv6InternetBandwidthRequest &) = default ;
    ModifyIpv6InternetBandwidthRequest(ModifyIpv6InternetBandwidthRequest &&) = default ;
    ModifyIpv6InternetBandwidthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyIpv6InternetBandwidthRequest() = default ;
    ModifyIpv6InternetBandwidthRequest& operator=(const ModifyIpv6InternetBandwidthRequest &) = default ;
    ModifyIpv6InternetBandwidthRequest& operator=(ModifyIpv6InternetBandwidthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && return this->clientToken_ == nullptr && return this->dryRun_ == nullptr && return this->ipv6AddressId_ == nullptr && return this->ipv6InternetBandwidthId_ == nullptr && return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline ModifyIpv6InternetBandwidthRequest& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyIpv6InternetBandwidthRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyIpv6InternetBandwidthRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ipv6AddressId Field Functions 
    bool hasIpv6AddressId() const { return this->ipv6AddressId_ != nullptr;};
    void deleteIpv6AddressId() { this->ipv6AddressId_ = nullptr;};
    inline string ipv6AddressId() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressId_, "") };
    inline ModifyIpv6InternetBandwidthRequest& setIpv6AddressId(string ipv6AddressId) { DARABONBA_PTR_SET_VALUE(ipv6AddressId_, ipv6AddressId) };


    // ipv6InternetBandwidthId Field Functions 
    bool hasIpv6InternetBandwidthId() const { return this->ipv6InternetBandwidthId_ != nullptr;};
    void deleteIpv6InternetBandwidthId() { this->ipv6InternetBandwidthId_ = nullptr;};
    inline string ipv6InternetBandwidthId() const { DARABONBA_PTR_GET_DEFAULT(ipv6InternetBandwidthId_, "") };
    inline ModifyIpv6InternetBandwidthRequest& setIpv6InternetBandwidthId(string ipv6InternetBandwidthId) { DARABONBA_PTR_SET_VALUE(ipv6InternetBandwidthId_, ipv6InternetBandwidthId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyIpv6InternetBandwidthRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyIpv6InternetBandwidthRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyIpv6InternetBandwidthRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyIpv6InternetBandwidthRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyIpv6InternetBandwidthRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The Internet bandwidth value of the IPv6 address. Unit: Mbit/s.
    // 
    // *   If the billing method is pay-by-data-transfer, valid values are **1** to **1000**.
    // *   If the billing method is pay-by-bandwidth, valid values are **1** to **2000**.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> bandwidth_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform a dry run, without sending the actual request. Valid values:
    // 
    // *   **true**: pre-checks the request but does not create the IPv4 gateway. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): sends the API request. After the request passes the check, an HTTP 2xx status code is returned and the IPv4 gateway is created.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The ID of the IPv6 address.
    // 
    // >  You must specify one of **Ipv6AddressId** and **Ipv6InternetBandwidthId**.
    std::shared_ptr<string> ipv6AddressId_ = nullptr;
    // The instance ID of the Internet bandwidth of the IPv6 address.
    std::shared_ptr<string> ipv6InternetBandwidthId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region where the IPv6 gateway is deployed. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
