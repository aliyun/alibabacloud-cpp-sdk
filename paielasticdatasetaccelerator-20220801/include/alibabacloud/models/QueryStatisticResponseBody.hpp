// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIElasticDatasetAccelerator20220801
{
namespace Models
{
  class QueryStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryStatisticResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(InstanceCapacityEachType, instanceCapacityEachType_);
      DARABONBA_ANY_TO_JSON(InstanceNumEachType, instanceNumEachType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_ANY_TO_JSON(SlotNumEachType, slotNumEachType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryStatisticResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(InstanceCapacityEachType, instanceCapacityEachType_);
      DARABONBA_ANY_FROM_JSON(InstanceNumEachType, instanceNumEachType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_ANY_FROM_JSON(SlotNumEachType, slotNumEachType_);
    };
    QueryStatisticResponseBody() = default ;
    QueryStatisticResponseBody(const QueryStatisticResponseBody &) = default ;
    QueryStatisticResponseBody(QueryStatisticResponseBody &&) = default ;
    QueryStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryStatisticResponseBody() = default ;
    QueryStatisticResponseBody& operator=(const QueryStatisticResponseBody &) = default ;
    QueryStatisticResponseBody& operator=(QueryStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceCapacityEachType_ == nullptr
        && this->instanceNumEachType_ == nullptr && this->requestId_ == nullptr && this->slotNumEachType_ == nullptr; };
    // instanceCapacityEachType Field Functions 
    bool hasInstanceCapacityEachType() const { return this->instanceCapacityEachType_ != nullptr;};
    void deleteInstanceCapacityEachType() { this->instanceCapacityEachType_ = nullptr;};
    inline     const Darabonba::Json & getInstanceCapacityEachType() const { DARABONBA_GET(instanceCapacityEachType_) };
    Darabonba::Json & getInstanceCapacityEachType() { DARABONBA_GET(instanceCapacityEachType_) };
    inline QueryStatisticResponseBody& setInstanceCapacityEachType(const Darabonba::Json & instanceCapacityEachType) { DARABONBA_SET_VALUE(instanceCapacityEachType_, instanceCapacityEachType) };
    inline QueryStatisticResponseBody& setInstanceCapacityEachType(Darabonba::Json && instanceCapacityEachType) { DARABONBA_SET_RVALUE(instanceCapacityEachType_, instanceCapacityEachType) };


    // instanceNumEachType Field Functions 
    bool hasInstanceNumEachType() const { return this->instanceNumEachType_ != nullptr;};
    void deleteInstanceNumEachType() { this->instanceNumEachType_ = nullptr;};
    inline     const Darabonba::Json & getInstanceNumEachType() const { DARABONBA_GET(instanceNumEachType_) };
    Darabonba::Json & getInstanceNumEachType() { DARABONBA_GET(instanceNumEachType_) };
    inline QueryStatisticResponseBody& setInstanceNumEachType(const Darabonba::Json & instanceNumEachType) { DARABONBA_SET_VALUE(instanceNumEachType_, instanceNumEachType) };
    inline QueryStatisticResponseBody& setInstanceNumEachType(Darabonba::Json && instanceNumEachType) { DARABONBA_SET_RVALUE(instanceNumEachType_, instanceNumEachType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slotNumEachType Field Functions 
    bool hasSlotNumEachType() const { return this->slotNumEachType_ != nullptr;};
    void deleteSlotNumEachType() { this->slotNumEachType_ = nullptr;};
    inline     const Darabonba::Json & getSlotNumEachType() const { DARABONBA_GET(slotNumEachType_) };
    Darabonba::Json & getSlotNumEachType() { DARABONBA_GET(slotNumEachType_) };
    inline QueryStatisticResponseBody& setSlotNumEachType(const Darabonba::Json & slotNumEachType) { DARABONBA_SET_VALUE(slotNumEachType_, slotNumEachType) };
    inline QueryStatisticResponseBody& setSlotNumEachType(Darabonba::Json && slotNumEachType) { DARABONBA_SET_RVALUE(slotNumEachType_, slotNumEachType) };


  protected:
    Darabonba::Json instanceCapacityEachType_ {};
    Darabonba::Json instanceNumEachType_ {};
    shared_ptr<string> requestId_ {};
    Darabonba::Json slotNumEachType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIElasticDatasetAccelerator20220801
#endif
