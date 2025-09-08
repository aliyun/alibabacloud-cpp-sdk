// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGURATIONPRICERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGURATIONPRICERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeConfigurationPriceResponseBodyDataBagUsage.hpp>
#include <alibabacloud/models/DescribeConfigurationPriceResponseBodyDataCpuMemPrice.hpp>
#include <alibabacloud/models/DescribeConfigurationPriceResponseBodyDataOrder.hpp>
#include <alibabacloud/models/DescribeConfigurationPriceResponseBodyDataRequestPrice.hpp>
#include <vector>
#include <alibabacloud/models/DescribeConfigurationPriceResponseBodyDataRules.hpp>
#include <alibabacloud/models/DescribeConfigurationPriceResponseBodyDataTrafficPrice.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeConfigurationPriceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigurationPriceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BagUsage, bagUsage_);
      DARABONBA_PTR_TO_JSON(CpuMemPrice, cpuMemPrice_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(RequestPrice, requestPrice_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(TrafficPrice, trafficPrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigurationPriceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BagUsage, bagUsage_);
      DARABONBA_PTR_FROM_JSON(CpuMemPrice, cpuMemPrice_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(RequestPrice, requestPrice_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(TrafficPrice, trafficPrice_);
    };
    DescribeConfigurationPriceResponseBodyData() = default ;
    DescribeConfigurationPriceResponseBodyData(const DescribeConfigurationPriceResponseBodyData &) = default ;
    DescribeConfigurationPriceResponseBodyData(DescribeConfigurationPriceResponseBodyData &&) = default ;
    DescribeConfigurationPriceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigurationPriceResponseBodyData() = default ;
    DescribeConfigurationPriceResponseBodyData& operator=(const DescribeConfigurationPriceResponseBodyData &) = default ;
    DescribeConfigurationPriceResponseBodyData& operator=(DescribeConfigurationPriceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bagUsage_ != nullptr
        && this->cpuMemPrice_ != nullptr && this->order_ != nullptr && this->requestPrice_ != nullptr && this->rules_ != nullptr && this->trafficPrice_ != nullptr; };
    // bagUsage Field Functions 
    bool hasBagUsage() const { return this->bagUsage_ != nullptr;};
    void deleteBagUsage() { this->bagUsage_ = nullptr;};
    inline const Models::DescribeConfigurationPriceResponseBodyDataBagUsage & bagUsage() const { DARABONBA_PTR_GET_CONST(bagUsage_, Models::DescribeConfigurationPriceResponseBodyDataBagUsage) };
    inline Models::DescribeConfigurationPriceResponseBodyDataBagUsage bagUsage() { DARABONBA_PTR_GET(bagUsage_, Models::DescribeConfigurationPriceResponseBodyDataBagUsage) };
    inline DescribeConfigurationPriceResponseBodyData& setBagUsage(const Models::DescribeConfigurationPriceResponseBodyDataBagUsage & bagUsage) { DARABONBA_PTR_SET_VALUE(bagUsage_, bagUsage) };
    inline DescribeConfigurationPriceResponseBodyData& setBagUsage(Models::DescribeConfigurationPriceResponseBodyDataBagUsage && bagUsage) { DARABONBA_PTR_SET_RVALUE(bagUsage_, bagUsage) };


    // cpuMemPrice Field Functions 
    bool hasCpuMemPrice() const { return this->cpuMemPrice_ != nullptr;};
    void deleteCpuMemPrice() { this->cpuMemPrice_ = nullptr;};
    inline const Models::DescribeConfigurationPriceResponseBodyDataCpuMemPrice & cpuMemPrice() const { DARABONBA_PTR_GET_CONST(cpuMemPrice_, Models::DescribeConfigurationPriceResponseBodyDataCpuMemPrice) };
    inline Models::DescribeConfigurationPriceResponseBodyDataCpuMemPrice cpuMemPrice() { DARABONBA_PTR_GET(cpuMemPrice_, Models::DescribeConfigurationPriceResponseBodyDataCpuMemPrice) };
    inline DescribeConfigurationPriceResponseBodyData& setCpuMemPrice(const Models::DescribeConfigurationPriceResponseBodyDataCpuMemPrice & cpuMemPrice) { DARABONBA_PTR_SET_VALUE(cpuMemPrice_, cpuMemPrice) };
    inline DescribeConfigurationPriceResponseBodyData& setCpuMemPrice(Models::DescribeConfigurationPriceResponseBodyDataCpuMemPrice && cpuMemPrice) { DARABONBA_PTR_SET_RVALUE(cpuMemPrice_, cpuMemPrice) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline const Models::DescribeConfigurationPriceResponseBodyDataOrder & order() const { DARABONBA_PTR_GET_CONST(order_, Models::DescribeConfigurationPriceResponseBodyDataOrder) };
    inline Models::DescribeConfigurationPriceResponseBodyDataOrder order() { DARABONBA_PTR_GET(order_, Models::DescribeConfigurationPriceResponseBodyDataOrder) };
    inline DescribeConfigurationPriceResponseBodyData& setOrder(const Models::DescribeConfigurationPriceResponseBodyDataOrder & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
    inline DescribeConfigurationPriceResponseBodyData& setOrder(Models::DescribeConfigurationPriceResponseBodyDataOrder && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


    // requestPrice Field Functions 
    bool hasRequestPrice() const { return this->requestPrice_ != nullptr;};
    void deleteRequestPrice() { this->requestPrice_ = nullptr;};
    inline const Models::DescribeConfigurationPriceResponseBodyDataRequestPrice & requestPrice() const { DARABONBA_PTR_GET_CONST(requestPrice_, Models::DescribeConfigurationPriceResponseBodyDataRequestPrice) };
    inline Models::DescribeConfigurationPriceResponseBodyDataRequestPrice requestPrice() { DARABONBA_PTR_GET(requestPrice_, Models::DescribeConfigurationPriceResponseBodyDataRequestPrice) };
    inline DescribeConfigurationPriceResponseBodyData& setRequestPrice(const Models::DescribeConfigurationPriceResponseBodyDataRequestPrice & requestPrice) { DARABONBA_PTR_SET_VALUE(requestPrice_, requestPrice) };
    inline DescribeConfigurationPriceResponseBodyData& setRequestPrice(Models::DescribeConfigurationPriceResponseBodyDataRequestPrice && requestPrice) { DARABONBA_PTR_SET_RVALUE(requestPrice_, requestPrice) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::DescribeConfigurationPriceResponseBodyDataRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::DescribeConfigurationPriceResponseBodyDataRules>) };
    inline vector<Models::DescribeConfigurationPriceResponseBodyDataRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::DescribeConfigurationPriceResponseBodyDataRules>) };
    inline DescribeConfigurationPriceResponseBodyData& setRules(const vector<Models::DescribeConfigurationPriceResponseBodyDataRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeConfigurationPriceResponseBodyData& setRules(vector<Models::DescribeConfigurationPriceResponseBodyDataRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // trafficPrice Field Functions 
    bool hasTrafficPrice() const { return this->trafficPrice_ != nullptr;};
    void deleteTrafficPrice() { this->trafficPrice_ = nullptr;};
    inline const Models::DescribeConfigurationPriceResponseBodyDataTrafficPrice & trafficPrice() const { DARABONBA_PTR_GET_CONST(trafficPrice_, Models::DescribeConfigurationPriceResponseBodyDataTrafficPrice) };
    inline Models::DescribeConfigurationPriceResponseBodyDataTrafficPrice trafficPrice() { DARABONBA_PTR_GET(trafficPrice_, Models::DescribeConfigurationPriceResponseBodyDataTrafficPrice) };
    inline DescribeConfigurationPriceResponseBodyData& setTrafficPrice(const Models::DescribeConfigurationPriceResponseBodyDataTrafficPrice & trafficPrice) { DARABONBA_PTR_SET_VALUE(trafficPrice_, trafficPrice) };
    inline DescribeConfigurationPriceResponseBodyData& setTrafficPrice(Models::DescribeConfigurationPriceResponseBodyDataTrafficPrice && trafficPrice) { DARABONBA_PTR_SET_RVALUE(trafficPrice_, trafficPrice) };


  protected:
    // The remaining capacity of the resource plan.
    std::shared_ptr<Models::DescribeConfigurationPriceResponseBodyDataBagUsage> bagUsage_ = nullptr;
    // The price of CPU and memory.
    std::shared_ptr<Models::DescribeConfigurationPriceResponseBodyDataCpuMemPrice> cpuMemPrice_ = nullptr;
    // The information about pricing.
    std::shared_ptr<Models::DescribeConfigurationPriceResponseBodyDataOrder> order_ = nullptr;
    // The price based on the number of requests.
    std::shared_ptr<Models::DescribeConfigurationPriceResponseBodyDataRequestPrice> requestPrice_ = nullptr;
    // The promotion rules.
    std::shared_ptr<vector<Models::DescribeConfigurationPriceResponseBodyDataRules>> rules_ = nullptr;
    // The traffic price.
    std::shared_ptr<Models::DescribeConfigurationPriceResponseBodyDataTrafficPrice> trafficPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
