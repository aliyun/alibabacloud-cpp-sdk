// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRACEAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRACEAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTraceAppsResponseBodyTraceApps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListTraceAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTraceAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceApps, traceApps_);
    };
    friend void from_json(const Darabonba::Json& j, ListTraceAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceApps, traceApps_);
    };
    ListTraceAppsResponseBody() = default ;
    ListTraceAppsResponseBody(const ListTraceAppsResponseBody &) = default ;
    ListTraceAppsResponseBody(ListTraceAppsResponseBody &&) = default ;
    ListTraceAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTraceAppsResponseBody() = default ;
    ListTraceAppsResponseBody& operator=(const ListTraceAppsResponseBody &) = default ;
    ListTraceAppsResponseBody& operator=(ListTraceAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->traceApps_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListTraceAppsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTraceAppsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTraceAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTraceAppsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceApps Field Functions 
    bool hasTraceApps() const { return this->traceApps_ != nullptr;};
    void deleteTraceApps() { this->traceApps_ = nullptr;};
    inline const vector<ListTraceAppsResponseBodyTraceApps> & traceApps() const { DARABONBA_PTR_GET_CONST(traceApps_, vector<ListTraceAppsResponseBodyTraceApps>) };
    inline vector<ListTraceAppsResponseBodyTraceApps> traceApps() { DARABONBA_PTR_GET(traceApps_, vector<ListTraceAppsResponseBodyTraceApps>) };
    inline ListTraceAppsResponseBody& setTraceApps(const vector<ListTraceAppsResponseBodyTraceApps> & traceApps) { DARABONBA_PTR_SET_VALUE(traceApps_, traceApps) };
    inline ListTraceAppsResponseBody& setTraceApps(vector<ListTraceAppsResponseBodyTraceApps> && traceApps) { DARABONBA_PTR_SET_RVALUE(traceApps_, traceApps) };


  protected:
    // The HTTP status code returned for the request. Valid values:
    // 
    // *   `2XX`: The request is successful.
    // *   `3XX`: A redirection message is returned.
    // *   `4XX`: The request is invalid.
    // *   `5XX`: A server error occurs.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The error message returned if the request parameters are invalid.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call was successful. Valid values:
    // 
    // *   `true`: The call was successful.
    // *   `false`: The call failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The list of Application Monitoring tasks.
    std::shared_ptr<vector<ListTraceAppsResponseBodyTraceApps>> traceApps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
