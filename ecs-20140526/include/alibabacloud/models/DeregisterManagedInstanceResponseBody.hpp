// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEREGISTERMANAGEDINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DEREGISTERMANAGEDINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeregisterManagedInstanceResponseBodyInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DeregisterManagedInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeregisterManagedInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeregisterManagedInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeregisterManagedInstanceResponseBody() = default ;
    DeregisterManagedInstanceResponseBody(const DeregisterManagedInstanceResponseBody &) = default ;
    DeregisterManagedInstanceResponseBody(DeregisterManagedInstanceResponseBody &&) = default ;
    DeregisterManagedInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeregisterManagedInstanceResponseBody() = default ;
    DeregisterManagedInstanceResponseBody& operator=(const DeregisterManagedInstanceResponseBody &) = default ;
    DeregisterManagedInstanceResponseBody& operator=(DeregisterManagedInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instance_ != nullptr
        && this->requestId_ != nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const DeregisterManagedInstanceResponseBodyInstance & instance() const { DARABONBA_PTR_GET_CONST(instance_, DeregisterManagedInstanceResponseBodyInstance) };
    inline DeregisterManagedInstanceResponseBodyInstance instance() { DARABONBA_PTR_GET(instance_, DeregisterManagedInstanceResponseBodyInstance) };
    inline DeregisterManagedInstanceResponseBody& setInstance(const DeregisterManagedInstanceResponseBodyInstance & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline DeregisterManagedInstanceResponseBody& setInstance(DeregisterManagedInstanceResponseBodyInstance && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeregisterManagedInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the managed instances.
    std::shared_ptr<DeregisterManagedInstanceResponseBodyInstance> instance_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
