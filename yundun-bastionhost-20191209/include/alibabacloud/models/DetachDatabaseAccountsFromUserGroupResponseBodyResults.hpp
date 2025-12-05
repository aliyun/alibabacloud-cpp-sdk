// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHDATABASEACCOUNTSFROMUSERGROUPRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DETACHDATABASEACCOUNTSFROMUSERGROUPRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetachDatabaseAccountsFromUserGroupResponseBodyResultsDatabaseAccounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DetachDatabaseAccountsFromUserGroupResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachDatabaseAccountsFromUserGroupResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DatabaseAccounts, databaseAccounts_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachDatabaseAccountsFromUserGroupResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DatabaseAccounts, databaseAccounts_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    DetachDatabaseAccountsFromUserGroupResponseBodyResults() = default ;
    DetachDatabaseAccountsFromUserGroupResponseBodyResults(const DetachDatabaseAccountsFromUserGroupResponseBodyResults &) = default ;
    DetachDatabaseAccountsFromUserGroupResponseBodyResults(DetachDatabaseAccountsFromUserGroupResponseBodyResults &&) = default ;
    DetachDatabaseAccountsFromUserGroupResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachDatabaseAccountsFromUserGroupResponseBodyResults() = default ;
    DetachDatabaseAccountsFromUserGroupResponseBodyResults& operator=(const DetachDatabaseAccountsFromUserGroupResponseBodyResults &) = default ;
    DetachDatabaseAccountsFromUserGroupResponseBodyResults& operator=(DetachDatabaseAccountsFromUserGroupResponseBodyResults &&) = default ;
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
    inline DetachDatabaseAccountsFromUserGroupResponseBodyResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // databaseAccounts Field Functions 
    bool hasDatabaseAccounts() const { return this->databaseAccounts_ != nullptr;};
    void deleteDatabaseAccounts() { this->databaseAccounts_ = nullptr;};
    inline const vector<Models::DetachDatabaseAccountsFromUserGroupResponseBodyResultsDatabaseAccounts> & databaseAccounts() const { DARABONBA_PTR_GET_CONST(databaseAccounts_, vector<Models::DetachDatabaseAccountsFromUserGroupResponseBodyResultsDatabaseAccounts>) };
    inline vector<Models::DetachDatabaseAccountsFromUserGroupResponseBodyResultsDatabaseAccounts> databaseAccounts() { DARABONBA_PTR_GET(databaseAccounts_, vector<Models::DetachDatabaseAccountsFromUserGroupResponseBodyResultsDatabaseAccounts>) };
    inline DetachDatabaseAccountsFromUserGroupResponseBodyResults& setDatabaseAccounts(const vector<Models::DetachDatabaseAccountsFromUserGroupResponseBodyResultsDatabaseAccounts> & databaseAccounts) { DARABONBA_PTR_SET_VALUE(databaseAccounts_, databaseAccounts) };
    inline DetachDatabaseAccountsFromUserGroupResponseBodyResults& setDatabaseAccounts(vector<Models::DetachDatabaseAccountsFromUserGroupResponseBodyResultsDatabaseAccounts> && databaseAccounts) { DARABONBA_PTR_SET_RVALUE(databaseAccounts_, databaseAccounts) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline DetachDatabaseAccountsFromUserGroupResponseBodyResults& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DetachDatabaseAccountsFromUserGroupResponseBodyResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline DetachDatabaseAccountsFromUserGroupResponseBodyResults& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The error code that is returned. If OK is returned, the operation was successful. If other error codes are returned, the operation failed.
    std::shared_ptr<string> code_ = nullptr;
    // A list that shows the authorization results of the database accounts.
    std::shared_ptr<vector<Models::DetachDatabaseAccountsFromUserGroupResponseBodyResultsDatabaseAccounts>> databaseAccounts_ = nullptr;
    // The ID of the database on which the permissions are revoked.
    std::shared_ptr<string> databaseId_ = nullptr;
    // The error message that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The user group ID.
    std::shared_ptr<string> userGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
