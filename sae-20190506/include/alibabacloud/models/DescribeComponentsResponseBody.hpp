// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPONENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPONENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeComponentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComponentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComponentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeComponentsResponseBody() = default ;
    DescribeComponentsResponseBody(const DescribeComponentsResponseBody &) = default ;
    DescribeComponentsResponseBody(DescribeComponentsResponseBody &&) = default ;
    DescribeComponentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComponentsResponseBody() = default ;
    DescribeComponentsResponseBody& operator=(const DescribeComponentsResponseBody &) = default ;
    DescribeComponentsResponseBody& operator=(DescribeComponentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentDescription, componentDescription_);
        DARABONBA_PTR_TO_JSON(ComponentKey, componentKey_);
        DARABONBA_PTR_TO_JSON(Expired, expired_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentDescription, componentDescription_);
        DARABONBA_PTR_FROM_JSON(ComponentKey, componentKey_);
        DARABONBA_PTR_FROM_JSON(Expired, expired_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->componentDescription_ == nullptr
        && this->componentKey_ == nullptr && this->expired_ == nullptr && this->type_ == nullptr; };
      // componentDescription Field Functions 
      bool hasComponentDescription() const { return this->componentDescription_ != nullptr;};
      void deleteComponentDescription() { this->componentDescription_ = nullptr;};
      inline string getComponentDescription() const { DARABONBA_PTR_GET_DEFAULT(componentDescription_, "") };
      inline Data& setComponentDescription(string componentDescription) { DARABONBA_PTR_SET_VALUE(componentDescription_, componentDescription) };


      // componentKey Field Functions 
      bool hasComponentKey() const { return this->componentKey_ != nullptr;};
      void deleteComponentKey() { this->componentKey_ = nullptr;};
      inline string getComponentKey() const { DARABONBA_PTR_GET_DEFAULT(componentKey_, "") };
      inline Data& setComponentKey(string componentKey) { DARABONBA_PTR_SET_VALUE(componentKey_, componentKey) };


      // expired Field Functions 
      bool hasExpired() const { return this->expired_ != nullptr;};
      void deleteExpired() { this->expired_ = nullptr;};
      inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
      inline Data& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The description of the component.
      shared_ptr<string> componentDescription_ {};
      // The component ID.
      shared_ptr<string> componentKey_ {};
      // Indicates whether the component is expired. Valid values:
      // 
      // *   **true**: The component is expired.
      // *   **false**: The component is not expired.
      shared_ptr<bool> expired_ {};
      // The type of the component.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeComponentsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeComponentsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeComponentsResponseBody::Data>) };
    inline vector<DescribeComponentsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeComponentsResponseBody::Data>) };
    inline DescribeComponentsResponseBody& setData(const vector<DescribeComponentsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeComponentsResponseBody& setData(vector<DescribeComponentsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeComponentsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeComponentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeComponentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeComponentsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeComponentsResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: The request was successful.
    // *   **3xx**: The request was redirected.
    // *   **4xx**: The request failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The details of the supported components.
    shared_ptr<vector<DescribeComponentsResponseBody::Data>> data_ {};
    // The status code. Valid values:
    // 
    // *   If the request was successful, **ErrorCode** is not returned.
    // *   If the request failed, **ErrorCode** is returned. For more information, see **Error codes** section of this topic.
    shared_ptr<string> errorCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the component version was obtained. Valid values:
    // 
    // *   **true**: The applications were obtained.
    // *   **false**: The applications failed to be queried.
    shared_ptr<bool> success_ {};
    // The ID of the trace. The ID is used to query the details of a request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
