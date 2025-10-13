// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAMESPACEDCONFIGMAPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNAMESPACEDCONFIGMAPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListNamespacedConfigMapsResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListNamespacedConfigMapsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNamespacedConfigMapsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNamespacedConfigMapsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    ListNamespacedConfigMapsResponseBody() = default ;
    ListNamespacedConfigMapsResponseBody(const ListNamespacedConfigMapsResponseBody &) = default ;
    ListNamespacedConfigMapsResponseBody(ListNamespacedConfigMapsResponseBody &&) = default ;
    ListNamespacedConfigMapsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNamespacedConfigMapsResponseBody() = default ;
    ListNamespacedConfigMapsResponseBody& operator=(const ListNamespacedConfigMapsResponseBody &) = default ;
    ListNamespacedConfigMapsResponseBody& operator=(ListNamespacedConfigMapsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->errorCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr
        && return this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListNamespacedConfigMapsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListNamespacedConfigMapsResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListNamespacedConfigMapsResponseBodyData) };
    inline ListNamespacedConfigMapsResponseBodyData data() { DARABONBA_PTR_GET(data_, ListNamespacedConfigMapsResponseBodyData) };
    inline ListNamespacedConfigMapsResponseBody& setData(const ListNamespacedConfigMapsResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListNamespacedConfigMapsResponseBody& setData(ListNamespacedConfigMapsResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListNamespacedConfigMapsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListNamespacedConfigMapsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNamespacedConfigMapsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListNamespacedConfigMapsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ListNamespacedConfigMapsResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: indicates that the call was successful.
    // *   **3xx**: indicates that the call was redirected.
    // *   **4xx**: indicates that the call failed.
    // *   **5xx**: indicates that a server error occurred.
    std::shared_ptr<string> code_ = nullptr;
    // The returned result.
    std::shared_ptr<ListNamespacedConfigMapsResponseBodyData> data_ = nullptr;
    // The returned error code. Valid values:
    // 
    // - If the call is successful, the **ErrorCode** parameter is not returned.
    // - If the call fails, the **ErrorCode** parameter is returned. For more information, see the "**Error codes**" section of this topic.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The returned information. Valid values:
    // 
    // *   If the call is successful, **success** is returned.
    // *   If the call fails, an error code is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the ConfigMap instances were obtained. Valid values:
    // 
    // *   **true**: The instances were obtained.
    // *   **false**: The instances failed to be obtained.
    std::shared_ptr<bool> success_ = nullptr;
    // The ID of the trace. The ID is used to query the details of a request.
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
