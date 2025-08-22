// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGRAFANAWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGRAFANAWORKSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GrafanaWorkspace.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetGrafanaWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGrafanaWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGrafanaWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    GetGrafanaWorkspaceResponseBody() = default ;
    GetGrafanaWorkspaceResponseBody(const GetGrafanaWorkspaceResponseBody &) = default ;
    GetGrafanaWorkspaceResponseBody(GetGrafanaWorkspaceResponseBody &&) = default ;
    GetGrafanaWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGrafanaWorkspaceResponseBody() = default ;
    GetGrafanaWorkspaceResponseBody& operator=(const GetGrafanaWorkspaceResponseBody &) = default ;
    GetGrafanaWorkspaceResponseBody& operator=(GetGrafanaWorkspaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->traceId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetGrafanaWorkspaceResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GrafanaWorkspace & data() const { DARABONBA_PTR_GET_CONST(data_, GrafanaWorkspace) };
    inline GrafanaWorkspace data() { DARABONBA_PTR_GET(data_, GrafanaWorkspace) };
    inline GetGrafanaWorkspaceResponseBody& setData(const GrafanaWorkspace & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGrafanaWorkspaceResponseBody& setData(GrafanaWorkspace && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGrafanaWorkspaceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGrafanaWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetGrafanaWorkspaceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline GetGrafanaWorkspaceResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code returned for the request. Valid values:
    // 
    // *   `2XX`: The request is successful.
    // *   `3XX`: A redirection message is returned.
    // *   `4XX`: The request is invalid.
    // *   `5XX`: A server error occurs.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The information about the Grafana workspace.
    std::shared_ptr<GrafanaWorkspace> data_ = nullptr;
    // The error message returned when the request parameters are invalid.
    std::shared_ptr<string> message_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> success_ = nullptr;
    // The ID of the trace. The ID is used to query the details of a request.
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
