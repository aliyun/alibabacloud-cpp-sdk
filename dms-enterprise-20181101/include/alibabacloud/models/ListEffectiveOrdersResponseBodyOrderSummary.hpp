// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEFFECTIVEORDERSRESPONSEBODYORDERSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_LISTEFFECTIVEORDERSRESPONSEBODYORDERSUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEffectiveOrdersResponseBodyOrderSummaryOrderList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListEffectiveOrdersResponseBodyOrderSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEffectiveOrdersResponseBodyOrderSummary& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CommodityType, commodityType_);
      DARABONBA_PTR_TO_JSON(OrderList, orderList_);
      DARABONBA_PTR_TO_JSON(TotalQuota, totalQuota_);
      DARABONBA_PTR_TO_JSON(VersionType, versionType_);
    };
    friend void from_json(const Darabonba::Json& j, ListEffectiveOrdersResponseBodyOrderSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CommodityType, commodityType_);
      DARABONBA_PTR_FROM_JSON(OrderList, orderList_);
      DARABONBA_PTR_FROM_JSON(TotalQuota, totalQuota_);
      DARABONBA_PTR_FROM_JSON(VersionType, versionType_);
    };
    ListEffectiveOrdersResponseBodyOrderSummary() = default ;
    ListEffectiveOrdersResponseBodyOrderSummary(const ListEffectiveOrdersResponseBodyOrderSummary &) = default ;
    ListEffectiveOrdersResponseBodyOrderSummary(ListEffectiveOrdersResponseBodyOrderSummary &&) = default ;
    ListEffectiveOrdersResponseBodyOrderSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEffectiveOrdersResponseBodyOrderSummary() = default ;
    ListEffectiveOrdersResponseBodyOrderSummary& operator=(const ListEffectiveOrdersResponseBodyOrderSummary &) = default ;
    ListEffectiveOrdersResponseBodyOrderSummary& operator=(ListEffectiveOrdersResponseBodyOrderSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityCode_ != nullptr
        && this->commodityType_ != nullptr && this->orderList_ != nullptr && this->totalQuota_ != nullptr && this->versionType_ != nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline ListEffectiveOrdersResponseBodyOrderSummary& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // commodityType Field Functions 
    bool hasCommodityType() const { return this->commodityType_ != nullptr;};
    void deleteCommodityType() { this->commodityType_ = nullptr;};
    inline string commodityType() const { DARABONBA_PTR_GET_DEFAULT(commodityType_, "") };
    inline ListEffectiveOrdersResponseBodyOrderSummary& setCommodityType(string commodityType) { DARABONBA_PTR_SET_VALUE(commodityType_, commodityType) };


    // orderList Field Functions 
    bool hasOrderList() const { return this->orderList_ != nullptr;};
    void deleteOrderList() { this->orderList_ = nullptr;};
    inline const vector<Models::ListEffectiveOrdersResponseBodyOrderSummaryOrderList> & orderList() const { DARABONBA_PTR_GET_CONST(orderList_, vector<Models::ListEffectiveOrdersResponseBodyOrderSummaryOrderList>) };
    inline vector<Models::ListEffectiveOrdersResponseBodyOrderSummaryOrderList> orderList() { DARABONBA_PTR_GET(orderList_, vector<Models::ListEffectiveOrdersResponseBodyOrderSummaryOrderList>) };
    inline ListEffectiveOrdersResponseBodyOrderSummary& setOrderList(const vector<Models::ListEffectiveOrdersResponseBodyOrderSummaryOrderList> & orderList) { DARABONBA_PTR_SET_VALUE(orderList_, orderList) };
    inline ListEffectiveOrdersResponseBodyOrderSummary& setOrderList(vector<Models::ListEffectiveOrdersResponseBodyOrderSummaryOrderList> && orderList) { DARABONBA_PTR_SET_RVALUE(orderList_, orderList) };


    // totalQuota Field Functions 
    bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
    void deleteTotalQuota() { this->totalQuota_ = nullptr;};
    inline int32_t totalQuota() const { DARABONBA_PTR_GET_DEFAULT(totalQuota_, 0) };
    inline ListEffectiveOrdersResponseBodyOrderSummary& setTotalQuota(int32_t totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };


    // versionType Field Functions 
    bool hasVersionType() const { return this->versionType_ != nullptr;};
    void deleteVersionType() { this->versionType_ = nullptr;};
    inline string versionType() const { DARABONBA_PTR_GET_DEFAULT(versionType_, "") };
    inline ListEffectiveOrdersResponseBodyOrderSummary& setVersionType(string versionType) { DARABONBA_PTR_SET_VALUE(versionType_, versionType) };


  protected:
    // The commodity code of DMS.
    // 
    // *   dms_pre_public_cn: DMS that uses the subscription billing method
    // *   dms_post_public_cn: DMS that uses the pay-as-you-go billing method
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The type of the service.
    // 
    // *   **VersionType**: DMS that supports control modes
    // *   **SensitiveDataProtection**: DMS that supports sensitive data protection
    std::shared_ptr<string> commodityType_ = nullptr;
    // Details about the orders.
    std::shared_ptr<vector<Models::ListEffectiveOrdersResponseBodyOrderSummaryOrderList>> orderList_ = nullptr;
    // The sum of the number of instances that you can use DMS to manage in all orders.
    std::shared_ptr<int32_t> totalQuota_ = nullptr;
    // The control mode of DMS. Valid values:
    // 
    // *   **stand**: Stable Change
    // *   **safety**: Security Collaboration
    std::shared_ptr<string> versionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
