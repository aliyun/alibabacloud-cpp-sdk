// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNRCINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNRCINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunRCInstancesResponseBodyInstanceIdSets.hpp>
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
    virtual bool empty() const override { return this->instanceIdSets_ == nullptr
        && return this->orderId_ == nullptr && return this->requestId_ == nullptr; };
    // instanceIdSets Field Functions 
    bool hasInstanceIdSets() const { return this->instanceIdSets_ != nullptr;};
    void deleteInstanceIdSets() { this->instanceIdSets_ = nullptr;};
    inline const RunRCInstancesResponseBodyInstanceIdSets & instanceIdSets() const { DARABONBA_PTR_GET_CONST(instanceIdSets_, RunRCInstancesResponseBodyInstanceIdSets) };
    inline RunRCInstancesResponseBodyInstanceIdSets instanceIdSets() { DARABONBA_PTR_GET(instanceIdSets_, RunRCInstancesResponseBodyInstanceIdSets) };
    inline RunRCInstancesResponseBody& setInstanceIdSets(const RunRCInstancesResponseBodyInstanceIdSets & instanceIdSets) { DARABONBA_PTR_SET_VALUE(instanceIdSets_, instanceIdSets) };
    inline RunRCInstancesResponseBody& setInstanceIdSets(RunRCInstancesResponseBodyInstanceIdSets && instanceIdSets) { DARABONBA_PTR_SET_RVALUE(instanceIdSets_, instanceIdSets) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline RunRCInstancesResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunRCInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance IDs (InstanceIdSet).
    std::shared_ptr<RunRCInstancesResponseBodyInstanceIdSets> instanceIdSets_ = nullptr;
    // The order ID.
    std::shared_ptr<string> orderId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
