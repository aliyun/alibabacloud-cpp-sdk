// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMANAGEDINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMANAGEDINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class Instance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instance& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      };
      friend void from_json(const Darabonba::Json& j, Instance& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      };
      Instance() = default ;
      Instance(const Instance &) = default ;
      Instance(Instance &&) = default ;
      Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instance() = default ;
      Instance& operator=(const Instance &) = default ;
      Instance& operator=(Instance &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->instanceName_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Instance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    protected:
      // The managed instance ID.
      shared_ptr<string> instanceId_ {};
      // The ID of the managed instance.
      shared_ptr<string> instanceName_ {};
    };

    virtual bool empty() const override { return this->instance_ == nullptr
        && this->requestId_ == nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const ModifyManagedInstanceResponseBody::Instance & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, ModifyManagedInstanceResponseBody::Instance) };
    inline ModifyManagedInstanceResponseBody::Instance getInstance() { DARABONBA_PTR_GET(instance_, ModifyManagedInstanceResponseBody::Instance) };
    inline ModifyManagedInstanceResponseBody& setInstance(const ModifyManagedInstanceResponseBody::Instance & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline ModifyManagedInstanceResponseBody& setInstance(ModifyManagedInstanceResponseBody::Instance && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyManagedInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The name of the managed instance.
    shared_ptr<ModifyManagedInstanceResponseBody::Instance> instance_ {};
    // Details of the managed instance.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
