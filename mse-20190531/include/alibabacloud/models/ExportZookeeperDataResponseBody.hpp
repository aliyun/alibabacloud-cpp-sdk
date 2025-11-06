// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTZOOKEEPERDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTZOOKEEPERDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ExportZookeeperDataResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ExportZookeeperDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportZookeeperDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ExportZookeeperDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ExportZookeeperDataResponseBody() = default ;
    ExportZookeeperDataResponseBody(const ExportZookeeperDataResponseBody &) = default ;
    ExportZookeeperDataResponseBody(ExportZookeeperDataResponseBody &&) = default ;
    ExportZookeeperDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportZookeeperDataResponseBody() = default ;
    ExportZookeeperDataResponseBody& operator=(const ExportZookeeperDataResponseBody &) = default ;
    ExportZookeeperDataResponseBody& operator=(ExportZookeeperDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->dynamicMessage_ == nullptr && return this->errorCode_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ExportZookeeperDataResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ExportZookeeperDataResponseBodyData) };
    inline ExportZookeeperDataResponseBodyData data() { DARABONBA_PTR_GET(data_, ExportZookeeperDataResponseBodyData) };
    inline ExportZookeeperDataResponseBody& setData(const ExportZookeeperDataResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ExportZookeeperDataResponseBody& setData(ExportZookeeperDataResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string dynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ExportZookeeperDataResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ExportZookeeperDataResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline ExportZookeeperDataResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ExportZookeeperDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportZookeeperDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ExportZookeeperDataResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the data.
    std::shared_ptr<ExportZookeeperDataResponseBodyData> data_ = nullptr;
    // The dynamic part in the error message. This parameter is used to replace the \\*\\*%s\\*\\* variable in the **ErrMessage** parameter.
    // 
    // > If the return value of the **ErrMessage** parameter is **The Value of Input Parameter %s is not valid** and the return value of the **DynamicMessage** parameter is **DtsJobId**, the specified **DtsJobId** parameter is invalid.
    std::shared_ptr<string> dynamicMessage_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The HTTP status code returned.
    std::shared_ptr<string> httpStatusCode_ = nullptr;
    // The message returned.
    // 
    // *   If the request is successful, a success message is returned.
    // *   If the request fails, an error message is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
