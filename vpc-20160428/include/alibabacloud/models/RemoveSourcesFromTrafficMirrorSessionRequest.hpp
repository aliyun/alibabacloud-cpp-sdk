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
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->trafficMirrorSessionId_ == nullptr && this->trafficMirrorSourceIds_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RemoveSourcesFromTrafficMirrorSessionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline RemoveSourcesFromTrafficMirrorSessionRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RemoveSourcesFromTrafficMirrorSessionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RemoveSourcesFromTrafficMirrorSessionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RemoveSourcesFromTrafficMirrorSessionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RemoveSourcesFromTrafficMirrorSessionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RemoveSourcesFromTrafficMirrorSessionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trafficMirrorSessionId Field Functions 
    bool hasTrafficMirrorSessionId() const { return this->trafficMirrorSessionId_ != nullptr;};
    void deleteTrafficMirrorSessionId() { this->trafficMirrorSessionId_ = nullptr;};
    inline string getTrafficMirrorSessionId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorSessionId_, "") };
    inline RemoveSourcesFromTrafficMirrorSessionRequest& setTrafficMirrorSessionId(string trafficMirrorSessionId) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessionId_, trafficMirrorSessionId) };


    // trafficMirrorSourceIds Field Functions 
    bool hasTrafficMirrorSourceIds() const { return this->trafficMirrorSourceIds_ != nullptr;};
    void deleteTrafficMirrorSourceIds() { this->trafficMirrorSourceIds_ = nullptr;};
    inline const vector<string> & getTrafficMirrorSourceIds() const { DARABONBA_PTR_GET_CONST(trafficMirrorSourceIds_, vector<string>) };
    inline vector<string> getTrafficMirrorSourceIds() { DARABONBA_PTR_GET(trafficMirrorSourceIds_, vector<string>) };
    inline RemoveSourcesFromTrafficMirrorSessionRequest& setTrafficMirrorSourceIds(const vector<string> & trafficMirrorSourceIds) { DARABONBA_PTR_SET_VALUE(trafficMirrorSourceIds_, trafficMirrorSourceIds) };
    inline RemoveSourcesFromTrafficMirrorSessionRequest& setTrafficMirrorSourceIds(vector<string> && trafficMirrorSourceIds) { DARABONBA_PTR_SET_RVALUE(trafficMirrorSourceIds_, trafficMirrorSourceIds) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // The client generates the value. The value must be unique among different requests and cannot exceed 64 ASCII characters in length.
    // 
    // > If you do not specify this parameter, the system uses the **RequestId** as the **ClientToken**. The **RequestId** may differ for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: performs a dry run without removing the traffic mirror sources. The system checks the required parameters, request format, and limits. If the request fails the check, an error message is returned. If the request passes the check, the `DryRunOperation` error code is returned.
    // 
    // - **false** (default): sends the request. After the request passes the check, the traffic mirror sources are removed.
    shared_ptr<bool> dryRun_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the traffic mirror session. You can call [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) to query the most recent region list. For more information about the regions that support traffic mirroring, see [Traffic mirroring overview](https://help.aliyun.com/document_detail/207513.html).
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The instance ID of the traffic mirror session from which you want to delete traffic mirror sources.
    // 
    // This parameter is required.
    shared_ptr<string> trafficMirrorSessionId_ {};
    // The instance ID of the traffic mirror source that you want to delete. The maximum value of **N** is **10**.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> trafficMirrorSourceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
