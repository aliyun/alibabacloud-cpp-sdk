// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONENACOSCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLONENACOSCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CloneNacosConfigResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CloneNacosConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneNacosConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CloneNacosConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CloneNacosConfigResponseBody() = default ;
    CloneNacosConfigResponseBody(const CloneNacosConfigResponseBody &) = default ;
    CloneNacosConfigResponseBody(CloneNacosConfigResponseBody &&) = default ;
    CloneNacosConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneNacosConfigResponseBody() = default ;
    CloneNacosConfigResponseBody& operator=(const CloneNacosConfigResponseBody &) = default ;
    CloneNacosConfigResponseBody& operator=(CloneNacosConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->dynamicMessage_ == nullptr && return this->errorCode_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr
        && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline CloneNacosConfigResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloneNacosConfigResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CloneNacosConfigResponseBodyData) };
    inline CloneNacosConfigResponseBodyData data() { DARABONBA_PTR_GET(data_, CloneNacosConfigResponseBodyData) };
    inline CloneNacosConfigResponseBody& setData(const CloneNacosConfigResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloneNacosConfigResponseBody& setData(CloneNacosConfigResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string dynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline CloneNacosConfigResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CloneNacosConfigResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CloneNacosConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloneNacosConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloneNacosConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CloneNacosConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Response code.
    std::shared_ptr<int32_t> code_ = nullptr;
    // Data overview.
    std::shared_ptr<CloneNacosConfigResponseBodyData> data_ = nullptr;
    // Dynamic error message, used to replace the **%s** in the **ErrMessage** error message.
    // > If **ErrMessage** returns **The Value of Input Parameter %s is not valid**, and **DynamicMessage** returns **DtsJobId**, it indicates that the input request parameter **DtsJobId** is invalid.
    std::shared_ptr<string> dynamicMessage_ = nullptr;
    // Error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // Response message.
    std::shared_ptr<string> message_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Request result, with the following values:
    // - `true`: Request succeeded.
    // - `false`: Request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
