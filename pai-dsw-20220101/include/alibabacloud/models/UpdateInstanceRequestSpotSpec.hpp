// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTSPOTSPEC_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTSPOTSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class UpdateInstanceRequestSpotSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRequestSpotSpec& obj) { 
      DARABONBA_PTR_TO_JSON(SpotDiscountLimit, spotDiscountLimit_);
      DARABONBA_PTR_TO_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRequestSpotSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(SpotDiscountLimit, spotDiscountLimit_);
      DARABONBA_PTR_FROM_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
    };
    UpdateInstanceRequestSpotSpec() = default ;
    UpdateInstanceRequestSpotSpec(const UpdateInstanceRequestSpotSpec &) = default ;
    UpdateInstanceRequestSpotSpec(UpdateInstanceRequestSpotSpec &&) = default ;
    UpdateInstanceRequestSpotSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRequestSpotSpec() = default ;
    UpdateInstanceRequestSpotSpec& operator=(const UpdateInstanceRequestSpotSpec &) = default ;
    UpdateInstanceRequestSpotSpec& operator=(UpdateInstanceRequestSpotSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->spotDiscountLimit_ == nullptr
        && return this->spotDuration_ == nullptr && return this->spotPriceLimit_ == nullptr && return this->spotStrategy_ == nullptr; };
    // spotDiscountLimit Field Functions 
    bool hasSpotDiscountLimit() const { return this->spotDiscountLimit_ != nullptr;};
    void deleteSpotDiscountLimit() { this->spotDiscountLimit_ = nullptr;};
    inline string spotDiscountLimit() const { DARABONBA_PTR_GET_DEFAULT(spotDiscountLimit_, "") };
    inline UpdateInstanceRequestSpotSpec& setSpotDiscountLimit(string spotDiscountLimit) { DARABONBA_PTR_SET_VALUE(spotDiscountLimit_, spotDiscountLimit) };


    // spotDuration Field Functions 
    bool hasSpotDuration() const { return this->spotDuration_ != nullptr;};
    void deleteSpotDuration() { this->spotDuration_ = nullptr;};
    inline string spotDuration() const { DARABONBA_PTR_GET_DEFAULT(spotDuration_, "") };
    inline UpdateInstanceRequestSpotSpec& setSpotDuration(string spotDuration) { DARABONBA_PTR_SET_VALUE(spotDuration_, spotDuration) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline string spotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, "") };
    inline UpdateInstanceRequestSpotSpec& setSpotPriceLimit(string spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline UpdateInstanceRequestSpotSpec& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


  protected:
    std::shared_ptr<string> spotDiscountLimit_ = nullptr;
    std::shared_ptr<string> spotDuration_ = nullptr;
    std::shared_ptr<string> spotPriceLimit_ = nullptr;
    std::shared_ptr<string> spotStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
