// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTLINEQUALIFICATIONBYORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOTLINEQUALIFICATIONBYORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetHotlineQualificationByOrderResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class GetHotlineQualificationByOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotlineQualificationByOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotlineQualificationByOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetHotlineQualificationByOrderResponseBody() = default ;
    GetHotlineQualificationByOrderResponseBody(const GetHotlineQualificationByOrderResponseBody &) = default ;
    GetHotlineQualificationByOrderResponseBody(GetHotlineQualificationByOrderResponseBody &&) = default ;
    GetHotlineQualificationByOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotlineQualificationByOrderResponseBody() = default ;
    GetHotlineQualificationByOrderResponseBody& operator=(const GetHotlineQualificationByOrderResponseBody &) = default ;
    GetHotlineQualificationByOrderResponseBody& operator=(GetHotlineQualificationByOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHotlineQualificationByOrderResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetHotlineQualificationByOrderResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetHotlineQualificationByOrderResponseBodyData) };
    inline GetHotlineQualificationByOrderResponseBodyData data() { DARABONBA_PTR_GET(data_, GetHotlineQualificationByOrderResponseBodyData) };
    inline GetHotlineQualificationByOrderResponseBody& setData(const GetHotlineQualificationByOrderResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHotlineQualificationByOrderResponseBody& setData(GetHotlineQualificationByOrderResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHotlineQualificationByOrderResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHotlineQualificationByOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   For more information about other response codes, see [API error codes](https://help.aliyun.com/document_detail/112502.html).
    std::shared_ptr<string> code_ = nullptr;
    // The response parameters.
    std::shared_ptr<GetHotlineQualificationByOrderResponseBodyData> data_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
