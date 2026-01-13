// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEMASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEMASRESPONSEBODY_HPP_
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
  class ListSchemasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSchemasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Schemas, schemas_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListSchemasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Schemas, schemas_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListSchemasResponseBody() = default ;
    ListSchemasResponseBody(const ListSchemasResponseBody &) = default ;
    ListSchemasResponseBody(ListSchemasResponseBody &&) = default ;
    ListSchemasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSchemasResponseBody() = default ;
    ListSchemasResponseBody& operator=(const ListSchemasResponseBody &) = default ;
    ListSchemasResponseBody& operator=(ListSchemasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Schemas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Schemas& obj) { 
        DARABONBA_PTR_TO_JSON(Schemas, schemas_);
      };
      friend void from_json(const Darabonba::Json& j, Schemas& obj) { 
        DARABONBA_PTR_FROM_JSON(Schemas, schemas_);
      };
      Schemas() = default ;
      Schemas(const Schemas &) = default ;
      Schemas(Schemas &&) = default ;
      Schemas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Schemas() = default ;
      Schemas& operator=(const Schemas &) = default ;
      Schemas& operator=(Schemas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->schemas_ == nullptr; };
      // schemas Field Functions 
      bool hasSchemas() const { return this->schemas_ != nullptr;};
      void deleteSchemas() { this->schemas_ = nullptr;};
      inline const vector<string> & getSchemas() const { DARABONBA_PTR_GET_CONST(schemas_, vector<string>) };
      inline vector<string> getSchemas() { DARABONBA_PTR_GET(schemas_, vector<string>) };
      inline Schemas& setSchemas(const vector<string> & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
      inline Schemas& setSchemas(vector<string> && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


    protected:
      shared_ptr<vector<string>> schemas_ {};
    };

    virtual bool empty() const override { return this->message_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->schemas_ == nullptr && this->status_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSchemasResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSchemasResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSchemasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemas Field Functions 
    bool hasSchemas() const { return this->schemas_ != nullptr;};
    void deleteSchemas() { this->schemas_ = nullptr;};
    inline const ListSchemasResponseBody::Schemas & getSchemas() const { DARABONBA_PTR_GET_CONST(schemas_, ListSchemasResponseBody::Schemas) };
    inline ListSchemasResponseBody::Schemas getSchemas() { DARABONBA_PTR_GET(schemas_, ListSchemasResponseBody::Schemas) };
    inline ListSchemasResponseBody& setSchemas(const ListSchemasResponseBody::Schemas & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
    inline ListSchemasResponseBody& setSchemas(ListSchemasResponseBody::Schemas && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListSchemasResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The returned message.
    shared_ptr<string> message_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried schemas.
    shared_ptr<ListSchemasResponseBody::Schemas> schemas_ {};
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
