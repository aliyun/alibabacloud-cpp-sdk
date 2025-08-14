// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGRANTVSWITCHENISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGRANTVSWITCHENISREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListGrantVSwitchEnisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGrantVSwitchEnisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PrimaryIpAddress, primaryIpAddress_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGrantVSwitchEnisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PrimaryIpAddress, primaryIpAddress_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListGrantVSwitchEnisRequest() = default ;
    ListGrantVSwitchEnisRequest(const ListGrantVSwitchEnisRequest &) = default ;
    ListGrantVSwitchEnisRequest(ListGrantVSwitchEnisRequest &&) = default ;
    ListGrantVSwitchEnisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGrantVSwitchEnisRequest() = default ;
    ListGrantVSwitchEnisRequest& operator=(const ListGrantVSwitchEnisRequest &) = default ;
    ListGrantVSwitchEnisRequest& operator=(ListGrantVSwitchEnisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->maxResults_ != nullptr && this->networkInterfaceId_ != nullptr && this->networkInterfaceName_ != nullptr && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->primaryIpAddress_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->vSwitchId_ != nullptr
        && this->vpcId_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline ListGrantVSwitchEnisRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListGrantVSwitchEnisRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline const vector<string> & networkInterfaceId() const { DARABONBA_PTR_GET_CONST(networkInterfaceId_, vector<string>) };
    inline vector<string> networkInterfaceId() { DARABONBA_PTR_GET(networkInterfaceId_, vector<string>) };
    inline ListGrantVSwitchEnisRequest& setNetworkInterfaceId(const vector<string> & networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };
    inline ListGrantVSwitchEnisRequest& setNetworkInterfaceId(vector<string> && networkInterfaceId) { DARABONBA_PTR_SET_RVALUE(networkInterfaceId_, networkInterfaceId) };


    // networkInterfaceName Field Functions 
    bool hasNetworkInterfaceName() const { return this->networkInterfaceName_ != nullptr;};
    void deleteNetworkInterfaceName() { this->networkInterfaceName_ = nullptr;};
    inline string networkInterfaceName() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceName_, "") };
    inline ListGrantVSwitchEnisRequest& setNetworkInterfaceName(string networkInterfaceName) { DARABONBA_PTR_SET_VALUE(networkInterfaceName_, networkInterfaceName) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListGrantVSwitchEnisRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListGrantVSwitchEnisRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListGrantVSwitchEnisRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // primaryIpAddress Field Functions 
    bool hasPrimaryIpAddress() const { return this->primaryIpAddress_ != nullptr;};
    void deletePrimaryIpAddress() { this->primaryIpAddress_ = nullptr;};
    inline string primaryIpAddress() const { DARABONBA_PTR_GET_DEFAULT(primaryIpAddress_, "") };
    inline ListGrantVSwitchEnisRequest& setPrimaryIpAddress(string primaryIpAddress) { DARABONBA_PTR_SET_VALUE(primaryIpAddress_, primaryIpAddress) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListGrantVSwitchEnisRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListGrantVSwitchEnisRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListGrantVSwitchEnisRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListGrantVSwitchEnisRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the CEN instance to which the VPC is attached.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenId_ = nullptr;
    // The number of entries to return on each page. Valid values: 10 to 500.
    // 
    // Default value:
    // 
    // *   If you do not specify a value, the default value is 20.
    // *   If this parameter is set to a value greater than 500, the default value is 500.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The ID of ENI N. Valid values of N: 1 to 100.
    std::shared_ptr<vector<string>> networkInterfaceId_ = nullptr;
    // The name of the ENI.
    std::shared_ptr<string> networkInterfaceName_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The primary private IPv4 address of the ENI.
    std::shared_ptr<string> primaryIpAddress_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of a vSwitch in the VPC. You can specify only one vSwitch in each call.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the VPC.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
