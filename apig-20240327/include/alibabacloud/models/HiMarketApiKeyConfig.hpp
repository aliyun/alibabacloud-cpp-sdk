// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HIMARKETAPIKEYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HIMARKETAPIKEYCONFIG_HPP_
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
  class HiMarketApiKeyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HiMarketApiKeyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(credentials, credentials_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(source, source_);
    };
    friend void from_json(const Darabonba::Json& j, HiMarketApiKeyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(credentials, credentials_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(source, source_);
    };
    HiMarketApiKeyConfig() = default ;
    HiMarketApiKeyConfig(const HiMarketApiKeyConfig &) = default ;
    HiMarketApiKeyConfig(HiMarketApiKeyConfig &&) = default ;
    HiMarketApiKeyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HiMarketApiKeyConfig() = default ;
    HiMarketApiKeyConfig& operator=(const HiMarketApiKeyConfig &) = default ;
    HiMarketApiKeyConfig& operator=(HiMarketApiKeyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Credentials : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Credentials& obj) { 
        DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(mode, mode_);
      };
      friend void from_json(const Darabonba::Json& j, Credentials& obj) { 
        DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(mode, mode_);
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
      virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->mode_ == nullptr; };
      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline Credentials& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Credentials& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    protected:
      // The API key value.
      shared_ptr<string> apiKey_ {};
      // The generation mode.
      shared_ptr<string> mode_ {};
    };

    virtual bool empty() const override { return this->credentials_ == nullptr
        && this->key_ == nullptr && this->source_ == nullptr; };
    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline const vector<HiMarketApiKeyConfig::Credentials> & getCredentials() const { DARABONBA_PTR_GET_CONST(credentials_, vector<HiMarketApiKeyConfig::Credentials>) };
    inline vector<HiMarketApiKeyConfig::Credentials> getCredentials() { DARABONBA_PTR_GET(credentials_, vector<HiMarketApiKeyConfig::Credentials>) };
    inline HiMarketApiKeyConfig& setCredentials(const vector<HiMarketApiKeyConfig::Credentials> & credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };
    inline HiMarketApiKeyConfig& setCredentials(vector<HiMarketApiKeyConfig::Credentials> && credentials) { DARABONBA_PTR_SET_RVALUE(credentials_, credentials) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline HiMarketApiKeyConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline HiMarketApiKeyConfig& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The list of credentials.
    shared_ptr<vector<HiMarketApiKeyConfig::Credentials>> credentials_ {};
    // The name of the location from which the API key is extracted.
    shared_ptr<string> key_ {};
    // The source type of the API key.
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
