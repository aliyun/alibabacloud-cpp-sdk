// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHDATABASEACCOUNTSTOUSERRESPONSEBODYRESULTSDATABASEACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_ATTACHDATABASEACCOUNTSTOUSERRESPONSEBODYRESULTSDATABASEACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DatabaseAccountId, databaseAccountId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DatabaseAccountId, databaseAccountId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts() = default ;
    AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts(const AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts &) = default ;
    AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts(AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts &&) = default ;
    AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts() = default ;
    AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts& operator=(const AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts &) = default ;
    AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts& operator=(AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->databaseAccountId_ != nullptr && this->message_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // databaseAccountId Field Functions 
    bool hasDatabaseAccountId() const { return this->databaseAccountId_ != nullptr;};
    void deleteDatabaseAccountId() { this->databaseAccountId_ = nullptr;};
    inline string databaseAccountId() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountId_, "") };
    inline AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts& setDatabaseAccountId(string databaseAccountId) { DARABONBA_PTR_SET_VALUE(databaseAccountId_, databaseAccountId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The error code that is returned. If OK is returned, the authorization was successful. If another error code is returned, the authorization failed.
    std::shared_ptr<string> code_ = nullptr;
    // The database account ID.
    std::shared_ptr<string> databaseAccountId_ = nullptr;
    // The error message that is returned.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
