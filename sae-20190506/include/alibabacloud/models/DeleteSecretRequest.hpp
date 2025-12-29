// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DeleteSecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(SecretId, secretId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
    };
    DeleteSecretRequest() = default ;
    DeleteSecretRequest(const DeleteSecretRequest &) = default ;
    DeleteSecretRequest(DeleteSecretRequest &&) = default ;
    DeleteSecretRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecretRequest() = default ;
    DeleteSecretRequest& operator=(const DeleteSecretRequest &) = default ;
    DeleteSecretRequest& operator=(DeleteSecretRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespaceId_ == nullptr
        && this->secretId_ == nullptr; };
    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline DeleteSecretRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // secretId Field Functions 
    bool hasSecretId() const { return this->secretId_ != nullptr;};
    void deleteSecretId() { this->secretId_ = nullptr;};
    inline int64_t getSecretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, 0L) };
    inline DeleteSecretRequest& setSecretId(int64_t secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


  protected:
    // The ID of the namespace in which the Secret resides. By default, the namespace ID is the same as the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // The ID of the Secret to be deleted. You can call the [ListSecrets](https://help.aliyun.com/document_detail/466929.html) operation to view the Secret IDs.
    // 
    // This parameter is required.
    shared_ptr<int64_t> secretId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
