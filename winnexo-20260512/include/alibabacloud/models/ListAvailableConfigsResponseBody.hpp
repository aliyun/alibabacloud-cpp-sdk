// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLECONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLECONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListAvailableConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(configs, configs_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(configs, configs_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListAvailableConfigsResponseBody() = default ;
    ListAvailableConfigsResponseBody(const ListAvailableConfigsResponseBody &) = default ;
    ListAvailableConfigsResponseBody(ListAvailableConfigsResponseBody &&) = default ;
    ListAvailableConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableConfigsResponseBody() = default ;
    ListAvailableConfigsResponseBody& operator=(const ListAvailableConfigsResponseBody &) = default ;
    ListAvailableConfigsResponseBody& operator=(ListAvailableConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configs& obj) { 
        DARABONBA_PTR_TO_JSON(corpId, corpId_);
        DARABONBA_PTR_TO_JSON(corpName, corpName_);
        DARABONBA_PTR_TO_JSON(platformType, platformType_);
        DARABONBA_PTR_TO_JSON(ssoSettingsId, ssoSettingsId_);
        DARABONBA_PTR_TO_JSON(ssoSettingsName, ssoSettingsName_);
      };
      friend void from_json(const Darabonba::Json& j, Configs& obj) { 
        DARABONBA_PTR_FROM_JSON(corpId, corpId_);
        DARABONBA_PTR_FROM_JSON(corpName, corpName_);
        DARABONBA_PTR_FROM_JSON(platformType, platformType_);
        DARABONBA_PTR_FROM_JSON(ssoSettingsId, ssoSettingsId_);
        DARABONBA_PTR_FROM_JSON(ssoSettingsName, ssoSettingsName_);
      };
      Configs() = default ;
      Configs(const Configs &) = default ;
      Configs(Configs &&) = default ;
      Configs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configs() = default ;
      Configs& operator=(const Configs &) = default ;
      Configs& operator=(Configs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->corpId_ == nullptr
        && this->corpName_ == nullptr && this->platformType_ == nullptr && this->ssoSettingsId_ == nullptr && this->ssoSettingsName_ == nullptr; };
      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline Configs& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // corpName Field Functions 
      bool hasCorpName() const { return this->corpName_ != nullptr;};
      void deleteCorpName() { this->corpName_ = nullptr;};
      inline string getCorpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
      inline Configs& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


      // platformType Field Functions 
      bool hasPlatformType() const { return this->platformType_ != nullptr;};
      void deletePlatformType() { this->platformType_ = nullptr;};
      inline string getPlatformType() const { DARABONBA_PTR_GET_DEFAULT(platformType_, "") };
      inline Configs& setPlatformType(string platformType) { DARABONBA_PTR_SET_VALUE(platformType_, platformType) };


      // ssoSettingsId Field Functions 
      bool hasSsoSettingsId() const { return this->ssoSettingsId_ != nullptr;};
      void deleteSsoSettingsId() { this->ssoSettingsId_ = nullptr;};
      inline string getSsoSettingsId() const { DARABONBA_PTR_GET_DEFAULT(ssoSettingsId_, "") };
      inline Configs& setSsoSettingsId(string ssoSettingsId) { DARABONBA_PTR_SET_VALUE(ssoSettingsId_, ssoSettingsId) };


      // ssoSettingsName Field Functions 
      bool hasSsoSettingsName() const { return this->ssoSettingsName_ != nullptr;};
      void deleteSsoSettingsName() { this->ssoSettingsName_ = nullptr;};
      inline string getSsoSettingsName() const { DARABONBA_PTR_GET_DEFAULT(ssoSettingsName_, "") };
      inline Configs& setSsoSettingsName(string ssoSettingsName) { DARABONBA_PTR_SET_VALUE(ssoSettingsName_, ssoSettingsName) };


    protected:
      // The enterprise ID.
      shared_ptr<string> corpId_ {};
      // The organization name.
      shared_ptr<string> corpName_ {};
      // The platform type.
      shared_ptr<string> platformType_ {};
      // The SSO configuration ID. This field has a value only for SAML, OAuth2, or WeCom types. The value is null for custom types.
      shared_ptr<string> ssoSettingsId_ {};
      // The SSO configuration name. This field has a value only for SAML, OAuth2, or WeCom types. The value is null for custom types.
      shared_ptr<string> ssoSettingsName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->configs_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAvailableConfigsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<ListAvailableConfigsResponseBody::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<ListAvailableConfigsResponseBody::Configs>) };
    inline vector<ListAvailableConfigsResponseBody::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<ListAvailableConfigsResponseBody::Configs>) };
    inline ListAvailableConfigsResponseBody& setConfigs(const vector<ListAvailableConfigsResponseBody::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline ListAvailableConfigsResponseBody& setConfigs(vector<ListAvailableConfigsResponseBody::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAvailableConfigsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAvailableConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The list of queried Logtail configurations.
    shared_ptr<vector<ListAvailableConfigsResponseBody::Configs>> configs_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
