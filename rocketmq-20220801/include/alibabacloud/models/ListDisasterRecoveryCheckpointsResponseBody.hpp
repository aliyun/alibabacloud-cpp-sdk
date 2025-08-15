// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYCHECKPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYCHECKPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDisasterRecoveryCheckpointsResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListDisasterRecoveryCheckpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDisasterRecoveryCheckpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDisasterRecoveryCheckpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListDisasterRecoveryCheckpointsResponseBody() = default ;
    ListDisasterRecoveryCheckpointsResponseBody(const ListDisasterRecoveryCheckpointsResponseBody &) = default ;
    ListDisasterRecoveryCheckpointsResponseBody(ListDisasterRecoveryCheckpointsResponseBody &&) = default ;
    ListDisasterRecoveryCheckpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDisasterRecoveryCheckpointsResponseBody() = default ;
    ListDisasterRecoveryCheckpointsResponseBody& operator=(const ListDisasterRecoveryCheckpointsResponseBody &) = default ;
    ListDisasterRecoveryCheckpointsResponseBody& operator=(ListDisasterRecoveryCheckpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->dynamicCode_ != nullptr && this->dynamicMessage_ != nullptr && this->httpStatusCode_ != nullptr && this->message_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDisasterRecoveryCheckpointsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDisasterRecoveryCheckpointsResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListDisasterRecoveryCheckpointsResponseBodyData) };
    inline ListDisasterRecoveryCheckpointsResponseBodyData data() { DARABONBA_PTR_GET(data_, ListDisasterRecoveryCheckpointsResponseBodyData) };
    inline ListDisasterRecoveryCheckpointsResponseBody& setData(const ListDisasterRecoveryCheckpointsResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDisasterRecoveryCheckpointsResponseBody& setData(ListDisasterRecoveryCheckpointsResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string dynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline ListDisasterRecoveryCheckpointsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string dynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ListDisasterRecoveryCheckpointsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDisasterRecoveryCheckpointsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDisasterRecoveryCheckpointsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDisasterRecoveryCheckpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDisasterRecoveryCheckpointsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Error code
    std::shared_ptr<string> code_ = nullptr;
    // Response Data
    std::shared_ptr<ListDisasterRecoveryCheckpointsResponseBodyData> data_ = nullptr;
    // Dynamic error code
    std::shared_ptr<string> dynamicCode_ = nullptr;
    // The dynamic error message.
    std::shared_ptr<string> dynamicMessage_ = nullptr;
    // HTTP status code
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // Error message
    std::shared_ptr<string> message_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // Whether the operation was successful
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
