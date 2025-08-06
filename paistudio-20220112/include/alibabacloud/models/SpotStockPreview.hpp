// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPOTSTOCKPREVIEW_HPP_
#define ALIBABACLOUD_MODELS_SPOTSTOCKPREVIEW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class SpotStockPreview : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SpotStockPreview& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(SpotDiscount, spotDiscount_);
      DARABONBA_PTR_TO_JSON(StockStatus, stockStatus_);
    };
    friend void from_json(const Darabonba::Json& j, SpotStockPreview& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(SpotDiscount, spotDiscount_);
      DARABONBA_PTR_FROM_JSON(StockStatus, stockStatus_);
    };
    SpotStockPreview() = default ;
    SpotStockPreview(const SpotStockPreview &) = default ;
    SpotStockPreview(SpotStockPreview &&) = default ;
    SpotStockPreview(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SpotStockPreview() = default ;
    SpotStockPreview& operator=(const SpotStockPreview &) = default ;
    SpotStockPreview& operator=(SpotStockPreview &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceType_ != nullptr
        && this->spotDiscount_ != nullptr && this->stockStatus_ != nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline SpotStockPreview& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // spotDiscount Field Functions 
    bool hasSpotDiscount() const { return this->spotDiscount_ != nullptr;};
    void deleteSpotDiscount() { this->spotDiscount_ = nullptr;};
    inline float spotDiscount() const { DARABONBA_PTR_GET_DEFAULT(spotDiscount_, 0.0) };
    inline SpotStockPreview& setSpotDiscount(float spotDiscount) { DARABONBA_PTR_SET_VALUE(spotDiscount_, spotDiscount) };


    // stockStatus Field Functions 
    bool hasStockStatus() const { return this->stockStatus_ != nullptr;};
    void deleteStockStatus() { this->stockStatus_ = nullptr;};
    inline string stockStatus() const { DARABONBA_PTR_GET_DEFAULT(stockStatus_, "") };
    inline SpotStockPreview& setStockStatus(string stockStatus) { DARABONBA_PTR_SET_VALUE(stockStatus_, stockStatus) };


  protected:
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<float> spotDiscount_ = nullptr;
    std::shared_ptr<string> stockStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
