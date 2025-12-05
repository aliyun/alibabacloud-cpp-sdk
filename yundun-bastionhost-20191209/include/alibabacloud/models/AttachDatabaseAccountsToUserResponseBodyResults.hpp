// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHDATABASEACCOUNTSTOUSERRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_ATTACHDATABASEACCOUNTSTOUSERRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AttachDatabaseAccountsToUserResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachDatabaseAccountsToUserResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DatabaseAccounts, databaseAccounts_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachDatabaseAccountsToUserResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DatabaseAccounts, databaseAccounts_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AttachDatabaseAccountsToUserResponseBodyResults() = default ;
    AttachDatabaseAccountsToUserResponseBodyResults(const AttachDatabaseAccountsToUserResponseBodyResults &) = default ;
    AttachDatabaseAccountsToUserResponseBodyResults(AttachDatabaseAccountsToUserResponseBodyResults &&) = default ;
    AttachDatabaseAccountsToUserResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachDatabaseAccountsToUserResponseBodyResults() = default ;
    AttachDatabaseAccountsToUserResponseBodyResults& operator=(const AttachDatabaseAccountsToUserResponseBodyResults &) = default ;
    AttachDatabaseAccountsToUserResponseBodyResults& operator=(AttachDatabaseAccountsToUserResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->databaseAccounts_ == nullptr && return this->databaseId_ == nullptr && return this->message_ == nullptr && return this->userId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AttachDatabaseAccountsToUserResponseBodyResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // databaseAccounts Field Functions 
    bool hasDatabaseAccounts() const { return this->databaseAccounts_ != nullptr;};
    void deleteDatabaseAccounts() { this->databaseAccounts_ = nullptr;};
    inline const vector<Models::AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts> & databaseAccounts() const { DARABONBA_PTR_GET_CONST(databaseAccounts_, vector<Models::AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts>) };
    inline vector<Models::AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts> databaseAccounts() { DARABONBA_PTR_GET(databaseAccounts_, vector<Models::AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts>) };
    inline AttachDatabaseAccountsToUserResponseBodyResults& setDatabaseAccounts(const vector<Models::AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts> & databaseAccounts) { DARABONBA_PTR_SET_VALUE(databaseAccounts_, databaseAccounts) };
    inline AttachDatabaseAccountsToUserResponseBodyResults& setDatabaseAccounts(vector<Models::AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts> && databaseAccounts) { DARABONBA_PTR_SET_RVALUE(databaseAccounts_, databaseAccounts) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline AttachDatabaseAccountsToUserResponseBodyResults& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AttachDatabaseAccountsToUserResponseBodyResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AttachDatabaseAccountsToUserResponseBodyResults& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The error code that is returned. If **OK** is returned, the authorization was successful. If another error code is returned, the authorization failed.
    std::shared_ptr<string> code_ = nullptr;
    // A list that shows the authorization results of the database accounts.
    std::shared_ptr<vector<Models::AttachDatabaseAccountsToUserResponseBodyResultsDatabaseAccounts>> databaseAccounts_ = nullptr;
    // The database ID.
    std::shared_ptr<string> databaseId_ = nullptr;
    // The error message that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
