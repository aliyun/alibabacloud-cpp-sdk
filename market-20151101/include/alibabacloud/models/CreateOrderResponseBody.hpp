// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class CreateOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateOrderResponseBody() = default ;
    CreateOrderResponseBody(const CreateOrderResponseBody &) = default ;
    CreateOrderResponseBody(CreateOrderResponseBody &&) = default ;
    CreateOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrderResponseBody() = default ;
    CreateOrderResponseBody& operator=(const CreateOrderResponseBody &) = default ;
    CreateOrderResponseBody& operator=(CreateOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceIds& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceIds& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      InstanceIds() = default ;
      InstanceIds(const InstanceIds &) = default ;
      InstanceIds(InstanceIds &&) = default ;
      InstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceIds() = default ;
      InstanceIds& operator=(const InstanceIds &) = default ;
      InstanceIds& operator=(InstanceIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline const vector<string> & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
      inline vector<string> getInstanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
      inline InstanceIds& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
      inline InstanceIds& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    protected:
      shared_ptr<vector<string>> instanceId_ {};
    };

    virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->orderId_ == nullptr && this->requestId_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const CreateOrderResponseBody::InstanceIds & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, CreateOrderResponseBody::InstanceIds) };
    inline CreateOrderResponseBody::InstanceIds getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, CreateOrderResponseBody::InstanceIds) };
    inline CreateOrderResponseBody& setInstanceIds(const CreateOrderResponseBody::InstanceIds & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline CreateOrderResponseBody& setInstanceIds(CreateOrderResponseBody::InstanceIds && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateOrderResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateOrderResponseBody::InstanceIds> instanceIds_ {};
    shared_ptr<string> orderId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
