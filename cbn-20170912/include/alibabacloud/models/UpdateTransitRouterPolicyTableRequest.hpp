// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRANSITROUTERPOLICYTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRANSITROUTERPOLICYTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class UpdateTransitRouterPolicyTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTransitRouterPolicyTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PolicyTableId, policyTableId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTransitRouterPolicyTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PolicyTableId, policyTableId_);
    };
    UpdateTransitRouterPolicyTableRequest() = default ;
    UpdateTransitRouterPolicyTableRequest(const UpdateTransitRouterPolicyTableRequest &) = default ;
    UpdateTransitRouterPolicyTableRequest(UpdateTransitRouterPolicyTableRequest &&) = default ;
    UpdateTransitRouterPolicyTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTransitRouterPolicyTableRequest() = default ;
    UpdateTransitRouterPolicyTableRequest& operator=(const UpdateTransitRouterPolicyTableRequest &) = default ;
    UpdateTransitRouterPolicyTableRequest& operator=(UpdateTransitRouterPolicyTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->dryRun_ == nullptr && this->name_ == nullptr && this->policyTableId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTransitRouterPolicyTableRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTransitRouterPolicyTableRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateTransitRouterPolicyTableRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateTransitRouterPolicyTableRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyTableId Field Functions 
    bool hasPolicyTableId() const { return this->policyTableId_ != nullptr;};
    void deletePolicyTableId() { this->policyTableId_ = nullptr;};
    inline string getPolicyTableId() const { DARABONBA_PTR_GET_DEFAULT(policyTableId_, "") };
    inline UpdateTransitRouterPolicyTableRequest& setPolicyTableId(string policyTableId) { DARABONBA_PTR_SET_VALUE(policyTableId_, policyTableId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // The description of the policy route table.
    // 
    // The description can be empty or 1 to 256 characters in length. It cannot start with http:// or https://.
    shared_ptr<string> description_ {};
    // Specifies whether to perform a dry run on the request, including checks on permissions and instance status. Valid values:
    // 
    // - **false** (default): sends a normal request. If the request passes the check, the policy route table is updated.
    // - **true**: sends a dry run request. Only the check is performed, and the policy route table is not updated. Check items include whether required parameters are specified and the request format. If the check fails, an error is returned. If the check passes, the request ID is returned.
    shared_ptr<bool> dryRun_ {};
    // The name of the policy route table.
    // 
    // The name can be empty or 1 to 128 characters in length. It cannot start with http:// or https://.
    shared_ptr<string> name_ {};
    // The instance ID of the policy routing table.
    // 
    // This parameter is required.
    shared_ptr<string> policyTableId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
