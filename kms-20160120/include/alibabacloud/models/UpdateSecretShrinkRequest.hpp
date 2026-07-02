// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESECRETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESECRETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class ExtendedConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExtendedConfig& obj) { 
        DARABONBA_PTR_TO_JSON(CustomData, customData_);
      };
      friend void from_json(const Darabonba::Json& j, ExtendedConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomData, customData_);
      };
      ExtendedConfig() = default ;
      ExtendedConfig(const ExtendedConfig &) = default ;
      ExtendedConfig(ExtendedConfig &&) = default ;
      ExtendedConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExtendedConfig() = default ;
      ExtendedConfig& operator=(const ExtendedConfig &) = default ;
      ExtendedConfig& operator=(ExtendedConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->customData_ == nullptr; };
      // customData Field Functions 
      bool hasCustomData() const { return this->customData_ != nullptr;};
      void deleteCustomData() { this->customData_ = nullptr;};
      inline string getCustomData() const { DARABONBA_PTR_GET_DEFAULT(customData_, "") };
      inline ExtendedConfig& setCustomData(string customData) { DARABONBA_PTR_SET_VALUE(customData_, customData) };


    protected:
      // The custom data in the extended configuration of the secret.
      // 
      // > *   If this parameter is specified, the existing extended configuration of the secret is updated.
      // > *   This parameter is unavailable for generic secrets.
      shared_ptr<string> customData_ {};
    };

    virtual bool empty() const override { return this->extendedConfig_ == nullptr
        && this->description_ == nullptr && this->secretName_ == nullptr; };
    // extendedConfig Field Functions 
    bool hasExtendedConfig() const { return this->extendedConfig_ != nullptr;};
    void deleteExtendedConfig() { this->extendedConfig_ = nullptr;};
    inline const UpdateSecretShrinkRequest::ExtendedConfig & getExtendedConfig() const { DARABONBA_PTR_GET_CONST(extendedConfig_, UpdateSecretShrinkRequest::ExtendedConfig) };
    inline UpdateSecretShrinkRequest::ExtendedConfig getExtendedConfig() { DARABONBA_PTR_GET(extendedConfig_, UpdateSecretShrinkRequest::ExtendedConfig) };
    inline UpdateSecretShrinkRequest& setExtendedConfig(const UpdateSecretShrinkRequest::ExtendedConfig & extendedConfig) { DARABONBA_PTR_SET_VALUE(extendedConfig_, extendedConfig) };
    inline UpdateSecretShrinkRequest& setExtendedConfig(UpdateSecretShrinkRequest::ExtendedConfig && extendedConfig) { DARABONBA_PTR_SET_RVALUE(extendedConfig_, extendedConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateSecretShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline UpdateSecretShrinkRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


  protected:
    shared_ptr<UpdateSecretShrinkRequest::ExtendedConfig> extendedConfig_ {};
    // The description of the secret.
    shared_ptr<string> description_ {};
    // The name of the secret.
    // 
    // This parameter is required.
    shared_ptr<string> secretName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
