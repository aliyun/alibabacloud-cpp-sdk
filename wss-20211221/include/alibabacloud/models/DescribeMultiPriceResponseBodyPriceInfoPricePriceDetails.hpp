// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIPRICERESPONSEBODYPRICEINFOPRICEPRICEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIPRICERESPONSEBODYPRICEINFOPRICEPRICEDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails.hpp>
#include <alibabacloud/models/DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleDetails, moduleDetails_);
      DARABONBA_PTR_TO_JSON(OrderItem, orderItem_);
      DARABONBA_PTR_TO_JSON(PriceDetail, priceDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleDetails, moduleDetails_);
      DARABONBA_PTR_FROM_JSON(OrderItem, orderItem_);
      DARABONBA_PTR_FROM_JSON(PriceDetail, priceDetail_);
    };
    DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails() = default ;
    DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails(const DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails &) = default ;
    DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails(DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails &&) = default ;
    DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails() = default ;
    DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails& operator=(const DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails &) = default ;
    DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails& operator=(DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->moduleDetails_ != nullptr
        && this->orderItem_ != nullptr && this->priceDetail_ != nullptr; };
    // moduleDetails Field Functions 
    bool hasModuleDetails() const { return this->moduleDetails_ != nullptr;};
    void deleteModuleDetails() { this->moduleDetails_ = nullptr;};
    inline const vector<Models::DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails> & moduleDetails() const { DARABONBA_PTR_GET_CONST(moduleDetails_, vector<Models::DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails>) };
    inline vector<Models::DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails> moduleDetails() { DARABONBA_PTR_GET(moduleDetails_, vector<Models::DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails>) };
    inline DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails& setModuleDetails(const vector<Models::DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails> & moduleDetails) { DARABONBA_PTR_SET_VALUE(moduleDetails_, moduleDetails) };
    inline DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails& setModuleDetails(vector<Models::DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails> && moduleDetails) { DARABONBA_PTR_SET_RVALUE(moduleDetails_, moduleDetails) };


    // orderItem Field Functions 
    bool hasOrderItem() const { return this->orderItem_ != nullptr;};
    void deleteOrderItem() { this->orderItem_ = nullptr;};
    inline int32_t orderItem() const { DARABONBA_PTR_GET_DEFAULT(orderItem_, 0) };
    inline DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails& setOrderItem(int32_t orderItem) { DARABONBA_PTR_SET_VALUE(orderItem_, orderItem) };


    // priceDetail Field Functions 
    bool hasPriceDetail() const { return this->priceDetail_ != nullptr;};
    void deletePriceDetail() { this->priceDetail_ = nullptr;};
    inline const Models::DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail & priceDetail() const { DARABONBA_PTR_GET_CONST(priceDetail_, Models::DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail) };
    inline Models::DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail priceDetail() { DARABONBA_PTR_GET(priceDetail_, Models::DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail) };
    inline DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails& setPriceDetail(const Models::DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail & priceDetail) { DARABONBA_PTR_SET_VALUE(priceDetail_, priceDetail) };
    inline DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails& setPriceDetail(Models::DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail && priceDetail) { DARABONBA_PTR_SET_RVALUE(priceDetail_, priceDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails>> moduleDetails_ = nullptr;
    std::shared_ptr<int32_t> orderItem_ = nullptr;
    std::shared_ptr<Models::DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail> priceDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
