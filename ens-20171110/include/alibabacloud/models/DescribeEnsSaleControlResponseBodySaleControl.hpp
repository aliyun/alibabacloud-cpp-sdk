// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLRESPONSEBODYSALECONTROL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLRESPONSEBODYSALECONTROL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnsSaleControlResponseBodySaleControlSaleControlItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsSaleControlResponseBodySaleControl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsSaleControlResponseBodySaleControl& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(SaleControlItems, saleControlItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsSaleControlResponseBodySaleControl& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(SaleControlItems, saleControlItems_);
    };
    DescribeEnsSaleControlResponseBodySaleControl() = default ;
    DescribeEnsSaleControlResponseBodySaleControl(const DescribeEnsSaleControlResponseBodySaleControl &) = default ;
    DescribeEnsSaleControlResponseBodySaleControl(DescribeEnsSaleControlResponseBodySaleControl &&) = default ;
    DescribeEnsSaleControlResponseBodySaleControl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsSaleControlResponseBodySaleControl() = default ;
    DescribeEnsSaleControlResponseBodySaleControl& operator=(const DescribeEnsSaleControlResponseBodySaleControl &) = default ;
    DescribeEnsSaleControlResponseBodySaleControl& operator=(DescribeEnsSaleControlResponseBodySaleControl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodityCode_ == nullptr
        && return this->orderType_ == nullptr && return this->saleControlItems_ == nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeEnsSaleControlResponseBodySaleControl& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeEnsSaleControlResponseBodySaleControl& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // saleControlItems Field Functions 
    bool hasSaleControlItems() const { return this->saleControlItems_ != nullptr;};
    void deleteSaleControlItems() { this->saleControlItems_ = nullptr;};
    inline const vector<Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItems> & saleControlItems() const { DARABONBA_PTR_GET_CONST(saleControlItems_, vector<Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItems>) };
    inline vector<Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItems> saleControlItems() { DARABONBA_PTR_GET(saleControlItems_, vector<Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItems>) };
    inline DescribeEnsSaleControlResponseBodySaleControl& setSaleControlItems(const vector<Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItems> & saleControlItems) { DARABONBA_PTR_SET_VALUE(saleControlItems_, saleControlItems) };
    inline DescribeEnsSaleControlResponseBodySaleControl& setSaleControlItems(vector<Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItems> && saleControlItems) { DARABONBA_PTR_SET_RVALUE(saleControlItems_, saleControlItems) };


  protected:
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<vector<Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItems>> saleControlItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
