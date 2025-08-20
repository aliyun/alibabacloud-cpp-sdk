// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWSTACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWSTACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PreviewStackResponseBodyStack.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class PreviewStackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewStackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Stack, stack_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewStackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Stack, stack_);
    };
    PreviewStackResponseBody() = default ;
    PreviewStackResponseBody(const PreviewStackResponseBody &) = default ;
    PreviewStackResponseBody(PreviewStackResponseBody &&) = default ;
    PreviewStackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewStackResponseBody() = default ;
    PreviewStackResponseBody& operator=(const PreviewStackResponseBody &) = default ;
    PreviewStackResponseBody& operator=(PreviewStackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->stack_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreviewStackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stack Field Functions 
    bool hasStack() const { return this->stack_ != nullptr;};
    void deleteStack() { this->stack_ = nullptr;};
    inline const PreviewStackResponseBodyStack & stack() const { DARABONBA_PTR_GET_CONST(stack_, PreviewStackResponseBodyStack) };
    inline PreviewStackResponseBodyStack stack() { DARABONBA_PTR_GET(stack_, PreviewStackResponseBodyStack) };
    inline PreviewStackResponseBody& setStack(const PreviewStackResponseBodyStack & stack) { DARABONBA_PTR_SET_VALUE(stack_, stack) };
    inline PreviewStackResponseBody& setStack(PreviewStackResponseBodyStack && stack) { DARABONBA_PTR_SET_RVALUE(stack_, stack) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the stack that is previewed.
    std::shared_ptr<PreviewStackResponseBodyStack> stack_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
