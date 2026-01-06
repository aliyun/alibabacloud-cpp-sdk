// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNRCINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNRCINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class RunRCInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunRCInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIdSets, instanceIdSets_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunRCInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIdSets, instanceIdSets_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunRCInstancesResponseBody() = default ;
    RunRCInstancesResponseBody(const RunRCInstancesResponseBody &) = default ;
    RunRCInstancesResponseBody(RunRCInstancesResponseBody &&) = default ;
    RunRCInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunRCInstancesResponseBody() = default ;
    RunRCInstancesResponseBody& operator=(const RunRCInstancesResponseBody &) = default ;
    RunRCInstancesResponseBody& operator=(RunRCInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceIdSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceIdSets& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceIdSet, instanceIdSet_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceIdSets& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceIdSet, instanceIdSet_);
      };
      InstanceIdSets() = default ;
      InstanceIdSets(const InstanceIdSets &) = default ;
      InstanceIdSets(InstanceIdSets &&) = default ;
      InstanceIdSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceIdSets() = default ;
      InstanceIdSets& operator=(const InstanceIdSets &) = default ;
      InstanceIdSets& operator=(InstanceIdSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceIdSet_ == nullptr; };
      // instanceIdSet Field Functions 
      bool hasInstanceIdSet() const { return this->instanceIdSet_ != nullptr;};
      void deleteInstanceIdSet() { this->instanceIdSet_ = nullptr;};
      inline const vector<string> & getInstanceIdSet() const { DARABONBA_PTR_GET_CONST(instanceIdSet_, vector<string>) };
      inline vector<string> getInstanceIdSet() { DARABONBA_PTR_GET(instanceIdSet_, vector<string>) };
      inline InstanceIdSets& setInstanceIdSet(const vector<string> & instanceIdSet) { DARABONBA_PTR_SET_VALUE(instanceIdSet_, instanceIdSet) };
      inline InstanceIdSets& setInstanceIdSet(vector<string> && instanceIdSet) { DARABONBA_PTR_SET_RVALUE(instanceIdSet_, instanceIdSet) };


    protected:
      shared_ptr<vector<string>> instanceIdSet_ {};
    };

    virtual bool empty() const override { return this->instanceIdSets_ == nullptr
        && this->orderId_ == nullptr && this->requestId_ == nullptr; };
    // instanceIdSets Field Functions 
    bool hasInstanceIdSets() const { return this->instanceIdSets_ != nullptr;};
    void deleteInstanceIdSets() { this->instanceIdSets_ = nullptr;};
    inline const RunRCInstancesResponseBody::InstanceIdSets & getInstanceIdSets() const { DARABONBA_PTR_GET_CONST(instanceIdSets_, RunRCInstancesResponseBody::InstanceIdSets) };
    inline RunRCInstancesResponseBody::InstanceIdSets getInstanceIdSets() { DARABONBA_PTR_GET(instanceIdSets_, RunRCInstancesResponseBody::InstanceIdSets) };
    inline RunRCInstancesResponseBody& setInstanceIdSets(const RunRCInstancesResponseBody::InstanceIdSets & instanceIdSets) { DARABONBA_PTR_SET_VALUE(instanceIdSets_, instanceIdSets) };
    inline RunRCInstancesResponseBody& setInstanceIdSets(RunRCInstancesResponseBody::InstanceIdSets && instanceIdSets) { DARABONBA_PTR_SET_RVALUE(instanceIdSets_, instanceIdSets) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline RunRCInstancesResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunRCInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance IDs (InstanceIdSet).
    shared_ptr<RunRCInstancesResponseBody::InstanceIdSets> instanceIdSets_ {};
    // The order ID.
    shared_ptr<string> orderId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
