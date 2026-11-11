// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETRANSITROUTERPOLICYBASEDROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETRANSITROUTERPOLICYBASEDROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DeleteTransitRouterPolicyBasedRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTransitRouterPolicyBasedRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(PolicyBasedRouteId, policyBasedRouteId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTransitRouterPolicyBasedRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(PolicyBasedRouteId, policyBasedRouteId_);
    };
    DeleteTransitRouterPolicyBasedRouteRequest() = default ;
    DeleteTransitRouterPolicyBasedRouteRequest(const DeleteTransitRouterPolicyBasedRouteRequest &) = default ;
    DeleteTransitRouterPolicyBasedRouteRequest(DeleteTransitRouterPolicyBasedRouteRequest &&) = default ;
    DeleteTransitRouterPolicyBasedRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTransitRouterPolicyBasedRouteRequest() = default ;
    DeleteTransitRouterPolicyBasedRouteRequest& operator=(const DeleteTransitRouterPolicyBasedRouteRequest &) = default ;
    DeleteTransitRouterPolicyBasedRouteRequest& operator=(DeleteTransitRouterPolicyBasedRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->policyBasedRouteId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteTransitRouterPolicyBasedRouteRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteTransitRouterPolicyBasedRouteRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // policyBasedRouteId Field Functions 
    bool hasPolicyBasedRouteId() const { return this->policyBasedRouteId_ != nullptr;};
    void deletePolicyBasedRouteId() { this->policyBasedRouteId_ = nullptr;};
    inline string getPolicyBasedRouteId() const { DARABONBA_PTR_GET_DEFAULT(policyBasedRouteId_, "") };
    inline DeleteTransitRouterPolicyBasedRouteRequest& setPolicyBasedRouteId(string policyBasedRouteId) { DARABONBA_PTR_SET_VALUE(policyBasedRouteId_, policyBasedRouteId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, and you must ensure that the value is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run on the deletion request. The dry run includes permission and instance status checks. Valid values:
    // 
    // - **false** (default): sends a normal request. After the request passes the dry run, the policy-based route is deleted.
    // - **true**: sends a dry run request. The system only performs the dry run and does not delete the policy-based route. The system checks whether required parameters are specified and whether the request format is valid. If the request fails the dry run, the system returns an error. If the request passes the dry run, the system returns the `DryRunOperation` error code.
    shared_ptr<bool> dryRun_ {};
    // The instance ID of the policy-based routing rule.
    // 
    // This parameter is required.
    shared_ptr<string> policyBasedRouteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
