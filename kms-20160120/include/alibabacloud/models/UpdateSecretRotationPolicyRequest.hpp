// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESECRETROTATIONPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESECRETROTATIONPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class UpdateSecretRotationPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSecretRotationPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableAutomaticRotation, enableAutomaticRotation_);
      DARABONBA_PTR_TO_JSON(RotationInterval, rotationInterval_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSecretRotationPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableAutomaticRotation, enableAutomaticRotation_);
      DARABONBA_PTR_FROM_JSON(RotationInterval, rotationInterval_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
    };
    UpdateSecretRotationPolicyRequest() = default ;
    UpdateSecretRotationPolicyRequest(const UpdateSecretRotationPolicyRequest &) = default ;
    UpdateSecretRotationPolicyRequest(UpdateSecretRotationPolicyRequest &&) = default ;
    UpdateSecretRotationPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSecretRotationPolicyRequest() = default ;
    UpdateSecretRotationPolicyRequest& operator=(const UpdateSecretRotationPolicyRequest &) = default ;
    UpdateSecretRotationPolicyRequest& operator=(UpdateSecretRotationPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableAutomaticRotation_ == nullptr
        && return this->rotationInterval_ == nullptr && return this->secretName_ == nullptr; };
    // enableAutomaticRotation Field Functions 
    bool hasEnableAutomaticRotation() const { return this->enableAutomaticRotation_ != nullptr;};
    void deleteEnableAutomaticRotation() { this->enableAutomaticRotation_ = nullptr;};
    inline bool enableAutomaticRotation() const { DARABONBA_PTR_GET_DEFAULT(enableAutomaticRotation_, false) };
    inline UpdateSecretRotationPolicyRequest& setEnableAutomaticRotation(bool enableAutomaticRotation) { DARABONBA_PTR_SET_VALUE(enableAutomaticRotation_, enableAutomaticRotation) };


    // rotationInterval Field Functions 
    bool hasRotationInterval() const { return this->rotationInterval_ != nullptr;};
    void deleteRotationInterval() { this->rotationInterval_ = nullptr;};
    inline string rotationInterval() const { DARABONBA_PTR_GET_DEFAULT(rotationInterval_, "") };
    inline UpdateSecretRotationPolicyRequest& setRotationInterval(string rotationInterval) { DARABONBA_PTR_SET_VALUE(rotationInterval_, rotationInterval) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline UpdateSecretRotationPolicyRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


  protected:
    // Specifies whether to enable automatic rotation. Valid values:
    // 
    // *   true: enables automatic rotation.
    // *   false: does not enable automatic rotation. This is the default value.
    // 
    // This parameter is required.
    std::shared_ptr<bool> enableAutomaticRotation_ = nullptr;
    // The interval for automatic rotation. Valid values: 6 hours to 8,760 hours (365 days).
    // 
    // The value is in the `integer[unit]` format.````
    // 
    // The unit can be d (day), h (hour), m (minute), or s (second). For example, both 7d and 604800s indicate a seven-day interval.
    // 
    // >  This parameter is required if you set the EnableAutomaticRotation parameter to true. This parameter is ignored if you set the EnableAutomaticRotation parameter to false or does not specify the EnableAutomaticRotation parameter.
    std::shared_ptr<string> rotationInterval_ = nullptr;
    // The name of the secret.
    // 
    // This parameter is required.
    std::shared_ptr<string> secretName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
