// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETSRESPONSEBODYDATASECRETS_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETSRESPONSEBODYDATASECRETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSecretsResponseBodyDataSecretsRelateApps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListSecretsResponseBodyDataSecrets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretsResponseBodyDataSecrets& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(RelateApps, relateApps_);
      DARABONBA_PTR_TO_JSON(SecretId, secretId_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(SecretType, secretType_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretsResponseBodyDataSecrets& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(RelateApps, relateApps_);
      DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(SecretType, secretType_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListSecretsResponseBodyDataSecrets() = default ;
    ListSecretsResponseBodyDataSecrets(const ListSecretsResponseBodyDataSecrets &) = default ;
    ListSecretsResponseBodyDataSecrets(ListSecretsResponseBodyDataSecrets &&) = default ;
    ListSecretsResponseBodyDataSecrets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretsResponseBodyDataSecrets() = default ;
    ListSecretsResponseBodyDataSecrets& operator=(const ListSecretsResponseBodyDataSecrets &) = default ;
    ListSecretsResponseBodyDataSecrets& operator=(ListSecretsResponseBodyDataSecrets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->namespaceId_ == nullptr && return this->relateApps_ == nullptr && return this->secretId_ == nullptr && return this->secretName_ == nullptr && return this->secretType_ == nullptr
        && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListSecretsResponseBodyDataSecrets& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListSecretsResponseBodyDataSecrets& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // relateApps Field Functions 
    bool hasRelateApps() const { return this->relateApps_ != nullptr;};
    void deleteRelateApps() { this->relateApps_ = nullptr;};
    inline const vector<Models::ListSecretsResponseBodyDataSecretsRelateApps> & relateApps() const { DARABONBA_PTR_GET_CONST(relateApps_, vector<Models::ListSecretsResponseBodyDataSecretsRelateApps>) };
    inline vector<Models::ListSecretsResponseBodyDataSecretsRelateApps> relateApps() { DARABONBA_PTR_GET(relateApps_, vector<Models::ListSecretsResponseBodyDataSecretsRelateApps>) };
    inline ListSecretsResponseBodyDataSecrets& setRelateApps(const vector<Models::ListSecretsResponseBodyDataSecretsRelateApps> & relateApps) { DARABONBA_PTR_SET_VALUE(relateApps_, relateApps) };
    inline ListSecretsResponseBodyDataSecrets& setRelateApps(vector<Models::ListSecretsResponseBodyDataSecretsRelateApps> && relateApps) { DARABONBA_PTR_SET_RVALUE(relateApps_, relateApps) };


    // secretId Field Functions 
    bool hasSecretId() const { return this->secretId_ != nullptr;};
    void deleteSecretId() { this->secretId_ = nullptr;};
    inline int64_t secretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, 0L) };
    inline ListSecretsResponseBodyDataSecrets& setSecretId(int64_t secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline ListSecretsResponseBodyDataSecrets& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // secretType Field Functions 
    bool hasSecretType() const { return this->secretType_ != nullptr;};
    void deleteSecretType() { this->secretType_ = nullptr;};
    inline string secretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
    inline ListSecretsResponseBodyDataSecrets& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListSecretsResponseBodyDataSecrets& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the Secret was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The namespace ID.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The associated applications.
    std::shared_ptr<vector<Models::ListSecretsResponseBodyDataSecretsRelateApps>> relateApps_ = nullptr;
    // The Secret ID.
    std::shared_ptr<int64_t> secretId_ = nullptr;
    // The Secret name.
    std::shared_ptr<string> secretName_ = nullptr;
    // The Secret type.
    // 
    // Set the value to **kubernetes.io/dockerconfigjson**. The value indicates the secret for the username and password of the image repository and is used for authentication when images are pulled during application deployment.
    std::shared_ptr<string> secretType_ = nullptr;
    // The time when the Secret was updated.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
