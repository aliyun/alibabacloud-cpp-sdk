// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAFFICMARKINGPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAFFICMARKINGPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTrafficMarkingPolicyRequestTrafficMatchRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateTrafficMarkingPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrafficMarkingPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(MarkingDscp, markingDscp_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyDescription, trafficMarkingPolicyDescription_);
      DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyName, trafficMarkingPolicyName_);
      DARABONBA_PTR_TO_JSON(TrafficMatchRules, trafficMatchRules_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrafficMarkingPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(MarkingDscp, markingDscp_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyDescription, trafficMarkingPolicyDescription_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyName, trafficMarkingPolicyName_);
      DARABONBA_PTR_FROM_JSON(TrafficMatchRules, trafficMatchRules_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
    };
    CreateTrafficMarkingPolicyRequest() = default ;
    CreateTrafficMarkingPolicyRequest(const CreateTrafficMarkingPolicyRequest &) = default ;
    CreateTrafficMarkingPolicyRequest(CreateTrafficMarkingPolicyRequest &&) = default ;
    CreateTrafficMarkingPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrafficMarkingPolicyRequest() = default ;
    CreateTrafficMarkingPolicyRequest& operator=(const CreateTrafficMarkingPolicyRequest &) = default ;
    CreateTrafficMarkingPolicyRequest& operator=(CreateTrafficMarkingPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->markingDscp_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->priority_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->trafficMarkingPolicyDescription_ != nullptr && this->trafficMarkingPolicyName_ != nullptr && this->trafficMatchRules_ != nullptr
        && this->transitRouterId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTrafficMarkingPolicyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateTrafficMarkingPolicyRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // markingDscp Field Functions 
    bool hasMarkingDscp() const { return this->markingDscp_ != nullptr;};
    void deleteMarkingDscp() { this->markingDscp_ = nullptr;};
    inline int32_t markingDscp() const { DARABONBA_PTR_GET_DEFAULT(markingDscp_, 0) };
    inline CreateTrafficMarkingPolicyRequest& setMarkingDscp(int32_t markingDscp) { DARABONBA_PTR_SET_VALUE(markingDscp_, markingDscp) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateTrafficMarkingPolicyRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTrafficMarkingPolicyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateTrafficMarkingPolicyRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTrafficMarkingPolicyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateTrafficMarkingPolicyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trafficMarkingPolicyDescription Field Functions 
    bool hasTrafficMarkingPolicyDescription() const { return this->trafficMarkingPolicyDescription_ != nullptr;};
    void deleteTrafficMarkingPolicyDescription() { this->trafficMarkingPolicyDescription_ = nullptr;};
    inline string trafficMarkingPolicyDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyDescription_, "") };
    inline CreateTrafficMarkingPolicyRequest& setTrafficMarkingPolicyDescription(string trafficMarkingPolicyDescription) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyDescription_, trafficMarkingPolicyDescription) };


    // trafficMarkingPolicyName Field Functions 
    bool hasTrafficMarkingPolicyName() const { return this->trafficMarkingPolicyName_ != nullptr;};
    void deleteTrafficMarkingPolicyName() { this->trafficMarkingPolicyName_ = nullptr;};
    inline string trafficMarkingPolicyName() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyName_, "") };
    inline CreateTrafficMarkingPolicyRequest& setTrafficMarkingPolicyName(string trafficMarkingPolicyName) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyName_, trafficMarkingPolicyName) };


    // trafficMatchRules Field Functions 
    bool hasTrafficMatchRules() const { return this->trafficMatchRules_ != nullptr;};
    void deleteTrafficMatchRules() { this->trafficMatchRules_ = nullptr;};
    inline const vector<CreateTrafficMarkingPolicyRequestTrafficMatchRules> & trafficMatchRules() const { DARABONBA_PTR_GET_CONST(trafficMatchRules_, vector<CreateTrafficMarkingPolicyRequestTrafficMatchRules>) };
    inline vector<CreateTrafficMarkingPolicyRequestTrafficMatchRules> trafficMatchRules() { DARABONBA_PTR_GET(trafficMatchRules_, vector<CreateTrafficMarkingPolicyRequestTrafficMatchRules>) };
    inline CreateTrafficMarkingPolicyRequest& setTrafficMatchRules(const vector<CreateTrafficMarkingPolicyRequestTrafficMatchRules> & trafficMatchRules) { DARABONBA_PTR_SET_VALUE(trafficMatchRules_, trafficMatchRules) };
    inline CreateTrafficMarkingPolicyRequest& setTrafficMatchRules(vector<CreateTrafficMarkingPolicyRequestTrafficMatchRules> && trafficMatchRules) { DARABONBA_PTR_SET_RVALUE(trafficMatchRules_, trafficMatchRules) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline CreateTrafficMarkingPolicyRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among all requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, **ClientToken** is set to the value of **RequestId**. The value of **RequestId** for each API request may be different.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform a dry run. Valid values:
    // 
    // *   **true**: performs a dry run. The system checks the required parameters, request format, and limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and sends the request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The differentiated services code point (DSCP) value to be added to packets that match the traffic classification rule. Valid values: **0** to **63**.
    // 
    // The DSCP value of each traffic marking policy on a transit router must be unique.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> markingDscp_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The priority value of the traffic marking policy. Valid values: **1** to **100**.
    // 
    // The priority value of each traffic marking policy on a transit router must be unique. A smaller value specifies a higher priority.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The description of the traffic marking policy.
    // 
    // This parameter is optional. If you enter a description, it must be 1 to 256 characters in length, and cannot start with http:// or https://.
    std::shared_ptr<string> trafficMarkingPolicyDescription_ = nullptr;
    // The name of the traffic marking policy.
    // 
    // The name can be empty or 1 to 128 characters in length, and cannot start with http:// or https://.
    std::shared_ptr<string> trafficMarkingPolicyName_ = nullptr;
    // The traffic classification rules in the traffic marking policy.
    // 
    // Data packets that meet the traffic classification rule is assigned the DSCP value of quality of service (QoS) policy.
    // 
    // You can create up to 50 traffic classification rules.
    std::shared_ptr<vector<CreateTrafficMarkingPolicyRequestTrafficMatchRules>> trafficMatchRules_ = nullptr;
    // The ID of the transit router.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
