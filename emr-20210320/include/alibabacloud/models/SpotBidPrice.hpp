// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPOTBIDPRICE_HPP_
#define ALIBABACLOUD_MODELS_SPOTBIDPRICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class SpotBidPrice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SpotBidPrice& obj) { 
      DARABONBA_PTR_TO_JSON(BidPrice, bidPrice_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
    };
    friend void from_json(const Darabonba::Json& j, SpotBidPrice& obj) { 
      DARABONBA_PTR_FROM_JSON(BidPrice, bidPrice_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
    };
    SpotBidPrice() = default ;
    SpotBidPrice(const SpotBidPrice &) = default ;
    SpotBidPrice(SpotBidPrice &&) = default ;
    SpotBidPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SpotBidPrice() = default ;
    SpotBidPrice& operator=(const SpotBidPrice &) = default ;
    SpotBidPrice& operator=(SpotBidPrice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bidPrice_ == nullptr
        && return this->instanceType_ == nullptr; };
    // bidPrice Field Functions 
    bool hasBidPrice() const { return this->bidPrice_ != nullptr;};
    void deleteBidPrice() { this->bidPrice_ = nullptr;};
    inline double bidPrice() const { DARABONBA_PTR_GET_DEFAULT(bidPrice_, 0.0) };
    inline SpotBidPrice& setBidPrice(double bidPrice) { DARABONBA_PTR_SET_VALUE(bidPrice_, bidPrice) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline SpotBidPrice& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


  protected:
    // 实例的每小时最高出价。支持最大3位小数，参数SpotStrategy=SpotWithPriceLimit时，该参数生效。
    std::shared_ptr<double> bidPrice_ = nullptr;
    // 实例类型。
    std::shared_ptr<string> instanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
