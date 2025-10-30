// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELPICKUPWAYBILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CANCELPICKUPWAYBILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CancelPickUpWaybillResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CancelPickUpWaybillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelPickUpWaybillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelPickUpWaybillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CancelPickUpWaybillResponseBody() = default ;
    CancelPickUpWaybillResponseBody(const CancelPickUpWaybillResponseBody &) = default ;
    CancelPickUpWaybillResponseBody(CancelPickUpWaybillResponseBody &&) = default ;
    CancelPickUpWaybillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelPickUpWaybillResponseBody() = default ;
    CancelPickUpWaybillResponseBody& operator=(const CancelPickUpWaybillResponseBody &) = default ;
    CancelPickUpWaybillResponseBody& operator=(CancelPickUpWaybillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CancelPickUpWaybillResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CancelPickUpWaybillResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CancelPickUpWaybillResponseBodyData) };
    inline CancelPickUpWaybillResponseBodyData data() { DARABONBA_PTR_GET(data_, CancelPickUpWaybillResponseBodyData) };
    inline CancelPickUpWaybillResponseBody& setData(const CancelPickUpWaybillResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CancelPickUpWaybillResponseBody& setData(CancelPickUpWaybillResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CancelPickUpWaybillResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CancelPickUpWaybillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   Other status codes indicate that the request failed. For more information, see [Error codes](https://help.aliyun.com/document_detail/109196.html).
    std::shared_ptr<string> code_ = nullptr;
    // The returned data.
    std::shared_ptr<CancelPickUpWaybillResponseBodyData> data_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
