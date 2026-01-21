// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEDATABASESFROMGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVEDATABASESFROMGROUPRESPONSEBODY_HPP_
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
  class RemoveDatabasesFromGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveDatabasesFromGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveDatabasesFromGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    RemoveDatabasesFromGroupResponseBody() = default ;
    RemoveDatabasesFromGroupResponseBody(const RemoveDatabasesFromGroupResponseBody &) = default ;
    RemoveDatabasesFromGroupResponseBody(RemoveDatabasesFromGroupResponseBody &&) = default ;
    RemoveDatabasesFromGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveDatabasesFromGroupResponseBody() = default ;
    RemoveDatabasesFromGroupResponseBody& operator=(const RemoveDatabasesFromGroupResponseBody &) = default ;
    RemoveDatabasesFromGroupResponseBody& operator=(RemoveDatabasesFromGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
        DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
        DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
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
      virtual bool empty() const override { return this->code_ == nullptr
        && this->databaseId_ == nullptr && this->hostGroupId_ == nullptr && this->message_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Results& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // databaseId Field Functions 
      bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
      void deleteDatabaseId() { this->databaseId_ = nullptr;};
      inline string getDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
      inline Results& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


      // hostGroupId Field Functions 
      bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
      void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
      inline string getHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
      inline Results& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Results& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      // The error code that is returned. If OK is returned, the operation was successful. If another error code is returned, the operation failed.
      shared_ptr<string> code_ {};
      // The database ID.
      shared_ptr<string> databaseId_ {};
      // The asset group ID.
      shared_ptr<string> hostGroupId_ {};
      // The error message that is returned.
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveDatabasesFromGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<RemoveDatabasesFromGroupResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<RemoveDatabasesFromGroupResponseBody::Results>) };
    inline vector<RemoveDatabasesFromGroupResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<RemoveDatabasesFromGroupResponseBody::Results>) };
    inline RemoveDatabasesFromGroupResponseBody& setResults(const vector<RemoveDatabasesFromGroupResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline RemoveDatabasesFromGroupResponseBody& setResults(vector<RemoveDatabasesFromGroupResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The result of the call.
    shared_ptr<vector<RemoveDatabasesFromGroupResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
