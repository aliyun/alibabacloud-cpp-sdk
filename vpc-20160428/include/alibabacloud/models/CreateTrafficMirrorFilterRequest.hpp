// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAFFICMIRRORFILTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAFFICMIRRORFILTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTrafficMirrorFilterRequestEgressRules.hpp>
#include <alibabacloud/models/CreateTrafficMirrorFilterRequestIngressRules.hpp>
#include <alibabacloud/models/CreateTrafficMirrorFilterRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateTrafficMirrorFilterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrafficMirrorFilterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EgressRules, egressRules_);
      DARABONBA_PTR_TO_JSON(IngressRules, ingressRules_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorFilterDescription, trafficMirrorFilterDescription_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorFilterName, trafficMirrorFilterName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrafficMirrorFilterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EgressRules, egressRules_);
      DARABONBA_PTR_FROM_JSON(IngressRules, ingressRules_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterDescription, trafficMirrorFilterDescription_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterName, trafficMirrorFilterName_);
    };
    CreateTrafficMirrorFilterRequest() = default ;
    CreateTrafficMirrorFilterRequest(const CreateTrafficMirrorFilterRequest &) = default ;
    CreateTrafficMirrorFilterRequest(CreateTrafficMirrorFilterRequest &&) = default ;
    CreateTrafficMirrorFilterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrafficMirrorFilterRequest() = default ;
    CreateTrafficMirrorFilterRequest& operator=(const CreateTrafficMirrorFilterRequest &) = default ;
    CreateTrafficMirrorFilterRequest& operator=(CreateTrafficMirrorFilterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->dryRun_ == nullptr && return this->egressRules_ == nullptr && return this->ingressRules_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->tag_ == nullptr
        && return this->trafficMirrorFilterDescription_ == nullptr && return this->trafficMirrorFilterName_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTrafficMirrorFilterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateTrafficMirrorFilterRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // egressRules Field Functions 
    bool hasEgressRules() const { return this->egressRules_ != nullptr;};
    void deleteEgressRules() { this->egressRules_ = nullptr;};
    inline const vector<CreateTrafficMirrorFilterRequestEgressRules> & egressRules() const { DARABONBA_PTR_GET_CONST(egressRules_, vector<CreateTrafficMirrorFilterRequestEgressRules>) };
    inline vector<CreateTrafficMirrorFilterRequestEgressRules> egressRules() { DARABONBA_PTR_GET(egressRules_, vector<CreateTrafficMirrorFilterRequestEgressRules>) };
    inline CreateTrafficMirrorFilterRequest& setEgressRules(const vector<CreateTrafficMirrorFilterRequestEgressRules> & egressRules) { DARABONBA_PTR_SET_VALUE(egressRules_, egressRules) };
    inline CreateTrafficMirrorFilterRequest& setEgressRules(vector<CreateTrafficMirrorFilterRequestEgressRules> && egressRules) { DARABONBA_PTR_SET_RVALUE(egressRules_, egressRules) };


    // ingressRules Field Functions 
    bool hasIngressRules() const { return this->ingressRules_ != nullptr;};
    void deleteIngressRules() { this->ingressRules_ = nullptr;};
    inline const vector<CreateTrafficMirrorFilterRequestIngressRules> & ingressRules() const { DARABONBA_PTR_GET_CONST(ingressRules_, vector<CreateTrafficMirrorFilterRequestIngressRules>) };
    inline vector<CreateTrafficMirrorFilterRequestIngressRules> ingressRules() { DARABONBA_PTR_GET(ingressRules_, vector<CreateTrafficMirrorFilterRequestIngressRules>) };
    inline CreateTrafficMirrorFilterRequest& setIngressRules(const vector<CreateTrafficMirrorFilterRequestIngressRules> & ingressRules) { DARABONBA_PTR_SET_VALUE(ingressRules_, ingressRules) };
    inline CreateTrafficMirrorFilterRequest& setIngressRules(vector<CreateTrafficMirrorFilterRequestIngressRules> && ingressRules) { DARABONBA_PTR_SET_RVALUE(ingressRules_, ingressRules) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateTrafficMirrorFilterRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTrafficMirrorFilterRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTrafficMirrorFilterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateTrafficMirrorFilterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTrafficMirrorFilterRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateTrafficMirrorFilterRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateTrafficMirrorFilterRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateTrafficMirrorFilterRequestTag>) };
    inline vector<CreateTrafficMirrorFilterRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateTrafficMirrorFilterRequestTag>) };
    inline CreateTrafficMirrorFilterRequest& setTag(const vector<CreateTrafficMirrorFilterRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateTrafficMirrorFilterRequest& setTag(vector<CreateTrafficMirrorFilterRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // trafficMirrorFilterDescription Field Functions 
    bool hasTrafficMirrorFilterDescription() const { return this->trafficMirrorFilterDescription_ != nullptr;};
    void deleteTrafficMirrorFilterDescription() { this->trafficMirrorFilterDescription_ = nullptr;};
    inline string trafficMirrorFilterDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterDescription_, "") };
    inline CreateTrafficMirrorFilterRequest& setTrafficMirrorFilterDescription(string trafficMirrorFilterDescription) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterDescription_, trafficMirrorFilterDescription) };


    // trafficMirrorFilterName Field Functions 
    bool hasTrafficMirrorFilterName() const { return this->trafficMirrorFilterName_ != nullptr;};
    void deleteTrafficMirrorFilterName() { this->trafficMirrorFilterName_ = nullptr;};
    inline string trafficMirrorFilterName() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterName_, "") };
    inline CreateTrafficMirrorFilterRequest& setTrafficMirrorFilterName(string trafficMirrorFilterName) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterName_, trafficMirrorFilterName) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that the value is unique among all requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, the system uses **RequestId** as **ClientToken**. **RequestId** may be different for each API request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform a dry run. Valid values:
    // 
    // *   **true**: performs a dry run. The system checks the required parameters, request syntax, and limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false**: performs a dry run and sends the request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed. This is the default value.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The information about the outbound rules.
    std::shared_ptr<vector<CreateTrafficMirrorFilterRequestEgressRules>> egressRules_ = nullptr;
    // The information about inbound rules.
    std::shared_ptr<vector<CreateTrafficMirrorFilterRequestIngressRules>> ingressRules_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region to which the mirrored traffic belongs.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list. For more information about regions that support traffic mirror, see [Overview of traffic mirror](https://help.aliyun.com/document_detail/207513.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the mirrored traffic belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tag of the resource.
    std::shared_ptr<vector<CreateTrafficMirrorFilterRequestTag>> tag_ = nullptr;
    // The description of the filter.
    // 
    // The description must be 1 to 256 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> trafficMirrorFilterDescription_ = nullptr;
    // The name of the filter.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with `http://` or `https://`.
    std::shared_ptr<string> trafficMirrorFilterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
