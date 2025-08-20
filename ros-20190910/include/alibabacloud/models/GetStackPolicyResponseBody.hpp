// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_ANY_TO_JSON(StackPolicyBody, stackPolicyBody_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_ANY_FROM_JSON(StackPolicyBody, stackPolicyBody_);
    };
    GetStackPolicyResponseBody() = default ;
    GetStackPolicyResponseBody(const GetStackPolicyResponseBody &) = default ;
    GetStackPolicyResponseBody(GetStackPolicyResponseBody &&) = default ;
    GetStackPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackPolicyResponseBody() = default ;
    GetStackPolicyResponseBody& operator=(const GetStackPolicyResponseBody &) = default ;
    GetStackPolicyResponseBody& operator=(GetStackPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->stackPolicyBody_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStackPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackPolicyBody Field Functions 
    bool hasStackPolicyBody() const { return this->stackPolicyBody_ != nullptr;};
    void deleteStackPolicyBody() { this->stackPolicyBody_ = nullptr;};
    inline     const Darabonba::Json & stackPolicyBody() const { DARABONBA_GET(stackPolicyBody_) };
    Darabonba::Json & stackPolicyBody() { DARABONBA_GET(stackPolicyBody_) };
    inline GetStackPolicyResponseBody& setStackPolicyBody(const Darabonba::Json & stackPolicyBody) { DARABONBA_SET_VALUE(stackPolicyBody_, stackPolicyBody) };
    inline GetStackPolicyResponseBody& setStackPolicyBody(Darabonba::Json & stackPolicyBody) { DARABONBA_SET_RVALUE(stackPolicyBody_, stackPolicyBody) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The structure that contains the stack policy body. The stack policy body must be 1 to 16,384 bytes in length.
    Darabonba::Json stackPolicyBody_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
