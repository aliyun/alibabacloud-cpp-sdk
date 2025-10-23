// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGWPBENCHMARKLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETGWPBENCHMARKLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGwpBenchmarkListResponseBodyDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetGwpBenchmarkListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGwpBenchmarkListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, GetGwpBenchmarkListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
    };
    GetGwpBenchmarkListResponseBodyData() = default ;
    GetGwpBenchmarkListResponseBodyData(const GetGwpBenchmarkListResponseBodyData &) = default ;
    GetGwpBenchmarkListResponseBodyData(GetGwpBenchmarkListResponseBodyData &&) = default ;
    GetGwpBenchmarkListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGwpBenchmarkListResponseBodyData() = default ;
    GetGwpBenchmarkListResponseBodyData& operator=(const GetGwpBenchmarkListResponseBodyData &) = default ;
    GetGwpBenchmarkListResponseBodyData& operator=(GetGwpBenchmarkListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->unit_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::GetGwpBenchmarkListResponseBodyDataItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::GetGwpBenchmarkListResponseBodyDataItems>) };
    inline vector<Models::GetGwpBenchmarkListResponseBodyDataItems> items() { DARABONBA_PTR_GET(items_, vector<Models::GetGwpBenchmarkListResponseBodyDataItems>) };
    inline GetGwpBenchmarkListResponseBodyData& setItems(const vector<Models::GetGwpBenchmarkListResponseBodyDataItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetGwpBenchmarkListResponseBodyData& setItems(vector<Models::GetGwpBenchmarkListResponseBodyDataItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline GetGwpBenchmarkListResponseBodyData& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // Active carbon reduction ranking list.
    std::shared_ptr<vector<Models::GetGwpBenchmarkListResponseBodyDataItems>> items_ = nullptr;
    // unit of emissions. The default value is `kgCO₂e/productUnit`. 
    // The `productUnit` is the unit selected for the product. The unit value is changed to `tCO₂e/productUnit` or `gCO₂e/productUnit`. For more information, see the remarks in the quantity column.
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
