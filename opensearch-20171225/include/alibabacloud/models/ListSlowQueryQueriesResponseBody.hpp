// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSLOWQUERYQUERIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSLOWQUERYQUERIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListSlowQueryQueriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSlowQueryQueriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListSlowQueryQueriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListSlowQueryQueriesResponseBody() = default ;
    ListSlowQueryQueriesResponseBody(const ListSlowQueryQueriesResponseBody &) = default ;
    ListSlowQueryQueriesResponseBody(ListSlowQueryQueriesResponseBody &&) = default ;
    ListSlowQueryQueriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSlowQueryQueriesResponseBody() = default ;
    ListSlowQueryQueriesResponseBody& operator=(const ListSlowQueryQueriesResponseBody &) = default ;
    ListSlowQueryQueriesResponseBody& operator=(ListSlowQueryQueriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(appQuery, appQuery_);
        DARABONBA_PTR_TO_JSON(end, end_);
        DARABONBA_PTR_TO_JSON(index, index_);
        DARABONBA_PTR_TO_JSON(start, start_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(appQuery, appQuery_);
        DARABONBA_PTR_FROM_JSON(end, end_);
        DARABONBA_PTR_FROM_JSON(index, index_);
        DARABONBA_PTR_FROM_JSON(start, start_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appQuery_ == nullptr
        && this->end_ == nullptr && this->index_ == nullptr && this->start_ == nullptr; };
      // appQuery Field Functions 
      bool hasAppQuery() const { return this->appQuery_ != nullptr;};
      void deleteAppQuery() { this->appQuery_ = nullptr;};
      inline string getAppQuery() const { DARABONBA_PTR_GET_DEFAULT(appQuery_, "") };
      inline Result& setAppQuery(string appQuery) { DARABONBA_PTR_SET_VALUE(appQuery_, appQuery) };


      // end Field Functions 
      bool hasEnd() const { return this->end_ != nullptr;};
      void deleteEnd() { this->end_ = nullptr;};
      inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
      inline Result& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
      inline Result& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // start Field Functions 
      bool hasStart() const { return this->start_ != nullptr;};
      void deleteStart() { this->start_ = nullptr;};
      inline int32_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
      inline Result& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    protected:
      // The content of the optimization suggestion for the query.
      shared_ptr<string> appQuery_ {};
      // The end of the time range that was queried.
      shared_ptr<int32_t> end_ {};
      // The ID of the optimization suggestion.
      shared_ptr<int32_t> index_ {};
      // The beginning of the time range that was queried.
      shared_ptr<int32_t> start_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSlowQueryQueriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListSlowQueryQueriesResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListSlowQueryQueriesResponseBody::Result) };
    inline ListSlowQueryQueriesResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListSlowQueryQueriesResponseBody::Result) };
    inline ListSlowQueryQueriesResponseBody& setResult(const ListSlowQueryQueriesResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListSlowQueryQueriesResponseBody& setResult(ListSlowQueryQueriesResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The return result.
    shared_ptr<ListSlowQueryQueriesResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
