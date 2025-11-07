// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCONTROLSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCONTROLSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyControlStrategyRequestControlStrategyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class ModifyControlStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyControlStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ControlStrategyList, controlStrategyList_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyControlStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlStrategyList, controlStrategyList_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyControlStrategyRequest() = default ;
    ModifyControlStrategyRequest(const ModifyControlStrategyRequest &) = default ;
    ModifyControlStrategyRequest(ModifyControlStrategyRequest &&) = default ;
    ModifyControlStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyControlStrategyRequest() = default ;
    ModifyControlStrategyRequest& operator=(const ModifyControlStrategyRequest &) = default ;
    ModifyControlStrategyRequest& operator=(ModifyControlStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->controlStrategyList_ == nullptr
        && return this->productType_ == nullptr && return this->regionId_ == nullptr; };
    // controlStrategyList Field Functions 
    bool hasControlStrategyList() const { return this->controlStrategyList_ != nullptr;};
    void deleteControlStrategyList() { this->controlStrategyList_ = nullptr;};
    inline const vector<ModifyControlStrategyRequestControlStrategyList> & controlStrategyList() const { DARABONBA_PTR_GET_CONST(controlStrategyList_, vector<ModifyControlStrategyRequestControlStrategyList>) };
    inline vector<ModifyControlStrategyRequestControlStrategyList> controlStrategyList() { DARABONBA_PTR_GET(controlStrategyList_, vector<ModifyControlStrategyRequestControlStrategyList>) };
    inline ModifyControlStrategyRequest& setControlStrategyList(const vector<ModifyControlStrategyRequestControlStrategyList> & controlStrategyList) { DARABONBA_PTR_SET_VALUE(controlStrategyList_, controlStrategyList) };
    inline ModifyControlStrategyRequest& setControlStrategyList(vector<ModifyControlStrategyRequestControlStrategyList> && controlStrategyList) { DARABONBA_PTR_SET_RVALUE(controlStrategyList_, controlStrategyList) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyControlStrategyRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyControlStrategyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // List of security alarm rules.
    std::shared_ptr<vector<ModifyControlStrategyRequestControlStrategyList>> controlStrategyList_ = nullptr;
    // Product type, currently only supports **ANT_CLOUD_AUTH** (Financial-grade Real Person), all others are phased out.
    std::shared_ptr<string> productType_ = nullptr;
    // Region ID of the intelligent access gateway instance.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
