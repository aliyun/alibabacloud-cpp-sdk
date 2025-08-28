// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAFFICMIRRORFILTERRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAFFICMIRRORFILTERRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTrafficMirrorFilterRulesRequestEgressRules.hpp>
#include <alibabacloud/models/CreateTrafficMirrorFilterRulesRequestIngressRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateTrafficMirrorFilterRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrafficMirrorFilterRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EgressRules, egressRules_);
      DARABONBA_PTR_TO_JSON(IngressRules, ingressRules_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrafficMirrorFilterRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EgressRules, egressRules_);
      DARABONBA_PTR_FROM_JSON(IngressRules, ingressRules_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
    };
    CreateTrafficMirrorFilterRulesRequest() = default ;
    CreateTrafficMirrorFilterRulesRequest(const CreateTrafficMirrorFilterRulesRequest &) = default ;
    CreateTrafficMirrorFilterRulesRequest(CreateTrafficMirrorFilterRulesRequest &&) = default ;
    CreateTrafficMirrorFilterRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrafficMirrorFilterRulesRequest() = default ;
    CreateTrafficMirrorFilterRulesRequest& operator=(const CreateTrafficMirrorFilterRulesRequest &) = default ;
    CreateTrafficMirrorFilterRulesRequest& operator=(CreateTrafficMirrorFilterRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->egressRules_ != nullptr && this->ingressRules_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->trafficMirrorFilterId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTrafficMirrorFilterRulesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateTrafficMirrorFilterRulesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // egressRules Field Functions 
    bool hasEgressRules() const { return this->egressRules_ != nullptr;};
    void deleteEgressRules() { this->egressRules_ = nullptr;};
    inline const vector<CreateTrafficMirrorFilterRulesRequestEgressRules> & egressRules() const { DARABONBA_PTR_GET_CONST(egressRules_, vector<CreateTrafficMirrorFilterRulesRequestEgressRules>) };
    inline vector<CreateTrafficMirrorFilterRulesRequestEgressRules> egressRules() { DARABONBA_PTR_GET(egressRules_, vector<CreateTrafficMirrorFilterRulesRequestEgressRules>) };
    inline CreateTrafficMirrorFilterRulesRequest& setEgressRules(const vector<CreateTrafficMirrorFilterRulesRequestEgressRules> & egressRules) { DARABONBA_PTR_SET_VALUE(egressRules_, egressRules) };
    inline CreateTrafficMirrorFilterRulesRequest& setEgressRules(vector<CreateTrafficMirrorFilterRulesRequestEgressRules> && egressRules) { DARABONBA_PTR_SET_RVALUE(egressRules_, egressRules) };


    // ingressRules Field Functions 
    bool hasIngressRules() const { return this->ingressRules_ != nullptr;};
    void deleteIngressRules() { this->ingressRules_ = nullptr;};
    inline const vector<CreateTrafficMirrorFilterRulesRequestIngressRules> & ingressRules() const { DARABONBA_PTR_GET_CONST(ingressRules_, vector<CreateTrafficMirrorFilterRulesRequestIngressRules>) };
    inline vector<CreateTrafficMirrorFilterRulesRequestIngressRules> ingressRules() { DARABONBA_PTR_GET(ingressRules_, vector<CreateTrafficMirrorFilterRulesRequestIngressRules>) };
    inline CreateTrafficMirrorFilterRulesRequest& setIngressRules(const vector<CreateTrafficMirrorFilterRulesRequestIngressRules> & ingressRules) { DARABONBA_PTR_SET_VALUE(ingressRules_, ingressRules) };
    inline CreateTrafficMirrorFilterRulesRequest& setIngressRules(vector<CreateTrafficMirrorFilterRulesRequestIngressRules> && ingressRules) { DARABONBA_PTR_SET_RVALUE(ingressRules_, ingressRules) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateTrafficMirrorFilterRulesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTrafficMirrorFilterRulesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTrafficMirrorFilterRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTrafficMirrorFilterRulesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateTrafficMirrorFilterRulesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trafficMirrorFilterId Field Functions 
    bool hasTrafficMirrorFilterId() const { return this->trafficMirrorFilterId_ != nullptr;};
    void deleteTrafficMirrorFilterId() { this->trafficMirrorFilterId_ = nullptr;};
    inline string trafficMirrorFilterId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterId_, "") };
    inline CreateTrafficMirrorFilterRulesRequest& setTrafficMirrorFilterId(string trafficMirrorFilterId) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterId_, trafficMirrorFilterId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, the system uses **RequestId** as **ClientToken**. **RequestId** may be different for each API request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to check the request without performing the operation. Valid values:
    // 
    // *   **true**: checks the request without performing the operation. The system checks the required parameters, request format, and limits. If the request fails the precheck, an error message is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // *   **false** (default): sends the request. After the request passes the check, the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The information about the outbound rule.
    std::shared_ptr<vector<CreateTrafficMirrorFilterRulesRequestEgressRules>> egressRules_ = nullptr;
    // The information about the inbound rules.
    std::shared_ptr<vector<CreateTrafficMirrorFilterRulesRequestIngressRules>> ingressRules_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region to which the mirrored traffic belongs.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list. For more information about regions that support traffic mirror, see [Overview of traffic mirror](https://help.aliyun.com/document_detail/207513.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the filter.
    // 
    // This parameter is required.
    std::shared_ptr<string> trafficMirrorFilterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
