// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_THIRDAPP_HPP_
#define ALIBABACLOUD_MODELS_THIRDAPP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ThirdAppOidcSsoConfig.hpp>
#include <vector>
#include <alibabacloud/models/ThirdAppSecrets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class ThirdApp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ThirdApp& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OidcSsoConfig, oidcSsoConfig_);
      DARABONBA_PTR_TO_JSON(Secrets, secrets_);
    };
    friend void from_json(const Darabonba::Json& j, ThirdApp& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OidcSsoConfig, oidcSsoConfig_);
      DARABONBA_PTR_FROM_JSON(Secrets, secrets_);
    };
    ThirdApp() = default ;
    ThirdApp(const ThirdApp &) = default ;
    ThirdApp(ThirdApp &&) = default ;
    ThirdApp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ThirdApp() = default ;
    ThirdApp& operator=(const ThirdApp &) = default ;
    ThirdApp& operator=(ThirdApp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr
        && this->name_ != nullptr && this->oidcSsoConfig_ != nullptr && this->secrets_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline ThirdApp& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ThirdApp& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // oidcSsoConfig Field Functions 
    bool hasOidcSsoConfig() const { return this->oidcSsoConfig_ != nullptr;};
    void deleteOidcSsoConfig() { this->oidcSsoConfig_ = nullptr;};
    inline const ThirdAppOidcSsoConfig & oidcSsoConfig() const { DARABONBA_PTR_GET_CONST(oidcSsoConfig_, ThirdAppOidcSsoConfig) };
    inline ThirdAppOidcSsoConfig oidcSsoConfig() { DARABONBA_PTR_GET(oidcSsoConfig_, ThirdAppOidcSsoConfig) };
    inline ThirdApp& setOidcSsoConfig(const ThirdAppOidcSsoConfig & oidcSsoConfig) { DARABONBA_PTR_SET_VALUE(oidcSsoConfig_, oidcSsoConfig) };
    inline ThirdApp& setOidcSsoConfig(ThirdAppOidcSsoConfig && oidcSsoConfig) { DARABONBA_PTR_SET_RVALUE(oidcSsoConfig_, oidcSsoConfig) };


    // secrets Field Functions 
    bool hasSecrets() const { return this->secrets_ != nullptr;};
    void deleteSecrets() { this->secrets_ = nullptr;};
    inline const vector<ThirdAppSecrets> & secrets() const { DARABONBA_PTR_GET_CONST(secrets_, vector<ThirdAppSecrets>) };
    inline vector<ThirdAppSecrets> secrets() { DARABONBA_PTR_GET(secrets_, vector<ThirdAppSecrets>) };
    inline ThirdApp& setSecrets(const vector<ThirdAppSecrets> & secrets) { DARABONBA_PTR_SET_VALUE(secrets_, secrets) };
    inline ThirdApp& setSecrets(vector<ThirdAppSecrets> && secrets) { DARABONBA_PTR_SET_RVALUE(secrets_, secrets) };


  protected:
    std::shared_ptr<string> appKey_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<ThirdAppOidcSsoConfig> oidcSsoConfig_ = nullptr;
    std::shared_ptr<vector<ThirdAppSecrets>> secrets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
