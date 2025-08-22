// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTRACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTRACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchTracesResponseBodyTraceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchTracesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTracesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TraceInfos, traceInfos_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTracesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TraceInfos, traceInfos_);
    };
    SearchTracesResponseBody() = default ;
    SearchTracesResponseBody(const SearchTracesResponseBody &) = default ;
    SearchTracesResponseBody(SearchTracesResponseBody &&) = default ;
    SearchTracesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTracesResponseBody() = default ;
    SearchTracesResponseBody& operator=(const SearchTracesResponseBody &) = default ;
    SearchTracesResponseBody& operator=(SearchTracesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->traceInfos_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchTracesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // traceInfos Field Functions 
    bool hasTraceInfos() const { return this->traceInfos_ != nullptr;};
    void deleteTraceInfos() { this->traceInfos_ = nullptr;};
    inline const vector<SearchTracesResponseBodyTraceInfos> & traceInfos() const { DARABONBA_PTR_GET_CONST(traceInfos_, vector<SearchTracesResponseBodyTraceInfos>) };
    inline vector<SearchTracesResponseBodyTraceInfos> traceInfos() { DARABONBA_PTR_GET(traceInfos_, vector<SearchTracesResponseBodyTraceInfos>) };
    inline SearchTracesResponseBody& setTraceInfos(const vector<SearchTracesResponseBodyTraceInfos> & traceInfos) { DARABONBA_PTR_SET_VALUE(traceInfos_, traceInfos) };
    inline SearchTracesResponseBody& setTraceInfos(vector<SearchTracesResponseBodyTraceInfos> && traceInfos) { DARABONBA_PTR_SET_RVALUE(traceInfos_, traceInfos) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the returned traces.
    std::shared_ptr<vector<SearchTracesResponseBodyTraceInfos>> traceInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
