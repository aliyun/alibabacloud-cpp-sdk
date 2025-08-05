// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APIKEYIDENTITYCONFIGCREDENTIALS_HPP_
#define ALIBABACLOUD_MODELS_APIKEYIDENTITYCONFIGCREDENTIALS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ApiKeyIdentityConfigCredentials : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApiKeyIdentityConfigCredentials& obj) { 
      DARABONBA_PTR_TO_JSON(apikey, apikey_);
      DARABONBA_PTR_TO_JSON(generateMode, generateMode_);
    };
    friend void from_json(const Darabonba::Json& j, ApiKeyIdentityConfigCredentials& obj) { 
      DARABONBA_PTR_FROM_JSON(apikey, apikey_);
      DARABONBA_PTR_FROM_JSON(generateMode, generateMode_);
    };
    ApiKeyIdentityConfigCredentials() = default ;
    ApiKeyIdentityConfigCredentials(const ApiKeyIdentityConfigCredentials &) = default ;
    ApiKeyIdentityConfigCredentials(ApiKeyIdentityConfigCredentials &&) = default ;
    ApiKeyIdentityConfigCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApiKeyIdentityConfigCredentials() = default ;
    ApiKeyIdentityConfigCredentials& operator=(const ApiKeyIdentityConfigCredentials &) = default ;
    ApiKeyIdentityConfigCredentials& operator=(ApiKeyIdentityConfigCredentials &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apikey_ != nullptr
        && this->generateMode_ != nullptr; };
    // apikey Field Functions 
    bool hasApikey() const { return this->apikey_ != nullptr;};
    void deleteApikey() { this->apikey_ = nullptr;};
    inline string apikey() const { DARABONBA_PTR_GET_DEFAULT(apikey_, "") };
    inline ApiKeyIdentityConfigCredentials& setApikey(string apikey) { DARABONBA_PTR_SET_VALUE(apikey_, apikey) };


    // generateMode Field Functions 
    bool hasGenerateMode() const { return this->generateMode_ != nullptr;};
    void deleteGenerateMode() { this->generateMode_ = nullptr;};
    inline string generateMode() const { DARABONBA_PTR_GET_DEFAULT(generateMode_, "") };
    inline ApiKeyIdentityConfigCredentials& setGenerateMode(string generateMode) { DARABONBA_PTR_SET_VALUE(generateMode_, generateMode) };


  protected:
    std::shared_ptr<string> apikey_ = nullptr;
    std::shared_ptr<string> generateMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
