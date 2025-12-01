// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELCHATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CANCELCHATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CancelChatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelChatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CancelResult, cancelResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelChatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CancelResult, cancelResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CancelChatResponseBody() = default ;
    CancelChatResponseBody(const CancelChatResponseBody &) = default ;
    CancelChatResponseBody(CancelChatResponseBody &&) = default ;
    CancelChatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelChatResponseBody() = default ;
    CancelChatResponseBody& operator=(const CancelChatResponseBody &) = default ;
    CancelChatResponseBody& operator=(CancelChatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cancelResult_ == nullptr
        && return this->requestId_ == nullptr; };
    // cancelResult Field Functions 
    bool hasCancelResult() const { return this->cancelResult_ != nullptr;};
    void deleteCancelResult() { this->cancelResult_ = nullptr;};
    inline bool cancelResult() const { DARABONBA_PTR_GET_DEFAULT(cancelResult_, false) };
    inline CancelChatResponseBody& setCancelResult(bool cancelResult) { DARABONBA_PTR_SET_VALUE(cancelResult_, cancelResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CancelChatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> cancelResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
