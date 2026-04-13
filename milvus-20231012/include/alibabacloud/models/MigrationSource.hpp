// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONSOURCE_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONSOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class MigrationSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationSource& obj) { 
      DARABONBA_PTR_TO_JSON(authInfo, authInfo_);
      DARABONBA_PTR_TO_JSON(database, database_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationSource& obj) { 
      DARABONBA_PTR_FROM_JSON(authInfo, authInfo_);
      DARABONBA_PTR_FROM_JSON(database, database_);
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
    };
    MigrationSource() = default ;
    MigrationSource(const MigrationSource &) = default ;
    MigrationSource(MigrationSource &&) = default ;
    MigrationSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationSource() = default ;
    MigrationSource& operator=(const MigrationSource &) = default ;
    MigrationSource& operator=(MigrationSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Endpoint : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Endpoint& obj) { 
        DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(port, port_);
      };
      friend void from_json(const Darabonba::Json& j, Endpoint& obj) { 
        DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(port, port_);
      };
      Endpoint() = default ;
      Endpoint(const Endpoint &) = default ;
      Endpoint(Endpoint &&) = default ;
      Endpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Endpoint() = default ;
      Endpoint& operator=(const Endpoint &) = default ;
      Endpoint& operator=(Endpoint &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endpoint_ == nullptr
        && this->port_ == nullptr; };
      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline Endpoint& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline Endpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    protected:
      shared_ptr<string> endpoint_ {};
      shared_ptr<string> port_ {};
    };

    class AuthInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthInfo& obj) { 
        DARABONBA_PTR_TO_JSON(authType, authType_);
        DARABONBA_PTR_TO_JSON(password, password_);
        DARABONBA_PTR_TO_JSON(token, token_);
        DARABONBA_PTR_TO_JSON(username, username_);
      };
      friend void from_json(const Darabonba::Json& j, AuthInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(authType, authType_);
        DARABONBA_PTR_FROM_JSON(password, password_);
        DARABONBA_PTR_FROM_JSON(token, token_);
        DARABONBA_PTR_FROM_JSON(username, username_);
      };
      AuthInfo() = default ;
      AuthInfo(const AuthInfo &) = default ;
      AuthInfo(AuthInfo &&) = default ;
      AuthInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthInfo() = default ;
      AuthInfo& operator=(const AuthInfo &) = default ;
      AuthInfo& operator=(AuthInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authType_ == nullptr
        && this->password_ == nullptr && this->token_ == nullptr && this->username_ == nullptr; };
      // authType Field Functions 
      bool hasAuthType() const { return this->authType_ != nullptr;};
      void deleteAuthType() { this->authType_ = nullptr;};
      inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
      inline AuthInfo& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline AuthInfo& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline AuthInfo& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline AuthInfo& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      shared_ptr<string> authType_ {};
      shared_ptr<string> password_ {};
      shared_ptr<string> token_ {};
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->authInfo_ == nullptr
        && this->database_ == nullptr && this->endpoint_ == nullptr; };
    // authInfo Field Functions 
    bool hasAuthInfo() const { return this->authInfo_ != nullptr;};
    void deleteAuthInfo() { this->authInfo_ = nullptr;};
    inline const MigrationSource::AuthInfo & getAuthInfo() const { DARABONBA_PTR_GET_CONST(authInfo_, MigrationSource::AuthInfo) };
    inline MigrationSource::AuthInfo getAuthInfo() { DARABONBA_PTR_GET(authInfo_, MigrationSource::AuthInfo) };
    inline MigrationSource& setAuthInfo(const MigrationSource::AuthInfo & authInfo) { DARABONBA_PTR_SET_VALUE(authInfo_, authInfo) };
    inline MigrationSource& setAuthInfo(MigrationSource::AuthInfo && authInfo) { DARABONBA_PTR_SET_RVALUE(authInfo_, authInfo) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline MigrationSource& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline const MigrationSource::Endpoint & getEndpoint() const { DARABONBA_PTR_GET_CONST(endpoint_, MigrationSource::Endpoint) };
    inline MigrationSource::Endpoint getEndpoint() { DARABONBA_PTR_GET(endpoint_, MigrationSource::Endpoint) };
    inline MigrationSource& setEndpoint(const MigrationSource::Endpoint & endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };
    inline MigrationSource& setEndpoint(MigrationSource::Endpoint && endpoint) { DARABONBA_PTR_SET_RVALUE(endpoint_, endpoint) };


  protected:
    shared_ptr<MigrationSource::AuthInfo> authInfo_ {};
    shared_ptr<string> database_ {};
    shared_ptr<MigrationSource::Endpoint> endpoint_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
