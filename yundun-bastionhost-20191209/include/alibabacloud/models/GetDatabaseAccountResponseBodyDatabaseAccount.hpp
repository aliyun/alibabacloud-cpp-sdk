// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABASEACCOUNTRESPONSEBODYDATABASEACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_GETDATABASEACCOUNTRESPONSEBODYDATABASEACCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetDatabaseAccountResponseBodyDatabaseAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatabaseAccountResponseBodyDatabaseAccount& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAccountId, databaseAccountId_);
      DARABONBA_PTR_TO_JSON(DatabaseAccountName, databaseAccountName_);
      DARABONBA_PTR_TO_JSON(DatabaseSchema, databaseSchema_);
      DARABONBA_PTR_TO_JSON(HasPassword, hasPassword_);
      DARABONBA_PTR_TO_JSON(LoginAttribute, loginAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatabaseAccountResponseBodyDatabaseAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAccountId, databaseAccountId_);
      DARABONBA_PTR_FROM_JSON(DatabaseAccountName, databaseAccountName_);
      DARABONBA_PTR_FROM_JSON(DatabaseSchema, databaseSchema_);
      DARABONBA_PTR_FROM_JSON(HasPassword, hasPassword_);
      DARABONBA_PTR_FROM_JSON(LoginAttribute, loginAttribute_);
    };
    GetDatabaseAccountResponseBodyDatabaseAccount() = default ;
    GetDatabaseAccountResponseBodyDatabaseAccount(const GetDatabaseAccountResponseBodyDatabaseAccount &) = default ;
    GetDatabaseAccountResponseBodyDatabaseAccount(GetDatabaseAccountResponseBodyDatabaseAccount &&) = default ;
    GetDatabaseAccountResponseBodyDatabaseAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatabaseAccountResponseBodyDatabaseAccount() = default ;
    GetDatabaseAccountResponseBodyDatabaseAccount& operator=(const GetDatabaseAccountResponseBodyDatabaseAccount &) = default ;
    GetDatabaseAccountResponseBodyDatabaseAccount& operator=(GetDatabaseAccountResponseBodyDatabaseAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseAccountId_ == nullptr
        && return this->databaseAccountName_ == nullptr && return this->databaseSchema_ == nullptr && return this->hasPassword_ == nullptr && return this->loginAttribute_ == nullptr; };
    // databaseAccountId Field Functions 
    bool hasDatabaseAccountId() const { return this->databaseAccountId_ != nullptr;};
    void deleteDatabaseAccountId() { this->databaseAccountId_ = nullptr;};
    inline string databaseAccountId() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountId_, "") };
    inline GetDatabaseAccountResponseBodyDatabaseAccount& setDatabaseAccountId(string databaseAccountId) { DARABONBA_PTR_SET_VALUE(databaseAccountId_, databaseAccountId) };


    // databaseAccountName Field Functions 
    bool hasDatabaseAccountName() const { return this->databaseAccountName_ != nullptr;};
    void deleteDatabaseAccountName() { this->databaseAccountName_ = nullptr;};
    inline string databaseAccountName() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountName_, "") };
    inline GetDatabaseAccountResponseBodyDatabaseAccount& setDatabaseAccountName(string databaseAccountName) { DARABONBA_PTR_SET_VALUE(databaseAccountName_, databaseAccountName) };


    // databaseSchema Field Functions 
    bool hasDatabaseSchema() const { return this->databaseSchema_ != nullptr;};
    void deleteDatabaseSchema() { this->databaseSchema_ = nullptr;};
    inline string databaseSchema() const { DARABONBA_PTR_GET_DEFAULT(databaseSchema_, "") };
    inline GetDatabaseAccountResponseBodyDatabaseAccount& setDatabaseSchema(string databaseSchema) { DARABONBA_PTR_SET_VALUE(databaseSchema_, databaseSchema) };


    // hasPassword Field Functions 
    bool hasHasPassword() const { return this->hasPassword_ != nullptr;};
    void deleteHasPassword() { this->hasPassword_ = nullptr;};
    inline bool hasPassword() const { DARABONBA_PTR_GET_DEFAULT(hasPassword_, false) };
    inline GetDatabaseAccountResponseBodyDatabaseAccount& setHasPassword(bool hasPassword) { DARABONBA_PTR_SET_VALUE(hasPassword_, hasPassword) };


    // loginAttribute Field Functions 
    bool hasLoginAttribute() const { return this->loginAttribute_ != nullptr;};
    void deleteLoginAttribute() { this->loginAttribute_ = nullptr;};
    inline string loginAttribute() const { DARABONBA_PTR_GET_DEFAULT(loginAttribute_, "") };
    inline GetDatabaseAccountResponseBodyDatabaseAccount& setLoginAttribute(string loginAttribute) { DARABONBA_PTR_SET_VALUE(loginAttribute_, loginAttribute) };


  protected:
    // The database account ID.
    std::shared_ptr<string> databaseAccountId_ = nullptr;
    // The name of the database account.
    std::shared_ptr<string> databaseAccountName_ = nullptr;
    // The database name. A value is returned for this parameter if the database engine is PostgreSQL or Oracle.
    std::shared_ptr<string> databaseSchema_ = nullptr;
    // Indicates whether the database account has a password.
    // Valid values:
    // * true
    // * false
    std::shared_ptr<bool> hasPassword_ = nullptr;
    // The logon attribute. A value is returned for this parameter if the database engine is Oracle. Valid values:
    // 
    // *   SERVICENAME
    // *   SID
    std::shared_ptr<string> loginAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
