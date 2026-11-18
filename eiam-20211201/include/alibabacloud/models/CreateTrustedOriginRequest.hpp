// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRUSTEDORIGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRUSTEDORIGINREQUEST_HPP_
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
  class CreateTrustedOriginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrustedOriginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(TrustOriginName, trustOriginName_);
      DARABONBA_PTR_TO_JSON(TrustedOriginScene, trustedOriginScene_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrustedOriginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(TrustOriginName, trustOriginName_);
      DARABONBA_PTR_FROM_JSON(TrustedOriginScene, trustedOriginScene_);
    };
    CreateTrustedOriginRequest() = default ;
    CreateTrustedOriginRequest(const CreateTrustedOriginRequest &) = default ;
    CreateTrustedOriginRequest(CreateTrustedOriginRequest &&) = default ;
    CreateTrustedOriginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrustedOriginRequest() = default ;
    CreateTrustedOriginRequest& operator=(const CreateTrustedOriginRequest &) = default ;
    CreateTrustedOriginRequest& operator=(CreateTrustedOriginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->instanceId_ == nullptr && this->origin_ == nullptr && this->trustOriginName_ == nullptr && this->trustedOriginScene_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTrustedOriginRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateTrustedOriginRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline CreateTrustedOriginRequest& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // trustOriginName Field Functions 
    bool hasTrustOriginName() const { return this->trustOriginName_ != nullptr;};
    void deleteTrustOriginName() { this->trustOriginName_ = nullptr;};
    inline string getTrustOriginName() const { DARABONBA_PTR_GET_DEFAULT(trustOriginName_, "") };
    inline CreateTrustedOriginRequest& setTrustOriginName(string trustOriginName) { DARABONBA_PTR_SET_VALUE(trustOriginName_, trustOriginName) };


    // trustedOriginScene Field Functions 
    bool hasTrustedOriginScene() const { return this->trustedOriginScene_ != nullptr;};
    void deleteTrustedOriginScene() { this->trustedOriginScene_ = nullptr;};
    inline const vector<string> & getTrustedOriginScene() const { DARABONBA_PTR_GET_CONST(trustedOriginScene_, vector<string>) };
    inline vector<string> getTrustedOriginScene() { DARABONBA_PTR_GET(trustedOriginScene_, vector<string>) };
    inline CreateTrustedOriginRequest& setTrustedOriginScene(const vector<string> & trustedOriginScene) { DARABONBA_PTR_SET_VALUE(trustedOriginScene_, trustedOriginScene) };
    inline CreateTrustedOriginRequest& setTrustedOriginScene(vector<string> && trustedOriginScene) { DARABONBA_PTR_SET_RVALUE(trustedOriginScene_, trustedOriginScene) };


  protected:
    // Ensures the idempotence of the request. Generate a value on your client and make sure that the value is unique across different requests. The ClientToken parameter supports only ASCII characters and can be up to 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The ID of the IDaaS EIAM instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The browser origin in the format of scheme://host[:port]. It cannot be modified after creation.
    // 
    // This parameter is required.
    shared_ptr<string> origin_ {};
    // The name of the trusted origin used for management, display, and auditing. If you do not specify this parameter, it is left empty.
    shared_ptr<string> trustOriginName_ {};
    // The trusted origin scenarios. Only iframe_embed and cors are supported. Specify at least one value.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> trustedOriginScene_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
