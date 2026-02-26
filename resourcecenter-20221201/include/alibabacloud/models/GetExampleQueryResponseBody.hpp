// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXAMPLEQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXAMPLEQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetExampleQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExampleQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExampleQuery, exampleQuery_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetExampleQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExampleQuery, exampleQuery_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetExampleQueryResponseBody() = default ;
    GetExampleQueryResponseBody(const GetExampleQueryResponseBody &) = default ;
    GetExampleQueryResponseBody(GetExampleQueryResponseBody &&) = default ;
    GetExampleQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExampleQueryResponseBody() = default ;
    GetExampleQueryResponseBody& operator=(const GetExampleQueryResponseBody &) = default ;
    GetExampleQueryResponseBody& operator=(GetExampleQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExampleQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExampleQuery& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Expression, expression_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(QueryId, queryId_);
      };
      friend void from_json(const Darabonba::Json& j, ExampleQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Expression, expression_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
      };
      ExampleQuery() = default ;
      ExampleQuery(const ExampleQuery &) = default ;
      ExampleQuery(ExampleQuery &&) = default ;
      ExampleQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExampleQuery() = default ;
      ExampleQuery& operator=(const ExampleQuery &) = default ;
      ExampleQuery& operator=(ExampleQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->expression_ == nullptr && this->name_ == nullptr && this->queryId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ExampleQuery& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // expression Field Functions 
      bool hasExpression() const { return this->expression_ != nullptr;};
      void deleteExpression() { this->expression_ = nullptr;};
      inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
      inline ExampleQuery& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ExampleQuery& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // queryId Field Functions 
      bool hasQueryId() const { return this->queryId_ != nullptr;};
      void deleteQueryId() { this->queryId_ = nullptr;};
      inline string getQueryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
      inline ExampleQuery& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


    protected:
      // The description of the template.
      shared_ptr<string> description_ {};
      // The query statement in the template.
      shared_ptr<string> expression_ {};
      // The name of the template.
      shared_ptr<string> name_ {};
      // The ID of the template.
      shared_ptr<string> queryId_ {};
    };

    virtual bool empty() const override { return this->exampleQuery_ == nullptr
        && this->requestId_ == nullptr; };
    // exampleQuery Field Functions 
    bool hasExampleQuery() const { return this->exampleQuery_ != nullptr;};
    void deleteExampleQuery() { this->exampleQuery_ = nullptr;};
    inline const GetExampleQueryResponseBody::ExampleQuery & getExampleQuery() const { DARABONBA_PTR_GET_CONST(exampleQuery_, GetExampleQueryResponseBody::ExampleQuery) };
    inline GetExampleQueryResponseBody::ExampleQuery getExampleQuery() { DARABONBA_PTR_GET(exampleQuery_, GetExampleQueryResponseBody::ExampleQuery) };
    inline GetExampleQueryResponseBody& setExampleQuery(const GetExampleQueryResponseBody::ExampleQuery & exampleQuery) { DARABONBA_PTR_SET_VALUE(exampleQuery_, exampleQuery) };
    inline GetExampleQueryResponseBody& setExampleQuery(GetExampleQueryResponseBody::ExampleQuery && exampleQuery) { DARABONBA_PTR_SET_RVALUE(exampleQuery_, exampleQuery) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExampleQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the sample query template.
    shared_ptr<GetExampleQueryResponseBody::ExampleQuery> exampleQuery_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
