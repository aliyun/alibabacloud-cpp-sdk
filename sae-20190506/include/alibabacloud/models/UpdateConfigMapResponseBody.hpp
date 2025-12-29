// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONFIGMAPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONFIGMAPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateConfigMapResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConfigMapResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConfigMapResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    UpdateConfigMapResponseBody() = default ;
    UpdateConfigMapResponseBody(const UpdateConfigMapResponseBody &) = default ;
    UpdateConfigMapResponseBody(UpdateConfigMapResponseBody &&) = default ;
    UpdateConfigMapResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConfigMapResponseBody() = default ;
    UpdateConfigMapResponseBody& operator=(const UpdateConfigMapResponseBody &) = default ;
    UpdateConfigMapResponseBody& operator=(UpdateConfigMapResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigMapId, configMapId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigMapId, configMapId_);
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
      virtual bool empty() const override { return this->configMapId_ == nullptr; };
      // configMapId Field Functions 
      bool hasConfigMapId() const { return this->configMapId_ != nullptr;};
      void deleteConfigMapId() { this->configMapId_ = nullptr;};
      inline string getConfigMapId() const { DARABONBA_PTR_GET_DEFAULT(configMapId_, "") };
      inline Data& setConfigMapId(string configMapId) { DARABONBA_PTR_SET_VALUE(configMapId_, configMapId) };


    protected:
      // The returned error code. Valid values:
      // 
      // *   If the call is successful, the **ErrorCode** parameter is not returned.
      // *   If the call fails, the **ErrorCode** parameter is returned. For more information, see the "**Error codes**" section of this topic.
      shared_ptr<string> configMapId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateConfigMapResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateConfigMapResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateConfigMapResponseBody::Data) };
    inline UpdateConfigMapResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateConfigMapResponseBody::Data) };
    inline UpdateConfigMapResponseBody& setData(const UpdateConfigMapResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateConfigMapResponseBody& setData(UpdateConfigMapResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline UpdateConfigMapResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateConfigMapResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateConfigMapResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateConfigMapResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline UpdateConfigMapResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // Indicates whether the ConfigMap instance was updated. Valid values:
    // 
    // *   **true**: The instance was updated.
    // *   **false**: The instance failed to be updated.
    shared_ptr<string> code_ {};
    // The ID of the ConfigMap instance.
    shared_ptr<UpdateConfigMapResponseBody::Data> data_ {};
    // The HTTP status code. Valid values:
    // 
    // *   **2xx:**: indicates that the call was successful.
    // *   **3xx**: indicates that the call was redirected.
    // *   **4xx**: indicates that the call failed.
    // *   **5xx**: indicates that a server error occurred.
    shared_ptr<string> errorCode_ {};
    // The ID of the trace. The ID is used to query the details of a request.
    shared_ptr<string> message_ {};
    // The returned information.
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    // The returned result.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
