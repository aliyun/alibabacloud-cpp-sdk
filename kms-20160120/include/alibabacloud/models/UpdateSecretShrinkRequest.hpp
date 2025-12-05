// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESECRETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESECRETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateSecretShrinkRequestExtendedConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class UpdateSecretShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSecretShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExtendedConfig, extendedConfig_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSecretShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtendedConfig, extendedConfig_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
    };
    UpdateSecretShrinkRequest() = default ;
    UpdateSecretShrinkRequest(const UpdateSecretShrinkRequest &) = default ;
    UpdateSecretShrinkRequest(UpdateSecretShrinkRequest &&) = default ;
    UpdateSecretShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSecretShrinkRequest() = default ;
    UpdateSecretShrinkRequest& operator=(const UpdateSecretShrinkRequest &) = default ;
    UpdateSecretShrinkRequest& operator=(UpdateSecretShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extendedConfig_ == nullptr
        && return this->description_ == nullptr && return this->secretName_ == nullptr; };
    // extendedConfig Field Functions 
    bool hasExtendedConfig() const { return this->extendedConfig_ != nullptr;};
    void deleteExtendedConfig() { this->extendedConfig_ = nullptr;};
    inline const UpdateSecretShrinkRequestExtendedConfig & extendedConfig() const { DARABONBA_PTR_GET_CONST(extendedConfig_, UpdateSecretShrinkRequestExtendedConfig) };
    inline UpdateSecretShrinkRequestExtendedConfig extendedConfig() { DARABONBA_PTR_GET(extendedConfig_, UpdateSecretShrinkRequestExtendedConfig) };
    inline UpdateSecretShrinkRequest& setExtendedConfig(const UpdateSecretShrinkRequestExtendedConfig & extendedConfig) { DARABONBA_PTR_SET_VALUE(extendedConfig_, extendedConfig) };
    inline UpdateSecretShrinkRequest& setExtendedConfig(UpdateSecretShrinkRequestExtendedConfig && extendedConfig) { DARABONBA_PTR_SET_RVALUE(extendedConfig_, extendedConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateSecretShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline UpdateSecretShrinkRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


  protected:
    std::shared_ptr<UpdateSecretShrinkRequestExtendedConfig> extendedConfig_ = nullptr;
    // The description of the secret.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the secret.
    // 
    // This parameter is required.
    std::shared_ptr<string> secretName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
