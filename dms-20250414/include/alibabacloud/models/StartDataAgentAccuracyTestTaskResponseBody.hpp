// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTDATAAGENTACCURACYTESTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTDATAAGENTACCURACYTESTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class StartDataAgentAccuracyTestTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartDataAgentAccuracyTestTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, StartDataAgentAccuracyTestTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    StartDataAgentAccuracyTestTaskResponseBody() = default ;
    StartDataAgentAccuracyTestTaskResponseBody(const StartDataAgentAccuracyTestTaskResponseBody &) = default ;
    StartDataAgentAccuracyTestTaskResponseBody(StartDataAgentAccuracyTestTaskResponseBody &&) = default ;
    StartDataAgentAccuracyTestTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartDataAgentAccuracyTestTaskResponseBody() = default ;
    StartDataAgentAccuracyTestTaskResponseBody& operator=(const StartDataAgentAccuracyTestTaskResponseBody &) = default ;
    StartDataAgentAccuracyTestTaskResponseBody& operator=(StartDataAgentAccuracyTestTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccuracyTestTaskId, accuracyTestTaskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccuracyTestTaskId, accuracyTestTaskId_);
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
      virtual bool empty() const override { return this->accuracyTestTaskId_ == nullptr; };
      // accuracyTestTaskId Field Functions 
      bool hasAccuracyTestTaskId() const { return this->accuracyTestTaskId_ != nullptr;};
      void deleteAccuracyTestTaskId() { this->accuracyTestTaskId_ = nullptr;};
      inline string getAccuracyTestTaskId() const { DARABONBA_PTR_GET_DEFAULT(accuracyTestTaskId_, "") };
      inline Data& setAccuracyTestTaskId(string accuracyTestTaskId) { DARABONBA_PTR_SET_VALUE(accuracyTestTaskId_, accuracyTestTaskId) };


    protected:
      // The ID of the accuracy test task.
      shared_ptr<string> accuracyTestTaskId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const StartDataAgentAccuracyTestTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, StartDataAgentAccuracyTestTaskResponseBody::Data) };
    inline StartDataAgentAccuracyTestTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, StartDataAgentAccuracyTestTaskResponseBody::Data) };
    inline StartDataAgentAccuracyTestTaskResponseBody& setData(const StartDataAgentAccuracyTestTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline StartDataAgentAccuracyTestTaskResponseBody& setData(StartDataAgentAccuracyTestTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline StartDataAgentAccuracyTestTaskResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline StartDataAgentAccuracyTestTaskResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartDataAgentAccuracyTestTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline StartDataAgentAccuracyTestTaskResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response struct.
    shared_ptr<StartDataAgentAccuracyTestTaskResponseBody::Data> data_ {};
    // The error code returned if the request fails.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // - True: The request is successful.                                 
    // - False: The request fails.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
