// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRAFFICMIRRORFILTERATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRAFFICMIRRORFILTERATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class UpdateTrafficMirrorFilterAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTrafficMirrorFilterAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorFilterDescription, trafficMirrorFilterDescription_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorFilterName, trafficMirrorFilterName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTrafficMirrorFilterAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterDescription, trafficMirrorFilterDescription_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterName, trafficMirrorFilterName_);
    };
    UpdateTrafficMirrorFilterAttributeRequest() = default ;
    UpdateTrafficMirrorFilterAttributeRequest(const UpdateTrafficMirrorFilterAttributeRequest &) = default ;
    UpdateTrafficMirrorFilterAttributeRequest(UpdateTrafficMirrorFilterAttributeRequest &&) = default ;
    UpdateTrafficMirrorFilterAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTrafficMirrorFilterAttributeRequest() = default ;
    UpdateTrafficMirrorFilterAttributeRequest& operator=(const UpdateTrafficMirrorFilterAttributeRequest &) = default ;
    UpdateTrafficMirrorFilterAttributeRequest& operator=(UpdateTrafficMirrorFilterAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->trafficMirrorFilterDescription_ == nullptr && this->trafficMirrorFilterId_ == nullptr && this->trafficMirrorFilterName_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTrafficMirrorFilterAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateTrafficMirrorFilterAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateTrafficMirrorFilterAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateTrafficMirrorFilterAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateTrafficMirrorFilterAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateTrafficMirrorFilterAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateTrafficMirrorFilterAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trafficMirrorFilterDescription Field Functions 
    bool hasTrafficMirrorFilterDescription() const { return this->trafficMirrorFilterDescription_ != nullptr;};
    void deleteTrafficMirrorFilterDescription() { this->trafficMirrorFilterDescription_ = nullptr;};
    inline string getTrafficMirrorFilterDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterDescription_, "") };
    inline UpdateTrafficMirrorFilterAttributeRequest& setTrafficMirrorFilterDescription(string trafficMirrorFilterDescription) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterDescription_, trafficMirrorFilterDescription) };


    // trafficMirrorFilterId Field Functions 
    bool hasTrafficMirrorFilterId() const { return this->trafficMirrorFilterId_ != nullptr;};
    void deleteTrafficMirrorFilterId() { this->trafficMirrorFilterId_ = nullptr;};
    inline string getTrafficMirrorFilterId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterId_, "") };
    inline UpdateTrafficMirrorFilterAttributeRequest& setTrafficMirrorFilterId(string trafficMirrorFilterId) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterId_, trafficMirrorFilterId) };


    // trafficMirrorFilterName Field Functions 
    bool hasTrafficMirrorFilterName() const { return this->trafficMirrorFilterName_ != nullptr;};
    void deleteTrafficMirrorFilterName() { this->trafficMirrorFilterName_ = nullptr;};
    inline string getTrafficMirrorFilterName() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterName_, "") };
    inline UpdateTrafficMirrorFilterAttributeRequest& setTrafficMirrorFilterName(string trafficMirrorFilterName) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterName_, trafficMirrorFilterName) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The ClientToken value can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** value as the **ClientToken** value. The **RequestId** value of each API request is different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: performs a dry run without modifying the configuration of the traffic mirror filter. The system checks the required parameters, request format, and business restrictions. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // - **false** (default): sends a normal request. If the request passes the dry run, a 2xx HTTP status code is returned and the configuration of the traffic mirror filter is modified.
    shared_ptr<bool> dryRun_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the traffic mirror filter.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list. For more information about the regions that support traffic mirroring, see [Traffic mirroring overview](https://help.aliyun.com/document_detail/207513.html).
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The new description of the traffic mirror filter.
    // 
    // The description must be 1 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> trafficMirrorFilterDescription_ {};
    // The instance ID of the traffic mirror filter.
    // 
    // This parameter is required.
    shared_ptr<string> trafficMirrorFilterId_ {};
    // The new name of the traffic mirror filter.
    // 
    // The name must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> trafficMirrorFilterName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
