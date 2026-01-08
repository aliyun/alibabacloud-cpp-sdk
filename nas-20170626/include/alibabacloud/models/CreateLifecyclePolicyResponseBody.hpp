// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIFECYCLEPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELIFECYCLEPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateLifecyclePolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLifecyclePolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LifecyclePolicyId, lifecyclePolicyId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLifecyclePolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LifecyclePolicyId, lifecyclePolicyId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateLifecyclePolicyResponseBody() = default ;
    CreateLifecyclePolicyResponseBody(const CreateLifecyclePolicyResponseBody &) = default ;
    CreateLifecyclePolicyResponseBody(CreateLifecyclePolicyResponseBody &&) = default ;
    CreateLifecyclePolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLifecyclePolicyResponseBody() = default ;
    CreateLifecyclePolicyResponseBody& operator=(const CreateLifecyclePolicyResponseBody &) = default ;
    CreateLifecyclePolicyResponseBody& operator=(CreateLifecyclePolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lifecyclePolicyId_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // lifecyclePolicyId Field Functions 
    bool hasLifecyclePolicyId() const { return this->lifecyclePolicyId_ != nullptr;};
    void deleteLifecyclePolicyId() { this->lifecyclePolicyId_ = nullptr;};
    inline string getLifecyclePolicyId() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePolicyId_, "") };
    inline CreateLifecyclePolicyResponseBody& setLifecyclePolicyId(string lifecyclePolicyId) { DARABONBA_PTR_SET_VALUE(lifecyclePolicyId_, lifecyclePolicyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLifecyclePolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateLifecyclePolicyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> lifecyclePolicyId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
