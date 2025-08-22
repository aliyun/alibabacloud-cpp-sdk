// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTraceResponseBodySpans.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetTraceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Spans, spans_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Spans, spans_);
    };
    GetTraceResponseBody() = default ;
    GetTraceResponseBody(const GetTraceResponseBody &) = default ;
    GetTraceResponseBody(GetTraceResponseBody &&) = default ;
    GetTraceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceResponseBody() = default ;
    GetTraceResponseBody& operator=(const GetTraceResponseBody &) = default ;
    GetTraceResponseBody& operator=(GetTraceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->spans_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTraceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // spans Field Functions 
    bool hasSpans() const { return this->spans_ != nullptr;};
    void deleteSpans() { this->spans_ = nullptr;};
    inline const vector<GetTraceResponseBodySpans> & spans() const { DARABONBA_PTR_GET_CONST(spans_, vector<GetTraceResponseBodySpans>) };
    inline vector<GetTraceResponseBodySpans> spans() { DARABONBA_PTR_GET(spans_, vector<GetTraceResponseBodySpans>) };
    inline GetTraceResponseBody& setSpans(const vector<GetTraceResponseBodySpans> & spans) { DARABONBA_PTR_SET_VALUE(spans_, spans) };
    inline GetTraceResponseBody& setSpans(vector<GetTraceResponseBodySpans> && spans) { DARABONBA_PTR_SET_RVALUE(spans_, spans) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the trace.
    std::shared_ptr<vector<GetTraceResponseBodySpans>> spans_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
