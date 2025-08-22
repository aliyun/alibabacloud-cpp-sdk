// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIPLETRACERESPONSEBODYMULTICALLCHAININFOS_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIPLETRACERESPONSEBODYMULTICALLCHAININFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMultipleTraceResponseBodyMultiCallChainInfosSpans.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetMultipleTraceResponseBodyMultiCallChainInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultipleTraceResponseBodyMultiCallChainInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Spans, spans_);
      DARABONBA_PTR_TO_JSON(TraceID, traceID_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultipleTraceResponseBodyMultiCallChainInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Spans, spans_);
      DARABONBA_PTR_FROM_JSON(TraceID, traceID_);
    };
    GetMultipleTraceResponseBodyMultiCallChainInfos() = default ;
    GetMultipleTraceResponseBodyMultiCallChainInfos(const GetMultipleTraceResponseBodyMultiCallChainInfos &) = default ;
    GetMultipleTraceResponseBodyMultiCallChainInfos(GetMultipleTraceResponseBodyMultiCallChainInfos &&) = default ;
    GetMultipleTraceResponseBodyMultiCallChainInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultipleTraceResponseBodyMultiCallChainInfos() = default ;
    GetMultipleTraceResponseBodyMultiCallChainInfos& operator=(const GetMultipleTraceResponseBodyMultiCallChainInfos &) = default ;
    GetMultipleTraceResponseBodyMultiCallChainInfos& operator=(GetMultipleTraceResponseBodyMultiCallChainInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->spans_ != nullptr
        && this->traceID_ != nullptr; };
    // spans Field Functions 
    bool hasSpans() const { return this->spans_ != nullptr;};
    void deleteSpans() { this->spans_ = nullptr;};
    inline const vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpans> & spans() const { DARABONBA_PTR_GET_CONST(spans_, vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpans>) };
    inline vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpans> spans() { DARABONBA_PTR_GET(spans_, vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpans>) };
    inline GetMultipleTraceResponseBodyMultiCallChainInfos& setSpans(const vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpans> & spans) { DARABONBA_PTR_SET_VALUE(spans_, spans) };
    inline GetMultipleTraceResponseBodyMultiCallChainInfos& setSpans(vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpans> && spans) { DARABONBA_PTR_SET_RVALUE(spans_, spans) };


    // traceID Field Functions 
    bool hasTraceID() const { return this->traceID_ != nullptr;};
    void deleteTraceID() { this->traceID_ = nullptr;};
    inline string traceID() const { DARABONBA_PTR_GET_DEFAULT(traceID_, "") };
    inline GetMultipleTraceResponseBodyMultiCallChainInfos& setTraceID(string traceID) { DARABONBA_PTR_SET_VALUE(traceID_, traceID) };


  protected:
    // The details of the trace.
    std::shared_ptr<vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpans>> spans_ = nullptr;
    // The trace ID.
    std::shared_ptr<string> traceID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
