// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBANDWIDTHLIMITATIONRESPONSEBODYBANDWIDTHSBANDWIDTH_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBANDWIDTHLIMITATIONRESPONSEBODYBANDWIDTHSBANDWIDTH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth& obj) { 
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(Max, max_);
      DARABONBA_PTR_TO_JSON(Min, min_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth& obj) { 
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(Max, max_);
      DARABONBA_PTR_FROM_JSON(Min, min_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
    };
    DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth() = default ;
    DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth(const DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth &) = default ;
    DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth(DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth &&) = default ;
    DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth() = default ;
    DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth& operator=(const DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth &) = default ;
    DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth& operator=(DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->internetChargeType_ == nullptr
        && return this->max_ == nullptr && return this->min_ == nullptr && return this->unit_ == nullptr; };
    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline int32_t max() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
    inline DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline int32_t min() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
    inline DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // The billing method for network usage. Valid values:
    // 
    // *   PayByBandwidth
    // *   PayByTraffic
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The maximum public bandwidth.
    std::shared_ptr<int32_t> max_ = nullptr;
    // The minimum public bandwidth.
    std::shared_ptr<int32_t> min_ = nullptr;
    // The unit of the public bandwidth.
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
