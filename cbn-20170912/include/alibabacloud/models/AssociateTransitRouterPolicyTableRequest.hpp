// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATETRANSITROUTERPOLICYTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATETRANSITROUTERPOLICYTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class AssociateTransitRouterPolicyTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateTransitRouterPolicyTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentId, attachmentId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(PolicyTableId, policyTableId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateTransitRouterPolicyTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentId, attachmentId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(PolicyTableId, policyTableId_);
    };
    AssociateTransitRouterPolicyTableRequest() = default ;
    AssociateTransitRouterPolicyTableRequest(const AssociateTransitRouterPolicyTableRequest &) = default ;
    AssociateTransitRouterPolicyTableRequest(AssociateTransitRouterPolicyTableRequest &&) = default ;
    AssociateTransitRouterPolicyTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateTransitRouterPolicyTableRequest() = default ;
    AssociateTransitRouterPolicyTableRequest& operator=(const AssociateTransitRouterPolicyTableRequest &) = default ;
    AssociateTransitRouterPolicyTableRequest& operator=(AssociateTransitRouterPolicyTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachmentId_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->policyTableId_ == nullptr; };
    // attachmentId Field Functions 
    bool hasAttachmentId() const { return this->attachmentId_ != nullptr;};
    void deleteAttachmentId() { this->attachmentId_ = nullptr;};
    inline string getAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(attachmentId_, "") };
    inline AssociateTransitRouterPolicyTableRequest& setAttachmentId(string attachmentId) { DARABONBA_PTR_SET_VALUE(attachmentId_, attachmentId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AssociateTransitRouterPolicyTableRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline AssociateTransitRouterPolicyTableRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // policyTableId Field Functions 
    bool hasPolicyTableId() const { return this->policyTableId_ != nullptr;};
    void deletePolicyTableId() { this->policyTableId_ = nullptr;};
    inline string getPolicyTableId() const { DARABONBA_PTR_GET_DEFAULT(policyTableId_, "") };
    inline AssociateTransitRouterPolicyTableRequest& setPolicyTableId(string policyTableId) { DARABONBA_PTR_SET_VALUE(policyTableId_, policyTableId) };


  protected:
    // The ID of the network instance connection.
    // 
    // This parameter is required.
    shared_ptr<string> attachmentId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the value from your client. Make sure that the value is unique across different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run on the request. The dry run includes checks on permissions and instance status. Valid values:
    // 
    // - **false** (default): sends a normal request. The system performs the check and directly associates the policy route table if the check passes.
    // - **true**: sends a dry run request. The system only performs the check and does not associate the policy route table. Check items include whether required parameters are specified and the request format. If the check fails, an error is returned. If the check passes, the request ID is returned.
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
