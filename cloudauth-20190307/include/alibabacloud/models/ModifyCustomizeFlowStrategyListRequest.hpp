// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUSTOMIZEFLOWSTRATEGYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUSTOMIZEFLOWSTRATEGYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyCustomizeFlowStrategyListRequestStrategyObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class ModifyCustomizeFlowStrategyListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCustomizeFlowStrategyListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(StrategyObject, strategyObject_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCustomizeFlowStrategyListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(StrategyObject, strategyObject_);
    };
    ModifyCustomizeFlowStrategyListRequest() = default ;
    ModifyCustomizeFlowStrategyListRequest(const ModifyCustomizeFlowStrategyListRequest &) = default ;
    ModifyCustomizeFlowStrategyListRequest(ModifyCustomizeFlowStrategyListRequest &&) = default ;
    ModifyCustomizeFlowStrategyListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCustomizeFlowStrategyListRequest() = default ;
    ModifyCustomizeFlowStrategyListRequest& operator=(const ModifyCustomizeFlowStrategyListRequest &) = default ;
    ModifyCustomizeFlowStrategyListRequest& operator=(ModifyCustomizeFlowStrategyListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productType_ == nullptr
        && return this->strategyObject_ == nullptr; };
    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyCustomizeFlowStrategyListRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // strategyObject Field Functions 
    bool hasStrategyObject() const { return this->strategyObject_ != nullptr;};
    void deleteStrategyObject() { this->strategyObject_ = nullptr;};
    inline const vector<ModifyCustomizeFlowStrategyListRequestStrategyObject> & strategyObject() const { DARABONBA_PTR_GET_CONST(strategyObject_, vector<ModifyCustomizeFlowStrategyListRequestStrategyObject>) };
    inline vector<ModifyCustomizeFlowStrategyListRequestStrategyObject> strategyObject() { DARABONBA_PTR_GET(strategyObject_, vector<ModifyCustomizeFlowStrategyListRequestStrategyObject>) };
    inline ModifyCustomizeFlowStrategyListRequest& setStrategyObject(const vector<ModifyCustomizeFlowStrategyListRequestStrategyObject> & strategyObject) { DARABONBA_PTR_SET_VALUE(strategyObject_, strategyObject) };
    inline ModifyCustomizeFlowStrategyListRequest& setStrategyObject(vector<ModifyCustomizeFlowStrategyListRequestStrategyObject> && strategyObject) { DARABONBA_PTR_SET_RVALUE(strategyObject_, strategyObject) };


  protected:
    // Product type, currently only supports **ANT_CLOUD_AUTH** (Financial-grade real person), all others have been phased out.
    std::shared_ptr<string> productType_ = nullptr;
    // Strategy list.
    std::shared_ptr<vector<ModifyCustomizeFlowStrategyListRequestStrategyObject>> strategyObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
