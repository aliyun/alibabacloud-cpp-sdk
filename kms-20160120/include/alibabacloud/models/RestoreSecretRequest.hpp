// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTORESECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTORESECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class RestoreSecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestoreSecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
    };
    friend void from_json(const Darabonba::Json& j, RestoreSecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
    };
    RestoreSecretRequest() = default ;
    RestoreSecretRequest(const RestoreSecretRequest &) = default ;
    RestoreSecretRequest(RestoreSecretRequest &&) = default ;
    RestoreSecretRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestoreSecretRequest() = default ;
    RestoreSecretRequest& operator=(const RestoreSecretRequest &) = default ;
    RestoreSecretRequest& operator=(RestoreSecretRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->secretName_ == nullptr; };
    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline RestoreSecretRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


  protected:
    // The name of the secret you want to restore.
    // 
    // This parameter is required.
    std::shared_ptr<string> secretName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
