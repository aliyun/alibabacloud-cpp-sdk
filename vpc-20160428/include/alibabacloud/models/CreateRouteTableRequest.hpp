// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTETABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTETABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRouteTableRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateRouteTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRouteTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssociateType, associateType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouteTableName, routeTableName_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRouteTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociateType, associateType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouteTableName, routeTableName_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateRouteTableRequest() = default ;
    CreateRouteTableRequest(const CreateRouteTableRequest &) = default ;
    CreateRouteTableRequest(CreateRouteTableRequest &&) = default ;
    CreateRouteTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRouteTableRequest() = default ;
    CreateRouteTableRequest& operator=(const CreateRouteTableRequest &) = default ;
    CreateRouteTableRequest& operator=(CreateRouteTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->associateType_ != nullptr
        && this->clientToken_ != nullptr && this->description_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->routeTableName_ != nullptr && this->tag_ != nullptr && this->vpcId_ != nullptr; };
    // associateType Field Functions 
    bool hasAssociateType() const { return this->associateType_ != nullptr;};
    void deleteAssociateType() { this->associateType_ = nullptr;};
    inline string associateType() const { DARABONBA_PTR_GET_DEFAULT(associateType_, "") };
    inline CreateRouteTableRequest& setAssociateType(string associateType) { DARABONBA_PTR_SET_VALUE(associateType_, associateType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateRouteTableRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRouteTableRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateRouteTableRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateRouteTableRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateRouteTableRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateRouteTableRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateRouteTableRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeTableName Field Functions 
    bool hasRouteTableName() const { return this->routeTableName_ != nullptr;};
    void deleteRouteTableName() { this->routeTableName_ = nullptr;};
    inline string routeTableName() const { DARABONBA_PTR_GET_DEFAULT(routeTableName_, "") };
    inline CreateRouteTableRequest& setRouteTableName(string routeTableName) { DARABONBA_PTR_SET_VALUE(routeTableName_, routeTableName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateRouteTableRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateRouteTableRequestTag>) };
    inline vector<CreateRouteTableRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateRouteTableRequestTag>) };
    inline CreateRouteTableRequest& setTag(const vector<CreateRouteTableRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateRouteTableRequest& setTag(vector<CreateRouteTableRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateRouteTableRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The type of the route table. Valid values:
    // 
    // *   **VSwitch** (default): vSwitch route table
    // *   **Gateway**: gateway route table
    std::shared_ptr<string> associateType_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, **ClientToken** is set to the value of **RequestId**. The value of **RequestId** in each API request may be different.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the route table.
    // 
    // The description must be 1 to 256 characters in length, and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the virtual private cloud (VPC) to which the custom route table belongs.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The name of the route table.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with `http://` or `https://`.
    std::shared_ptr<string> routeTableName_ = nullptr;
    // The tags of the resource.
    std::shared_ptr<vector<CreateRouteTableRequestTag>> tag_ = nullptr;
    // The ID of the VPC to which the custom route table belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
