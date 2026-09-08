// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALSPOTPRICEITEM_HPP_
#define ALIBABACLOUD_MODELS_GLOBALSPOTPRICEITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GlobalSpotPriceItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalSpotPriceItem& obj) { 
      DARABONBA_PTR_TO_JSON(effectiveAt, effectiveAt_);
      DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(spotDiscount, spotDiscount_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalSpotPriceItem& obj) { 
      DARABONBA_PTR_FROM_JSON(effectiveAt, effectiveAt_);
      DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(spotDiscount, spotDiscount_);
    };
    GlobalSpotPriceItem() = default ;
    GlobalSpotPriceItem(const GlobalSpotPriceItem &) = default ;
    GlobalSpotPriceItem(GlobalSpotPriceItem &&) = default ;
    GlobalSpotPriceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalSpotPriceItem() = default ;
    GlobalSpotPriceItem& operator=(const GlobalSpotPriceItem &) = default ;
    GlobalSpotPriceItem& operator=(GlobalSpotPriceItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->effectiveAt_ == nullptr
        && this->instanceType_ == nullptr && this->spotDiscount_ == nullptr; };
    // effectiveAt Field Functions 
    bool hasEffectiveAt() const { return this->effectiveAt_ != nullptr;};
    void deleteEffectiveAt() { this->effectiveAt_ = nullptr;};
    inline string getEffectiveAt() const { DARABONBA_PTR_GET_DEFAULT(effectiveAt_, "") };
    inline GlobalSpotPriceItem& setEffectiveAt(string effectiveAt) { DARABONBA_PTR_SET_VALUE(effectiveAt_, effectiveAt) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline GlobalSpotPriceItem& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // spotDiscount Field Functions 
    bool hasSpotDiscount() const { return this->spotDiscount_ != nullptr;};
    void deleteSpotDiscount() { this->spotDiscount_ = nullptr;};
    inline string getSpotDiscount() const { DARABONBA_PTR_GET_DEFAULT(spotDiscount_, "") };
    inline GlobalSpotPriceItem& setSpotDiscount(string spotDiscount) { DARABONBA_PTR_SET_VALUE(spotDiscount_, spotDiscount) };


  protected:
    // The effective period.
    shared_ptr<string> effectiveAt_ {};
    // The instance type.
    shared_ptr<string> instanceType_ {};
    // The current market price.
    shared_ptr<string> spotDiscount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
