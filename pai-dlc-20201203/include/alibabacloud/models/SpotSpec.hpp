// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPOTSPEC_HPP_
#define ALIBABACLOUD_MODELS_SPOTSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class SpotSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SpotSpec& obj) { 
      DARABONBA_PTR_TO_JSON(SpotDiscountLimit, spotDiscountLimit_);
      DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, SpotSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(SpotDiscountLimit, spotDiscountLimit_);
      DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
    };
    SpotSpec() = default ;
    SpotSpec(const SpotSpec &) = default ;
    SpotSpec(SpotSpec &&) = default ;
    SpotSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SpotSpec() = default ;
    SpotSpec& operator=(const SpotSpec &) = default ;
    SpotSpec& operator=(SpotSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->spotDiscountLimit_ != nullptr
        && this->spotPriceLimit_ != nullptr && this->spotStrategy_ != nullptr; };
    // spotDiscountLimit Field Functions 
    bool hasSpotDiscountLimit() const { return this->spotDiscountLimit_ != nullptr;};
    void deleteSpotDiscountLimit() { this->spotDiscountLimit_ = nullptr;};
    inline float spotDiscountLimit() const { DARABONBA_PTR_GET_DEFAULT(spotDiscountLimit_, 0.0) };
    inline SpotSpec& setSpotDiscountLimit(float spotDiscountLimit) { DARABONBA_PTR_SET_VALUE(spotDiscountLimit_, spotDiscountLimit) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline float spotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
    inline SpotSpec& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline SpotSpec& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


  protected:
    std::shared_ptr<float> spotDiscountLimit_ = nullptr;
    std::shared_ptr<float> spotPriceLimit_ = nullptr;
    std::shared_ptr<string> spotStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
