// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPUSHMETERINGDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPUSHMETERINGDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePushMeteringDataResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketplaceIntl20221230
{
namespace Models
{
  class DescribePushMeteringDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePushMeteringDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ForceFatal, forceFatal_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePushMeteringDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ForceFatal, forceFatal_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribePushMeteringDataResponseBody() = default ;
    DescribePushMeteringDataResponseBody(const DescribePushMeteringDataResponseBody &) = default ;
    DescribePushMeteringDataResponseBody(DescribePushMeteringDataResponseBody &&) = default ;
    DescribePushMeteringDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePushMeteringDataResponseBody() = default ;
    DescribePushMeteringDataResponseBody& operator=(const DescribePushMeteringDataResponseBody &) = default ;
    DescribePushMeteringDataResponseBody& operator=(DescribePushMeteringDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->dynamicMessage_ != nullptr && this->forceFatal_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->result_ != nullptr
        && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePushMeteringDataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string dynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribePushMeteringDataResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // forceFatal Field Functions 
    bool hasForceFatal() const { return this->forceFatal_ != nullptr;};
    void deleteForceFatal() { this->forceFatal_ = nullptr;};
    inline bool forceFatal() const { DARABONBA_PTR_GET_DEFAULT(forceFatal_, false) };
    inline DescribePushMeteringDataResponseBody& setForceFatal(bool forceFatal) { DARABONBA_PTR_SET_VALUE(forceFatal_, forceFatal) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePushMeteringDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePushMeteringDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribePushMeteringDataResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, DescribePushMeteringDataResponseBodyResult) };
    inline DescribePushMeteringDataResponseBodyResult result() { DARABONBA_PTR_GET(result_, DescribePushMeteringDataResponseBodyResult) };
    inline DescribePushMeteringDataResponseBody& setResult(const DescribePushMeteringDataResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribePushMeteringDataResponseBody& setResult(DescribePushMeteringDataResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribePushMeteringDataResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> dynamicMessage_ = nullptr;
    std::shared_ptr<bool> forceFatal_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribePushMeteringDataResponseBodyResult> result_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketplaceIntl20221230
#endif
