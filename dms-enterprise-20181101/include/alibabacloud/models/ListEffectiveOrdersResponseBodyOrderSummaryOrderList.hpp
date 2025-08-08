// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEFFECTIVEORDERSRESPONSEBODYORDERSUMMARYORDERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTEFFECTIVEORDERSRESPONSEBODYORDERSUMMARYORDERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListEffectiveOrdersResponseBodyOrderSummaryOrderList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEffectiveOrdersResponseBodyOrderSummaryOrderList& obj) { 
      DARABONBA_PTR_TO_JSON(BuyerId, buyerId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InsNum, insNum_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListEffectiveOrdersResponseBodyOrderSummaryOrderList& obj) { 
      DARABONBA_PTR_FROM_JSON(BuyerId, buyerId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InsNum, insNum_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListEffectiveOrdersResponseBodyOrderSummaryOrderList() = default ;
    ListEffectiveOrdersResponseBodyOrderSummaryOrderList(const ListEffectiveOrdersResponseBodyOrderSummaryOrderList &) = default ;
    ListEffectiveOrdersResponseBodyOrderSummaryOrderList(ListEffectiveOrdersResponseBodyOrderSummaryOrderList &&) = default ;
    ListEffectiveOrdersResponseBodyOrderSummaryOrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEffectiveOrdersResponseBodyOrderSummaryOrderList() = default ;
    ListEffectiveOrdersResponseBodyOrderSummaryOrderList& operator=(const ListEffectiveOrdersResponseBodyOrderSummaryOrderList &) = default ;
    ListEffectiveOrdersResponseBodyOrderSummaryOrderList& operator=(ListEffectiveOrdersResponseBodyOrderSummaryOrderList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buyerId_ != nullptr
        && this->endTime_ != nullptr && this->insNum_ != nullptr && this->instanceId_ != nullptr && this->orderId_ != nullptr && this->startTime_ != nullptr; };
    // buyerId Field Functions 
    bool hasBuyerId() const { return this->buyerId_ != nullptr;};
    void deleteBuyerId() { this->buyerId_ = nullptr;};
    inline string buyerId() const { DARABONBA_PTR_GET_DEFAULT(buyerId_, "") };
    inline ListEffectiveOrdersResponseBodyOrderSummaryOrderList& setBuyerId(string buyerId) { DARABONBA_PTR_SET_VALUE(buyerId_, buyerId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListEffectiveOrdersResponseBodyOrderSummaryOrderList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // insNum Field Functions 
    bool hasInsNum() const { return this->insNum_ != nullptr;};
    void deleteInsNum() { this->insNum_ = nullptr;};
    inline string insNum() const { DARABONBA_PTR_GET_DEFAULT(insNum_, "") };
    inline ListEffectiveOrdersResponseBodyOrderSummaryOrderList& setInsNum(string insNum) { DARABONBA_PTR_SET_VALUE(insNum_, insNum) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListEffectiveOrdersResponseBodyOrderSummaryOrderList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline ListEffectiveOrdersResponseBodyOrderSummaryOrderList& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListEffectiveOrdersResponseBodyOrderSummaryOrderList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The UID of the user who placed the order.
    std::shared_ptr<string> buyerId_ = nullptr;
    // The time when the instance expires.
    std::shared_ptr<string> endTime_ = nullptr;
    // The maximum number of database instances that you can use DMS to manage.
    std::shared_ptr<string> insNum_ = nullptr;
    // The ID of the instance for the purchased service.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the order.
    std::shared_ptr<string> orderId_ = nullptr;
    // The time when the instance is started.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
