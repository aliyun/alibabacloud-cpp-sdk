// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORDERSUMMARYFORPARTNERRESPONSEBODYDATAORDERLINES_HPP_
#define ALIBABACLOUD_MODELS_GETORDERSUMMARYFORPARTNERRESPONSEBODYDATAORDERLINES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mseap20210118
{
namespace Models
{
  class GetOrderSummaryForPartnerResponseBodyDataOrderLines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrderSummaryForPartnerResponseBodyDataOrderLines& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrderLineId, orderLineId_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrderSummaryForPartnerResponseBodyDataOrderLines& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrderLineId, orderLineId_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
    };
    GetOrderSummaryForPartnerResponseBodyDataOrderLines() = default ;
    GetOrderSummaryForPartnerResponseBodyDataOrderLines(const GetOrderSummaryForPartnerResponseBodyDataOrderLines &) = default ;
    GetOrderSummaryForPartnerResponseBodyDataOrderLines(GetOrderSummaryForPartnerResponseBodyDataOrderLines &&) = default ;
    GetOrderSummaryForPartnerResponseBodyDataOrderLines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrderSummaryForPartnerResponseBodyDataOrderLines() = default ;
    GetOrderSummaryForPartnerResponseBodyDataOrderLines& operator=(const GetOrderSummaryForPartnerResponseBodyDataOrderLines &) = default ;
    GetOrderSummaryForPartnerResponseBodyDataOrderLines& operator=(GetOrderSummaryForPartnerResponseBodyDataOrderLines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->orderLineId_ == nullptr && return this->orderType_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetOrderSummaryForPartnerResponseBodyDataOrderLines& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderLineId Field Functions 
    bool hasOrderLineId() const { return this->orderLineId_ != nullptr;};
    void deleteOrderLineId() { this->orderLineId_ = nullptr;};
    inline string orderLineId() const { DARABONBA_PTR_GET_DEFAULT(orderLineId_, "") };
    inline GetOrderSummaryForPartnerResponseBodyDataOrderLines& setOrderLineId(string orderLineId) { DARABONBA_PTR_SET_VALUE(orderLineId_, orderLineId) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline GetOrderSummaryForPartnerResponseBodyDataOrderLines& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> orderLineId_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mseap20210118
#endif
