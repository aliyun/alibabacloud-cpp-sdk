// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEGRESSPROXYIPPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEGRESSPROXYIPPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class DeleteEgressProxyIpPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEgressProxyIpPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEgressProxyIpPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
    };
    DeleteEgressProxyIpPoolRequest() = default ;
    DeleteEgressProxyIpPoolRequest(const DeleteEgressProxyIpPoolRequest &) = default ;
    DeleteEgressProxyIpPoolRequest(DeleteEgressProxyIpPoolRequest &&) = default ;
    DeleteEgressProxyIpPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEgressProxyIpPoolRequest() = default ;
    DeleteEgressProxyIpPoolRequest& operator=(const DeleteEgressProxyIpPoolRequest &) = default ;
    DeleteEgressProxyIpPoolRequest& operator=(DeleteEgressProxyIpPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->egressProxyIpPoolId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteEgressProxyIpPoolRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteEgressProxyIpPoolRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // egressProxyIpPoolId Field Functions 
    bool hasEgressProxyIpPoolId() const { return this->egressProxyIpPoolId_ != nullptr;};
    void deleteEgressProxyIpPoolId() { this->egressProxyIpPoolId_ = nullptr;};
    inline string getEgressProxyIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyIpPoolId_, "") };
    inline DeleteEgressProxyIpPoolRequest& setEgressProxyIpPoolId(string egressProxyIpPoolId) { DARABONBA_PTR_SET_VALUE(egressProxyIpPoolId_, egressProxyIpPoolId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the value of this parameter on the client side. Make sure that the value is unique across different requests. The client token can contain only ASCII characters.
    // 
    // > Note: If you do not specify this parameter, the system automatically uses the RequestId of the API request as the client token. The RequestId of each API request is different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to only precheck the request. Valid values:
    // 
    // - **true**: The system sends a check request and does not delete the egress proxy IP address pool. The system checks whether the required parameters are specified, the request format is valid, and the service limits are met. If the check fails, the system returns the corresponding error. If the check succeeds, the system returns the error code DryRunOperation.
    // 
    // - **false** (default): The system sends a normal request. If the check succeeds, the system returns an HTTP 2xx status code and performs the operation.
    shared_ptr<bool> dryRun_ {};
    // The ID of the egress proxy IP address pool.
    // 
    // This parameter is required.
    shared_ptr<string> egressProxyIpPoolId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
