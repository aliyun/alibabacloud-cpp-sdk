// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMODITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMODITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DescribeCommodityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommodityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommodityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeCommodityRequest() = default ;
    DescribeCommodityRequest(const DescribeCommodityRequest &) = default ;
    DescribeCommodityRequest(DescribeCommodityRequest &&) = default ;
    DescribeCommodityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommodityRequest() = default ;
    DescribeCommodityRequest& operator=(const DescribeCommodityRequest &) = default ;
    DescribeCommodityRequest& operator=(DescribeCommodityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->orderType_ == nullptr && this->regionId_ == nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeCommodityRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeCommodityRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCommodityRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The commodity code.
    // 
    // Valid values on the China site (aliyun.com):
    // 
    // *   **ga_gapluspre_public_cn**: GA instance.
    // *   **ga_plusbwppre_public_cn**: basic bandwidth plan.
    // 
    // Valid values on the international site (alibabacloud.com):
    // 
    // *   **ga_pluspre_public_intl**: GA instance.
    // *   **ga_bwppreintl_public_intl:** basic bandwidth plan.
    // 
    // This parameter is required.
    shared_ptr<string> commodityCode_ {};
    // The type of the order. Valid values:
    // 
    // *   **BUY**: purchase order.
    // *   **RENEW**: renewal order.
    // *   **UPGRADE**: upgrade order.
    // 
    // This parameter is required.
    shared_ptr<string> orderType_ {};
    // The ID of the region where the Global Accelerator (GA) instance is deployed. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
