// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETRANSITROUTERPOLICYTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETRANSITROUTERPOLICYTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DeleteTransitRouterPolicyTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTransitRouterPolicyTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(PolicyTableId, policyTableId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTransitRouterPolicyTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(PolicyTableId, policyTableId_);
    };
    DeleteTransitRouterPolicyTableRequest() = default ;
    DeleteTransitRouterPolicyTableRequest(const DeleteTransitRouterPolicyTableRequest &) = default ;
    DeleteTransitRouterPolicyTableRequest(DeleteTransitRouterPolicyTableRequest &&) = default ;
    DeleteTransitRouterPolicyTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTransitRouterPolicyTableRequest() = default ;
    DeleteTransitRouterPolicyTableRequest& operator=(const DeleteTransitRouterPolicyTableRequest &) = default ;
    DeleteTransitRouterPolicyTableRequest& operator=(DeleteTransitRouterPolicyTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->policyTableId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteTransitRouterPolicyTableRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteTransitRouterPolicyTableRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // policyTableId Field Functions 
    bool hasPolicyTableId() const { return this->policyTableId_ != nullptr;};
    void deletePolicyTableId() { this->policyTableId_ = nullptr;};
    inline string getPolicyTableId() const { DARABONBA_PTR_GET_DEFAULT(policyTableId_, "") };
    inline DeleteTransitRouterPolicyTableRequest& setPolicyTableId(string policyTableId) { DARABONBA_PTR_SET_VALUE(policyTableId_, policyTableId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run on the request. Checks include permissions and instance status. Valid values:
    // 
    // - **false** (default): sends a normal request. If the request passes the check, the policy route table is deleted.
    // - **true**: performs a dry run. The policy route table is not deleted. The system checks whether required parameters are specified and whether the request format is valid. If the request fails the dry run, an error is returned. If the request passes the dry run, the request ID is returned.
    shared_ptr<bool> dryRun_ {};
    // The instance ID of the policy routing table.
    // 
    // This parameter is required.
    shared_ptr<string> policyTableId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
