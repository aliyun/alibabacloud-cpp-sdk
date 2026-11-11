// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRANSITROUTERPOLICYBASEDROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRANSITROUTERPOLICYBASEDROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class UpdateTransitRouterPolicyBasedRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTransitRouterPolicyBasedRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PolicyBasedRouteId, policyBasedRouteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTransitRouterPolicyBasedRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PolicyBasedRouteId, policyBasedRouteId_);
    };
    UpdateTransitRouterPolicyBasedRouteRequest() = default ;
    UpdateTransitRouterPolicyBasedRouteRequest(const UpdateTransitRouterPolicyBasedRouteRequest &) = default ;
    UpdateTransitRouterPolicyBasedRouteRequest(UpdateTransitRouterPolicyBasedRouteRequest &&) = default ;
    UpdateTransitRouterPolicyBasedRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTransitRouterPolicyBasedRouteRequest() = default ;
    UpdateTransitRouterPolicyBasedRouteRequest& operator=(const UpdateTransitRouterPolicyBasedRouteRequest &) = default ;
    UpdateTransitRouterPolicyBasedRouteRequest& operator=(UpdateTransitRouterPolicyBasedRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->dryRun_ == nullptr && this->name_ == nullptr && this->policyBasedRouteId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTransitRouterPolicyBasedRouteRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTransitRouterPolicyBasedRouteRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateTransitRouterPolicyBasedRouteRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateTransitRouterPolicyBasedRouteRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyBasedRouteId Field Functions 
    bool hasPolicyBasedRouteId() const { return this->policyBasedRouteId_ != nullptr;};
    void deletePolicyBasedRouteId() { this->policyBasedRouteId_ = nullptr;};
    inline string getPolicyBasedRouteId() const { DARABONBA_PTR_GET_DEFAULT(policyBasedRouteId_, "") };
    inline UpdateTransitRouterPolicyBasedRouteRequest& setPolicyBasedRouteId(string policyBasedRouteId) { DARABONBA_PTR_SET_VALUE(policyBasedRouteId_, policyBasedRouteId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the value of this parameter on the client side. Make sure that the value is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // The description of the policy-based routing rule.
    // 
    // The description can be empty or 1 to 256 characters in length. It cannot start with http:// or https://.
    shared_ptr<string> description_ {};
    // Specifies whether to perform only a dry run on the request. Valid values:
    // - **true**: Performs only a dry run and does not update the policy-based routing rule. The system checks whether the required parameters are specified, the request format is valid, and the service limits are met. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // - **false** (default): Performs a dry run and updates the policy-based routing rule if the request passes the dry run.
    shared_ptr<bool> dryRun_ {};
    // The name of the policy-based routing rule.
    // 
    // The name can be empty or 1 to 128 characters in length. It cannot start with http:// or https://.
    shared_ptr<string> name_ {};
    // The instance ID of the policy-based routing rule.
    // 
    // This parameter is required.
    shared_ptr<string> policyBasedRouteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
