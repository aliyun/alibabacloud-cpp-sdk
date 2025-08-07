// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMODITYVALUERESULTSUBORDERS_HPP_
#define ALIBABACLOUD_MODELS_COMMODITYVALUERESULTSUBORDERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CommodityValueResultSubOrdersSubOrder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CommodityValueResultSubOrders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommodityValueResultSubOrders& obj) { 
      DARABONBA_PTR_TO_JSON(SubOrder, subOrder_);
    };
    friend void from_json(const Darabonba::Json& j, CommodityValueResultSubOrders& obj) { 
      DARABONBA_PTR_FROM_JSON(SubOrder, subOrder_);
    };
    CommodityValueResultSubOrders() = default ;
    CommodityValueResultSubOrders(const CommodityValueResultSubOrders &) = default ;
    CommodityValueResultSubOrders(CommodityValueResultSubOrders &&) = default ;
    CommodityValueResultSubOrders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommodityValueResultSubOrders() = default ;
    CommodityValueResultSubOrders& operator=(const CommodityValueResultSubOrders &) = default ;
    CommodityValueResultSubOrders& operator=(CommodityValueResultSubOrders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->subOrder_ != nullptr; };
    // subOrder Field Functions 
    bool hasSubOrder() const { return this->subOrder_ != nullptr;};
    void deleteSubOrder() { this->subOrder_ = nullptr;};
    inline const vector<Models::CommodityValueResultSubOrdersSubOrder> & subOrder() const { DARABONBA_PTR_GET_CONST(subOrder_, vector<Models::CommodityValueResultSubOrdersSubOrder>) };
    inline vector<Models::CommodityValueResultSubOrdersSubOrder> subOrder() { DARABONBA_PTR_GET(subOrder_, vector<Models::CommodityValueResultSubOrdersSubOrder>) };
    inline CommodityValueResultSubOrders& setSubOrder(const vector<Models::CommodityValueResultSubOrdersSubOrder> & subOrder) { DARABONBA_PTR_SET_VALUE(subOrder_, subOrder) };
    inline CommodityValueResultSubOrders& setSubOrder(vector<Models::CommodityValueResultSubOrdersSubOrder> && subOrder) { DARABONBA_PTR_SET_RVALUE(subOrder_, subOrder) };


  protected:
    // The order sub-item.
    std::shared_ptr<vector<Models::CommodityValueResultSubOrdersSubOrder>> subOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
