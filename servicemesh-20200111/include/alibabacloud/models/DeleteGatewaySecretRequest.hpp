// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGATEWAYSECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEGATEWAYSECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DeleteGatewaySecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGatewaySecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IstioGatewayName, istioGatewayName_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGatewaySecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IstioGatewayName, istioGatewayName_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    DeleteGatewaySecretRequest() = default ;
    DeleteGatewaySecretRequest(const DeleteGatewaySecretRequest &) = default ;
    DeleteGatewaySecretRequest(DeleteGatewaySecretRequest &&) = default ;
    DeleteGatewaySecretRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGatewaySecretRequest() = default ;
    DeleteGatewaySecretRequest& operator=(const DeleteGatewaySecretRequest &) = default ;
    DeleteGatewaySecretRequest& operator=(DeleteGatewaySecretRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->istioGatewayName_ == nullptr
        && return this->secretName_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // istioGatewayName Field Functions 
    bool hasIstioGatewayName() const { return this->istioGatewayName_ != nullptr;};
    void deleteIstioGatewayName() { this->istioGatewayName_ = nullptr;};
    inline string istioGatewayName() const { DARABONBA_PTR_GET_DEFAULT(istioGatewayName_, "") };
    inline DeleteGatewaySecretRequest& setIstioGatewayName(string istioGatewayName) { DARABONBA_PTR_SET_VALUE(istioGatewayName_, istioGatewayName) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline DeleteGatewaySecretRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline DeleteGatewaySecretRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The name of the ASM gateway.
    std::shared_ptr<string> istioGatewayName_ = nullptr;
    // The name of the secret.
    std::shared_ptr<string> secretName_ = nullptr;
    // The ASM instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
