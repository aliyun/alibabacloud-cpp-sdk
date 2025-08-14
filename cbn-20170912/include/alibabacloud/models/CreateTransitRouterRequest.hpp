// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTransitRouterRequestTag.hpp>
#include <alibabacloud/models/CreateTransitRouterRequestTransitRouterCidrList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateTransitRouterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SupportMulticast, supportMulticast_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TransitRouterCidrList, transitRouterCidrList_);
      DARABONBA_PTR_TO_JSON(TransitRouterDescription, transitRouterDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouterName, transitRouterName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SupportMulticast, supportMulticast_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TransitRouterCidrList, transitRouterCidrList_);
      DARABONBA_PTR_FROM_JSON(TransitRouterDescription, transitRouterDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouterName, transitRouterName_);
    };
    CreateTransitRouterRequest() = default ;
    CreateTransitRouterRequest(const CreateTransitRouterRequest &) = default ;
    CreateTransitRouterRequest(CreateTransitRouterRequest &&) = default ;
    CreateTransitRouterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouterRequest() = default ;
    CreateTransitRouterRequest& operator=(const CreateTransitRouterRequest &) = default ;
    CreateTransitRouterRequest& operator=(CreateTransitRouterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->clientToken_ != nullptr && this->dryRun_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->supportMulticast_ != nullptr && this->tag_ != nullptr && this->transitRouterCidrList_ != nullptr
        && this->transitRouterDescription_ != nullptr && this->transitRouterName_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateTransitRouterRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTransitRouterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateTransitRouterRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateTransitRouterRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTransitRouterRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTransitRouterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTransitRouterRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateTransitRouterRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // supportMulticast Field Functions 
    bool hasSupportMulticast() const { return this->supportMulticast_ != nullptr;};
    void deleteSupportMulticast() { this->supportMulticast_ = nullptr;};
    inline bool supportMulticast() const { DARABONBA_PTR_GET_DEFAULT(supportMulticast_, false) };
    inline CreateTransitRouterRequest& setSupportMulticast(bool supportMulticast) { DARABONBA_PTR_SET_VALUE(supportMulticast_, supportMulticast) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateTransitRouterRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateTransitRouterRequestTag>) };
    inline vector<CreateTransitRouterRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateTransitRouterRequestTag>) };
    inline CreateTransitRouterRequest& setTag(const vector<CreateTransitRouterRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateTransitRouterRequest& setTag(vector<CreateTransitRouterRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // transitRouterCidrList Field Functions 
    bool hasTransitRouterCidrList() const { return this->transitRouterCidrList_ != nullptr;};
    void deleteTransitRouterCidrList() { this->transitRouterCidrList_ = nullptr;};
    inline const vector<CreateTransitRouterRequestTransitRouterCidrList> & transitRouterCidrList() const { DARABONBA_PTR_GET_CONST(transitRouterCidrList_, vector<CreateTransitRouterRequestTransitRouterCidrList>) };
    inline vector<CreateTransitRouterRequestTransitRouterCidrList> transitRouterCidrList() { DARABONBA_PTR_GET(transitRouterCidrList_, vector<CreateTransitRouterRequestTransitRouterCidrList>) };
    inline CreateTransitRouterRequest& setTransitRouterCidrList(const vector<CreateTransitRouterRequestTransitRouterCidrList> & transitRouterCidrList) { DARABONBA_PTR_SET_VALUE(transitRouterCidrList_, transitRouterCidrList) };
    inline CreateTransitRouterRequest& setTransitRouterCidrList(vector<CreateTransitRouterRequestTransitRouterCidrList> && transitRouterCidrList) { DARABONBA_PTR_SET_RVALUE(transitRouterCidrList_, transitRouterCidrList) };


    // transitRouterDescription Field Functions 
    bool hasTransitRouterDescription() const { return this->transitRouterDescription_ != nullptr;};
    void deleteTransitRouterDescription() { this->transitRouterDescription_ = nullptr;};
    inline string transitRouterDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterDescription_, "") };
    inline CreateTransitRouterRequest& setTransitRouterDescription(string transitRouterDescription) { DARABONBA_PTR_SET_VALUE(transitRouterDescription_, transitRouterDescription) };


    // transitRouterName Field Functions 
    bool hasTransitRouterName() const { return this->transitRouterName_ != nullptr;};
    void deleteTransitRouterName() { this->transitRouterName_ = nullptr;};
    inline string transitRouterName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterName_, "") };
    inline CreateTransitRouterRequest& setTransitRouterName(string transitRouterName) { DARABONBA_PTR_SET_VALUE(transitRouterName_, transitRouterName) };


  protected:
    // The ID of the Cloud Enterprise Network (CEN) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, the system automatically uses **RequestId** as **ClientToken**. The value of **RequestId** of each API request is different.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to check the request without performing the operation. Check items include permissions and the status of the specified cloud resources. Valid values:
    // 
    // *   **false** (default): sends the request. If the request passes the check, an Enterprise Edition transit router is created.
    // *   **true**: checks the request but does not create the Enterprise Edition transit router. If you use this value, the system checks whether the required parameters are set, and whether the request syntax is valid. If the request fails the check, an error message is returned. If the request passes the check, the `DryRunOperation` error code is returned.
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region where the Enterprise Edition transit router is deployed.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Specifies whether to enable the multicast feature for the Enterprise Edition transit router. Valid values:
    // 
    // *   **false** (default): no
    // *   **true**: yes
    // 
    // The multicast feature is supported only in specific regions. You can call [ListTransitRouterAvailableResource](https://help.aliyun.com/document_detail/261356.html) to query the regions that support multicast.
    std::shared_ptr<bool> supportMulticast_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateTransitRouterRequestTag>> tag_ = nullptr;
    // The CIDR blocks to be added to the transit router.
    std::shared_ptr<vector<CreateTransitRouterRequestTransitRouterCidrList>> transitRouterCidrList_ = nullptr;
    // The description of the Enterprise Edition transit router instance.
    // 
    // The description must be 1 to 256 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    std::shared_ptr<string> transitRouterDescription_ = nullptr;
    // The name of the Enterprise Edition transit router.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    std::shared_ptr<string> transitRouterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
