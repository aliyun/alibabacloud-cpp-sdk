// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOSSSUBDIRECTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEOSSSUBDIRECTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateOssSubDirectoryResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateOssSubDirectoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOssSubDirectoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOssSubDirectoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateOssSubDirectoryResponseBody() = default ;
    CreateOssSubDirectoryResponseBody(const CreateOssSubDirectoryResponseBody &) = default ;
    CreateOssSubDirectoryResponseBody(CreateOssSubDirectoryResponseBody &&) = default ;
    CreateOssSubDirectoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOssSubDirectoryResponseBody() = default ;
    CreateOssSubDirectoryResponseBody& operator=(const CreateOssSubDirectoryResponseBody &) = default ;
    CreateOssSubDirectoryResponseBody& operator=(CreateOssSubDirectoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateOssSubDirectoryResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateOssSubDirectoryResponseBodyData) };
    inline CreateOssSubDirectoryResponseBodyData data() { DARABONBA_PTR_GET(data_, CreateOssSubDirectoryResponseBodyData) };
    inline CreateOssSubDirectoryResponseBody& setData(const CreateOssSubDirectoryResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateOssSubDirectoryResponseBody& setData(CreateOssSubDirectoryResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline CreateOssSubDirectoryResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateOssSubDirectoryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOssSubDirectoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateOssSubDirectoryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned data.
    std::shared_ptr<CreateOssSubDirectoryResponseBodyData> data_ = nullptr;
    // The response code. The status code 200 indicates that the request was successful.
    std::shared_ptr<int64_t> httpStatusCode_ = nullptr;
    // The returned message.
    // 
    // *   If the request was successful, a **success** message is returned.
    // *   If the request failed, an error message is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
