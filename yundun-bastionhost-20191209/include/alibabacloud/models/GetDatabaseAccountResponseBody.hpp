// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABASEACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATABASEACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetDatabaseAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatabaseAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAccount, databaseAccount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatabaseAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAccount, databaseAccount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDatabaseAccountResponseBody() = default ;
    GetDatabaseAccountResponseBody(const GetDatabaseAccountResponseBody &) = default ;
    GetDatabaseAccountResponseBody(GetDatabaseAccountResponseBody &&) = default ;
    GetDatabaseAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatabaseAccountResponseBody() = default ;
    GetDatabaseAccountResponseBody& operator=(const GetDatabaseAccountResponseBody &) = default ;
    GetDatabaseAccountResponseBody& operator=(GetDatabaseAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DatabaseAccount : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DatabaseAccount& obj) { 
        DARABONBA_PTR_TO_JSON(DatabaseAccountId, databaseAccountId_);
        DARABONBA_PTR_TO_JSON(DatabaseAccountName, databaseAccountName_);
        DARABONBA_PTR_TO_JSON(DatabaseSchema, databaseSchema_);
        DARABONBA_PTR_TO_JSON(HasPassword, hasPassword_);
        DARABONBA_PTR_TO_JSON(LoginAttribute, loginAttribute_);
      };
      friend void from_json(const Darabonba::Json& j, DatabaseAccount& obj) { 
        DARABONBA_PTR_FROM_JSON(DatabaseAccountId, databaseAccountId_);
        DARABONBA_PTR_FROM_JSON(DatabaseAccountName, databaseAccountName_);
        DARABONBA_PTR_FROM_JSON(DatabaseSchema, databaseSchema_);
        DARABONBA_PTR_FROM_JSON(HasPassword, hasPassword_);
        DARABONBA_PTR_FROM_JSON(LoginAttribute, loginAttribute_);
      };
      DatabaseAccount() = default ;
      DatabaseAccount(const DatabaseAccount &) = default ;
      DatabaseAccount(DatabaseAccount &&) = default ;
      DatabaseAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DatabaseAccount() = default ;
      DatabaseAccount& operator=(const DatabaseAccount &) = default ;
      DatabaseAccount& operator=(DatabaseAccount &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->databaseAccountId_ == nullptr
        && this->databaseAccountName_ == nullptr && this->databaseSchema_ == nullptr && this->hasPassword_ == nullptr && this->loginAttribute_ == nullptr; };
      // databaseAccountId Field Functions 
      bool hasDatabaseAccountId() const { return this->databaseAccountId_ != nullptr;};
      void deleteDatabaseAccountId() { this->databaseAccountId_ = nullptr;};
      inline string getDatabaseAccountId() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountId_, "") };
      inline DatabaseAccount& setDatabaseAccountId(string databaseAccountId) { DARABONBA_PTR_SET_VALUE(databaseAccountId_, databaseAccountId) };


      // databaseAccountName Field Functions 
      bool hasDatabaseAccountName() const { return this->databaseAccountName_ != nullptr;};
      void deleteDatabaseAccountName() { this->databaseAccountName_ = nullptr;};
      inline string getDatabaseAccountName() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountName_, "") };
      inline DatabaseAccount& setDatabaseAccountName(string databaseAccountName) { DARABONBA_PTR_SET_VALUE(databaseAccountName_, databaseAccountName) };


      // databaseSchema Field Functions 
      bool hasDatabaseSchema() const { return this->databaseSchema_ != nullptr;};
      void deleteDatabaseSchema() { this->databaseSchema_ = nullptr;};
      inline string getDatabaseSchema() const { DARABONBA_PTR_GET_DEFAULT(databaseSchema_, "") };
      inline DatabaseAccount& setDatabaseSchema(string databaseSchema) { DARABONBA_PTR_SET_VALUE(databaseSchema_, databaseSchema) };


      // hasPassword Field Functions 
      bool hasHasPassword() const { return this->hasPassword_ != nullptr;};
      void deleteHasPassword() { this->hasPassword_ = nullptr;};
      inline bool getHasPassword() const { DARABONBA_PTR_GET_DEFAULT(hasPassword_, false) };
      inline DatabaseAccount& setHasPassword(bool hasPassword) { DARABONBA_PTR_SET_VALUE(hasPassword_, hasPassword) };


      // loginAttribute Field Functions 
      bool hasLoginAttribute() const { return this->loginAttribute_ != nullptr;};
      void deleteLoginAttribute() { this->loginAttribute_ = nullptr;};
      inline string getLoginAttribute() const { DARABONBA_PTR_GET_DEFAULT(loginAttribute_, "") };
      inline DatabaseAccount& setLoginAttribute(string loginAttribute) { DARABONBA_PTR_SET_VALUE(loginAttribute_, loginAttribute) };


    protected:
      // The database account ID.
      shared_ptr<string> databaseAccountId_ {};
      // The name of the database account.
      shared_ptr<string> databaseAccountName_ {};
      // The database name. A value is returned for this parameter if the database engine is PostgreSQL or Oracle.
      shared_ptr<string> databaseSchema_ {};
      // Indicates whether the database account has a password.
      // Valid values:
      // * true
      // * false
      shared_ptr<bool> hasPassword_ {};
      // The logon attribute. A value is returned for this parameter if the database engine is Oracle. Valid values:
      // 
      // *   SERVICENAME
      // *   SID
      shared_ptr<string> loginAttribute_ {};
    };

    virtual bool empty() const override { return this->databaseAccount_ == nullptr
        && this->requestId_ == nullptr; };
    // databaseAccount Field Functions 
    bool hasDatabaseAccount() const { return this->databaseAccount_ != nullptr;};
    void deleteDatabaseAccount() { this->databaseAccount_ = nullptr;};
    inline const GetDatabaseAccountResponseBody::DatabaseAccount & getDatabaseAccount() const { DARABONBA_PTR_GET_CONST(databaseAccount_, GetDatabaseAccountResponseBody::DatabaseAccount) };
    inline GetDatabaseAccountResponseBody::DatabaseAccount getDatabaseAccount() { DARABONBA_PTR_GET(databaseAccount_, GetDatabaseAccountResponseBody::DatabaseAccount) };
    inline GetDatabaseAccountResponseBody& setDatabaseAccount(const GetDatabaseAccountResponseBody::DatabaseAccount & databaseAccount) { DARABONBA_PTR_SET_VALUE(databaseAccount_, databaseAccount) };
    inline GetDatabaseAccountResponseBody& setDatabaseAccount(GetDatabaseAccountResponseBody::DatabaseAccount && databaseAccount) { DARABONBA_PTR_SET_RVALUE(databaseAccount_, databaseAccount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDatabaseAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned information about the database account.
    shared_ptr<GetDatabaseAccountResponseBody::DatabaseAccount> databaseAccount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
