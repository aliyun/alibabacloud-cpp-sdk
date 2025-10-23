// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINVENTORYLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINVENTORYLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInventoryListResponseBodyDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetInventoryListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInventoryListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(productUnit, productUnit_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, GetInventoryListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(productUnit, productUnit_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
    };
    GetInventoryListResponseBodyData() = default ;
    GetInventoryListResponseBodyData(const GetInventoryListResponseBodyData &) = default ;
    GetInventoryListResponseBodyData(GetInventoryListResponseBodyData &&) = default ;
    GetInventoryListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInventoryListResponseBodyData() = default ;
    GetInventoryListResponseBodyData& operator=(const GetInventoryListResponseBodyData &) = default ;
    GetInventoryListResponseBodyData& operator=(GetInventoryListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->productUnit_ == nullptr && return this->unit_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::GetInventoryListResponseBodyDataItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::GetInventoryListResponseBodyDataItems>) };
    inline vector<Models::GetInventoryListResponseBodyDataItems> items() { DARABONBA_PTR_GET(items_, vector<Models::GetInventoryListResponseBodyDataItems>) };
    inline GetInventoryListResponseBodyData& setItems(const vector<Models::GetInventoryListResponseBodyDataItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetInventoryListResponseBodyData& setItems(vector<Models::GetInventoryListResponseBodyDataItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // productUnit Field Functions 
    bool hasProductUnit() const { return this->productUnit_ != nullptr;};
    void deleteProductUnit() { this->productUnit_ = nullptr;};
    inline string productUnit() const { DARABONBA_PTR_GET_DEFAULT(productUnit_, "") };
    inline GetInventoryListResponseBodyData& setProductUnit(string productUnit) { DARABONBA_PTR_SET_VALUE(productUnit_, productUnit) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline GetInventoryListResponseBodyData& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // Inventory detail.
    std::shared_ptr<vector<Models::GetInventoryListResponseBodyDataItems>> items_ = nullptr;
    // Unit of product.
    std::shared_ptr<string> productUnit_ = nullptr;
    // Emission Unit: The default value is kgCO₂ /productUnit. productUnit is the unit selected for the product. The unit value is changed to tCO₂ e/productUnit or gCO₂ e/productUnit based on the emission quantity. For more information, see the quantity column.
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
