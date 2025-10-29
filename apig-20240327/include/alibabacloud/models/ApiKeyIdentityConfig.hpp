// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APIKEYIDENTITYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_APIKEYIDENTITYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ApiKeyIdentityConfigApikeySource.hpp>
#include <vector>
#include <alibabacloud/models/ApiKeyIdentityConfigCredentials.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ApiKeyIdentityConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApiKeyIdentityConfig& obj) { 
      DARABONBA_PTR_TO_JSON(apikeySource, apikeySource_);
      DARABONBA_PTR_TO_JSON(credentials, credentials_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ApiKeyIdentityConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(apikeySource, apikeySource_);
      DARABONBA_PTR_FROM_JSON(credentials, credentials_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ApiKeyIdentityConfig() = default ;
    ApiKeyIdentityConfig(const ApiKeyIdentityConfig &) = default ;
    ApiKeyIdentityConfig(ApiKeyIdentityConfig &&) = default ;
    ApiKeyIdentityConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApiKeyIdentityConfig() = default ;
    ApiKeyIdentityConfig& operator=(const ApiKeyIdentityConfig &) = default ;
    ApiKeyIdentityConfig& operator=(ApiKeyIdentityConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apikeySource_ == nullptr
        && return this->credentials_ == nullptr && return this->type_ == nullptr; };
    // apikeySource Field Functions 
    bool hasApikeySource() const { return this->apikeySource_ != nullptr;};
    void deleteApikeySource() { this->apikeySource_ = nullptr;};
    inline const ApiKeyIdentityConfigApikeySource & apikeySource() const { DARABONBA_PTR_GET_CONST(apikeySource_, ApiKeyIdentityConfigApikeySource) };
    inline ApiKeyIdentityConfigApikeySource apikeySource() { DARABONBA_PTR_GET(apikeySource_, ApiKeyIdentityConfigApikeySource) };
    inline ApiKeyIdentityConfig& setApikeySource(const ApiKeyIdentityConfigApikeySource & apikeySource) { DARABONBA_PTR_SET_VALUE(apikeySource_, apikeySource) };
    inline ApiKeyIdentityConfig& setApikeySource(ApiKeyIdentityConfigApikeySource && apikeySource) { DARABONBA_PTR_SET_RVALUE(apikeySource_, apikeySource) };


    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline const vector<ApiKeyIdentityConfigCredentials> & credentials() const { DARABONBA_PTR_GET_CONST(credentials_, vector<ApiKeyIdentityConfigCredentials>) };
    inline vector<ApiKeyIdentityConfigCredentials> credentials() { DARABONBA_PTR_GET(credentials_, vector<ApiKeyIdentityConfigCredentials>) };
    inline ApiKeyIdentityConfig& setCredentials(const vector<ApiKeyIdentityConfigCredentials> & credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };
    inline ApiKeyIdentityConfig& setCredentials(vector<ApiKeyIdentityConfigCredentials> && credentials) { DARABONBA_PTR_SET_RVALUE(credentials_, credentials) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ApiKeyIdentityConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<ApiKeyIdentityConfigApikeySource> apikeySource_ = nullptr;
    std::shared_ptr<vector<ApiKeyIdentityConfigCredentials>> credentials_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
