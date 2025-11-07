// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCONTROLSTRATEGYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCONTROLSTRATEGYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class ModifyControlStrategyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyControlStrategyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ControlStrategyList, controlStrategyListShrink_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyControlStrategyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlStrategyList, controlStrategyListShrink_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyControlStrategyShrinkRequest() = default ;
    ModifyControlStrategyShrinkRequest(const ModifyControlStrategyShrinkRequest &) = default ;
    ModifyControlStrategyShrinkRequest(ModifyControlStrategyShrinkRequest &&) = default ;
    ModifyControlStrategyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyControlStrategyShrinkRequest() = default ;
    ModifyControlStrategyShrinkRequest& operator=(const ModifyControlStrategyShrinkRequest &) = default ;
    ModifyControlStrategyShrinkRequest& operator=(ModifyControlStrategyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->controlStrategyListShrink_ == nullptr
        && return this->productType_ == nullptr && return this->regionId_ == nullptr; };
    // controlStrategyListShrink Field Functions 
    bool hasControlStrategyListShrink() const { return this->controlStrategyListShrink_ != nullptr;};
    void deleteControlStrategyListShrink() { this->controlStrategyListShrink_ = nullptr;};
    inline string controlStrategyListShrink() const { DARABONBA_PTR_GET_DEFAULT(controlStrategyListShrink_, "") };
    inline ModifyControlStrategyShrinkRequest& setControlStrategyListShrink(string controlStrategyListShrink) { DARABONBA_PTR_SET_VALUE(controlStrategyListShrink_, controlStrategyListShrink) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyControlStrategyShrinkRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyControlStrategyShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // List of security alarm rules.
    std::shared_ptr<string> controlStrategyListShrink_ = nullptr;
    // Product type, currently only supports **ANT_CLOUD_AUTH** (Financial-grade Real Person), all others are phased out.
    std::shared_ptr<string> productType_ = nullptr;
    // Region ID of the intelligent access gateway instance.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
