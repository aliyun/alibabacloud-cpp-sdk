// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICETAGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICETAGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDeviceTagResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetDeviceTagResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceTagResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceTagResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetDeviceTagResponseBody() = default ;
    GetDeviceTagResponseBody(const GetDeviceTagResponseBody &) = default ;
    GetDeviceTagResponseBody(GetDeviceTagResponseBody &&) = default ;
    GetDeviceTagResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceTagResponseBody() = default ;
    GetDeviceTagResponseBody& operator=(const GetDeviceTagResponseBody &) = default ;
    GetDeviceTagResponseBody& operator=(GetDeviceTagResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->result_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetDeviceTagResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDeviceTagResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDeviceTagResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetDeviceTagResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, GetDeviceTagResponseBodyResult) };
    inline GetDeviceTagResponseBodyResult result() { DARABONBA_PTR_GET(result_, GetDeviceTagResponseBodyResult) };
    inline GetDeviceTagResponseBody& setResult(const GetDeviceTagResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetDeviceTagResponseBody& setResult(GetDeviceTagResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetDeviceTagResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
