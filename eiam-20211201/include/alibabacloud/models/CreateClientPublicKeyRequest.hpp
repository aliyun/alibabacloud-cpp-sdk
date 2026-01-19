// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLIENTPUBLICKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLIENTPUBLICKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateClientPublicKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClientPublicKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlgorithmType, algorithmType_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PublicKey, publicKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClientPublicKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgorithmType, algorithmType_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PublicKey, publicKey_);
    };
    CreateClientPublicKeyRequest() = default ;
    CreateClientPublicKeyRequest(const CreateClientPublicKeyRequest &) = default ;
    CreateClientPublicKeyRequest(CreateClientPublicKeyRequest &&) = default ;
    CreateClientPublicKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClientPublicKeyRequest() = default ;
    CreateClientPublicKeyRequest& operator=(const CreateClientPublicKeyRequest &) = default ;
    CreateClientPublicKeyRequest& operator=(CreateClientPublicKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithmType_ == nullptr
        && this->applicationId_ == nullptr && this->clientToken_ == nullptr && this->instanceId_ == nullptr && this->publicKey_ == nullptr; };
    // algorithmType Field Functions 
    bool hasAlgorithmType() const { return this->algorithmType_ != nullptr;};
    void deleteAlgorithmType() { this->algorithmType_ = nullptr;};
    inline string getAlgorithmType() const { DARABONBA_PTR_GET_DEFAULT(algorithmType_, "") };
    inline CreateClientPublicKeyRequest& setAlgorithmType(string algorithmType) { DARABONBA_PTR_SET_VALUE(algorithmType_, algorithmType) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline CreateClientPublicKeyRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateClientPublicKeyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateClientPublicKeyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // publicKey Field Functions 
    bool hasPublicKey() const { return this->publicKey_ != nullptr;};
    void deletePublicKey() { this->publicKey_ = nullptr;};
    inline string getPublicKey() const { DARABONBA_PTR_GET_DEFAULT(publicKey_, "") };
    inline CreateClientPublicKeyRequest& setPublicKey(string publicKey) { DARABONBA_PTR_SET_VALUE(publicKey_, publicKey) };


  protected:
    // IDaaS的应用ClientpublicKey算法类型
    // 
    // This parameter is required.
    shared_ptr<string> algorithmType_ {};
    // IDaaS的应用资源ID。
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 应用ClientpublicKey的公钥，只接收 PEM 格式
    // 
    // This parameter is required.
    shared_ptr<string> publicKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
