// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPOTPRICEITEM_HPP_
#define ALIBABACLOUD_MODELS_SPOTPRICEITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class SpotPriceItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SpotPriceItem& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(SpotDiscount, spotDiscount_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, SpotPriceItem& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(SpotDiscount, spotDiscount_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    SpotPriceItem() = default ;
    SpotPriceItem(const SpotPriceItem &) = default ;
    SpotPriceItem(SpotPriceItem &&) = default ;
    SpotPriceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SpotPriceItem() = default ;
    SpotPriceItem& operator=(const SpotPriceItem &) = default ;
    SpotPriceItem& operator=(SpotPriceItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceType_ == nullptr
        && this->spotDiscount_ == nullptr && this->timestamp_ == nullptr && this->zoneId_ == nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline SpotPriceItem& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // spotDiscount Field Functions 
    bool hasSpotDiscount() const { return this->spotDiscount_ != nullptr;};
    void deleteSpotDiscount() { this->spotDiscount_ = nullptr;};
    inline float getSpotDiscount() const { DARABONBA_PTR_GET_DEFAULT(spotDiscount_, 0.0) };
    inline SpotPriceItem& setSpotDiscount(float spotDiscount) { DARABONBA_PTR_SET_VALUE(spotDiscount_, spotDiscount) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline SpotPriceItem& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline SpotPriceItem& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<string> instanceType_ {};
    shared_ptr<float> spotDiscount_ {};
    shared_ptr<string> timestamp_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
