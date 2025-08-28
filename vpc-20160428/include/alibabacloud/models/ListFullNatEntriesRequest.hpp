// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFULLNATENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFULLNATENTRIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListFullNatEntriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFullNatEntriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(FullNatEntryId, fullNatEntryId_);
      DARABONBA_PTR_TO_JSON(FullNatEntryNames, fullNatEntryNames_);
      DARABONBA_PTR_TO_JSON(FullNatTableId, fullNatTableId_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatIp, natIp_);
      DARABONBA_PTR_TO_JSON(NatIpPort, natIpPort_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFullNatEntriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(FullNatEntryId, fullNatEntryId_);
      DARABONBA_PTR_FROM_JSON(FullNatEntryNames, fullNatEntryNames_);
      DARABONBA_PTR_FROM_JSON(FullNatTableId, fullNatTableId_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatIp, natIp_);
      DARABONBA_PTR_FROM_JSON(NatIpPort, natIpPort_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ListFullNatEntriesRequest() = default ;
    ListFullNatEntriesRequest(const ListFullNatEntriesRequest &) = default ;
    ListFullNatEntriesRequest(ListFullNatEntriesRequest &&) = default ;
    ListFullNatEntriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFullNatEntriesRequest() = default ;
    ListFullNatEntriesRequest& operator=(const ListFullNatEntriesRequest &) = default ;
    ListFullNatEntriesRequest& operator=(ListFullNatEntriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->fullNatEntryId_ != nullptr && this->fullNatEntryNames_ != nullptr && this->fullNatTableId_ != nullptr && this->ipProtocol_ != nullptr && this->maxResults_ != nullptr
        && this->natGatewayId_ != nullptr && this->natIp_ != nullptr && this->natIpPort_ != nullptr && this->networkInterfaceIds_ != nullptr && this->nextToken_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ListFullNatEntriesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // fullNatEntryId Field Functions 
    bool hasFullNatEntryId() const { return this->fullNatEntryId_ != nullptr;};
    void deleteFullNatEntryId() { this->fullNatEntryId_ = nullptr;};
    inline string fullNatEntryId() const { DARABONBA_PTR_GET_DEFAULT(fullNatEntryId_, "") };
    inline ListFullNatEntriesRequest& setFullNatEntryId(string fullNatEntryId) { DARABONBA_PTR_SET_VALUE(fullNatEntryId_, fullNatEntryId) };


    // fullNatEntryNames Field Functions 
    bool hasFullNatEntryNames() const { return this->fullNatEntryNames_ != nullptr;};
    void deleteFullNatEntryNames() { this->fullNatEntryNames_ = nullptr;};
    inline const vector<string> & fullNatEntryNames() const { DARABONBA_PTR_GET_CONST(fullNatEntryNames_, vector<string>) };
    inline vector<string> fullNatEntryNames() { DARABONBA_PTR_GET(fullNatEntryNames_, vector<string>) };
    inline ListFullNatEntriesRequest& setFullNatEntryNames(const vector<string> & fullNatEntryNames) { DARABONBA_PTR_SET_VALUE(fullNatEntryNames_, fullNatEntryNames) };
    inline ListFullNatEntriesRequest& setFullNatEntryNames(vector<string> && fullNatEntryNames) { DARABONBA_PTR_SET_RVALUE(fullNatEntryNames_, fullNatEntryNames) };


    // fullNatTableId Field Functions 
    bool hasFullNatTableId() const { return this->fullNatTableId_ != nullptr;};
    void deleteFullNatTableId() { this->fullNatTableId_ = nullptr;};
    inline string fullNatTableId() const { DARABONBA_PTR_GET_DEFAULT(fullNatTableId_, "") };
    inline ListFullNatEntriesRequest& setFullNatTableId(string fullNatTableId) { DARABONBA_PTR_SET_VALUE(fullNatTableId_, fullNatTableId) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline ListFullNatEntriesRequest& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListFullNatEntriesRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline ListFullNatEntriesRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natIp Field Functions 
    bool hasNatIp() const { return this->natIp_ != nullptr;};
    void deleteNatIp() { this->natIp_ = nullptr;};
    inline string natIp() const { DARABONBA_PTR_GET_DEFAULT(natIp_, "") };
    inline ListFullNatEntriesRequest& setNatIp(string natIp) { DARABONBA_PTR_SET_VALUE(natIp_, natIp) };


    // natIpPort Field Functions 
    bool hasNatIpPort() const { return this->natIpPort_ != nullptr;};
    void deleteNatIpPort() { this->natIpPort_ = nullptr;};
    inline string natIpPort() const { DARABONBA_PTR_GET_DEFAULT(natIpPort_, "") };
    inline ListFullNatEntriesRequest& setNatIpPort(string natIpPort) { DARABONBA_PTR_SET_VALUE(natIpPort_, natIpPort) };


    // networkInterfaceIds Field Functions 
    bool hasNetworkInterfaceIds() const { return this->networkInterfaceIds_ != nullptr;};
    void deleteNetworkInterfaceIds() { this->networkInterfaceIds_ = nullptr;};
    inline const vector<string> & networkInterfaceIds() const { DARABONBA_PTR_GET_CONST(networkInterfaceIds_, vector<string>) };
    inline vector<string> networkInterfaceIds() { DARABONBA_PTR_GET(networkInterfaceIds_, vector<string>) };
    inline ListFullNatEntriesRequest& setNetworkInterfaceIds(const vector<string> & networkInterfaceIds) { DARABONBA_PTR_SET_VALUE(networkInterfaceIds_, networkInterfaceIds) };
    inline ListFullNatEntriesRequest& setNetworkInterfaceIds(vector<string> && networkInterfaceIds) { DARABONBA_PTR_SET_RVALUE(networkInterfaceIds_, networkInterfaceIds) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFullNatEntriesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListFullNatEntriesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListFullNatEntriesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListFullNatEntriesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListFullNatEntriesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListFullNatEntriesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the FULLNAT entry that you want to query.
    std::shared_ptr<string> fullNatEntryId_ = nullptr;
    // The name of the FULLNAT entry that you want to query. You can specify at most 20 names.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The name must start with a letter.
    std::shared_ptr<vector<string>> fullNatEntryNames_ = nullptr;
    // The ID of the FULLNAT table to which the FULLNAT entries to be queried belong.
    // 
    // >  You must specify at least one of **FullNatTableId** and **NatGatewayId**.
    std::shared_ptr<string> fullNatTableId_ = nullptr;
    // The protocol of the packets that are forwarded by the port. Valid values:
    // 
    // *   **TCP**
    // *   **UDP**
    std::shared_ptr<string> ipProtocol_ = nullptr;
    // The number of entries per page. Valid values: **1** to **100**. Default value: **20**.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The ID of the NAT gateway.
    // 
    // >  You must specify at least one of **FullNatTableId** and **NatGatewayId**.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // The NAT IP address that provides address translation in FULLNAT entries.
    std::shared_ptr<string> natIp_ = nullptr;
    // The frontend port to be modified in the mapping of FULLNAT port. Valid values: **1** to **65535**.
    std::shared_ptr<string> natIpPort_ = nullptr;
    // The ID of the elastic network interface (ENI) that you want to query.
    std::shared_ptr<vector<string>> networkInterfaceIds_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of the **NextToken** parameter.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the virtual private cloud (VPC) NAT gateway to which the FULLNAT entries to be queried belong.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
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
