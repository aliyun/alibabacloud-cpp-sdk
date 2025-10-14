// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYORGTODOTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYORGTODOTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryOrgTodoTasksResponseBodyTodoCards.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryOrgTodoTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOrgTodoTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(todoCards, todoCards_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOrgTodoTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(todoCards, todoCards_);
    };
    QueryOrgTodoTasksResponseBody() = default ;
    QueryOrgTodoTasksResponseBody(const QueryOrgTodoTasksResponseBody &) = default ;
    QueryOrgTodoTasksResponseBody(QueryOrgTodoTasksResponseBody &&) = default ;
    QueryOrgTodoTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOrgTodoTasksResponseBody() = default ;
    QueryOrgTodoTasksResponseBody& operator=(const QueryOrgTodoTasksResponseBody &) = default ;
    QueryOrgTodoTasksResponseBody& operator=(QueryOrgTodoTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->requestId_ == nullptr && return this->todoCards_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryOrgTodoTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryOrgTodoTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // todoCards Field Functions 
    bool hasTodoCards() const { return this->todoCards_ != nullptr;};
    void deleteTodoCards() { this->todoCards_ = nullptr;};
    inline const vector<QueryOrgTodoTasksResponseBodyTodoCards> & todoCards() const { DARABONBA_PTR_GET_CONST(todoCards_, vector<QueryOrgTodoTasksResponseBodyTodoCards>) };
    inline vector<QueryOrgTodoTasksResponseBodyTodoCards> todoCards() { DARABONBA_PTR_GET(todoCards_, vector<QueryOrgTodoTasksResponseBodyTodoCards>) };
    inline QueryOrgTodoTasksResponseBody& setTodoCards(const vector<QueryOrgTodoTasksResponseBodyTodoCards> & todoCards) { DARABONBA_PTR_SET_VALUE(todoCards_, todoCards) };
    inline QueryOrgTodoTasksResponseBody& setTodoCards(vector<QueryOrgTodoTasksResponseBodyTodoCards> && todoCards) { DARABONBA_PTR_SET_RVALUE(todoCards_, todoCards) };


  protected:
    std::shared_ptr<string> nextToken_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<QueryOrgTodoTasksResponseBodyTodoCards>> todoCards_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
