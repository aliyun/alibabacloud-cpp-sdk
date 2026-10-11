// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEGRESSPROXYCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEGRESSPROXYCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class DeleteEgressProxyConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEgressProxyConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EgressProxyConfigurationId, egressProxyConfigurationId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEgressProxyConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EgressProxyConfigurationId, egressProxyConfigurationId_);
    };
    DeleteEgressProxyConfigurationRequest() = default ;
    DeleteEgressProxyConfigurationRequest(const DeleteEgressProxyConfigurationRequest &) = default ;
    DeleteEgressProxyConfigurationRequest(DeleteEgressProxyConfigurationRequest &&) = default ;
    DeleteEgressProxyConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEgressProxyConfigurationRequest() = default ;
    DeleteEgressProxyConfigurationRequest& operator=(const DeleteEgressProxyConfigurationRequest &) = default ;
    DeleteEgressProxyConfigurationRequest& operator=(DeleteEgressProxyConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->egressProxyConfigurationId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteEgressProxyConfigurationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteEgressProxyConfigurationRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // egressProxyConfigurationId Field Functions 
    bool hasEgressProxyConfigurationId() const { return this->egressProxyConfigurationId_ != nullptr;};
    void deleteEgressProxyConfigurationId() { this->egressProxyConfigurationId_ = nullptr;};
    inline string getEgressProxyConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyConfigurationId_, "") };
    inline DeleteEgressProxyConfigurationRequest& setEgressProxyConfigurationId(string egressProxyConfigurationId) { DARABONBA_PTR_SET_VALUE(egressProxyConfigurationId_, egressProxyConfigurationId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the value of this parameter on the client side. The value must be unique across different requests. The client token can contain only ASCII characters.
    // 
    // > Note If you do not specify this parameter, the system automatically uses the RequestId of the API request as the client token. The RequestId of each API request is different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run on the request. Valid values:
    // 
    // - **true**: sends a check request and does not delete the configuration. The system checks whether required parameters are specified, the request format is valid, and service limits are met. If the check fails, an error is returned. If the check succeeds, the DryRunOperation error code is returned.
    // 
    // - **false** (default): sends a regular request. If the check succeeds, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The ID of the egress proxy configuration.
    // 
    // This parameter is required.
    shared_ptr<string> egressProxyConfigurationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
