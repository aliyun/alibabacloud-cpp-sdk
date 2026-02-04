// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTELOGQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTELOGQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ExecuteLogQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteLogQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QueryResult, queryResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteLogQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryResult, queryResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ExecuteLogQueryResponseBody() = default ;
    ExecuteLogQueryResponseBody(const ExecuteLogQueryResponseBody &) = default ;
    ExecuteLogQueryResponseBody(ExecuteLogQueryResponseBody &&) = default ;
    ExecuteLogQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteLogQueryResponseBody() = default ;
    ExecuteLogQueryResponseBody& operator=(const ExecuteLogQueryResponseBody &) = default ;
    ExecuteLogQueryResponseBody& operator=(ExecuteLogQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryResult_ == nullptr
        && this->requestId_ == nullptr; };
    // queryResult Field Functions 
    bool hasQueryResult() const { return this->queryResult_ != nullptr;};
    void deleteQueryResult() { this->queryResult_ = nullptr;};
    inline const vector<Darabonba::Json> & getQueryResult() const { DARABONBA_PTR_GET_CONST(queryResult_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getQueryResult() { DARABONBA_PTR_GET(queryResult_, vector<Darabonba::Json>) };
    inline ExecuteLogQueryResponseBody& setQueryResult(const vector<Darabonba::Json> & queryResult) { DARABONBA_PTR_SET_VALUE(queryResult_, queryResult) };
    inline ExecuteLogQueryResponseBody& setQueryResult(vector<Darabonba::Json> && queryResult) { DARABONBA_PTR_SET_RVALUE(queryResult_, queryResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteLogQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<Darabonba::Json>> queryResult_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
