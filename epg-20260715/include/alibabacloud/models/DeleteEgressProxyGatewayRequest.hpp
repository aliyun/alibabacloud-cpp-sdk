// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEGRESSPROXYGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEGRESSPROXYGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class DeleteEgressProxyGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEgressProxyGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EgressProxyGatewayId, egressProxyGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEgressProxyGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EgressProxyGatewayId, egressProxyGatewayId_);
    };
    DeleteEgressProxyGatewayRequest() = default ;
    DeleteEgressProxyGatewayRequest(const DeleteEgressProxyGatewayRequest &) = default ;
    DeleteEgressProxyGatewayRequest(DeleteEgressProxyGatewayRequest &&) = default ;
    DeleteEgressProxyGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEgressProxyGatewayRequest() = default ;
    DeleteEgressProxyGatewayRequest& operator=(const DeleteEgressProxyGatewayRequest &) = default ;
    DeleteEgressProxyGatewayRequest& operator=(DeleteEgressProxyGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->egressProxyGatewayId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteEgressProxyGatewayRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteEgressProxyGatewayRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // egressProxyGatewayId Field Functions 
    bool hasEgressProxyGatewayId() const { return this->egressProxyGatewayId_ != nullptr;};
    void deleteEgressProxyGatewayId() { this->egressProxyGatewayId_ = nullptr;};
    inline string getEgressProxyGatewayId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyGatewayId_, "") };
    inline DeleteEgressProxyGatewayRequest& setEgressProxyGatewayId(string egressProxyGatewayId) { DARABONBA_PTR_SET_VALUE(egressProxyGatewayId_, egressProxyGatewayId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the value of this parameter on the client side. Make sure that the value is unique across different requests. The ClientToken parameter supports only ASCII characters.
    // 
    // > Note: If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId of each API request is unique.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run on the request. Valid values:
    // 
    // - **true**: Sends a check request and does not delete the egress proxy gateway instance. The system checks whether required parameters are specified, the request format is valid, and service limits are met. If the check fails, the system returns an error. If the check succeeds, the system returns the error code DryRunOperation.
    // 
    // - **false** (default): Sends a regular request. If the check succeeds, the system returns an HTTP 2xx status code and performs the operation.
    shared_ptr<bool> dryRun_ {};
    // The ID of the egress proxy gateway instance.
    // 
    // This parameter is required.
    shared_ptr<string> egressProxyGatewayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
