// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOLVEANDROUTESERVICEINCENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESOLVEANDROUTESERVICEINCENREQUEST_HPP_
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
  class ResolveAndRouteServiceInCenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResolveAndRouteServiceInCenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessRegionIds, accessRegionIds_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(HostRegionId, hostRegionId_);
      DARABONBA_PTR_TO_JSON(HostVpcId, hostVpcId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ResolveAndRouteServiceInCenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessRegionIds, accessRegionIds_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(HostRegionId, hostRegionId_);
      DARABONBA_PTR_FROM_JSON(HostVpcId, hostVpcId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ResolveAndRouteServiceInCenRequest() = default ;
    ResolveAndRouteServiceInCenRequest(const ResolveAndRouteServiceInCenRequest &) = default ;
    ResolveAndRouteServiceInCenRequest(ResolveAndRouteServiceInCenRequest &&) = default ;
    ResolveAndRouteServiceInCenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResolveAndRouteServiceInCenRequest() = default ;
    ResolveAndRouteServiceInCenRequest& operator=(const ResolveAndRouteServiceInCenRequest &) = default ;
    ResolveAndRouteServiceInCenRequest& operator=(ResolveAndRouteServiceInCenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessRegionIds_ != nullptr
        && this->cenId_ != nullptr && this->clientToken_ != nullptr && this->description_ != nullptr && this->host_ != nullptr && this->hostRegionId_ != nullptr
        && this->hostVpcId_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // accessRegionIds Field Functions 
    bool hasAccessRegionIds() const { return this->accessRegionIds_ != nullptr;};
    void deleteAccessRegionIds() { this->accessRegionIds_ = nullptr;};
    inline const vector<string> & accessRegionIds() const { DARABONBA_PTR_GET_CONST(accessRegionIds_, vector<string>) };
    inline vector<string> accessRegionIds() { DARABONBA_PTR_GET(accessRegionIds_, vector<string>) };
    inline ResolveAndRouteServiceInCenRequest& setAccessRegionIds(const vector<string> & accessRegionIds) { DARABONBA_PTR_SET_VALUE(accessRegionIds_, accessRegionIds) };
    inline ResolveAndRouteServiceInCenRequest& setAccessRegionIds(vector<string> && accessRegionIds) { DARABONBA_PTR_SET_RVALUE(accessRegionIds_, accessRegionIds) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline ResolveAndRouteServiceInCenRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ResolveAndRouteServiceInCenRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ResolveAndRouteServiceInCenRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline ResolveAndRouteServiceInCenRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // hostRegionId Field Functions 
    bool hasHostRegionId() const { return this->hostRegionId_ != nullptr;};
    void deleteHostRegionId() { this->hostRegionId_ = nullptr;};
    inline string hostRegionId() const { DARABONBA_PTR_GET_DEFAULT(hostRegionId_, "") };
    inline ResolveAndRouteServiceInCenRequest& setHostRegionId(string hostRegionId) { DARABONBA_PTR_SET_VALUE(hostRegionId_, hostRegionId) };


    // hostVpcId Field Functions 
    bool hasHostVpcId() const { return this->hostVpcId_ != nullptr;};
    void deleteHostVpcId() { this->hostVpcId_ = nullptr;};
    inline string hostVpcId() const { DARABONBA_PTR_GET_DEFAULT(hostVpcId_, "") };
    inline ResolveAndRouteServiceInCenRequest& setHostVpcId(string hostVpcId) { DARABONBA_PTR_SET_VALUE(hostVpcId_, hostVpcId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ResolveAndRouteServiceInCenRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ResolveAndRouteServiceInCenRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ResolveAndRouteServiceInCenRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ResolveAndRouteServiceInCenRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The IDs of the regions where the cloud service is accessed.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> accessRegionIds_ = nullptr;
    // The ID of the CEN instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, **ClientToken** is set to the value of **RequestId**. The value of **RequestId** for each API request may be different.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the cloud service.
    // 
    // This parameter is optional. If you enter a description, it must be 1 to 256 characters in length and cannot start with http:// or https://.
    std::shared_ptr<string> description_ = nullptr;
    // The IP addresses or CIDR blocks of the cloud service.
    // 
    // > In most cases, multiple IP addresses or CIDR blocks are assigned to a cloud service. We recommend that you call this operation multiple times to add all IP addresses and CIDR blocks of the cloud service.
    // 
    // This parameter is required.
    std::shared_ptr<string> host_ = nullptr;
    // The ID of the region in which the cloud service is deployed.
    // 
    // This parameter is required.
    std::shared_ptr<string> hostRegionId_ = nullptr;
    // The ID of the VPC that is associated with the cloud service.
    // 
    // This parameter is required.
    std::shared_ptr<string> hostVpcId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
