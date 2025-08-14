// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVETRAFICMATCHRULEFROMTRAFFICMARKINGPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVETRAFICMATCHRULEFROMTRAFFICMARKINGPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TrafficMarkRuleIds, trafficMarkRuleIds_);
      DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyId, trafficMarkingPolicyId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkRuleIds, trafficMarkRuleIds_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyId, trafficMarkingPolicyId_);
    };
    RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest() = default ;
    RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest(const RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest &) = default ;
    RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest(RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest &&) = default ;
    RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest() = default ;
    RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest& operator=(const RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest &) = default ;
    RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest& operator=(RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->trafficMarkRuleIds_ != nullptr && this->trafficMarkingPolicyId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trafficMarkRuleIds Field Functions 
    bool hasTrafficMarkRuleIds() const { return this->trafficMarkRuleIds_ != nullptr;};
    void deleteTrafficMarkRuleIds() { this->trafficMarkRuleIds_ = nullptr;};
    inline const vector<string> & trafficMarkRuleIds() const { DARABONBA_PTR_GET_CONST(trafficMarkRuleIds_, vector<string>) };
    inline vector<string> trafficMarkRuleIds() { DARABONBA_PTR_GET(trafficMarkRuleIds_, vector<string>) };
    inline RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest& setTrafficMarkRuleIds(const vector<string> & trafficMarkRuleIds) { DARABONBA_PTR_SET_VALUE(trafficMarkRuleIds_, trafficMarkRuleIds) };
    inline RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest& setTrafficMarkRuleIds(vector<string> && trafficMarkRuleIds) { DARABONBA_PTR_SET_RVALUE(trafficMarkRuleIds_, trafficMarkRuleIds) };


    // trafficMarkingPolicyId Field Functions 
    bool hasTrafficMarkingPolicyId() const { return this->trafficMarkingPolicyId_ != nullptr;};
    void deleteTrafficMarkingPolicyId() { this->trafficMarkingPolicyId_ = nullptr;};
    inline string trafficMarkingPolicyId() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyId_, "") };
    inline RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest& setTrafficMarkingPolicyId(string trafficMarkingPolicyId) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyId_, trafficMarkingPolicyId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the traffic classification rule.
    std::shared_ptr<vector<string>> trafficMarkRuleIds_ = nullptr;
    // The ID of the traffic marking policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> trafficMarkingPolicyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
