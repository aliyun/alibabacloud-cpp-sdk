// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTRACESBYPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTRACESBYPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TraceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class SearchTracesByPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTracesByPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(traceInfos, traceInfos_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTracesByPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(traceInfos, traceInfos_);
    };
    SearchTracesByPageResponseBody() = default ;
    SearchTracesByPageResponseBody(const SearchTracesByPageResponseBody &) = default ;
    SearchTracesByPageResponseBody(SearchTracesByPageResponseBody &&) = default ;
    SearchTracesByPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTracesByPageResponseBody() = default ;
    SearchTracesByPageResponseBody& operator=(const SearchTracesByPageResponseBody &) = default ;
    SearchTracesByPageResponseBody& operator=(SearchTracesByPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->traceInfos_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchTracesByPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // traceInfos Field Functions 
    bool hasTraceInfos() const { return this->traceInfos_ != nullptr;};
    void deleteTraceInfos() { this->traceInfos_ = nullptr;};
    inline const vector<TraceInfo> & getTraceInfos() const { DARABONBA_PTR_GET_CONST(traceInfos_, vector<TraceInfo>) };
    inline vector<TraceInfo> getTraceInfos() { DARABONBA_PTR_GET(traceInfos_, vector<TraceInfo>) };
    inline SearchTracesByPageResponseBody& setTraceInfos(const vector<TraceInfo> & traceInfos) { DARABONBA_PTR_SET_VALUE(traceInfos_, traceInfos) };
    inline SearchTracesByPageResponseBody& setTraceInfos(vector<TraceInfo> && traceInfos) { DARABONBA_PTR_SET_RVALUE(traceInfos_, traceInfos) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<TraceInfo>> traceInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
