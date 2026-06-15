// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPLIFECYCLEPOLICYEXECUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STOPLIFECYCLEPOLICYEXECUTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class StopLifecyclePolicyExecutionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopLifecyclePolicyExecutionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, StopLifecyclePolicyExecutionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    StopLifecyclePolicyExecutionResponseBody() = default ;
    StopLifecyclePolicyExecutionResponseBody(const StopLifecyclePolicyExecutionResponseBody &) = default ;
    StopLifecyclePolicyExecutionResponseBody(StopLifecyclePolicyExecutionResponseBody &&) = default ;
    StopLifecyclePolicyExecutionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopLifecyclePolicyExecutionResponseBody() = default ;
    StopLifecyclePolicyExecutionResponseBody& operator=(const StopLifecyclePolicyExecutionResponseBody &) = default ;
    StopLifecyclePolicyExecutionResponseBody& operator=(StopLifecyclePolicyExecutionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StopLifecyclePolicyExecutionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline StopLifecyclePolicyExecutionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    // 
    // A request ID is returned regardless of whether the call succeeds.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request succeeded.
    // 
    // Valid values:
    // 
    // - true: The request succeeded.
    // 
    // - false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
