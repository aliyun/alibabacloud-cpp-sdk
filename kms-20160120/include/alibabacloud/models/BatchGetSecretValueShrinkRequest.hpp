// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETSECRETVALUESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETSECRETVALUESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class BatchGetSecretValueShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetSecretValueShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecretsList, secretsListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetSecretValueShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecretsList, secretsListShrink_);
    };
    BatchGetSecretValueShrinkRequest() = default ;
    BatchGetSecretValueShrinkRequest(const BatchGetSecretValueShrinkRequest &) = default ;
    BatchGetSecretValueShrinkRequest(BatchGetSecretValueShrinkRequest &&) = default ;
    BatchGetSecretValueShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetSecretValueShrinkRequest() = default ;
    BatchGetSecretValueShrinkRequest& operator=(const BatchGetSecretValueShrinkRequest &) = default ;
    BatchGetSecretValueShrinkRequest& operator=(BatchGetSecretValueShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->secretsListShrink_ == nullptr; };
    // secretsListShrink Field Functions 
    bool hasSecretsListShrink() const { return this->secretsListShrink_ != nullptr;};
    void deleteSecretsListShrink() { this->secretsListShrink_ = nullptr;};
    inline string getSecretsListShrink() const { DARABONBA_PTR_GET_DEFAULT(secretsListShrink_, "") };
    inline BatchGetSecretValueShrinkRequest& setSecretsListShrink(string secretsListShrink) { DARABONBA_PTR_SET_VALUE(secretsListShrink_, secretsListShrink) };


  protected:
    // The list of secret information. You can query up to 20 different secrets at a time.
    shared_ptr<string> secretsListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
