// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUSTOMIZEFLOWSTRATEGYLISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUSTOMIZEFLOWSTRATEGYLISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class ModifyCustomizeFlowStrategyListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCustomizeFlowStrategyListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(StrategyObject, strategyObjectShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCustomizeFlowStrategyListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(StrategyObject, strategyObjectShrink_);
    };
    ModifyCustomizeFlowStrategyListShrinkRequest() = default ;
    ModifyCustomizeFlowStrategyListShrinkRequest(const ModifyCustomizeFlowStrategyListShrinkRequest &) = default ;
    ModifyCustomizeFlowStrategyListShrinkRequest(ModifyCustomizeFlowStrategyListShrinkRequest &&) = default ;
    ModifyCustomizeFlowStrategyListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCustomizeFlowStrategyListShrinkRequest() = default ;
    ModifyCustomizeFlowStrategyListShrinkRequest& operator=(const ModifyCustomizeFlowStrategyListShrinkRequest &) = default ;
    ModifyCustomizeFlowStrategyListShrinkRequest& operator=(ModifyCustomizeFlowStrategyListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productType_ == nullptr
        && return this->strategyObjectShrink_ == nullptr; };
    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyCustomizeFlowStrategyListShrinkRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // strategyObjectShrink Field Functions 
    bool hasStrategyObjectShrink() const { return this->strategyObjectShrink_ != nullptr;};
    void deleteStrategyObjectShrink() { this->strategyObjectShrink_ = nullptr;};
    inline string strategyObjectShrink() const { DARABONBA_PTR_GET_DEFAULT(strategyObjectShrink_, "") };
    inline ModifyCustomizeFlowStrategyListShrinkRequest& setStrategyObjectShrink(string strategyObjectShrink) { DARABONBA_PTR_SET_VALUE(strategyObjectShrink_, strategyObjectShrink) };


  protected:
    // Product type, currently only supports **ANT_CLOUD_AUTH** (Financial-grade real person), all others have been phased out.
    std::shared_ptr<string> productType_ = nullptr;
    // Strategy list.
    std::shared_ptr<string> strategyObjectShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
