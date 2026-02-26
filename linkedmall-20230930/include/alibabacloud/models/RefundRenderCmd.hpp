// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDRENDERCMD_HPP_
#define ALIBABACLOUD_MODELS_REFUNDRENDERCMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class RefundRenderCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundRenderCmd& obj) { 
      DARABONBA_PTR_TO_JSON(bizClaimType, bizClaimType_);
      DARABONBA_PTR_TO_JSON(goodsStatus, goodsStatus_);
      DARABONBA_PTR_TO_JSON(orderLineId, orderLineId_);
    };
    friend void from_json(const Darabonba::Json& j, RefundRenderCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(bizClaimType, bizClaimType_);
      DARABONBA_PTR_FROM_JSON(goodsStatus, goodsStatus_);
      DARABONBA_PTR_FROM_JSON(orderLineId, orderLineId_);
    };
    RefundRenderCmd() = default ;
    RefundRenderCmd(const RefundRenderCmd &) = default ;
    RefundRenderCmd(RefundRenderCmd &&) = default ;
    RefundRenderCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundRenderCmd() = default ;
    RefundRenderCmd& operator=(const RefundRenderCmd &) = default ;
    RefundRenderCmd& operator=(RefundRenderCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizClaimType_ == nullptr
        && this->goodsStatus_ == nullptr && this->orderLineId_ == nullptr; };
    // bizClaimType Field Functions 
    bool hasBizClaimType() const { return this->bizClaimType_ != nullptr;};
    void deleteBizClaimType() { this->bizClaimType_ = nullptr;};
    inline int32_t getBizClaimType() const { DARABONBA_PTR_GET_DEFAULT(bizClaimType_, 0) };
    inline RefundRenderCmd& setBizClaimType(int32_t bizClaimType) { DARABONBA_PTR_SET_VALUE(bizClaimType_, bizClaimType) };


    // goodsStatus Field Functions 
    bool hasGoodsStatus() const { return this->goodsStatus_ != nullptr;};
    void deleteGoodsStatus() { this->goodsStatus_ = nullptr;};
    inline int32_t getGoodsStatus() const { DARABONBA_PTR_GET_DEFAULT(goodsStatus_, 0) };
    inline RefundRenderCmd& setGoodsStatus(int32_t goodsStatus) { DARABONBA_PTR_SET_VALUE(goodsStatus_, goodsStatus) };


    // orderLineId Field Functions 
    bool hasOrderLineId() const { return this->orderLineId_ != nullptr;};
    void deleteOrderLineId() { this->orderLineId_ = nullptr;};
    inline string getOrderLineId() const { DARABONBA_PTR_GET_DEFAULT(orderLineId_, "") };
    inline RefundRenderCmd& setOrderLineId(string orderLineId) { DARABONBA_PTR_SET_VALUE(orderLineId_, orderLineId) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> bizClaimType_ {};
    // This parameter is required.
    shared_ptr<int32_t> goodsStatus_ {};
    // This parameter is required.
    shared_ptr<string> orderLineId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
