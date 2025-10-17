// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMANAGEDINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMANAGEDINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyManagedInstanceResponseBodyInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyManagedInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyManagedInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyManagedInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyManagedInstanceResponseBody() = default ;
    ModifyManagedInstanceResponseBody(const ModifyManagedInstanceResponseBody &) = default ;
    ModifyManagedInstanceResponseBody(ModifyManagedInstanceResponseBody &&) = default ;
    ModifyManagedInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyManagedInstanceResponseBody() = default ;
    ModifyManagedInstanceResponseBody& operator=(const ModifyManagedInstanceResponseBody &) = default ;
    ModifyManagedInstanceResponseBody& operator=(ModifyManagedInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instance_ == nullptr
        && return this->requestId_ == nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const ModifyManagedInstanceResponseBodyInstance & instance() const { DARABONBA_PTR_GET_CONST(instance_, ModifyManagedInstanceResponseBodyInstance) };
    inline ModifyManagedInstanceResponseBodyInstance instance() { DARABONBA_PTR_GET(instance_, ModifyManagedInstanceResponseBodyInstance) };
    inline ModifyManagedInstanceResponseBody& setInstance(const ModifyManagedInstanceResponseBodyInstance & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline ModifyManagedInstanceResponseBody& setInstance(ModifyManagedInstanceResponseBodyInstance && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyManagedInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The name of the managed instance.
    std::shared_ptr<ModifyManagedInstanceResponseBodyInstance> instance_ = nullptr;
    // Details of the managed instance.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
