// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DeleteSecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForceDeleteWithoutRecovery, forceDeleteWithoutRecovery_);
      DARABONBA_PTR_TO_JSON(RecoveryWindowInDays, recoveryWindowInDays_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForceDeleteWithoutRecovery, forceDeleteWithoutRecovery_);
      DARABONBA_PTR_FROM_JSON(RecoveryWindowInDays, recoveryWindowInDays_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
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
    virtual bool empty() const override { return this->forceDeleteWithoutRecovery_ == nullptr
        && return this->recoveryWindowInDays_ == nullptr && return this->secretName_ == nullptr; };
    // forceDeleteWithoutRecovery Field Functions 
    bool hasForceDeleteWithoutRecovery() const { return this->forceDeleteWithoutRecovery_ != nullptr;};
    void deleteForceDeleteWithoutRecovery() { this->forceDeleteWithoutRecovery_ = nullptr;};
    inline string forceDeleteWithoutRecovery() const { DARABONBA_PTR_GET_DEFAULT(forceDeleteWithoutRecovery_, "") };
    inline DeleteSecretRequest& setForceDeleteWithoutRecovery(string forceDeleteWithoutRecovery) { DARABONBA_PTR_SET_VALUE(forceDeleteWithoutRecovery_, forceDeleteWithoutRecovery) };


    // recoveryWindowInDays Field Functions 
    bool hasRecoveryWindowInDays() const { return this->recoveryWindowInDays_ != nullptr;};
    void deleteRecoveryWindowInDays() { this->recoveryWindowInDays_ = nullptr;};
    inline string recoveryWindowInDays() const { DARABONBA_PTR_GET_DEFAULT(recoveryWindowInDays_, "") };
    inline DeleteSecretRequest& setRecoveryWindowInDays(string recoveryWindowInDays) { DARABONBA_PTR_SET_VALUE(recoveryWindowInDays_, recoveryWindowInDays) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline DeleteSecretRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


  protected:
    // Specifies whether to forcibly delete the secret. If this parameter is set to true, the secret cannot be recovered.
    // 
    // Valid values:
    // 
    // *   **true**
    // *   **false** (default value)
    std::shared_ptr<string> forceDeleteWithoutRecovery_ = nullptr;
    // Specifies the recovery period of the secret if you do not forcibly delete it. Default value: 30. Unit: Days.
    std::shared_ptr<string> recoveryWindowInDays_ = nullptr;
    // The name of the secret.
    // 
    // This parameter is required.
    std::shared_ptr<string> secretName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
