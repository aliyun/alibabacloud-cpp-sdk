// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETIMAGESENSITIVEFILESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETIMAGESENSITIVEFILESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetImageSensitiveFileStatusResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SetImageSensitiveFileStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetImageSensitiveFileStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SetImageSensitiveFileStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SetImageSensitiveFileStatusResponseBody() = default ;
    SetImageSensitiveFileStatusResponseBody(const SetImageSensitiveFileStatusResponseBody &) = default ;
    SetImageSensitiveFileStatusResponseBody(SetImageSensitiveFileStatusResponseBody &&) = default ;
    SetImageSensitiveFileStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetImageSensitiveFileStatusResponseBody() = default ;
    SetImageSensitiveFileStatusResponseBody& operator=(const SetImageSensitiveFileStatusResponseBody &) = default ;
    SetImageSensitiveFileStatusResponseBody& operator=(SetImageSensitiveFileStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SetImageSensitiveFileStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SetImageSensitiveFileStatusResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, SetImageSensitiveFileStatusResponseBodyData) };
    inline SetImageSensitiveFileStatusResponseBodyData data() { DARABONBA_PTR_GET(data_, SetImageSensitiveFileStatusResponseBodyData) };
    inline SetImageSensitiveFileStatusResponseBody& setData(const SetImageSensitiveFileStatusResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SetImageSensitiveFileStatusResponseBody& setData(SetImageSensitiveFileStatusResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SetImageSensitiveFileStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetImageSensitiveFileStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SetImageSensitiveFileStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    std::shared_ptr<string> code_ = nullptr;
    // The returned data.
    std::shared_ptr<SetImageSensitiveFileStatusResponseBodyData> data_ = nullptr;
    // The returned message.
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
} // namespace Sas20181203
#endif
