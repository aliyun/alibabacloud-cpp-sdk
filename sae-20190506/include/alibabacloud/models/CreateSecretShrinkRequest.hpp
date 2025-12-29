// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECRETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECRETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateSecretShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecretShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(SecretData, secretDataShrink_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(SecretType, secretType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecretShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(SecretData, secretDataShrink_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(SecretType, secretType_);
    };
    CreateSecretShrinkRequest() = default ;
    CreateSecretShrinkRequest(const CreateSecretShrinkRequest &) = default ;
    CreateSecretShrinkRequest(CreateSecretShrinkRequest &&) = default ;
    CreateSecretShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecretShrinkRequest() = default ;
    CreateSecretShrinkRequest& operator=(const CreateSecretShrinkRequest &) = default ;
    CreateSecretShrinkRequest& operator=(CreateSecretShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespaceId_ == nullptr
        && this->secretDataShrink_ == nullptr && this->secretName_ == nullptr && this->secretType_ == nullptr; };
    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreateSecretShrinkRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // secretDataShrink Field Functions 
    bool hasSecretDataShrink() const { return this->secretDataShrink_ != nullptr;};
    void deleteSecretDataShrink() { this->secretDataShrink_ = nullptr;};
    inline string getSecretDataShrink() const { DARABONBA_PTR_GET_DEFAULT(secretDataShrink_, "") };
    inline CreateSecretShrinkRequest& setSecretDataShrink(string secretDataShrink) { DARABONBA_PTR_SET_VALUE(secretDataShrink_, secretDataShrink) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline CreateSecretShrinkRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // secretType Field Functions 
    bool hasSecretType() const { return this->secretType_ != nullptr;};
    void deleteSecretType() { this->secretType_ = nullptr;};
    inline string getSecretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
    inline CreateSecretShrinkRequest& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


  protected:
    // The ID of the namespace where the Secret resides. If the namespace is the default namespace, you need to only enter the region ID, such as `cn-beijing`.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // The Secret data.
    // 
    // This parameter is required.
    shared_ptr<string> secretDataShrink_ {};
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
