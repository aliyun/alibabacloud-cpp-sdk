// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class UpdateSecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExtendedConfig, extendedConfig_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtendedConfig, extendedConfig_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
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
    class ExtendedConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExtendedConfig& obj) { 
        DARABONBA_ANY_TO_JSON(CustomData, customData_);
      };
      friend void from_json(const Darabonba::Json& j, ExtendedConfig& obj) { 
        DARABONBA_ANY_FROM_JSON(CustomData, customData_);
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
      inline       const Darabonba::Json & getCustomData() const { DARABONBA_GET(customData_) };
      Darabonba::Json & getCustomData() { DARABONBA_GET(customData_) };
      inline ExtendedConfig& setCustomData(const Darabonba::Json & customData) { DARABONBA_SET_VALUE(customData_, customData) };
      inline ExtendedConfig& setCustomData(Darabonba::Json && customData) { DARABONBA_SET_RVALUE(customData_, customData) };


    protected:
      // The custom data in the extended configuration of the secret.
      // 
      // > *   If this parameter is specified, the existing extended configuration of the secret is updated.
      // > *   This parameter is unavailable for generic secrets.
      Darabonba::Json customData_ {};
    };

    virtual bool empty() const override { return this->extendedConfig_ == nullptr
        && this->description_ == nullptr && this->secretName_ == nullptr; };
    // extendedConfig Field Functions 
    bool hasExtendedConfig() const { return this->extendedConfig_ != nullptr;};
    void deleteExtendedConfig() { this->extendedConfig_ = nullptr;};
    inline const UpdateSecretRequest::ExtendedConfig & getExtendedConfig() const { DARABONBA_PTR_GET_CONST(extendedConfig_, UpdateSecretRequest::ExtendedConfig) };
    inline UpdateSecretRequest::ExtendedConfig getExtendedConfig() { DARABONBA_PTR_GET(extendedConfig_, UpdateSecretRequest::ExtendedConfig) };
    inline UpdateSecretRequest& setExtendedConfig(const UpdateSecretRequest::ExtendedConfig & extendedConfig) { DARABONBA_PTR_SET_VALUE(extendedConfig_, extendedConfig) };
    inline UpdateSecretRequest& setExtendedConfig(UpdateSecretRequest::ExtendedConfig && extendedConfig) { DARABONBA_PTR_SET_RVALUE(extendedConfig_, extendedConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateSecretRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline UpdateSecretRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


  protected:
    shared_ptr<UpdateSecretRequest::ExtendedConfig> extendedConfig_ {};
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
