// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPCONFIGENVFROMS_HPP_
#define ALIBABACLOUD_MODELS_APPCONFIGENVFROMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class AppConfigEnvFroms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppConfigEnvFroms& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigMapRef, configMapRef_);
      DARABONBA_PTR_TO_JSON(SecretRef, secretRef_);
    };
    friend void from_json(const Darabonba::Json& j, AppConfigEnvFroms& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigMapRef, configMapRef_);
      DARABONBA_PTR_FROM_JSON(SecretRef, secretRef_);
    };
    AppConfigEnvFroms() = default ;
    AppConfigEnvFroms(const AppConfigEnvFroms &) = default ;
    AppConfigEnvFroms(AppConfigEnvFroms &&) = default ;
    AppConfigEnvFroms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppConfigEnvFroms() = default ;
    AppConfigEnvFroms& operator=(const AppConfigEnvFroms &) = default ;
    AppConfigEnvFroms& operator=(AppConfigEnvFroms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configMapRef_ == nullptr
        && return this->secretRef_ == nullptr; };
    // configMapRef Field Functions 
    bool hasConfigMapRef() const { return this->configMapRef_ != nullptr;};
    void deleteConfigMapRef() { this->configMapRef_ = nullptr;};
    inline string configMapRef() const { DARABONBA_PTR_GET_DEFAULT(configMapRef_, "") };
    inline AppConfigEnvFroms& setConfigMapRef(string configMapRef) { DARABONBA_PTR_SET_VALUE(configMapRef_, configMapRef) };


    // secretRef Field Functions 
    bool hasSecretRef() const { return this->secretRef_ != nullptr;};
    void deleteSecretRef() { this->secretRef_ = nullptr;};
    inline string secretRef() const { DARABONBA_PTR_GET_DEFAULT(secretRef_, "") };
    inline AppConfigEnvFroms& setSecretRef(string secretRef) { DARABONBA_PTR_SET_VALUE(secretRef_, secretRef) };


  protected:
    std::shared_ptr<string> configMapRef_ = nullptr;
    std::shared_ptr<string> secretRef_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
