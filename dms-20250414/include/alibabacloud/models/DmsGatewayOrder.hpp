// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DMSGATEWAYORDER_HPP_
#define ALIBABACLOUD_MODELS_DMSGATEWAYORDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DmsGatewayOrder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DmsGatewayOrder& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(FreeOrder, freeOrder_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(PayNum, payNum_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, DmsGatewayOrder& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(FreeOrder, freeOrder_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(PayNum, payNum_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    DmsGatewayOrder() = default ;
    DmsGatewayOrder(const DmsGatewayOrder &) = default ;
    DmsGatewayOrder(DmsGatewayOrder &&) = default ;
    DmsGatewayOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DmsGatewayOrder() = default ;
    DmsGatewayOrder& operator=(const DmsGatewayOrder &) = default ;
    DmsGatewayOrder& operator=(DmsGatewayOrder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->chargeType_ == nullptr && this->commodityCode_ == nullptr && this->expireTime_ == nullptr && this->freeOrder_ == nullptr && this->gmtCreate_ == nullptr
        && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->orderId_ == nullptr && this->payNum_ == nullptr && this->region_ == nullptr
        && this->state_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DmsGatewayOrder& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DmsGatewayOrder& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DmsGatewayOrder& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DmsGatewayOrder& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // freeOrder Field Functions 
    bool hasFreeOrder() const { return this->freeOrder_ != nullptr;};
    void deleteFreeOrder() { this->freeOrder_ = nullptr;};
    inline bool getFreeOrder() const { DARABONBA_PTR_GET_DEFAULT(freeOrder_, false) };
    inline DmsGatewayOrder& setFreeOrder(bool freeOrder) { DARABONBA_PTR_SET_VALUE(freeOrder_, freeOrder) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DmsGatewayOrder& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DmsGatewayOrder& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DmsGatewayOrder& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline DmsGatewayOrder& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // payNum Field Functions 
    bool hasPayNum() const { return this->payNum_ != nullptr;};
    void deletePayNum() { this->payNum_ = nullptr;};
    inline int32_t getPayNum() const { DARABONBA_PTR_GET_DEFAULT(payNum_, 0) };
    inline DmsGatewayOrder& setPayNum(int32_t payNum) { DARABONBA_PTR_SET_VALUE(payNum_, payNum) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DmsGatewayOrder& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DmsGatewayOrder& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    shared_ptr<string> bizType_ {};
    shared_ptr<string> chargeType_ {};
    shared_ptr<string> commodityCode_ {};
    shared_ptr<string> expireTime_ {};
    shared_ptr<bool> freeOrder_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> instanceType_ {};
    shared_ptr<int64_t> orderId_ {};
    shared_ptr<int32_t> payNum_ {};
    shared_ptr<string> region_ {};
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
