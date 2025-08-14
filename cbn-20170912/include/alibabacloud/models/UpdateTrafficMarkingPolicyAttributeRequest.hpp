// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRAFFICMARKINGPOLICYATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRAFFICMARKINGPOLICYATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateTrafficMarkingPolicyAttributeRequestAddTrafficMatchRules.hpp>
#include <alibabacloud/models/UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class UpdateTrafficMarkingPolicyAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTrafficMarkingPolicyAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddTrafficMatchRules, addTrafficMatchRules_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeleteTrafficMatchRules, deleteTrafficMatchRules_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyDescription, trafficMarkingPolicyDescription_);
      DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyId, trafficMarkingPolicyId_);
      DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyName, trafficMarkingPolicyName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTrafficMarkingPolicyAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddTrafficMatchRules, addTrafficMatchRules_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeleteTrafficMatchRules, deleteTrafficMatchRules_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyDescription, trafficMarkingPolicyDescription_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyId, trafficMarkingPolicyId_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyName, trafficMarkingPolicyName_);
    };
    UpdateTrafficMarkingPolicyAttributeRequest() = default ;
    UpdateTrafficMarkingPolicyAttributeRequest(const UpdateTrafficMarkingPolicyAttributeRequest &) = default ;
    UpdateTrafficMarkingPolicyAttributeRequest(UpdateTrafficMarkingPolicyAttributeRequest &&) = default ;
    UpdateTrafficMarkingPolicyAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTrafficMarkingPolicyAttributeRequest() = default ;
    UpdateTrafficMarkingPolicyAttributeRequest& operator=(const UpdateTrafficMarkingPolicyAttributeRequest &) = default ;
    UpdateTrafficMarkingPolicyAttributeRequest& operator=(UpdateTrafficMarkingPolicyAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addTrafficMatchRules_ != nullptr
        && this->clientToken_ != nullptr && this->deleteTrafficMatchRules_ != nullptr && this->dryRun_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->trafficMarkingPolicyDescription_ != nullptr && this->trafficMarkingPolicyId_ != nullptr && this->trafficMarkingPolicyName_ != nullptr; };
    // addTrafficMatchRules Field Functions 
    bool hasAddTrafficMatchRules() const { return this->addTrafficMatchRules_ != nullptr;};
    void deleteAddTrafficMatchRules() { this->addTrafficMatchRules_ = nullptr;};
    inline const vector<UpdateTrafficMarkingPolicyAttributeRequestAddTrafficMatchRules> & addTrafficMatchRules() const { DARABONBA_PTR_GET_CONST(addTrafficMatchRules_, vector<UpdateTrafficMarkingPolicyAttributeRequestAddTrafficMatchRules>) };
    inline vector<UpdateTrafficMarkingPolicyAttributeRequestAddTrafficMatchRules> addTrafficMatchRules() { DARABONBA_PTR_GET(addTrafficMatchRules_, vector<UpdateTrafficMarkingPolicyAttributeRequestAddTrafficMatchRules>) };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setAddTrafficMatchRules(const vector<UpdateTrafficMarkingPolicyAttributeRequestAddTrafficMatchRules> & addTrafficMatchRules) { DARABONBA_PTR_SET_VALUE(addTrafficMatchRules_, addTrafficMatchRules) };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setAddTrafficMatchRules(vector<UpdateTrafficMarkingPolicyAttributeRequestAddTrafficMatchRules> && addTrafficMatchRules) { DARABONBA_PTR_SET_RVALUE(addTrafficMatchRules_, addTrafficMatchRules) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deleteTrafficMatchRules Field Functions 
    bool hasDeleteTrafficMatchRules() const { return this->deleteTrafficMatchRules_ != nullptr;};
    void deleteDeleteTrafficMatchRules() { this->deleteTrafficMatchRules_ = nullptr;};
    inline const vector<UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules> & deleteTrafficMatchRules() const { DARABONBA_PTR_GET_CONST(deleteTrafficMatchRules_, vector<UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules>) };
    inline vector<UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules> deleteTrafficMatchRules() { DARABONBA_PTR_GET(deleteTrafficMatchRules_, vector<UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules>) };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setDeleteTrafficMatchRules(const vector<UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules> & deleteTrafficMatchRules) { DARABONBA_PTR_SET_VALUE(deleteTrafficMatchRules_, deleteTrafficMatchRules) };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setDeleteTrafficMatchRules(vector<UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules> && deleteTrafficMatchRules) { DARABONBA_PTR_SET_RVALUE(deleteTrafficMatchRules_, deleteTrafficMatchRules) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trafficMarkingPolicyDescription Field Functions 
    bool hasTrafficMarkingPolicyDescription() const { return this->trafficMarkingPolicyDescription_ != nullptr;};
    void deleteTrafficMarkingPolicyDescription() { this->trafficMarkingPolicyDescription_ = nullptr;};
    inline string trafficMarkingPolicyDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyDescription_, "") };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setTrafficMarkingPolicyDescription(string trafficMarkingPolicyDescription) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyDescription_, trafficMarkingPolicyDescription) };


    // trafficMarkingPolicyId Field Functions 
    bool hasTrafficMarkingPolicyId() const { return this->trafficMarkingPolicyId_ != nullptr;};
    void deleteTrafficMarkingPolicyId() { this->trafficMarkingPolicyId_ = nullptr;};
    inline string trafficMarkingPolicyId() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyId_, "") };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setTrafficMarkingPolicyId(string trafficMarkingPolicyId) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyId_, trafficMarkingPolicyId) };


    // trafficMarkingPolicyName Field Functions 
    bool hasTrafficMarkingPolicyName() const { return this->trafficMarkingPolicyName_ != nullptr;};
    void deleteTrafficMarkingPolicyName() { this->trafficMarkingPolicyName_ = nullptr;};
    inline string trafficMarkingPolicyName() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyName_, "") };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setTrafficMarkingPolicyName(string trafficMarkingPolicyName) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyName_, trafficMarkingPolicyName) };


  protected:
    // The traffic classification rules to be added to the traffic marking policy.
    // 
    // You can add at most 50 traffic classification rules in each call.
    std::shared_ptr<vector<UpdateTrafficMarkingPolicyAttributeRequestAddTrafficMatchRules>> addTrafficMatchRules_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The traffic classification rules to be deleted from the traffic marking policy.
    // 
    // >  Specify detailed information about the traffic classification rule, such as the source CIDR block, destination CIDR block, source port, destination port, and DSCP value. If you do not specify sufficient information, the system may fail to match the traffic classification rule that you want to delete.
    std::shared_ptr<vector<UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules>> deleteTrafficMatchRules_ = nullptr;
    // Specifies whether to perform a dry run. Valid values:
    // 
    // *   **true**: preforms a dry run. The system checks the required parameters, request syntax, and limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and sends the request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The new description of the traffic marking policy.
    // 
    // The description must be 2 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The description must start with a letter.
    std::shared_ptr<string> trafficMarkingPolicyDescription_ = nullptr;
    // The ID of the traffic marking policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> trafficMarkingPolicyId_ = nullptr;
    // The new name of the traffic marking policy.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). It must start with a letter.
    std::shared_ptr<string> trafficMarkingPolicyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
