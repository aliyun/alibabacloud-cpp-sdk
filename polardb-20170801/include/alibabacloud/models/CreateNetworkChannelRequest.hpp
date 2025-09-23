// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateNetworkChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Notes, notes_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TargetDBClusterId, targetDBClusterId_);
      DARABONBA_PTR_TO_JSON(TargetIp, targetIp_);
      DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Notes, notes_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TargetDBClusterId, targetDBClusterId_);
      DARABONBA_PTR_FROM_JSON(TargetIp, targetIp_);
      DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateNetworkChannelRequest() = default ;
    CreateNetworkChannelRequest(const CreateNetworkChannelRequest &) = default ;
    CreateNetworkChannelRequest(CreateNetworkChannelRequest &&) = default ;
    CreateNetworkChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkChannelRequest() = default ;
    CreateNetworkChannelRequest& operator=(const CreateNetworkChannelRequest &) = default ;
    CreateNetworkChannelRequest& operator=(CreateNetworkChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelName_ != nullptr
        && this->clientToken_ != nullptr && this->DBClusterId_ != nullptr && this->notes_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->targetDBClusterId_ != nullptr
        && this->targetIp_ != nullptr && this->targetPort_ != nullptr && this->vpcId_ != nullptr; };
    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string channelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline CreateNetworkChannelRequest& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateNetworkChannelRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateNetworkChannelRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // notes Field Functions 
    bool hasNotes() const { return this->notes_ != nullptr;};
    void deleteNotes() { this->notes_ = nullptr;};
    inline string notes() const { DARABONBA_PTR_GET_DEFAULT(notes_, "") };
    inline CreateNetworkChannelRequest& setNotes(string notes) { DARABONBA_PTR_SET_VALUE(notes_, notes) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateNetworkChannelRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateNetworkChannelRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateNetworkChannelRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateNetworkChannelRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateNetworkChannelRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateNetworkChannelRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // targetDBClusterId Field Functions 
    bool hasTargetDBClusterId() const { return this->targetDBClusterId_ != nullptr;};
    void deleteTargetDBClusterId() { this->targetDBClusterId_ = nullptr;};
    inline string targetDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(targetDBClusterId_, "") };
    inline CreateNetworkChannelRequest& setTargetDBClusterId(string targetDBClusterId) { DARABONBA_PTR_SET_VALUE(targetDBClusterId_, targetDBClusterId) };


    // targetIp Field Functions 
    bool hasTargetIp() const { return this->targetIp_ != nullptr;};
    void deleteTargetIp() { this->targetIp_ = nullptr;};
    inline string targetIp() const { DARABONBA_PTR_GET_DEFAULT(targetIp_, "") };
    inline CreateNetworkChannelRequest& setTargetIp(string targetIp) { DARABONBA_PTR_SET_VALUE(targetIp_, targetIp) };


    // targetPort Field Functions 
    bool hasTargetPort() const { return this->targetPort_ != nullptr;};
    void deleteTargetPort() { this->targetPort_ = nullptr;};
    inline string targetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, "") };
    inline CreateNetworkChannelRequest& setTargetPort(string targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateNetworkChannelRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> channelName_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> notes_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> targetDBClusterId_ = nullptr;
    std::shared_ptr<string> targetIp_ = nullptr;
    std::shared_ptr<string> targetPort_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
