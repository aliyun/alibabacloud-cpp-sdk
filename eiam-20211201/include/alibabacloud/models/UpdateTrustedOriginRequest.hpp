// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRUSTEDORIGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRUSTEDORIGINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateTrustedOriginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTrustedOriginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TrustOriginName, trustOriginName_);
      DARABONBA_PTR_TO_JSON(TrustedOriginId, trustedOriginId_);
      DARABONBA_PTR_TO_JSON(TrustedOriginScene, trustedOriginScene_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTrustedOriginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TrustOriginName, trustOriginName_);
      DARABONBA_PTR_FROM_JSON(TrustedOriginId, trustedOriginId_);
      DARABONBA_PTR_FROM_JSON(TrustedOriginScene, trustedOriginScene_);
    };
    UpdateTrustedOriginRequest() = default ;
    UpdateTrustedOriginRequest(const UpdateTrustedOriginRequest &) = default ;
    UpdateTrustedOriginRequest(UpdateTrustedOriginRequest &&) = default ;
    UpdateTrustedOriginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTrustedOriginRequest() = default ;
    UpdateTrustedOriginRequest& operator=(const UpdateTrustedOriginRequest &) = default ;
    UpdateTrustedOriginRequest& operator=(UpdateTrustedOriginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->instanceId_ == nullptr && this->trustOriginName_ == nullptr && this->trustedOriginId_ == nullptr && this->trustedOriginScene_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTrustedOriginRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateTrustedOriginRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // trustOriginName Field Functions 
    bool hasTrustOriginName() const { return this->trustOriginName_ != nullptr;};
    void deleteTrustOriginName() { this->trustOriginName_ = nullptr;};
    inline string getTrustOriginName() const { DARABONBA_PTR_GET_DEFAULT(trustOriginName_, "") };
    inline UpdateTrustedOriginRequest& setTrustOriginName(string trustOriginName) { DARABONBA_PTR_SET_VALUE(trustOriginName_, trustOriginName) };


    // trustedOriginId Field Functions 
    bool hasTrustedOriginId() const { return this->trustedOriginId_ != nullptr;};
    void deleteTrustedOriginId() { this->trustedOriginId_ = nullptr;};
    inline string getTrustedOriginId() const { DARABONBA_PTR_GET_DEFAULT(trustedOriginId_, "") };
    inline UpdateTrustedOriginRequest& setTrustedOriginId(string trustedOriginId) { DARABONBA_PTR_SET_VALUE(trustedOriginId_, trustedOriginId) };


    // trustedOriginScene Field Functions 
    bool hasTrustedOriginScene() const { return this->trustedOriginScene_ != nullptr;};
    void deleteTrustedOriginScene() { this->trustedOriginScene_ = nullptr;};
    inline const vector<string> & getTrustedOriginScene() const { DARABONBA_PTR_GET_CONST(trustedOriginScene_, vector<string>) };
    inline vector<string> getTrustedOriginScene() { DARABONBA_PTR_GET(trustedOriginScene_, vector<string>) };
    inline UpdateTrustedOriginRequest& setTrustedOriginScene(const vector<string> & trustedOriginScene) { DARABONBA_PTR_SET_VALUE(trustedOriginScene_, trustedOriginScene) };
    inline UpdateTrustedOriginRequest& setTrustedOriginScene(vector<string> && trustedOriginScene) { DARABONBA_PTR_SET_RVALUE(trustedOriginScene_, trustedOriginScene) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The ID of the IDaaS EIAM instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // If this parameter is not specified, the trusted origin name is not modified.
    shared_ptr<string> trustOriginName_ {};
    // The ID of the trusted origin.
    // 
    // This parameter is required.
    shared_ptr<string> trustedOriginId_ {};
    // When specified, the existing values are entirely replaced. Only iframe_embed and cors are supported.
    shared_ptr<vector<string>> trustedOriginScene_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
