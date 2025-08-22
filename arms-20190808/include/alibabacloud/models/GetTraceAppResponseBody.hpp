// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACEAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRACEAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTraceAppResponseBodyTraceApp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetTraceAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TraceApp, traceApp_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TraceApp, traceApp_);
    };
    GetTraceAppResponseBody() = default ;
    GetTraceAppResponseBody(const GetTraceAppResponseBody &) = default ;
    GetTraceAppResponseBody(GetTraceAppResponseBody &&) = default ;
    GetTraceAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceAppResponseBody() = default ;
    GetTraceAppResponseBody& operator=(const GetTraceAppResponseBody &) = default ;
    GetTraceAppResponseBody& operator=(GetTraceAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->traceApp_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTraceAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // traceApp Field Functions 
    bool hasTraceApp() const { return this->traceApp_ != nullptr;};
    void deleteTraceApp() { this->traceApp_ = nullptr;};
    inline const GetTraceAppResponseBodyTraceApp & traceApp() const { DARABONBA_PTR_GET_CONST(traceApp_, GetTraceAppResponseBodyTraceApp) };
    inline GetTraceAppResponseBodyTraceApp traceApp() { DARABONBA_PTR_GET(traceApp_, GetTraceAppResponseBodyTraceApp) };
    inline GetTraceAppResponseBody& setTraceApp(const GetTraceAppResponseBodyTraceApp & traceApp) { DARABONBA_PTR_SET_VALUE(traceApp_, traceApp) };
    inline GetTraceAppResponseBody& setTraceApp(GetTraceAppResponseBodyTraceApp && traceApp) { DARABONBA_PTR_SET_RVALUE(traceApp_, traceApp) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the array object.
    std::shared_ptr<GetTraceAppResponseBodyTraceApp> traceApp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
