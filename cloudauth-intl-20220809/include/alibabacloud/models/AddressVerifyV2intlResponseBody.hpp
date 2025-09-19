// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRESSVERIFYV2INTLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDRESSVERIFYV2INTLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddressVerifyV2IntlResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class AddressVerifyV2IntlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddressVerifyV2IntlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, AddressVerifyV2IntlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    AddressVerifyV2IntlResponseBody() = default ;
    AddressVerifyV2IntlResponseBody(const AddressVerifyV2IntlResponseBody &) = default ;
    AddressVerifyV2IntlResponseBody(AddressVerifyV2IntlResponseBody &&) = default ;
    AddressVerifyV2IntlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddressVerifyV2IntlResponseBody() = default ;
    AddressVerifyV2IntlResponseBody& operator=(const AddressVerifyV2IntlResponseBody &) = default ;
    AddressVerifyV2IntlResponseBody& operator=(AddressVerifyV2IntlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->result_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AddressVerifyV2IntlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddressVerifyV2IntlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddressVerifyV2IntlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const AddressVerifyV2IntlResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, AddressVerifyV2IntlResponseBodyResult) };
    inline AddressVerifyV2IntlResponseBodyResult result() { DARABONBA_PTR_GET(result_, AddressVerifyV2IntlResponseBodyResult) };
    inline AddressVerifyV2IntlResponseBody& setResult(const AddressVerifyV2IntlResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline AddressVerifyV2IntlResponseBody& setResult(AddressVerifyV2IntlResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // [Return Code](https://www.alibabacloud.com/help/zh/ekyc/latest/add-verify-pro-api?spm=a2c63.p38356.0.i4#ae60001a3804w)
    std::shared_ptr<string> code_ = nullptr;
    // Detailed description of the return code
    std::shared_ptr<string> message_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // Result object
    std::shared_ptr<AddressVerifyV2IntlResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
