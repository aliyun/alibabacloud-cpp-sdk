// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IFLIGHTORDERDETAILQUERYRESPONSEBODYMODULEFLIGHTSALEORDERFLIGHTORDERINSURELIST_HPP_
#define ALIBABACLOUD_MODELS_IFLIGHTORDERDETAILQUERYRESPONSEBODYMODULEFLIGHTSALEORDERFLIGHTORDERINSURELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList& obj) { 
      DARABONBA_PTR_TO_JSON(ins_order_id, insOrderId_);
      DARABONBA_PTR_TO_JSON(ins_pay_type, insPayType_);
      DARABONBA_PTR_TO_JSON(ins_total_price, insTotalPrice_);
      DARABONBA_PTR_TO_JSON(trade_action, tradeAction_);
    };
    friend void from_json(const Darabonba::Json& j, IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList& obj) { 
      DARABONBA_PTR_FROM_JSON(ins_order_id, insOrderId_);
      DARABONBA_PTR_FROM_JSON(ins_pay_type, insPayType_);
      DARABONBA_PTR_FROM_JSON(ins_total_price, insTotalPrice_);
      DARABONBA_PTR_FROM_JSON(trade_action, tradeAction_);
    };
    IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList() = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList(const IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList &) = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList(IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList &&) = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList() = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList& operator=(const IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList &) = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList& operator=(IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->insOrderId_ != nullptr
        && this->insPayType_ != nullptr && this->insTotalPrice_ != nullptr && this->tradeAction_ != nullptr; };
    // insOrderId Field Functions 
    bool hasInsOrderId() const { return this->insOrderId_ != nullptr;};
    void deleteInsOrderId() { this->insOrderId_ = nullptr;};
    inline string insOrderId() const { DARABONBA_PTR_GET_DEFAULT(insOrderId_, "") };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList& setInsOrderId(string insOrderId) { DARABONBA_PTR_SET_VALUE(insOrderId_, insOrderId) };


    // insPayType Field Functions 
    bool hasInsPayType() const { return this->insPayType_ != nullptr;};
    void deleteInsPayType() { this->insPayType_ = nullptr;};
    inline string insPayType() const { DARABONBA_PTR_GET_DEFAULT(insPayType_, "") };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList& setInsPayType(string insPayType) { DARABONBA_PTR_SET_VALUE(insPayType_, insPayType) };


    // insTotalPrice Field Functions 
    bool hasInsTotalPrice() const { return this->insTotalPrice_ != nullptr;};
    void deleteInsTotalPrice() { this->insTotalPrice_ = nullptr;};
    inline int32_t insTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(insTotalPrice_, 0) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList& setInsTotalPrice(int32_t insTotalPrice) { DARABONBA_PTR_SET_VALUE(insTotalPrice_, insTotalPrice) };


    // tradeAction Field Functions 
    bool hasTradeAction() const { return this->tradeAction_ != nullptr;};
    void deleteTradeAction() { this->tradeAction_ = nullptr;};
    inline string tradeAction() const { DARABONBA_PTR_GET_DEFAULT(tradeAction_, "") };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList& setTradeAction(string tradeAction) { DARABONBA_PTR_SET_VALUE(tradeAction_, tradeAction) };


  protected:
    std::shared_ptr<string> insOrderId_ = nullptr;
    std::shared_ptr<string> insPayType_ = nullptr;
    std::shared_ptr<int32_t> insTotalPrice_ = nullptr;
    std::shared_ptr<string> tradeAction_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
