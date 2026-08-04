// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTLISTMCPSERVERTOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTLISTMCPSERVERTOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class StartListMcpServerToolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartListMcpServerToolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, StartListMcpServerToolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    StartListMcpServerToolsResponseBody() = default ;
    StartListMcpServerToolsResponseBody(const StartListMcpServerToolsResponseBody &) = default ;
    StartListMcpServerToolsResponseBody(StartListMcpServerToolsResponseBody &&) = default ;
    StartListMcpServerToolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartListMcpServerToolsResponseBody() = default ;
    StartListMcpServerToolsResponseBody& operator=(const StartListMcpServerToolsResponseBody &) = default ;
    StartListMcpServerToolsResponseBody& operator=(StartListMcpServerToolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(StartTimestamp, startTimestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(StartTimestamp, startTimestamp_);
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
      virtual bool empty() const override { return this->sessionId_ == nullptr
        && this->startTimestamp_ == nullptr; };
      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Data& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // startTimestamp Field Functions 
      bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
      void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
      inline string getStartTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, "") };
      inline Data& setStartTimestamp(string startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


    protected:
      // The temporary session ID for this detection. After the startup succeeds, use this value to call GetListMcpServerToolsResult to poll for the result.
      shared_ptr<string> sessionId_ {};
      // The UNIX timestamp at which the server started the detection, in milliseconds.
      shared_ptr<string> startTimestamp_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const StartListMcpServerToolsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, StartListMcpServerToolsResponseBody::Data) };
    inline StartListMcpServerToolsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, StartListMcpServerToolsResponseBody::Data) };
    inline StartListMcpServerToolsResponseBody& setData(const StartListMcpServerToolsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline StartListMcpServerToolsResponseBody& setData(StartListMcpServerToolsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline StartListMcpServerToolsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline StartListMcpServerToolsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartListMcpServerToolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline StartListMcpServerToolsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The result of the asynchronous detection startup. Only StartTimestamp may be returned if the resources are still being provisioned.
    shared_ptr<StartListMcpServerToolsResponseBody::Data> data_ {};
    // The return code. The value success is returned if the request was successful. An error code is returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if a system-level request failure occurs.
    shared_ptr<string> errorMessage_ {};
    // The request ID, which is used to locate this call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // - true: The request was successful.
    // - false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
