// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONNECTORAUTHENTICATION_HPP_
#define ALIBABACLOUD_MODELS_CONNECTORAUTHENTICATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class ConnectorAuthentication : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConnectorAuthentication& obj) { 
      DARABONBA_PTR_TO_JSON(basic, basic_);
      DARABONBA_PTR_TO_JSON(botToken, botToken_);
      DARABONBA_PTR_TO_JSON(oauth, oauth_);
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(satellite, satellite_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ConnectorAuthentication& obj) { 
      DARABONBA_PTR_FROM_JSON(basic, basic_);
      DARABONBA_PTR_FROM_JSON(botToken, botToken_);
      DARABONBA_PTR_FROM_JSON(oauth, oauth_);
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(satellite, satellite_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ConnectorAuthentication() = default ;
    ConnectorAuthentication(const ConnectorAuthentication &) = default ;
    ConnectorAuthentication(ConnectorAuthentication &&) = default ;
    ConnectorAuthentication(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConnectorAuthentication() = default ;
    ConnectorAuthentication& operator=(const ConnectorAuthentication &) = default ;
    ConnectorAuthentication& operator=(ConnectorAuthentication &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Satellite : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Satellite& obj) { 
        DARABONBA_PTR_TO_JSON(bindingName, bindingName_);
      };
      friend void from_json(const Darabonba::Json& j, Satellite& obj) { 
        DARABONBA_PTR_FROM_JSON(bindingName, bindingName_);
      };
      Satellite() = default ;
      Satellite(const Satellite &) = default ;
      Satellite(Satellite &&) = default ;
      Satellite(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Satellite() = default ;
      Satellite& operator=(const Satellite &) = default ;
      Satellite& operator=(Satellite &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bindingName_ == nullptr; };
      // bindingName Field Functions 
      bool hasBindingName() const { return this->bindingName_ != nullptr;};
      void deleteBindingName() { this->bindingName_ = nullptr;};
      inline string getBindingName() const { DARABONBA_PTR_GET_DEFAULT(bindingName_, "") };
      inline Satellite& setBindingName(string bindingName) { DARABONBA_PTR_SET_VALUE(bindingName_, bindingName) };


    protected:
      // Local credential binding name
      // 
      // This parameter is required.
      shared_ptr<string> bindingName_ {};
    };

    class Role : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Role& obj) { 
        DARABONBA_PTR_TO_JSON(roleArn, roleArn_);
      };
      friend void from_json(const Darabonba::Json& j, Role& obj) { 
        DARABONBA_PTR_FROM_JSON(roleArn, roleArn_);
      };
      Role() = default ;
      Role(const Role &) = default ;
      Role(Role &&) = default ;
      Role(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Role() = default ;
      Role& operator=(const Role &) = default ;
      Role& operator=(Role &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->roleArn_ == nullptr; };
      // roleArn Field Functions 
      bool hasRoleArn() const { return this->roleArn_ != nullptr;};
      void deleteRoleArn() { this->roleArn_ = nullptr;};
      inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
      inline Role& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    protected:
      // Role ARN
      // 
      // This parameter is required.
      shared_ptr<string> roleArn_ {};
    };

    class Oauth : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Oauth& obj) { 
        DARABONBA_PTR_TO_JSON(clientId, clientId_);
      };
      friend void from_json(const Darabonba::Json& j, Oauth& obj) { 
        DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      };
      Oauth() = default ;
      Oauth(const Oauth &) = default ;
      Oauth(Oauth &&) = default ;
      Oauth(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Oauth() = default ;
      Oauth& operator=(const Oauth &) = default ;
      Oauth& operator=(Oauth &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientId_ == nullptr; };
      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline Oauth& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    protected:
      // OAuth client ID
      // 
      // This parameter is required.
      shared_ptr<string> clientId_ {};
    };

    class BotToken : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BotToken& obj) { 
        DARABONBA_PTR_TO_JSON(botId, botId_);
      };
      friend void from_json(const Darabonba::Json& j, BotToken& obj) { 
        DARABONBA_PTR_FROM_JSON(botId, botId_);
      };
      BotToken() = default ;
      BotToken(const BotToken &) = default ;
      BotToken(BotToken &&) = default ;
      BotToken(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BotToken() = default ;
      BotToken& operator=(const BotToken &) = default ;
      BotToken& operator=(BotToken &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->botId_ == nullptr; };
      // botId Field Functions 
      bool hasBotId() const { return this->botId_ != nullptr;};
      void deleteBotId() { this->botId_ = nullptr;};
      inline string getBotId() const { DARABONBA_PTR_GET_DEFAULT(botId_, "") };
      inline BotToken& setBotId(string botId) { DARABONBA_PTR_SET_VALUE(botId_, botId) };


    protected:
      // Bot ID
      // 
      // This parameter is required.
      shared_ptr<string> botId_ {};
    };

    class Basic : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Basic& obj) { 
        DARABONBA_PTR_TO_JSON(username, username_);
      };
      friend void from_json(const Darabonba::Json& j, Basic& obj) { 
        DARABONBA_PTR_FROM_JSON(username, username_);
      };
      Basic() = default ;
      Basic(const Basic &) = default ;
      Basic(Basic &&) = default ;
      Basic(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Basic() = default ;
      Basic& operator=(const Basic &) = default ;
      Basic& operator=(Basic &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->username_ == nullptr; };
      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline Basic& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      // Username
      // 
      // This parameter is required.
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->basic_ == nullptr
        && this->botToken_ == nullptr && this->oauth_ == nullptr && this->role_ == nullptr && this->satellite_ == nullptr && this->type_ == nullptr; };
    // basic Field Functions 
    bool hasBasic() const { return this->basic_ != nullptr;};
    void deleteBasic() { this->basic_ = nullptr;};
    inline const ConnectorAuthentication::Basic & getBasic() const { DARABONBA_PTR_GET_CONST(basic_, ConnectorAuthentication::Basic) };
    inline ConnectorAuthentication::Basic getBasic() { DARABONBA_PTR_GET(basic_, ConnectorAuthentication::Basic) };
    inline ConnectorAuthentication& setBasic(const ConnectorAuthentication::Basic & basic) { DARABONBA_PTR_SET_VALUE(basic_, basic) };
    inline ConnectorAuthentication& setBasic(ConnectorAuthentication::Basic && basic) { DARABONBA_PTR_SET_RVALUE(basic_, basic) };


    // botToken Field Functions 
    bool hasBotToken() const { return this->botToken_ != nullptr;};
    void deleteBotToken() { this->botToken_ = nullptr;};
    inline const ConnectorAuthentication::BotToken & getBotToken() const { DARABONBA_PTR_GET_CONST(botToken_, ConnectorAuthentication::BotToken) };
    inline ConnectorAuthentication::BotToken getBotToken() { DARABONBA_PTR_GET(botToken_, ConnectorAuthentication::BotToken) };
    inline ConnectorAuthentication& setBotToken(const ConnectorAuthentication::BotToken & botToken) { DARABONBA_PTR_SET_VALUE(botToken_, botToken) };
    inline ConnectorAuthentication& setBotToken(ConnectorAuthentication::BotToken && botToken) { DARABONBA_PTR_SET_RVALUE(botToken_, botToken) };


    // oauth Field Functions 
    bool hasOauth() const { return this->oauth_ != nullptr;};
    void deleteOauth() { this->oauth_ = nullptr;};
    inline const ConnectorAuthentication::Oauth & getOauth() const { DARABONBA_PTR_GET_CONST(oauth_, ConnectorAuthentication::Oauth) };
    inline ConnectorAuthentication::Oauth getOauth() { DARABONBA_PTR_GET(oauth_, ConnectorAuthentication::Oauth) };
    inline ConnectorAuthentication& setOauth(const ConnectorAuthentication::Oauth & oauth) { DARABONBA_PTR_SET_VALUE(oauth_, oauth) };
    inline ConnectorAuthentication& setOauth(ConnectorAuthentication::Oauth && oauth) { DARABONBA_PTR_SET_RVALUE(oauth_, oauth) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline const ConnectorAuthentication::Role & getRole() const { DARABONBA_PTR_GET_CONST(role_, ConnectorAuthentication::Role) };
    inline ConnectorAuthentication::Role getRole() { DARABONBA_PTR_GET(role_, ConnectorAuthentication::Role) };
    inline ConnectorAuthentication& setRole(const ConnectorAuthentication::Role & role) { DARABONBA_PTR_SET_VALUE(role_, role) };
    inline ConnectorAuthentication& setRole(ConnectorAuthentication::Role && role) { DARABONBA_PTR_SET_RVALUE(role_, role) };


    // satellite Field Functions 
    bool hasSatellite() const { return this->satellite_ != nullptr;};
    void deleteSatellite() { this->satellite_ = nullptr;};
    inline const ConnectorAuthentication::Satellite & getSatellite() const { DARABONBA_PTR_GET_CONST(satellite_, ConnectorAuthentication::Satellite) };
    inline ConnectorAuthentication::Satellite getSatellite() { DARABONBA_PTR_GET(satellite_, ConnectorAuthentication::Satellite) };
    inline ConnectorAuthentication& setSatellite(const ConnectorAuthentication::Satellite & satellite) { DARABONBA_PTR_SET_VALUE(satellite_, satellite) };
    inline ConnectorAuthentication& setSatellite(ConnectorAuthentication::Satellite && satellite) { DARABONBA_PTR_SET_RVALUE(satellite_, satellite) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ConnectorAuthentication& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The security identity information for basic authentication, excluding the password.
    shared_ptr<ConnectorAuthentication::Basic> basic_ {};
    // The security identity information for the bot, excluding the token and signing key.
    shared_ptr<ConnectorAuthentication::BotToken> botToken_ {};
    // The security identity information for OAuth, excluding the client secret.
    shared_ptr<ConnectorAuthentication::Oauth> oauth_ {};
    // The security identity information based on the RAM role ARN.
    shared_ptr<ConnectorAuthentication::Role> role_ {};
    // The security identity information based on local credential binding.
    shared_ptr<ConnectorAuthentication::Satellite> satellite_ {};
    // Authentication type
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
