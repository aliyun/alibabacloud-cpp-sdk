// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateSecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(SecretData, secretData_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(SecretType, secretType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(SecretData, secretData_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(SecretType, secretType_);
    };
    CreateSecretRequest() = default ;
    CreateSecretRequest(const CreateSecretRequest &) = default ;
    CreateSecretRequest(CreateSecretRequest &&) = default ;
    CreateSecretRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecretRequest() = default ;
    CreateSecretRequest& operator=(const CreateSecretRequest &) = default ;
    CreateSecretRequest& operator=(CreateSecretRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecretData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecretData& obj) { 
        DARABONBA_PTR_TO_JSON(SecretData, secretData_);
      };
      friend void from_json(const Darabonba::Json& j, SecretData& obj) { 
        DARABONBA_PTR_FROM_JSON(SecretData, secretData_);
      };
      SecretData() = default ;
      SecretData(const SecretData &) = default ;
      SecretData(SecretData &&) = default ;
      SecretData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecretData() = default ;
      SecretData& operator=(const SecretData &) = default ;
      SecretData& operator=(SecretData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->secretData_ == nullptr; };
      // secretData Field Functions 
      bool hasSecretData() const { return this->secretData_ != nullptr;};
      void deleteSecretData() { this->secretData_ = nullptr;};
      inline string getSecretData() const { DARABONBA_PTR_GET_DEFAULT(secretData_, "") };
      inline SecretData& setSecretData(string secretData) { DARABONBA_PTR_SET_VALUE(secretData_, secretData) };


    protected:
      // The information about the key-value pairs of the Secret. This parameter is required. The following formats are supported:
      // 
      // {"Data":"{"k1":"v1", "k2":"v2"}"}
      // 
      // k specifies a key and v specifies a value.
      // 
      // This parameter is required.
      shared_ptr<string> secretData_ {};
    };

    virtual bool empty() const override { return this->namespaceId_ == nullptr
        && this->secretData_ == nullptr && this->secretName_ == nullptr && this->secretType_ == nullptr; };
    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreateSecretRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // secretData Field Functions 
    bool hasSecretData() const { return this->secretData_ != nullptr;};
    void deleteSecretData() { this->secretData_ = nullptr;};
    inline const CreateSecretRequest::SecretData & getSecretData() const { DARABONBA_PTR_GET_CONST(secretData_, CreateSecretRequest::SecretData) };
    inline CreateSecretRequest::SecretData getSecretData() { DARABONBA_PTR_GET(secretData_, CreateSecretRequest::SecretData) };
    inline CreateSecretRequest& setSecretData(const CreateSecretRequest::SecretData & secretData) { DARABONBA_PTR_SET_VALUE(secretData_, secretData) };
    inline CreateSecretRequest& setSecretData(CreateSecretRequest::SecretData && secretData) { DARABONBA_PTR_SET_RVALUE(secretData_, secretData) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline CreateSecretRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // secretType Field Functions 
    bool hasSecretType() const { return this->secretType_ != nullptr;};
    void deleteSecretType() { this->secretType_ = nullptr;};
    inline string getSecretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
    inline CreateSecretRequest& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


  protected:
    // The ID of the namespace where the Secret resides. If the namespace is the default namespace, you need to only enter the region ID, such as `cn-beijing`.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // The Secret data.
    // 
    // This parameter is required.
    shared_ptr<CreateSecretRequest::SecretData> secretData_ {};
    // The Secret name. The name can contain digits, letters, and underscores (_). The name must start with a letter.
    // 
    // This parameter is required.
    shared_ptr<string> secretName_ {};
    // The supported Secret type. Valid values:
    // 
    // *   **kubernetes.io/dockerconfigjson**: the Secret for the username and password of the image repository. The Secret is used for authentication when images are pulled during application deployment.
    // 
    // Valid values:
    // 
    // *   Opaque
    // *   kubernetes.io/dockerconfigjson
    // *   kubernetes.io/tls
    // 
    // This parameter is required.
    shared_ptr<string> secretType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
