// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHDATABASEACCOUNTSTOUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHDATABASEACCOUNTSTOUSERRESPONSEBODY_HPP_
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
  class AttachDatabaseAccountsToUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachDatabaseAccountsToUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, AttachDatabaseAccountsToUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    AttachDatabaseAccountsToUserResponseBody() = default ;
    AttachDatabaseAccountsToUserResponseBody(const AttachDatabaseAccountsToUserResponseBody &) = default ;
    AttachDatabaseAccountsToUserResponseBody(AttachDatabaseAccountsToUserResponseBody &&) = default ;
    AttachDatabaseAccountsToUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachDatabaseAccountsToUserResponseBody() = default ;
    AttachDatabaseAccountsToUserResponseBody& operator=(const AttachDatabaseAccountsToUserResponseBody &) = default ;
    AttachDatabaseAccountsToUserResponseBody& operator=(AttachDatabaseAccountsToUserResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(DatabaseAccounts, databaseAccounts_);
        DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
        // The error code that is returned. If OK is returned, the authorization was successful. If another error code is returned, the authorization failed.
        shared_ptr<string> code_ {};
        // The database account ID.
        shared_ptr<string> databaseAccountId_ {};
        // The error message that is returned.
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->databaseAccounts_ == nullptr && this->databaseId_ == nullptr && this->message_ == nullptr && this->userId_ == nullptr; };
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


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Results& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The error code that is returned. If **OK** is returned, the authorization was successful. If another error code is returned, the authorization failed.
      shared_ptr<string> code_ {};
      // A list that shows the authorization results of the database accounts.
      shared_ptr<vector<Results::DatabaseAccounts>> databaseAccounts_ {};
      // The database ID.
      shared_ptr<string> databaseId_ {};
      // The error message that is returned.
      shared_ptr<string> message_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AttachDatabaseAccountsToUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<AttachDatabaseAccountsToUserResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<AttachDatabaseAccountsToUserResponseBody::Results>) };
    inline vector<AttachDatabaseAccountsToUserResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<AttachDatabaseAccountsToUserResponseBody::Results>) };
    inline AttachDatabaseAccountsToUserResponseBody& setResults(const vector<AttachDatabaseAccountsToUserResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline AttachDatabaseAccountsToUserResponseBody& setResults(vector<AttachDatabaseAccountsToUserResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The result of the call.
    shared_ptr<vector<AttachDatabaseAccountsToUserResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
