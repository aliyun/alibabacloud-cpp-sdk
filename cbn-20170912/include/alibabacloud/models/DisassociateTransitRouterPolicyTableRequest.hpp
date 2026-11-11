// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISASSOCIATETRANSITROUTERPOLICYTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISASSOCIATETRANSITROUTERPOLICYTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DisassociateTransitRouterPolicyTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisassociateTransitRouterPolicyTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssociationId, associationId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, DisassociateTransitRouterPolicyTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociationId, associationId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
    };
    DisassociateTransitRouterPolicyTableRequest() = default ;
    DisassociateTransitRouterPolicyTableRequest(const DisassociateTransitRouterPolicyTableRequest &) = default ;
    DisassociateTransitRouterPolicyTableRequest(DisassociateTransitRouterPolicyTableRequest &&) = default ;
    DisassociateTransitRouterPolicyTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisassociateTransitRouterPolicyTableRequest() = default ;
    DisassociateTransitRouterPolicyTableRequest& operator=(const DisassociateTransitRouterPolicyTableRequest &) = default ;
    DisassociateTransitRouterPolicyTableRequest& operator=(DisassociateTransitRouterPolicyTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associationId_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr; };
    // associationId Field Functions 
    bool hasAssociationId() const { return this->associationId_ != nullptr;};
    void deleteAssociationId() { this->associationId_ = nullptr;};
    inline string getAssociationId() const { DARABONBA_PTR_GET_DEFAULT(associationId_, "") };
    inline DisassociateTransitRouterPolicyTableRequest& setAssociationId(string associationId) { DARABONBA_PTR_SET_VALUE(associationId_, associationId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DisassociateTransitRouterPolicyTableRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DisassociateTransitRouterPolicyTableRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The ID of the association between the transit router policy table and the network instance connection.
    // 
    // This parameter is required.
    shared_ptr<string> associationId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run on the request. Checks include permissions and instance status. Valid values:
    // 
    // - **false** (default): sends a normal request. If the request passes the check, the transit router policy table association is removed.
    // - **true**: sends a dry run request. The system only performs the check and does not remove the transit router policy table association. The system checks whether required parameters are specified and whether the request format is valid. If the request fails the check, an error is returned. If the request passes the check, the corresponding request ID is returned.
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
