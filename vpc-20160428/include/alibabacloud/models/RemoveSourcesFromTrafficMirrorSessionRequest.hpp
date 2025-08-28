// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVESOURCESFROMTRAFFICMIRRORSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVESOURCESFROMTRAFFICMIRRORSESSIONREQUEST_HPP_
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
  class RemoveSourcesFromTrafficMirrorSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveSourcesFromTrafficMirrorSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorSessionId, trafficMirrorSessionId_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorSourceIds, trafficMirrorSourceIds_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveSourcesFromTrafficMirrorSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorSessionId, trafficMirrorSessionId_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorSourceIds, trafficMirrorSourceIds_);
    };
    RemoveSourcesFromTrafficMirrorSessionRequest() = default ;
    RemoveSourcesFromTrafficMirrorSessionRequest(const RemoveSourcesFromTrafficMirrorSessionRequest &) = default ;
    RemoveSourcesFromTrafficMirrorSessionRequest(RemoveSourcesFromTrafficMirrorSessionRequest &&) = default ;
    RemoveSourcesFromTrafficMirrorSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveSourcesFromTrafficMirrorSessionRequest() = default ;
    RemoveSourcesFromTrafficMirrorSessionRequest& operator=(const RemoveSourcesFromTrafficMirrorSessionRequest &) = default ;
    RemoveSourcesFromTrafficMirrorSessionRequest& operator=(RemoveSourcesFromTrafficMirrorSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->trafficMirrorSessionId_ != nullptr && this->trafficMirrorSourceIds_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RemoveSourcesFromTrafficMirrorSessionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline RemoveSourcesFromTrafficMirrorSessionRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RemoveSourcesFromTrafficMirrorSessionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RemoveSourcesFromTrafficMirrorSessionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RemoveSourcesFromTrafficMirrorSessionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RemoveSourcesFromTrafficMirrorSessionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RemoveSourcesFromTrafficMirrorSessionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trafficMirrorSessionId Field Functions 
    bool hasTrafficMirrorSessionId() const { return this->trafficMirrorSessionId_ != nullptr;};
    void deleteTrafficMirrorSessionId() { this->trafficMirrorSessionId_ = nullptr;};
    inline string trafficMirrorSessionId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorSessionId_, "") };
    inline RemoveSourcesFromTrafficMirrorSessionRequest& setTrafficMirrorSessionId(string trafficMirrorSessionId) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessionId_, trafficMirrorSessionId) };


    // trafficMirrorSourceIds Field Functions 
    bool hasTrafficMirrorSourceIds() const { return this->trafficMirrorSourceIds_ != nullptr;};
    void deleteTrafficMirrorSourceIds() { this->trafficMirrorSourceIds_ = nullptr;};
    inline const vector<string> & trafficMirrorSourceIds() const { DARABONBA_PTR_GET_CONST(trafficMirrorSourceIds_, vector<string>) };
    inline vector<string> trafficMirrorSourceIds() { DARABONBA_PTR_GET(trafficMirrorSourceIds_, vector<string>) };
    inline RemoveSourcesFromTrafficMirrorSessionRequest& setTrafficMirrorSourceIds(const vector<string> & trafficMirrorSourceIds) { DARABONBA_PTR_SET_VALUE(trafficMirrorSourceIds_, trafficMirrorSourceIds) };
    inline RemoveSourcesFromTrafficMirrorSessionRequest& setTrafficMirrorSourceIds(vector<string> && trafficMirrorSourceIds) { DARABONBA_PTR_SET_RVALUE(trafficMirrorSourceIds_, trafficMirrorSourceIds) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that the value is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // >  If you do not set this parameter, the system uses **RequestId** as **ClientToken**. **RequestId** may be different for each API request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to check the request without performing the operation. Valid values:
    // 
    // *   **true**: checks the request without performing the operation. The system checks the required parameters, request format, and limits. If the request fails the check, an error message is returned. If the request passes the check, the `DryRunOperation` error code is returned.
    // *   **false** (default): sends the request. After the request passes the check, the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region to which the traffic mirror session belongs. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list. For more information about regions that support traffic mirror, see [Overview of traffic mirror](https://help.aliyun.com/document_detail/207513.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the traffic mirror session from which you want to delete a traffic mirror source.
    // 
    // This parameter is required.
    std::shared_ptr<string> trafficMirrorSessionId_ = nullptr;
    // The ID of the traffic mirror source to be deleted. Maximum value of N: 10.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> trafficMirrorSourceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
