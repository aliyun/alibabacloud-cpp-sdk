// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGRAFANAWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGRAFANAWORKSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GrafanaWorkspace.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListGrafanaWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGrafanaWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGrafanaWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    ListGrafanaWorkspaceResponseBody() = default ;
    ListGrafanaWorkspaceResponseBody(const ListGrafanaWorkspaceResponseBody &) = default ;
    ListGrafanaWorkspaceResponseBody(ListGrafanaWorkspaceResponseBody &&) = default ;
    ListGrafanaWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGrafanaWorkspaceResponseBody() = default ;
    ListGrafanaWorkspaceResponseBody& operator=(const ListGrafanaWorkspaceResponseBody &) = default ;
    ListGrafanaWorkspaceResponseBody& operator=(ListGrafanaWorkspaceResponseBody &&) = default ;
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
    inline ListGrafanaWorkspaceResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GrafanaWorkspace> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<GrafanaWorkspace>) };
    inline vector<GrafanaWorkspace> data() { DARABONBA_PTR_GET(data_, vector<GrafanaWorkspace>) };
    inline ListGrafanaWorkspaceResponseBody& setData(const vector<GrafanaWorkspace> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGrafanaWorkspaceResponseBody& setData(vector<GrafanaWorkspace> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGrafanaWorkspaceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGrafanaWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListGrafanaWorkspaceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ListGrafanaWorkspaceResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The returned result.
    std::shared_ptr<vector<GrafanaWorkspace>> data_ = nullptr;
    // The error message returned if the request parameters are invalid.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values: true and false.
    std::shared_ptr<bool> success_ = nullptr;
    // The trace ID that is used to query the details of the request.
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
