// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGQUERYSENSRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DSGQUERYSENSRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgQuerySensResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgQuerySensResultResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DynamicErrorCode, dynamicErrorCode_);
      DARABONBA_PTR_TO_JSON(DynamicErrorMessage, dynamicErrorMessage_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DsgQuerySensResultResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DynamicErrorCode, dynamicErrorCode_);
      DARABONBA_PTR_FROM_JSON(DynamicErrorMessage, dynamicErrorMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DsgQuerySensResultResponseBody() = default ;
    DsgQuerySensResultResponseBody(const DsgQuerySensResultResponseBody &) = default ;
    DsgQuerySensResultResponseBody(DsgQuerySensResultResponseBody &&) = default ;
    DsgQuerySensResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgQuerySensResultResponseBody() = default ;
    DsgQuerySensResultResponseBody& operator=(const DsgQuerySensResultResponseBody &) = default ;
    DsgQuerySensResultResponseBody& operator=(DsgQuerySensResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->dynamicErrorCode_ == nullptr && this->dynamicErrorMessage_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
    Darabonba::Json & getData() { DARABONBA_GET(data_) };
    inline DsgQuerySensResultResponseBody& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline DsgQuerySensResultResponseBody& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


    // dynamicErrorCode Field Functions 
    bool hasDynamicErrorCode() const { return this->dynamicErrorCode_ != nullptr;};
    void deleteDynamicErrorCode() { this->dynamicErrorCode_ = nullptr;};
    inline string getDynamicErrorCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicErrorCode_, "") };
    inline DsgQuerySensResultResponseBody& setDynamicErrorCode(string dynamicErrorCode) { DARABONBA_PTR_SET_VALUE(dynamicErrorCode_, dynamicErrorCode) };


    // dynamicErrorMessage Field Functions 
    bool hasDynamicErrorMessage() const { return this->dynamicErrorMessage_ != nullptr;};
    void deleteDynamicErrorMessage() { this->dynamicErrorMessage_ = nullptr;};
    inline string getDynamicErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicErrorMessage_, "") };
    inline DsgQuerySensResultResponseBody& setDynamicErrorMessage(string dynamicErrorMessage) { DARABONBA_PTR_SET_VALUE(dynamicErrorMessage_, dynamicErrorMessage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DsgQuerySensResultResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DsgQuerySensResultResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DsgQuerySensResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DsgQuerySensResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DsgQuerySensResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    Darabonba::Json data_ {};
    // The error code. The value is the same as that of ErrorCode.
    shared_ptr<string> dynamicErrorCode_ {};
    // The error message. The value is the same as that of ErrorMessage.
    shared_ptr<string> dynamicErrorMessage_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
