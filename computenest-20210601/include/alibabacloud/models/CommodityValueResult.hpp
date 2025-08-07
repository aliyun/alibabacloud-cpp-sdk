// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMODITYVALUERESULT_HPP_
#define ALIBABACLOUD_MODELS_COMMODITYVALUERESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CommodityValueResultOrder.hpp>
#include <alibabacloud/models/CommodityValueResultSubOrders.hpp>
#include <vector>
#include <alibabacloud/models/CommodityValueResultCoupons.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CommodityValueResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommodityValueResult& obj) { 
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(InquiryType, inquiryType_);
      DARABONBA_PTR_TO_JSON(SubOrders, subOrders_);
      DARABONBA_PTR_TO_JSON(Coupons, coupons_);
    };
    friend void from_json(const Darabonba::Json& j, CommodityValueResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(InquiryType, inquiryType_);
      DARABONBA_PTR_FROM_JSON(SubOrders, subOrders_);
      DARABONBA_PTR_FROM_JSON(Coupons, coupons_);
    };
    CommodityValueResult() = default ;
    CommodityValueResult(const CommodityValueResult &) = default ;
    CommodityValueResult(CommodityValueResult &&) = default ;
    CommodityValueResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommodityValueResult() = default ;
    CommodityValueResult& operator=(const CommodityValueResult &) = default ;
    CommodityValueResult& operator=(CommodityValueResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->order_ != nullptr
        && this->inquiryType_ != nullptr && this->subOrders_ != nullptr && this->coupons_ != nullptr; };
    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline const Models::CommodityValueResultOrder & order() const { DARABONBA_PTR_GET_CONST(order_, Models::CommodityValueResultOrder) };
    inline Models::CommodityValueResultOrder order() { DARABONBA_PTR_GET(order_, Models::CommodityValueResultOrder) };
    inline CommodityValueResult& setOrder(const Models::CommodityValueResultOrder & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
    inline CommodityValueResult& setOrder(Models::CommodityValueResultOrder && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


    // inquiryType Field Functions 
    bool hasInquiryType() const { return this->inquiryType_ != nullptr;};
    void deleteInquiryType() { this->inquiryType_ = nullptr;};
    inline string inquiryType() const { DARABONBA_PTR_GET_DEFAULT(inquiryType_, "") };
    inline CommodityValueResult& setInquiryType(string inquiryType) { DARABONBA_PTR_SET_VALUE(inquiryType_, inquiryType) };


    // subOrders Field Functions 
    bool hasSubOrders() const { return this->subOrders_ != nullptr;};
    void deleteSubOrders() { this->subOrders_ = nullptr;};
    inline const Models::CommodityValueResultSubOrders & subOrders() const { DARABONBA_PTR_GET_CONST(subOrders_, Models::CommodityValueResultSubOrders) };
    inline Models::CommodityValueResultSubOrders subOrders() { DARABONBA_PTR_GET(subOrders_, Models::CommodityValueResultSubOrders) };
    inline CommodityValueResult& setSubOrders(const Models::CommodityValueResultSubOrders & subOrders) { DARABONBA_PTR_SET_VALUE(subOrders_, subOrders) };
    inline CommodityValueResult& setSubOrders(Models::CommodityValueResultSubOrders && subOrders) { DARABONBA_PTR_SET_RVALUE(subOrders_, subOrders) };


    // coupons Field Functions 
    bool hasCoupons() const { return this->coupons_ != nullptr;};
    void deleteCoupons() { this->coupons_ = nullptr;};
    inline const vector<Models::CommodityValueResultCoupons> & coupons() const { DARABONBA_PTR_GET_CONST(coupons_, vector<Models::CommodityValueResultCoupons>) };
    inline vector<Models::CommodityValueResultCoupons> coupons() { DARABONBA_PTR_GET(coupons_, vector<Models::CommodityValueResultCoupons>) };
    inline CommodityValueResult& setCoupons(const vector<Models::CommodityValueResultCoupons> & coupons) { DARABONBA_PTR_SET_VALUE(coupons_, coupons) };
    inline CommodityValueResult& setCoupons(vector<Models::CommodityValueResultCoupons> && coupons) { DARABONBA_PTR_SET_RVALUE(coupons_, coupons) };


  protected:
    // The information about the order.
    std::shared_ptr<Models::CommodityValueResultOrder> order_ = nullptr;
    // The RFQ type. Valid values:
    // 
    // 1.  Buy: price inquiry for new resources.
    // 2.  ModificationBuy: price inquiry for resource configuration changes.
    std::shared_ptr<string> inquiryType_ = nullptr;
    // The order sub-items.
    std::shared_ptr<Models::CommodityValueResultSubOrders> subOrders_ = nullptr;
    // The coupons.
    std::shared_ptr<vector<Models::CommodityValueResultCoupons>> coupons_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
