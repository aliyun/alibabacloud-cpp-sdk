// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHDATABASEACCOUNTSTOUSERGROUPRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_ATTACHDATABASEACCOUNTSTOUSERGROUPRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachDatabaseAccountsToUserGroupResponseBodyResultsDatabaseAccounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AttachDatabaseAccountsToUserGroupResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachDatabaseAccountsToUserGroupResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DatabaseAccounts, databaseAccounts_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachDatabaseAccountsToUserGroupResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DatabaseAccounts, databaseAccounts_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    AttachDatabaseAccountsToUserGroupResponseBodyResults() = default ;
    AttachDatabaseAccountsToUserGroupResponseBodyResults(const AttachDatabaseAccountsToUserGroupResponseBodyResults &) = default ;
    AttachDatabaseAccountsToUserGroupResponseBodyResults(AttachDatabaseAccountsToUserGroupResponseBodyResults &&) = default ;
    AttachDatabaseAccountsToUserGroupResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachDatabaseAccountsToUserGroupResponseBodyResults() = default ;
    AttachDatabaseAccountsToUserGroupResponseBodyResults& operator=(const AttachDatabaseAccountsToUserGroupResponseBodyResults &) = default ;
    AttachDatabaseAccountsToUserGroupResponseBodyResults& operator=(AttachDatabaseAccountsToUserGroupResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->databaseAccounts_ == nullptr && return this->databaseId_ == nullptr && return this->message_ == nullptr && return this->userGroupId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AttachDatabaseAccountsToUserGroupResponseBodyResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // databaseAccounts Field Functions 
    bool hasDatabaseAccounts() const { return this->databaseAccounts_ != nullptr;};
    void deleteDatabaseAccounts() { this->databaseAccounts_ = nullptr;};
    inline const vector<Models::AttachDatabaseAccountsToUserGroupResponseBodyResultsDatabaseAccounts> & databaseAccounts() const { DARABONBA_PTR_GET_CONST(databaseAccounts_, vector<Models::AttachDatabaseAccountsToUserGroupResponseBodyResultsDatabaseAccounts>) };
    inline vector<Models::AttachDatabaseAccountsToUserGroupResponseBodyResultsDatabaseAccounts> databaseAccounts() { DARABONBA_PTR_GET(databaseAccounts_, vector<Models::AttachDatabaseAccountsToUserGroupResponseBodyResultsDatabaseAccounts>) };
    inline AttachDatabaseAccountsToUserGroupResponseBodyResults& setDatabaseAccounts(const vector<Models::AttachDatabaseAccountsToUserGroupResponseBodyResultsDatabaseAccounts> & databaseAccounts) { DARABONBA_PTR_SET_VALUE(databaseAccounts_, databaseAccounts) };
    inline AttachDatabaseAccountsToUserGroupResponseBodyResults& setDatabaseAccounts(vector<Models::AttachDatabaseAccountsToUserGroupResponseBodyResultsDatabaseAccounts> && databaseAccounts) { DARABONBA_PTR_SET_RVALUE(databaseAccounts_, databaseAccounts) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline AttachDatabaseAccountsToUserGroupResponseBodyResults& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AttachDatabaseAccountsToUserGroupResponseBodyResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline AttachDatabaseAccountsToUserGroupResponseBodyResults& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The error code returned. If OK is returned, the authorization was successful. If another error code is returned, the authorization failed.
    std::shared_ptr<string> code_ = nullptr;
    // A list that shows the authorization results of the database accounts.
    std::shared_ptr<vector<Models::AttachDatabaseAccountsToUserGroupResponseBodyResultsDatabaseAccounts>> databaseAccounts_ = nullptr;
    // The database ID.
    std::shared_ptr<string> databaseId_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The user group ID.
    std::shared_ptr<string> userGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
