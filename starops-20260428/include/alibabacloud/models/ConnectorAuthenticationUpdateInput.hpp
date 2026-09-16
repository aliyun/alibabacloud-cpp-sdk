// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONNECTORAUTHENTICATIONUPDATEINPUT_HPP_
#define ALIBABACLOUD_MODELS_CONNECTORAUTHENTICATIONUPDATEINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class ConnectorAuthenticationUpdateInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConnectorAuthenticationUpdateInput& obj) { 
      DARABONBA_PTR_TO_JSON(basic, basic_);
      DARABONBA_PTR_TO_JSON(botToken, botToken_);
      DARABONBA_PTR_TO_JSON(oauth, oauth_);
      DARABONBA_PTR_TO_JSON(patToken, patToken_);
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(satellite, satellite_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ConnectorAuthenticationUpdateInput& obj) { 
      DARABONBA_PTR_FROM_JSON(basic, basic_);
      DARABONBA_PTR_FROM_JSON(botToken, botToken_);
      DARABONBA_PTR_FROM_JSON(oauth, oauth_);
      DARABONBA_PTR_FROM_JSON(patToken, patToken_);
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(satellite, satellite_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ConnectorAuthenticationUpdateInput() = default ;
    ConnectorAuthenticationUpdateInput(const ConnectorAuthenticationUpdateInput &) = default ;
    ConnectorAuthenticationUpdateInput(ConnectorAuthenticationUpdateInput &&) = default ;
    ConnectorAuthenticationUpdateInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConnectorAuthenticationUpdateInput() = default ;
    ConnectorAuthenticationUpdateInput& operator=(const ConnectorAuthenticationUpdateInput &) = default ;
    ConnectorAuthenticationUpdateInput& operator=(ConnectorAuthenticationUpdateInput &&) = default ;
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

    class PatToken : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PatToken& obj) { 
        DARABONBA_PTR_TO_JSON(patToken, patToken_);
      };
      friend void from_json(const Darabonba::Json& j, PatToken& obj) { 
        DARABONBA_PTR_FROM_JSON(patToken, patToken_);
      };
      PatToken() = default ;
      PatToken(const PatToken &) = default ;
      PatToken(PatToken &&) = default ;
      PatToken(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PatToken() = default ;
      PatToken& operator=(const PatToken &) = default ;
      PatToken& operator=(PatToken &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->patToken_ == nullptr; };
      // patToken Field Functions 
      bool hasPatToken() const { return this->patToken_ != nullptr;};
      void deletePatToken() { this->patToken_ = nullptr;};
      inline string getPatToken() const { DARABONBA_PTR_GET_DEFAULT(patToken_, "") };
      inline PatToken& setPatToken(string patToken) { DARABONBA_PTR_SET_VALUE(patToken_, patToken) };


    protected:
      // The personal access token used to replace the existing credential.
      shared_ptr<string> patToken_ {};
    };

    class Oauth : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Oauth& obj) { 
        DARABONBA_PTR_TO_JSON(clientId, clientId_);
        DARABONBA_PTR_TO_JSON(clientSecret, clientSecret_);
      };
      friend void from_json(const Darabonba::Json& j, Oauth& obj) { 
        DARABONBA_PTR_FROM_JSON(clientId, clientId_);
        DARABONBA_PTR_FROM_JSON(clientSecret, clientSecret_);
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
      virtual bool empty() const override { return this->clientId_ == nullptr
        && this->clientSecret_ == nullptr; };
      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline Oauth& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // clientSecret Field Functions 
      bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
      void deleteClientSecret() { this->clientSecret_ = nullptr;};
      inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
      inline Oauth& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    protected:
      // OAuth client ID
      // 
      // This parameter is required.
      shared_ptr<string> clientId_ {};
      // Replacement OAuth client secret
      shared_ptr<string> clientSecret_ {};
    };

    class BotToken : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BotToken& obj) { 
        DARABONBA_PTR_TO_JSON(botToken, botToken_);
        DARABONBA_PTR_TO_JSON(signingSecret, signingSecret_);
      };
      friend void from_json(const Darabonba::Json& j, BotToken& obj) { 
        DARABONBA_PTR_FROM_JSON(botToken, botToken_);
        DARABONBA_PTR_FROM_JSON(signingSecret, signingSecret_);
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
      virtual bool empty() const override { return this->botToken_ == nullptr
        && this->signingSecret_ == nullptr; };
      // botToken Field Functions 
      bool hasBotToken() const { return this->botToken_ != nullptr;};
      void deleteBotToken() { this->botToken_ = nullptr;};
      inline string getBotToken() const { DARABONBA_PTR_GET_DEFAULT(botToken_, "") };
      inline BotToken& setBotToken(string botToken) { DARABONBA_PTR_SET_VALUE(botToken_, botToken) };


      // signingSecret Field Functions 
      bool hasSigningSecret() const { return this->signingSecret_ != nullptr;};
      void deleteSigningSecret() { this->signingSecret_ = nullptr;};
      inline string getSigningSecret() const { DARABONBA_PTR_GET_DEFAULT(signingSecret_, "") };
      inline BotToken& setSigningSecret(string signingSecret) { DARABONBA_PTR_SET_VALUE(signingSecret_, signingSecret) };


    protected:
      // Replacement bot token
      // 
      // This parameter is required.
      shared_ptr<string> botToken_ {};
      // Replacement signing secret
      shared_ptr<string> signingSecret_ {};
    };

    class Basic : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Basic& obj) { 
        DARABONBA_PTR_TO_JSON(password, password_);
        DARABONBA_PTR_TO_JSON(username, username_);
      };
      friend void from_json(const Darabonba::Json& j, Basic& obj) { 
        DARABONBA_PTR_FROM_JSON(password, password_);
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
      virtual bool empty() const override { return this->password_ == nullptr
        && this->username_ == nullptr; };
      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline Basic& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline Basic& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      // Replacement password
      shared_ptr<string> password_ {};
      // Username
      // 
      // This parameter is required.
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->basic_ == nullptr
        && this->botToken_ == nullptr && this->oauth_ == nullptr && this->patToken_ == nullptr && this->role_ == nullptr && this->satellite_ == nullptr
        && this->type_ == nullptr; };
    // basic Field Functions 
    bool hasBasic() const { return this->basic_ != nullptr;};
    void deleteBasic() { this->basic_ = nullptr;};
    inline const ConnectorAuthenticationUpdateInput::Basic & getBasic() const { DARABONBA_PTR_GET_CONST(basic_, ConnectorAuthenticationUpdateInput::Basic) };
    inline ConnectorAuthenticationUpdateInput::Basic getBasic() { DARABONBA_PTR_GET(basic_, ConnectorAuthenticationUpdateInput::Basic) };
    inline ConnectorAuthenticationUpdateInput& setBasic(const ConnectorAuthenticationUpdateInput::Basic & basic) { DARABONBA_PTR_SET_VALUE(basic_, basic) };
    inline ConnectorAuthenticationUpdateInput& setBasic(ConnectorAuthenticationUpdateInput::Basic && basic) { DARABONBA_PTR_SET_RVALUE(basic_, basic) };


    // botToken Field Functions 
    bool hasBotToken() const { return this->botToken_ != nullptr;};
    void deleteBotToken() { this->botToken_ = nullptr;};
    inline const ConnectorAuthenticationUpdateInput::BotToken & getBotToken() const { DARABONBA_PTR_GET_CONST(botToken_, ConnectorAuthenticationUpdateInput::BotToken) };
    inline ConnectorAuthenticationUpdateInput::BotToken getBotToken() { DARABONBA_PTR_GET(botToken_, ConnectorAuthenticationUpdateInput::BotToken) };
    inline ConnectorAuthenticationUpdateInput& setBotToken(const ConnectorAuthenticationUpdateInput::BotToken & botToken) { DARABONBA_PTR_SET_VALUE(botToken_, botToken) };
    inline ConnectorAuthenticationUpdateInput& setBotToken(ConnectorAuthenticationUpdateInput::BotToken && botToken) { DARABONBA_PTR_SET_RVALUE(botToken_, botToken) };


    // oauth Field Functions 
    bool hasOauth() const { return this->oauth_ != nullptr;};
    void deleteOauth() { this->oauth_ = nullptr;};
    inline const ConnectorAuthenticationUpdateInput::Oauth & getOauth() const { DARABONBA_PTR_GET_CONST(oauth_, ConnectorAuthenticationUpdateInput::Oauth) };
    inline ConnectorAuthenticationUpdateInput::Oauth getOauth() { DARABONBA_PTR_GET(oauth_, ConnectorAuthenticationUpdateInput::Oauth) };
    inline ConnectorAuthenticationUpdateInput& setOauth(const ConnectorAuthenticationUpdateInput::Oauth & oauth) { DARABONBA_PTR_SET_VALUE(oauth_, oauth) };
    inline ConnectorAuthenticationUpdateInput& setOauth(ConnectorAuthenticationUpdateInput::Oauth && oauth) { DARABONBA_PTR_SET_RVALUE(oauth_, oauth) };


    // patToken Field Functions 
    bool hasPatToken() const { return this->patToken_ != nullptr;};
    void deletePatToken() { this->patToken_ = nullptr;};
    inline const ConnectorAuthenticationUpdateInput::PatToken & getPatToken() const { DARABONBA_PTR_GET_CONST(patToken_, ConnectorAuthenticationUpdateInput::PatToken) };
    inline ConnectorAuthenticationUpdateInput::PatToken getPatToken() { DARABONBA_PTR_GET(patToken_, ConnectorAuthenticationUpdateInput::PatToken) };
    inline ConnectorAuthenticationUpdateInput& setPatToken(const ConnectorAuthenticationUpdateInput::PatToken & patToken) { DARABONBA_PTR_SET_VALUE(patToken_, patToken) };
    inline ConnectorAuthenticationUpdateInput& setPatToken(ConnectorAuthenticationUpdateInput::PatToken && patToken) { DARABONBA_PTR_SET_RVALUE(patToken_, patToken) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline const ConnectorAuthenticationUpdateInput::Role & getRole() const { DARABONBA_PTR_GET_CONST(role_, ConnectorAuthenticationUpdateInput::Role) };
    inline ConnectorAuthenticationUpdateInput::Role getRole() { DARABONBA_PTR_GET(role_, ConnectorAuthenticationUpdateInput::Role) };
    inline ConnectorAuthenticationUpdateInput& setRole(const ConnectorAuthenticationUpdateInput::Role & role) { DARABONBA_PTR_SET_VALUE(role_, role) };
    inline ConnectorAuthenticationUpdateInput& setRole(ConnectorAuthenticationUpdateInput::Role && role) { DARABONBA_PTR_SET_RVALUE(role_, role) };


    // satellite Field Functions 
    bool hasSatellite() const { return this->satellite_ != nullptr;};
    void deleteSatellite() { this->satellite_ = nullptr;};
    inline const ConnectorAuthenticationUpdateInput::Satellite & getSatellite() const { DARABONBA_PTR_GET_CONST(satellite_, ConnectorAuthenticationUpdateInput::Satellite) };
    inline ConnectorAuthenticationUpdateInput::Satellite getSatellite() { DARABONBA_PTR_GET(satellite_, ConnectorAuthenticationUpdateInput::Satellite) };
    inline ConnectorAuthenticationUpdateInput& setSatellite(const ConnectorAuthenticationUpdateInput::Satellite & satellite) { DARABONBA_PTR_SET_VALUE(satellite_, satellite) };
    inline ConnectorAuthenticationUpdateInput& setSatellite(ConnectorAuthenticationUpdateInput::Satellite && satellite) { DARABONBA_PTR_SET_RVALUE(satellite_, satellite) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ConnectorAuthenticationUpdateInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The configuration that uses a username and password to replace the existing authentication configuration.
    shared_ptr<ConnectorAuthenticationUpdateInput::Basic> basic_ {};
    // The configuration that uses a bot token and signing key to replace the existing authentication configuration.
    shared_ptr<ConnectorAuthenticationUpdateInput::BotToken> botToken_ {};
    // The configuration that uses an OAuth client identity to replace the existing authentication configuration.
    shared_ptr<ConnectorAuthenticationUpdateInput::Oauth> oauth_ {};
    // The configuration that uses a personal access token to replace the existing authentication configuration.
    shared_ptr<ConnectorAuthenticationUpdateInput::PatToken> patToken_ {};
    // The configuration that uses a RAM role ARN to replace the existing authentication configuration.
    shared_ptr<ConnectorAuthenticationUpdateInput::Role> role_ {};
    // The configuration that uses a local credential binding to replace the existing authentication configuration.
    shared_ptr<ConnectorAuthenticationUpdateInput::Satellite> satellite_ {};
    // Authentication type
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
