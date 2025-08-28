// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNATIPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNATIPSREQUEST_HPP_
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
  class ListNatIpsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNatIpsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatIpCidr, natIpCidr_);
      DARABONBA_PTR_TO_JSON(NatIpIds, natIpIds_);
      DARABONBA_PTR_TO_JSON(NatIpName, natIpName_);
      DARABONBA_PTR_TO_JSON(NatIpStatus, natIpStatus_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNatIpsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatIpCidr, natIpCidr_);
      DARABONBA_PTR_FROM_JSON(NatIpIds, natIpIds_);
      DARABONBA_PTR_FROM_JSON(NatIpName, natIpName_);
      DARABONBA_PTR_FROM_JSON(NatIpStatus, natIpStatus_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ListNatIpsRequest() = default ;
    ListNatIpsRequest(const ListNatIpsRequest &) = default ;
    ListNatIpsRequest(ListNatIpsRequest &&) = default ;
    ListNatIpsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNatIpsRequest() = default ;
    ListNatIpsRequest& operator=(const ListNatIpsRequest &) = default ;
    ListNatIpsRequest& operator=(ListNatIpsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->maxResults_ != nullptr && this->natGatewayId_ != nullptr && this->natIpCidr_ != nullptr && this->natIpIds_ != nullptr
        && this->natIpName_ != nullptr && this->natIpStatus_ != nullptr && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ListNatIpsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ListNatIpsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline ListNatIpsRequest& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline ListNatIpsRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natIpCidr Field Functions 
    bool hasNatIpCidr() const { return this->natIpCidr_ != nullptr;};
    void deleteNatIpCidr() { this->natIpCidr_ = nullptr;};
    inline string natIpCidr() const { DARABONBA_PTR_GET_DEFAULT(natIpCidr_, "") };
    inline ListNatIpsRequest& setNatIpCidr(string natIpCidr) { DARABONBA_PTR_SET_VALUE(natIpCidr_, natIpCidr) };


    // natIpIds Field Functions 
    bool hasNatIpIds() const { return this->natIpIds_ != nullptr;};
    void deleteNatIpIds() { this->natIpIds_ = nullptr;};
    inline const vector<string> & natIpIds() const { DARABONBA_PTR_GET_CONST(natIpIds_, vector<string>) };
    inline vector<string> natIpIds() { DARABONBA_PTR_GET(natIpIds_, vector<string>) };
    inline ListNatIpsRequest& setNatIpIds(const vector<string> & natIpIds) { DARABONBA_PTR_SET_VALUE(natIpIds_, natIpIds) };
    inline ListNatIpsRequest& setNatIpIds(vector<string> && natIpIds) { DARABONBA_PTR_SET_RVALUE(natIpIds_, natIpIds) };


    // natIpName Field Functions 
    bool hasNatIpName() const { return this->natIpName_ != nullptr;};
    void deleteNatIpName() { this->natIpName_ = nullptr;};
    inline const vector<string> & natIpName() const { DARABONBA_PTR_GET_CONST(natIpName_, vector<string>) };
    inline vector<string> natIpName() { DARABONBA_PTR_GET(natIpName_, vector<string>) };
    inline ListNatIpsRequest& setNatIpName(const vector<string> & natIpName) { DARABONBA_PTR_SET_VALUE(natIpName_, natIpName) };
    inline ListNatIpsRequest& setNatIpName(vector<string> && natIpName) { DARABONBA_PTR_SET_RVALUE(natIpName_, natIpName) };


    // natIpStatus Field Functions 
    bool hasNatIpStatus() const { return this->natIpStatus_ != nullptr;};
    void deleteNatIpStatus() { this->natIpStatus_ = nullptr;};
    inline string natIpStatus() const { DARABONBA_PTR_GET_DEFAULT(natIpStatus_, "") };
    inline ListNatIpsRequest& setNatIpStatus(string natIpStatus) { DARABONBA_PTR_SET_VALUE(natIpStatus_, natIpStatus) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNatIpsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListNatIpsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListNatIpsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListNatIpsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListNatIpsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListNatIpsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // >  If you do not set this parameter, the system automatically uses **RequestId** as **ClientToken**. **RequestId** may be different for each API request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to only precheck the request. Valid values:
    // 
    // *   **true**: checks the API request. IP addresses are not queried. The system checks the required parameters, request syntax, and limits. If the request fails to pass the precheck, the corresponding error message is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // *   **false** (default): sends the request. If the request passes the precheck, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The number of entries to return on each page. Valid values: **1** to **100**. Default value: **20**.
    std::shared_ptr<string> maxResults_ = nullptr;
    // The ID of the NAT gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // The CIDR block to which the IP address belongs.
    std::shared_ptr<string> natIpCidr_ = nullptr;
    // The ID of the IP address. Valid values of **N**: **1** to **20**.
    std::shared_ptr<vector<string>> natIpIds_ = nullptr;
    // The name of the IP address. Valid values of **N**: **1** to **20**.
    std::shared_ptr<vector<string>> natIpName_ = nullptr;
    // The status of the IP address. Valid values:
    // 
    // *   **Available**
    // *   **Deleting**
    // *   **Creating**
    std::shared_ptr<string> natIpStatus_ = nullptr;
    // The token that is used for the next query. Valid values:
    // 
    // *   If this is your first query or no next query is to be sent, ignore this parameter.
    // *   If a next query is to be sent, set the value to the value of NextToken that is returned from the last call.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region where the NAT gateway is deployed.
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
