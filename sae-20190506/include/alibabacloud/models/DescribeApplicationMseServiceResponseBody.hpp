// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONMSESERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONMSESERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationMseServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationMseServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationMseServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeApplicationMseServiceResponseBody() = default ;
    DescribeApplicationMseServiceResponseBody(const DescribeApplicationMseServiceResponseBody &) = default ;
    DescribeApplicationMseServiceResponseBody(DescribeApplicationMseServiceResponseBody &&) = default ;
    DescribeApplicationMseServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationMseServiceResponseBody() = default ;
    DescribeApplicationMseServiceResponseBody& operator=(const DescribeApplicationMseServiceResponseBody &) = default ;
    DescribeApplicationMseServiceResponseBody& operator=(DescribeApplicationMseServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MseAppId, mseAppId_);
        DARABONBA_PTR_TO_JSON(MseAppName, mseAppName_);
        DARABONBA_PTR_TO_JSON(MseAppNameSpace, mseAppNameSpace_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MseAppId, mseAppId_);
        DARABONBA_PTR_FROM_JSON(MseAppName, mseAppName_);
        DARABONBA_PTR_FROM_JSON(MseAppNameSpace, mseAppNameSpace_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->mseAppId_ == nullptr
        && this->mseAppName_ == nullptr && this->mseAppNameSpace_ == nullptr && this->status_ == nullptr; };
      // mseAppId Field Functions 
      bool hasMseAppId() const { return this->mseAppId_ != nullptr;};
      void deleteMseAppId() { this->mseAppId_ = nullptr;};
      inline string getMseAppId() const { DARABONBA_PTR_GET_DEFAULT(mseAppId_, "") };
      inline Data& setMseAppId(string mseAppId) { DARABONBA_PTR_SET_VALUE(mseAppId_, mseAppId) };


      // mseAppName Field Functions 
      bool hasMseAppName() const { return this->mseAppName_ != nullptr;};
      void deleteMseAppName() { this->mseAppName_ = nullptr;};
      inline string getMseAppName() const { DARABONBA_PTR_GET_DEFAULT(mseAppName_, "") };
      inline Data& setMseAppName(string mseAppName) { DARABONBA_PTR_SET_VALUE(mseAppName_, mseAppName) };


      // mseAppNameSpace Field Functions 
      bool hasMseAppNameSpace() const { return this->mseAppNameSpace_ != nullptr;};
      void deleteMseAppNameSpace() { this->mseAppNameSpace_ = nullptr;};
      inline string getMseAppNameSpace() const { DARABONBA_PTR_GET_DEFAULT(mseAppNameSpace_, "") };
      inline Data& setMseAppNameSpace(string mseAppNameSpace) { DARABONBA_PTR_SET_VALUE(mseAppNameSpace_, mseAppNameSpace) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The application ID.
      shared_ptr<string> mseAppId_ {};
      // The application name.
      shared_ptr<string> mseAppName_ {};
      // The namespace.
      shared_ptr<string> mseAppNameSpace_ {};
      // The application status. Valid values:
      // 
      // *   EXPIRED
      // *   REBOOTING
      // *   WAITING
      // *   FAIL
      // *   NULL/SUCCESS
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeApplicationMseServiceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeApplicationMseServiceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeApplicationMseServiceResponseBody::Data) };
    inline DescribeApplicationMseServiceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeApplicationMseServiceResponseBody::Data) };
    inline DescribeApplicationMseServiceResponseBody& setData(const DescribeApplicationMseServiceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeApplicationMseServiceResponseBody& setData(DescribeApplicationMseServiceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeApplicationMseServiceResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeApplicationMseServiceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationMseServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeApplicationMseServiceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeApplicationMseServiceResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The API status or POP error code. Valid values: 2xx: The request was successful. 3xx: The request was redirected. 4xx: The request was invalid. 5xx: A server error occurred.
    shared_ptr<string> code_ {};
    // The application information.
    shared_ptr<DescribeApplicationMseServiceResponseBody::Data> data_ {};
    // The error code. Value description:
    // 
    // *   If the request succeeds, this field is not returned.
    // *   For more information, see the **Error codes** section of this topic.
    shared_ptr<string> errorCode_ {};
    // The additional information. Value description:
    // 
    // *   If the request was successful, **success** is returned.
    // *   If the request failed, an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the application instance groups were obtained successfully. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
    // The ID of the trace, which is used to query the exact call information.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
