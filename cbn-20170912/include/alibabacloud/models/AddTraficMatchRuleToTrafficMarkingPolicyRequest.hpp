// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTRAFICMATCHRULETOTRAFFICMARKINGPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTRAFICMATCHRULETOTRAFFICMARKINGPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class AddTraficMatchRuleToTrafficMarkingPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTraficMatchRuleToTrafficMarkingPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyId, trafficMarkingPolicyId_);
      DARABONBA_PTR_TO_JSON(TrafficMatchRules, trafficMatchRules_);
    };
    friend void from_json(const Darabonba::Json& j, AddTraficMatchRuleToTrafficMarkingPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyId, trafficMarkingPolicyId_);
      DARABONBA_PTR_FROM_JSON(TrafficMatchRules, trafficMatchRules_);
    };
    AddTraficMatchRuleToTrafficMarkingPolicyRequest() = default ;
    AddTraficMatchRuleToTrafficMarkingPolicyRequest(const AddTraficMatchRuleToTrafficMarkingPolicyRequest &) = default ;
    AddTraficMatchRuleToTrafficMarkingPolicyRequest(AddTraficMatchRuleToTrafficMarkingPolicyRequest &&) = default ;
    AddTraficMatchRuleToTrafficMarkingPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTraficMatchRuleToTrafficMarkingPolicyRequest() = default ;
    AddTraficMatchRuleToTrafficMarkingPolicyRequest& operator=(const AddTraficMatchRuleToTrafficMarkingPolicyRequest &) = default ;
    AddTraficMatchRuleToTrafficMarkingPolicyRequest& operator=(AddTraficMatchRuleToTrafficMarkingPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->trafficMarkingPolicyId_ != nullptr && this->trafficMatchRules_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddTraficMatchRuleToTrafficMarkingPolicyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline AddTraficMatchRuleToTrafficMarkingPolicyRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AddTraficMatchRuleToTrafficMarkingPolicyRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddTraficMatchRuleToTrafficMarkingPolicyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddTraficMatchRuleToTrafficMarkingPolicyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddTraficMatchRuleToTrafficMarkingPolicyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trafficMarkingPolicyId Field Functions 
    bool hasTrafficMarkingPolicyId() const { return this->trafficMarkingPolicyId_ != nullptr;};
    void deleteTrafficMarkingPolicyId() { this->trafficMarkingPolicyId_ = nullptr;};
    inline string trafficMarkingPolicyId() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyId_, "") };
    inline AddTraficMatchRuleToTrafficMarkingPolicyRequest& setTrafficMarkingPolicyId(string trafficMarkingPolicyId) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyId_, trafficMarkingPolicyId) };


    // trafficMatchRules Field Functions 
    bool hasTrafficMatchRules() const { return this->trafficMatchRules_ != nullptr;};
    void deleteTrafficMatchRules() { this->trafficMatchRules_ = nullptr;};
    inline const vector<AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules> & trafficMatchRules() const { DARABONBA_PTR_GET_CONST(trafficMatchRules_, vector<AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules>) };
    inline vector<AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules> trafficMatchRules() { DARABONBA_PTR_GET(trafficMatchRules_, vector<AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules>) };
    inline AddTraficMatchRuleToTrafficMarkingPolicyRequest& setTrafficMatchRules(const vector<AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules> & trafficMatchRules) { DARABONBA_PTR_SET_VALUE(trafficMatchRules_, trafficMatchRules) };
    inline AddTraficMatchRuleToTrafficMarkingPolicyRequest& setTrafficMatchRules(vector<AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules> && trafficMatchRules) { DARABONBA_PTR_SET_RVALUE(trafficMatchRules_, trafficMatchRules) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, ClientToken is set to the value of RequestId. The value of RequestId may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform a dry run. Valid values:
    // 
    // *   **true**: performs a dry run. The system checks the required parameters, request syntax, and limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and sends the request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the traffic marking policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> trafficMarkingPolicyId_ = nullptr;
    // The information about the traffic classification rule.
    // 
    // You can specify at most 50 traffic classification rules.
    std::shared_ptr<vector<AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules>> trafficMatchRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
