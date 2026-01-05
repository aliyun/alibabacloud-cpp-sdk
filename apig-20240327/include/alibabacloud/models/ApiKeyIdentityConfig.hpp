// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APIKEYIDENTITYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_APIKEYIDENTITYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Credentials : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Credentials& obj) { 
        DARABONBA_PTR_TO_JSON(apikey, apikey_);
        DARABONBA_PTR_TO_JSON(generateMode, generateMode_);
      };
      friend void from_json(const Darabonba::Json& j, Credentials& obj) { 
        DARABONBA_PTR_FROM_JSON(apikey, apikey_);
        DARABONBA_PTR_FROM_JSON(generateMode, generateMode_);
      };
      Credentials() = default ;
      Credentials(const Credentials &) = default ;
      Credentials(Credentials &&) = default ;
      Credentials(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Credentials() = default ;
      Credentials& operator=(const Credentials &) = default ;
      Credentials& operator=(Credentials &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apikey_ == nullptr
        && this->generateMode_ == nullptr; };
      // apikey Field Functions 
      bool hasApikey() const { return this->apikey_ != nullptr;};
      void deleteApikey() { this->apikey_ = nullptr;};
      inline string getApikey() const { DARABONBA_PTR_GET_DEFAULT(apikey_, "") };
      inline Credentials& setApikey(string apikey) { DARABONBA_PTR_SET_VALUE(apikey_, apikey) };


      // generateMode Field Functions 
      bool hasGenerateMode() const { return this->generateMode_ != nullptr;};
      void deleteGenerateMode() { this->generateMode_ = nullptr;};
      inline string getGenerateMode() const { DARABONBA_PTR_GET_DEFAULT(generateMode_, "") };
      inline Credentials& setGenerateMode(string generateMode) { DARABONBA_PTR_SET_VALUE(generateMode_, generateMode) };


    protected:
      shared_ptr<string> apikey_ {};
      shared_ptr<string> generateMode_ {};
    };

    class ApikeySource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApikeySource& obj) { 
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ApikeySource& obj) { 
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      ApikeySource() = default ;
      ApikeySource(const ApikeySource &) = default ;
      ApikeySource(ApikeySource &&) = default ;
      ApikeySource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApikeySource() = default ;
      ApikeySource& operator=(const ApikeySource &) = default ;
      ApikeySource& operator=(ApikeySource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->source_ == nullptr
        && this->value_ == nullptr; };
      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline ApikeySource& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ApikeySource& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> source_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->apikeySource_ == nullptr
        && this->credentials_ == nullptr && this->type_ == nullptr; };
    // apikeySource Field Functions 
    bool hasApikeySource() const { return this->apikeySource_ != nullptr;};
    void deleteApikeySource() { this->apikeySource_ = nullptr;};
    inline const ApiKeyIdentityConfig::ApikeySource & getApikeySource() const { DARABONBA_PTR_GET_CONST(apikeySource_, ApiKeyIdentityConfig::ApikeySource) };
    inline ApiKeyIdentityConfig::ApikeySource getApikeySource() { DARABONBA_PTR_GET(apikeySource_, ApiKeyIdentityConfig::ApikeySource) };
    inline ApiKeyIdentityConfig& setApikeySource(const ApiKeyIdentityConfig::ApikeySource & apikeySource) { DARABONBA_PTR_SET_VALUE(apikeySource_, apikeySource) };
    inline ApiKeyIdentityConfig& setApikeySource(ApiKeyIdentityConfig::ApikeySource && apikeySource) { DARABONBA_PTR_SET_RVALUE(apikeySource_, apikeySource) };


    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline const vector<ApiKeyIdentityConfig::Credentials> & getCredentials() const { DARABONBA_PTR_GET_CONST(credentials_, vector<ApiKeyIdentityConfig::Credentials>) };
    inline vector<ApiKeyIdentityConfig::Credentials> getCredentials() { DARABONBA_PTR_GET(credentials_, vector<ApiKeyIdentityConfig::Credentials>) };
    inline ApiKeyIdentityConfig& setCredentials(const vector<ApiKeyIdentityConfig::Credentials> & credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };
    inline ApiKeyIdentityConfig& setCredentials(vector<ApiKeyIdentityConfig::Credentials> && credentials) { DARABONBA_PTR_SET_RVALUE(credentials_, credentials) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ApiKeyIdentityConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<ApiKeyIdentityConfig::ApikeySource> apikeySource_ {};
    shared_ptr<vector<ApiKeyIdentityConfig::Credentials>> credentials_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
