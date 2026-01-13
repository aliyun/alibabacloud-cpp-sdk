// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListDatabasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListDatabasesResponseBody() = default ;
    ListDatabasesResponseBody(const ListDatabasesResponseBody &) = default ;
    ListDatabasesResponseBody(ListDatabasesResponseBody &&) = default ;
    ListDatabasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabasesResponseBody() = default ;
    ListDatabasesResponseBody& operator=(const ListDatabasesResponseBody &) = default ;
    ListDatabasesResponseBody& operator=(ListDatabasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Databases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Databases& obj) { 
        DARABONBA_PTR_TO_JSON(Databases, databases_);
      };
      friend void from_json(const Darabonba::Json& j, Databases& obj) { 
        DARABONBA_PTR_FROM_JSON(Databases, databases_);
      };
      Databases() = default ;
      Databases(const Databases &) = default ;
      Databases(Databases &&) = default ;
      Databases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Databases() = default ;
      Databases& operator=(const Databases &) = default ;
      Databases& operator=(Databases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->databases_ == nullptr; };
      // databases Field Functions 
      bool hasDatabases() const { return this->databases_ != nullptr;};
      void deleteDatabases() { this->databases_ = nullptr;};
      inline const vector<string> & getDatabases() const { DARABONBA_PTR_GET_CONST(databases_, vector<string>) };
      inline vector<string> getDatabases() { DARABONBA_PTR_GET(databases_, vector<string>) };
      inline Databases& setDatabases(const vector<string> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
      inline Databases& setDatabases(vector<string> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    protected:
      shared_ptr<vector<string>> databases_ {};
    };

    virtual bool empty() const override { return this->databases_ == nullptr
        && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const ListDatabasesResponseBody::Databases & getDatabases() const { DARABONBA_PTR_GET_CONST(databases_, ListDatabasesResponseBody::Databases) };
    inline ListDatabasesResponseBody::Databases getDatabases() { DARABONBA_PTR_GET(databases_, ListDatabasesResponseBody::Databases) };
    inline ListDatabasesResponseBody& setDatabases(const ListDatabasesResponseBody::Databases & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline ListDatabasesResponseBody& setDatabases(ListDatabasesResponseBody::Databases && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDatabasesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDatabasesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatabasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDatabasesResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The queried databases.
    shared_ptr<ListDatabasesResponseBody::Databases> databases_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the operation. Valid values:
    // 
    // *   **success**
    // *   **fail**
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
