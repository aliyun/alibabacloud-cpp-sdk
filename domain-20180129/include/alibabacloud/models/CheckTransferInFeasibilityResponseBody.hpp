// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKTRANSFERINFEASIBILITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKTRANSFERINFEASIBILITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class CheckTransferInFeasibilityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckTransferInFeasibilityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CanTransfer, canTransfer_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckTransferInFeasibilityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CanTransfer, canTransfer_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckTransferInFeasibilityResponseBody() = default ;
    CheckTransferInFeasibilityResponseBody(const CheckTransferInFeasibilityResponseBody &) = default ;
    CheckTransferInFeasibilityResponseBody(CheckTransferInFeasibilityResponseBody &&) = default ;
    CheckTransferInFeasibilityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckTransferInFeasibilityResponseBody() = default ;
    CheckTransferInFeasibilityResponseBody& operator=(const CheckTransferInFeasibilityResponseBody &) = default ;
    CheckTransferInFeasibilityResponseBody& operator=(CheckTransferInFeasibilityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canTransfer_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->productId_ == nullptr && return this->requestId_ == nullptr; };
    // canTransfer Field Functions 
    bool hasCanTransfer() const { return this->canTransfer_ != nullptr;};
    void deleteCanTransfer() { this->canTransfer_ = nullptr;};
    inline bool canTransfer() const { DARABONBA_PTR_GET_DEFAULT(canTransfer_, false) };
    inline CheckTransferInFeasibilityResponseBody& setCanTransfer(bool canTransfer) { DARABONBA_PTR_SET_VALUE(canTransfer_, canTransfer) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CheckTransferInFeasibilityResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CheckTransferInFeasibilityResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline CheckTransferInFeasibilityResponseBody& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckTransferInFeasibilityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> canTransfer_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
