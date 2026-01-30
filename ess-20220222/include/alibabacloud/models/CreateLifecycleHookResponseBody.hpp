// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIFECYCLEHOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELIFECYCLEHOOKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateLifecycleHookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLifecycleHookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LifecycleHookId, lifecycleHookId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLifecycleHookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LifecycleHookId, lifecycleHookId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateLifecycleHookResponseBody() = default ;
    CreateLifecycleHookResponseBody(const CreateLifecycleHookResponseBody &) = default ;
    CreateLifecycleHookResponseBody(CreateLifecycleHookResponseBody &&) = default ;
    CreateLifecycleHookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLifecycleHookResponseBody() = default ;
    CreateLifecycleHookResponseBody& operator=(const CreateLifecycleHookResponseBody &) = default ;
    CreateLifecycleHookResponseBody& operator=(CreateLifecycleHookResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lifecycleHookId_ == nullptr
        && this->requestId_ == nullptr; };
    // lifecycleHookId Field Functions 
    bool hasLifecycleHookId() const { return this->lifecycleHookId_ != nullptr;};
    void deleteLifecycleHookId() { this->lifecycleHookId_ = nullptr;};
    inline string getLifecycleHookId() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookId_, "") };
    inline CreateLifecycleHookResponseBody& setLifecycleHookId(string lifecycleHookId) { DARABONBA_PTR_SET_VALUE(lifecycleHookId_, lifecycleHookId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLifecycleHookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the lifecycle hook.
    shared_ptr<string> lifecycleHookId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
