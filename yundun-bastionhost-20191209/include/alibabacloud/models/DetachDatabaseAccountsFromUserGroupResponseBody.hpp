// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHDATABASEACCOUNTSFROMUSERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETACHDATABASEACCOUNTSFROMUSERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DetachDatabaseAccountsFromUserGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachDatabaseAccountsFromUserGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, DetachDatabaseAccountsFromUserGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    DetachDatabaseAccountsFromUserGroupResponseBody() = default ;
    DetachDatabaseAccountsFromUserGroupResponseBody(const DetachDatabaseAccountsFromUserGroupResponseBody &) = default ;
    DetachDatabaseAccountsFromUserGroupResponseBody(DetachDatabaseAccountsFromUserGroupResponseBody &&) = default ;
    DetachDatabaseAccountsFromUserGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachDatabaseAccountsFromUserGroupResponseBody() = default ;
    DetachDatabaseAccountsFromUserGroupResponseBody& operator=(const DetachDatabaseAccountsFromUserGroupResponseBody &) = default ;
    DetachDatabaseAccountsFromUserGroupResponseBody& operator=(DetachDatabaseAccountsFromUserGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(DatabaseAccounts, databaseAccounts_);
        DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(DatabaseAccounts, databaseAccounts_);
        DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DatabaseAccounts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DatabaseAccounts& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(DatabaseAccountId, databaseAccountId_);
          DARABONBA_PTR_TO_JSON(Message, message_);
        };
        friend void from_json(const Darabonba::Json& j, DatabaseAccounts& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(DatabaseAccountId, databaseAccountId_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
        };
        DatabaseAccounts() = default ;
        DatabaseAccounts(const DatabaseAccounts &) = default ;
        DatabaseAccounts(DatabaseAccounts &&) = default ;
        DatabaseAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DatabaseAccounts() = default ;
        DatabaseAccounts& operator=(const DatabaseAccounts &) = default ;
        DatabaseAccounts& operator=(DatabaseAccounts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->databaseAccountId_ == nullptr && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline DatabaseAccounts& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // databaseAccountId Field Functions 
        bool hasDatabaseAccountId() const { return this->databaseAccountId_ != nullptr;};
        void deleteDatabaseAccountId() { this->databaseAccountId_ = nullptr;};
        inline string getDatabaseAccountId() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountId_, "") };
        inline DatabaseAccounts& setDatabaseAccountId(string databaseAccountId) { DARABONBA_PTR_SET_VALUE(databaseAccountId_, databaseAccountId) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline DatabaseAccounts& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // The error code that is returned. If OK is returned, the operation was successful. If other error codes are returned, the operation failed.
        shared_ptr<string> code_ {};
        // The ID of the database account on which the permissions are revoked.
        shared_ptr<string> databaseAccountId_ {};
        // The error message that is returned.
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->databaseAccounts_ == nullptr && this->databaseId_ == nullptr && this->message_ == nullptr && this->userGroupId_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Results& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // databaseAccounts Field Functions 
      bool hasDatabaseAccounts() const { return this->databaseAccounts_ != nullptr;};
      void deleteDatabaseAccounts() { this->databaseAccounts_ = nullptr;};
      inline const vector<Results::DatabaseAccounts> & getDatabaseAccounts() const { DARABONBA_PTR_GET_CONST(databaseAccounts_, vector<Results::DatabaseAccounts>) };
      inline vector<Results::DatabaseAccounts> getDatabaseAccounts() { DARABONBA_PTR_GET(databaseAccounts_, vector<Results::DatabaseAccounts>) };
      inline Results& setDatabaseAccounts(const vector<Results::DatabaseAccounts> & databaseAccounts) { DARABONBA_PTR_SET_VALUE(databaseAccounts_, databaseAccounts) };
      inline Results& setDatabaseAccounts(vector<Results::DatabaseAccounts> && databaseAccounts) { DARABONBA_PTR_SET_RVALUE(databaseAccounts_, databaseAccounts) };


      // databaseId Field Functions 
      bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
      void deleteDatabaseId() { this->databaseId_ = nullptr;};
      inline string getDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
      inline Results& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Results& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // userGroupId Field Functions 
      bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
      void deleteUserGroupId() { this->userGroupId_ = nullptr;};
      inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
      inline Results& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    protected:
      // The error code that is returned. If OK is returned, the operation was successful. If other error codes are returned, the operation failed.
      shared_ptr<string> code_ {};
      // A list that shows the authorization results of the database accounts.
      shared_ptr<vector<Results::DatabaseAccounts>> databaseAccounts_ {};
      // The ID of the database on which the permissions are revoked.
      shared_ptr<string> databaseId_ {};
      // The error message that is returned.
      shared_ptr<string> message_ {};
      // The user group ID.
      shared_ptr<string> userGroupId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetachDatabaseAccountsFromUserGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<DetachDatabaseAccountsFromUserGroupResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<DetachDatabaseAccountsFromUserGroupResponseBody::Results>) };
    inline vector<DetachDatabaseAccountsFromUserGroupResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<DetachDatabaseAccountsFromUserGroupResponseBody::Results>) };
    inline DetachDatabaseAccountsFromUserGroupResponseBody& setResults(const vector<DetachDatabaseAccountsFromUserGroupResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline DetachDatabaseAccountsFromUserGroupResponseBody& setResults(vector<DetachDatabaseAccountsFromUserGroupResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The result of the call.
    shared_ptr<vector<DetachDatabaseAccountsFromUserGroupResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
