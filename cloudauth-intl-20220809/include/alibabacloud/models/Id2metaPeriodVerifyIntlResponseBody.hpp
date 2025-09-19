// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID2METAPERIODVERIFYINTLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ID2METAPERIODVERIFYINTLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Id2MetaPeriodVerifyIntlResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class Id2MetaPeriodVerifyIntlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id2MetaPeriodVerifyIntlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, Id2MetaPeriodVerifyIntlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    Id2MetaPeriodVerifyIntlResponseBody() = default ;
    Id2MetaPeriodVerifyIntlResponseBody(const Id2MetaPeriodVerifyIntlResponseBody &) = default ;
    Id2MetaPeriodVerifyIntlResponseBody(Id2MetaPeriodVerifyIntlResponseBody &&) = default ;
    Id2MetaPeriodVerifyIntlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id2MetaPeriodVerifyIntlResponseBody() = default ;
    Id2MetaPeriodVerifyIntlResponseBody& operator=(const Id2MetaPeriodVerifyIntlResponseBody &) = default ;
    Id2MetaPeriodVerifyIntlResponseBody& operator=(Id2MetaPeriodVerifyIntlResponseBody &&) = default ;
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
    inline Id2MetaPeriodVerifyIntlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline Id2MetaPeriodVerifyIntlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline Id2MetaPeriodVerifyIntlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const Id2MetaPeriodVerifyIntlResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, Id2MetaPeriodVerifyIntlResponseBodyResult) };
    inline Id2MetaPeriodVerifyIntlResponseBodyResult result() { DARABONBA_PTR_GET(result_, Id2MetaPeriodVerifyIntlResponseBodyResult) };
    inline Id2MetaPeriodVerifyIntlResponseBody& setResult(const Id2MetaPeriodVerifyIntlResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline Id2MetaPeriodVerifyIntlResponseBody& setResult(Id2MetaPeriodVerifyIntlResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // [Return to Code](https://www.alibabacloud.com/help/en/ekyc/latest/dateverify?spm=a2c63.p38356.0.i32#22facb6ab6ui1).
    std::shared_ptr<string> code_ = nullptr;
    // A detailed description of the response code.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Return result
    std::shared_ptr<Id2MetaPeriodVerifyIntlResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
