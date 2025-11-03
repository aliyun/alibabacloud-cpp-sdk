// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNATIPCIDRSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNATIPCIDRSREQUEST_HPP_
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
  class ListNatIpCidrsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNatIpCidrsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatIpCidr, natIpCidr_);
      DARABONBA_PTR_TO_JSON(NatIpCidrName, natIpCidrName_);
      DARABONBA_PTR_TO_JSON(NatIpCidrStatus, natIpCidrStatus_);
      DARABONBA_PTR_TO_JSON(NatIpCidrs, natIpCidrs_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNatIpCidrsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatIpCidr, natIpCidr_);
      DARABONBA_PTR_FROM_JSON(NatIpCidrName, natIpCidrName_);
      DARABONBA_PTR_FROM_JSON(NatIpCidrStatus, natIpCidrStatus_);
      DARABONBA_PTR_FROM_JSON(NatIpCidrs, natIpCidrs_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ListNatIpCidrsRequest() = default ;
    ListNatIpCidrsRequest(const ListNatIpCidrsRequest &) = default ;
    ListNatIpCidrsRequest(ListNatIpCidrsRequest &&) = default ;
    ListNatIpCidrsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNatIpCidrsRequest() = default ;
    ListNatIpCidrsRequest& operator=(const ListNatIpCidrsRequest &) = default ;
    ListNatIpCidrsRequest& operator=(ListNatIpCidrsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->dryRun_ == nullptr && return this->maxResults_ == nullptr && return this->natGatewayId_ == nullptr && return this->natIpCidr_ == nullptr && return this->natIpCidrName_ == nullptr
        && return this->natIpCidrStatus_ == nullptr && return this->natIpCidrs_ == nullptr && return this->nextToken_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ListNatIpCidrsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ListNatIpCidrsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline ListNatIpCidrsRequest& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline ListNatIpCidrsRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natIpCidr Field Functions 
    bool hasNatIpCidr() const { return this->natIpCidr_ != nullptr;};
    void deleteNatIpCidr() { this->natIpCidr_ = nullptr;};
    inline string natIpCidr() const { DARABONBA_PTR_GET_DEFAULT(natIpCidr_, "") };
    inline ListNatIpCidrsRequest& setNatIpCidr(string natIpCidr) { DARABONBA_PTR_SET_VALUE(natIpCidr_, natIpCidr) };


    // natIpCidrName Field Functions 
    bool hasNatIpCidrName() const { return this->natIpCidrName_ != nullptr;};
    void deleteNatIpCidrName() { this->natIpCidrName_ = nullptr;};
    inline const vector<string> & natIpCidrName() const { DARABONBA_PTR_GET_CONST(natIpCidrName_, vector<string>) };
    inline vector<string> natIpCidrName() { DARABONBA_PTR_GET(natIpCidrName_, vector<string>) };
    inline ListNatIpCidrsRequest& setNatIpCidrName(const vector<string> & natIpCidrName) { DARABONBA_PTR_SET_VALUE(natIpCidrName_, natIpCidrName) };
    inline ListNatIpCidrsRequest& setNatIpCidrName(vector<string> && natIpCidrName) { DARABONBA_PTR_SET_RVALUE(natIpCidrName_, natIpCidrName) };


    // natIpCidrStatus Field Functions 
    bool hasNatIpCidrStatus() const { return this->natIpCidrStatus_ != nullptr;};
    void deleteNatIpCidrStatus() { this->natIpCidrStatus_ = nullptr;};
    inline string natIpCidrStatus() const { DARABONBA_PTR_GET_DEFAULT(natIpCidrStatus_, "") };
    inline ListNatIpCidrsRequest& setNatIpCidrStatus(string natIpCidrStatus) { DARABONBA_PTR_SET_VALUE(natIpCidrStatus_, natIpCidrStatus) };


    // natIpCidrs Field Functions 
    bool hasNatIpCidrs() const { return this->natIpCidrs_ != nullptr;};
    void deleteNatIpCidrs() { this->natIpCidrs_ = nullptr;};
    inline const vector<string> & natIpCidrs() const { DARABONBA_PTR_GET_CONST(natIpCidrs_, vector<string>) };
    inline vector<string> natIpCidrs() { DARABONBA_PTR_GET(natIpCidrs_, vector<string>) };
    inline ListNatIpCidrsRequest& setNatIpCidrs(const vector<string> & natIpCidrs) { DARABONBA_PTR_SET_VALUE(natIpCidrs_, natIpCidrs) };
    inline ListNatIpCidrsRequest& setNatIpCidrs(vector<string> && natIpCidrs) { DARABONBA_PTR_SET_RVALUE(natIpCidrs_, natIpCidrs) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNatIpCidrsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListNatIpCidrsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListNatIpCidrsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListNatIpCidrsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListNatIpCidrsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListNatIpCidrsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // >  If you do not set this parameter, the system automatically uses **RequestId** as **ClientToken**. **RequestId** may be different for each API request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to only precheck this request. Valid values:
    // 
    // *   **true**: checks the API request. The CIDR blocks of the NAT gateway are not queried if the API request passes the precheck. The system checks whether your AccessKey pair is valid, whether the Resource Access Management (RAM) user is authorized, and whether the required parameters are set. If the request fails to pass the precheck, the corresponding error message is returned. If the check succeeds, the DryRunOperation error code is returned.
    // *   **false**: sends the API request. If the request passes the precheck, 2xx HTTP status code is returned and the CIDR blocks of the NAT gateway are queried. This is the default value.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The number of entries to return on each page. Valid values: **1** to **100**. Default value: **20**.
    std::shared_ptr<string> maxResults_ = nullptr;
    // The ID of the VPC NAT gateway that you want to query.
    // 
    // This parameter is required.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // The CIDR block of the NAT gateway that you want to query.
    std::shared_ptr<string> natIpCidr_ = nullptr;
    // The name of the CIDR block that you want to query. Valid values of **N**: **1** to **20**.
    std::shared_ptr<vector<string>> natIpCidrName_ = nullptr;
    // The status of the CIDR block that you want to query. Set the value to **Available**.
    std::shared_ptr<string> natIpCidrStatus_ = nullptr;
    // The CIDR block of the NAT gateway that you want to query. Valid values of **N**: **1** to **20**.
    std::shared_ptr<vector<string>> natIpCidrs_ = nullptr;
    // The token that is used for the next query. Set the value as needed.
    // 
    // *   If this is your first query or no next query is to be sent, ignore this parameter.
    // *   If a next query is to be sent, set the value to the value of NextToken that is returned from the last call.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the Virtual Private Cloud (VPC) NAT gateway that you want to query.
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
