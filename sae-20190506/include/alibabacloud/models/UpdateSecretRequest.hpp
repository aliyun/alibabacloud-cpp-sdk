// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateSecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(SecretData, secretData_);
      DARABONBA_PTR_TO_JSON(SecretId, secretId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(SecretData, secretData_);
      DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
    };
    UpdateSecretRequest() = default ;
    UpdateSecretRequest(const UpdateSecretRequest &) = default ;
    UpdateSecretRequest(UpdateSecretRequest &&) = default ;
    UpdateSecretRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSecretRequest() = default ;
    UpdateSecretRequest& operator=(const UpdateSecretRequest &) = default ;
    UpdateSecretRequest& operator=(UpdateSecretRequest &&) = default ;
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
      // k specifies a key and v specifies a value. For more information, see [Manage a Kubernetes Secret](https://help.aliyun.com/document_detail/463383.html).
      // 
      // This parameter is required.
      shared_ptr<string> secretData_ {};
    };

    virtual bool empty() const override { return this->namespaceId_ == nullptr
        && this->secretData_ == nullptr && this->secretId_ == nullptr; };
    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline UpdateSecretRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // secretData Field Functions 
    bool hasSecretData() const { return this->secretData_ != nullptr;};
    void deleteSecretData() { this->secretData_ = nullptr;};
    inline const UpdateSecretRequest::SecretData & getSecretData() const { DARABONBA_PTR_GET_CONST(secretData_, UpdateSecretRequest::SecretData) };
    inline UpdateSecretRequest::SecretData getSecretData() { DARABONBA_PTR_GET(secretData_, UpdateSecretRequest::SecretData) };
    inline UpdateSecretRequest& setSecretData(const UpdateSecretRequest::SecretData & secretData) { DARABONBA_PTR_SET_VALUE(secretData_, secretData) };
    inline UpdateSecretRequest& setSecretData(UpdateSecretRequest::SecretData && secretData) { DARABONBA_PTR_SET_RVALUE(secretData_, secretData) };


    // secretId Field Functions 
    bool hasSecretId() const { return this->secretId_ != nullptr;};
    void deleteSecretId() { this->secretId_ = nullptr;};
    inline int64_t getSecretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, 0L) };
    inline UpdateSecretRequest& setSecretId(int64_t secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


  protected:
    // The ID of the namespace where the Secret resides. If the namespace is the default namespace, you need to only enter the region ID, such as `cn-beijing`.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // The Secret data.
    // 
    // This parameter is required.
    shared_ptr<UpdateSecretRequest::SecretData> secretData_ {};
    // This parameter is required.
    shared_ptr<int64_t> secretId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
