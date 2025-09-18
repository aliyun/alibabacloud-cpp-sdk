// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPOTPRICELIMIT_HPP_
#define ALIBABACLOUD_MODELS_SPOTPRICELIMIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class SpotPriceLimit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SpotPriceLimit& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(PriceLimit, priceLimit_);
    };
    friend void from_json(const Darabonba::Json& j, SpotPriceLimit& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(PriceLimit, priceLimit_);
    };
    SpotPriceLimit() = default ;
    SpotPriceLimit(const SpotPriceLimit &) = default ;
    SpotPriceLimit(SpotPriceLimit &&) = default ;
    SpotPriceLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SpotPriceLimit() = default ;
    SpotPriceLimit& operator=(const SpotPriceLimit &) = default ;
    SpotPriceLimit& operator=(SpotPriceLimit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceType_ != nullptr
        && this->priceLimit_ != nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline SpotPriceLimit& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // priceLimit Field Functions 
    bool hasPriceLimit() const { return this->priceLimit_ != nullptr;};
    void deletePriceLimit() { this->priceLimit_ = nullptr;};
    inline double priceLimit() const { DARABONBA_PTR_GET_DEFAULT(priceLimit_, 0.0) };
    inline SpotPriceLimit& setPriceLimit(double priceLimit) { DARABONBA_PTR_SET_VALUE(priceLimit_, priceLimit) };


  protected:
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<double> priceLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
