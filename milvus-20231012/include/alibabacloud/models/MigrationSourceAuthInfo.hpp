// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONSOURCEAUTHINFO_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONSOURCEAUTHINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class MigrationSourceAuthInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationSourceAuthInfo& obj) { 
      DARABONBA_PTR_TO_JSON(authType, authType_);
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationSourceAuthInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(authType, authType_);
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    MigrationSourceAuthInfo() = default ;
    MigrationSourceAuthInfo(const MigrationSourceAuthInfo &) = default ;
    MigrationSourceAuthInfo(MigrationSourceAuthInfo &&) = default ;
    MigrationSourceAuthInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationSourceAuthInfo() = default ;
    MigrationSourceAuthInfo& operator=(const MigrationSourceAuthInfo &) = default ;
    MigrationSourceAuthInfo& operator=(MigrationSourceAuthInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authType_ == nullptr
        && return this->password_ == nullptr && return this->token_ == nullptr && return this->username_ == nullptr; };
    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline MigrationSourceAuthInfo& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline MigrationSourceAuthInfo& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline MigrationSourceAuthInfo& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline MigrationSourceAuthInfo& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> authType_ = nullptr;
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
