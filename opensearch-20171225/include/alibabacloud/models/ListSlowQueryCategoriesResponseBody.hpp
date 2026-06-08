// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSLOWQUERYCATEGORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSLOWQUERYCATEGORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListSlowQueryCategoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSlowQueryCategoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListSlowQueryCategoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListSlowQueryCategoriesResponseBody() = default ;
    ListSlowQueryCategoriesResponseBody(const ListSlowQueryCategoriesResponseBody &) = default ;
    ListSlowQueryCategoriesResponseBody(ListSlowQueryCategoriesResponseBody &&) = default ;
    ListSlowQueryCategoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSlowQueryCategoriesResponseBody() = default ;
    ListSlowQueryCategoriesResponseBody& operator=(const ListSlowQueryCategoriesResponseBody &) = default ;
    ListSlowQueryCategoriesResponseBody& operator=(ListSlowQueryCategoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(analyzeStatus, analyzeStatus_);
        DARABONBA_PTR_TO_JSON(end, end_);
        DARABONBA_PTR_TO_JSON(start, start_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(analyzeStatus, analyzeStatus_);
        DARABONBA_PTR_FROM_JSON(end, end_);
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
      virtual bool empty() const override { return this->analyzeStatus_ == nullptr
        && this->end_ == nullptr && this->start_ == nullptr; };
      // analyzeStatus Field Functions 
      bool hasAnalyzeStatus() const { return this->analyzeStatus_ != nullptr;};
      void deleteAnalyzeStatus() { this->analyzeStatus_ = nullptr;};
      inline string getAnalyzeStatus() const { DARABONBA_PTR_GET_DEFAULT(analyzeStatus_, "") };
      inline Result& setAnalyzeStatus(string analyzeStatus) { DARABONBA_PTR_SET_VALUE(analyzeStatus_, analyzeStatus) };


      // end Field Functions 
      bool hasEnd() const { return this->end_ != nullptr;};
      void deleteEnd() { this->end_ = nullptr;};
      inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
      inline Result& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


      // start Field Functions 
      bool hasStart() const { return this->start_ != nullptr;};
      void deleteStart() { this->start_ = nullptr;};
      inline int32_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
      inline Result& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    protected:
      // The status of the analysis. Valid values:
      // 
      // *   PENDING: preparing
      // *   SUCCESS: succeeded
      // *   RUNNING: running
      // *   FAILED: failed
      // *   N/A: unknown
      shared_ptr<string> analyzeStatus_ {};
      // The timestamp that indicates the end of the time range to query.
      shared_ptr<int32_t> end_ {};
      // The timestamp that indicates the beginning of the time range to query.
      shared_ptr<int32_t> start_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSlowQueryCategoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListSlowQueryCategoriesResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListSlowQueryCategoriesResponseBody::Result) };
    inline ListSlowQueryCategoriesResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListSlowQueryCategoriesResponseBody::Result) };
    inline ListSlowQueryCategoriesResponseBody& setResult(const ListSlowQueryCategoriesResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListSlowQueryCategoriesResponseBody& setResult(ListSlowQueryCategoriesResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The data returned.
    shared_ptr<ListSlowQueryCategoriesResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
