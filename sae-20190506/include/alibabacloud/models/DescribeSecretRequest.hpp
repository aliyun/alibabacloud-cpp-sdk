// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeSecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(SecretId, secretId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
    };
    DescribeSecretRequest() = default ;
    DescribeSecretRequest(const DescribeSecretRequest &) = default ;
    DescribeSecretRequest(DescribeSecretRequest &&) = default ;
    DescribeSecretRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecretRequest() = default ;
    DescribeSecretRequest& operator=(const DescribeSecretRequest &) = default ;
    DescribeSecretRequest& operator=(DescribeSecretRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespaceId_ == nullptr
        && return this->secretId_ == nullptr; };
    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline DescribeSecretRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // secretId Field Functions 
    bool hasSecretId() const { return this->secretId_ != nullptr;};
    void deleteSecretId() { this->secretId_ = nullptr;};
    inline int64_t secretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, 0L) };
    inline DescribeSecretRequest& setSecretId(int64_t secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


  protected:
    // The ID of the namespace where the Secret resides. If the namespace is the default namespace, you need to only enter the region ID, such as `cn-beijing`.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The ID of the Secret instance to be queried. You can call the [ListSecrets](https://help.aliyun.com/document_detail/466929.html) operation to view the IDs of Secrete instances.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> secretId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
