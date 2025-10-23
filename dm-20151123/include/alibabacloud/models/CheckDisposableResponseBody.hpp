// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDISPOSABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKDISPOSABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class CheckDisposableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDisposableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsDisposable, isDisposable_);
      DARABONBA_PTR_TO_JSON(IsFormatValid, isFormatValid_);
      DARABONBA_PTR_TO_JSON(IsMxValid, isMxValid_);
      DARABONBA_PTR_TO_JSON(IsOkToSend, isOkToSend_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDisposableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsDisposable, isDisposable_);
      DARABONBA_PTR_FROM_JSON(IsFormatValid, isFormatValid_);
      DARABONBA_PTR_FROM_JSON(IsMxValid, isMxValid_);
      DARABONBA_PTR_FROM_JSON(IsOkToSend, isOkToSend_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckDisposableResponseBody() = default ;
    CheckDisposableResponseBody(const CheckDisposableResponseBody &) = default ;
    CheckDisposableResponseBody(CheckDisposableResponseBody &&) = default ;
    CheckDisposableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDisposableResponseBody() = default ;
    CheckDisposableResponseBody& operator=(const CheckDisposableResponseBody &) = default ;
    CheckDisposableResponseBody& operator=(CheckDisposableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isDisposable_ == nullptr
        && return this->isFormatValid_ == nullptr && return this->isMxValid_ == nullptr && return this->isOkToSend_ == nullptr && return this->requestId_ == nullptr; };
    // isDisposable Field Functions 
    bool hasIsDisposable() const { return this->isDisposable_ != nullptr;};
    void deleteIsDisposable() { this->isDisposable_ = nullptr;};
    inline string isDisposable() const { DARABONBA_PTR_GET_DEFAULT(isDisposable_, "") };
    inline CheckDisposableResponseBody& setIsDisposable(string isDisposable) { DARABONBA_PTR_SET_VALUE(isDisposable_, isDisposable) };


    // isFormatValid Field Functions 
    bool hasIsFormatValid() const { return this->isFormatValid_ != nullptr;};
    void deleteIsFormatValid() { this->isFormatValid_ = nullptr;};
    inline string isFormatValid() const { DARABONBA_PTR_GET_DEFAULT(isFormatValid_, "") };
    inline CheckDisposableResponseBody& setIsFormatValid(string isFormatValid) { DARABONBA_PTR_SET_VALUE(isFormatValid_, isFormatValid) };


    // isMxValid Field Functions 
    bool hasIsMxValid() const { return this->isMxValid_ != nullptr;};
    void deleteIsMxValid() { this->isMxValid_ = nullptr;};
    inline string isMxValid() const { DARABONBA_PTR_GET_DEFAULT(isMxValid_, "") };
    inline CheckDisposableResponseBody& setIsMxValid(string isMxValid) { DARABONBA_PTR_SET_VALUE(isMxValid_, isMxValid) };


    // isOkToSend Field Functions 
    bool hasIsOkToSend() const { return this->isOkToSend_ != nullptr;};
    void deleteIsOkToSend() { this->isOkToSend_ = nullptr;};
    inline string isOkToSend() const { DARABONBA_PTR_GET_DEFAULT(isOkToSend_, "") };
    inline CheckDisposableResponseBody& setIsOkToSend(string isOkToSend) { DARABONBA_PTR_SET_VALUE(isOkToSend_, isOkToSend) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckDisposableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> isDisposable_ = nullptr;
    std::shared_ptr<string> isFormatValid_ = nullptr;
    std::shared_ptr<string> isMxValid_ = nullptr;
    std::shared_ptr<string> isOkToSend_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
