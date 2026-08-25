// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENCRYPTIONCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETENCRYPTIONCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetEncryptionConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEncryptionConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEncryptionConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetEncryptionConfigResponseBody() = default ;
    GetEncryptionConfigResponseBody(const GetEncryptionConfigResponseBody &) = default ;
    GetEncryptionConfigResponseBody(GetEncryptionConfigResponseBody &&) = default ;
    GetEncryptionConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEncryptionConfigResponseBody() = default ;
    GetEncryptionConfigResponseBody& operator=(const GetEncryptionConfigResponseBody &) = default ;
    GetEncryptionConfigResponseBody& operator=(GetEncryptionConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(alias, alias_);
        DARABONBA_PTR_TO_JSON(creator, creator_);
        DARABONBA_PTR_TO_JSON(keyArn, keyArn_);
        DARABONBA_PTR_TO_JSON(keyId, keyId_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(alias, alias_);
        DARABONBA_PTR_FROM_JSON(creator, creator_);
        DARABONBA_PTR_FROM_JSON(keyArn, keyArn_);
        DARABONBA_PTR_FROM_JSON(keyId, keyId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      Config() = default ;
      Config(const Config &) = default ;
      Config(Config &&) = default ;
      Config(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Config() = default ;
      Config& operator=(const Config &) = default ;
      Config& operator=(Config &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alias_ == nullptr
        && this->creator_ == nullptr && this->keyArn_ == nullptr && this->keyId_ == nullptr && this->status_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline Config& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Config& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // keyArn Field Functions 
      bool hasKeyArn() const { return this->keyArn_ != nullptr;};
      void deleteKeyArn() { this->keyArn_ = nullptr;};
      inline string getKeyArn() const { DARABONBA_PTR_GET_DEFAULT(keyArn_, "") };
      inline Config& setKeyArn(string keyArn) { DARABONBA_PTR_SET_VALUE(keyArn_, keyArn) };


      // keyId Field Functions 
      bool hasKeyId() const { return this->keyId_ != nullptr;};
      void deleteKeyId() { this->keyId_ = nullptr;};
      inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
      inline Config& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Config& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The key alias.
      shared_ptr<string> alias_ {};
      // The creator ID.
      shared_ptr<string> creator_ {};
      // The key ARN.
      shared_ptr<string> keyArn_ {};
      // The key ID.
      shared_ptr<string> keyId_ {};
      // The key status. Valid values:
      // - Enabled
      // - Disabled
      // - PendingDeletion
      // - PendingImport
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->requestId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const GetEncryptionConfigResponseBody::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, GetEncryptionConfigResponseBody::Config) };
    inline GetEncryptionConfigResponseBody::Config getConfig() { DARABONBA_PTR_GET(config_, GetEncryptionConfigResponseBody::Config) };
    inline GetEncryptionConfigResponseBody& setConfig(const GetEncryptionConfigResponseBody::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline GetEncryptionConfigResponseBody& setConfig(GetEncryptionConfigResponseBody::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEncryptionConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The object key.
    shared_ptr<GetEncryptionConfigResponseBody::Config> config_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
