// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGWPINVENTORYCONSTITUTERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETGWPINVENTORYCONSTITUTERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GwpInventoryConstitute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetGwpInventoryConstituteResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGwpInventoryConstituteResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(byResourceType, byResourceType_);
      DARABONBA_PTR_TO_JSON(carbonEmission, carbonEmission_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, GetGwpInventoryConstituteResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(byResourceType, byResourceType_);
      DARABONBA_PTR_FROM_JSON(carbonEmission, carbonEmission_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
    };
    GetGwpInventoryConstituteResponseBodyData() = default ;
    GetGwpInventoryConstituteResponseBodyData(const GetGwpInventoryConstituteResponseBodyData &) = default ;
    GetGwpInventoryConstituteResponseBodyData(GetGwpInventoryConstituteResponseBodyData &&) = default ;
    GetGwpInventoryConstituteResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGwpInventoryConstituteResponseBodyData() = default ;
    GetGwpInventoryConstituteResponseBodyData& operator=(const GetGwpInventoryConstituteResponseBodyData &) = default ;
    GetGwpInventoryConstituteResponseBodyData& operator=(GetGwpInventoryConstituteResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->byResourceType_ != nullptr
        && this->carbonEmission_ != nullptr && this->items_ != nullptr && this->name_ != nullptr && this->unit_ != nullptr; };
    // byResourceType Field Functions 
    bool hasByResourceType() const { return this->byResourceType_ != nullptr;};
    void deleteByResourceType() { this->byResourceType_ = nullptr;};
    inline const vector<Models::GwpInventoryConstitute> & byResourceType() const { DARABONBA_PTR_GET_CONST(byResourceType_, vector<Models::GwpInventoryConstitute>) };
    inline vector<Models::GwpInventoryConstitute> byResourceType() { DARABONBA_PTR_GET(byResourceType_, vector<Models::GwpInventoryConstitute>) };
    inline GetGwpInventoryConstituteResponseBodyData& setByResourceType(const vector<Models::GwpInventoryConstitute> & byResourceType) { DARABONBA_PTR_SET_VALUE(byResourceType_, byResourceType) };
    inline GetGwpInventoryConstituteResponseBodyData& setByResourceType(vector<Models::GwpInventoryConstitute> && byResourceType) { DARABONBA_PTR_SET_RVALUE(byResourceType_, byResourceType) };


    // carbonEmission Field Functions 
    bool hasCarbonEmission() const { return this->carbonEmission_ != nullptr;};
    void deleteCarbonEmission() { this->carbonEmission_ = nullptr;};
    inline double carbonEmission() const { DARABONBA_PTR_GET_DEFAULT(carbonEmission_, 0.0) };
    inline GetGwpInventoryConstituteResponseBodyData& setCarbonEmission(double carbonEmission) { DARABONBA_PTR_SET_VALUE(carbonEmission_, carbonEmission) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::GwpInventoryConstitute> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::GwpInventoryConstitute>) };
    inline vector<Models::GwpInventoryConstitute> items() { DARABONBA_PTR_GET(items_, vector<Models::GwpInventoryConstitute>) };
    inline GetGwpInventoryConstituteResponseBodyData& setItems(const vector<Models::GwpInventoryConstitute> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetGwpInventoryConstituteResponseBodyData& setItems(vector<Models::GwpInventoryConstitute> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetGwpInventoryConstituteResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline GetGwpInventoryConstituteResponseBodyData& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // Aggregated by resource type of an inventory.
    std::shared_ptr<vector<Models::GwpInventoryConstitute>> byResourceType_ = nullptr;
    // Emission quantity: may be positive, negative, or 0. To ensure the calculation accuracy, 24 decimal places are reserved for the calculation process. We recommend that you intercept data based on your business requirements.
    std::shared_ptr<double> carbonEmission_ = nullptr;
    // Organized by hierarchy from high to low, according to the flow-> process-> inventory hierarchy.
    std::shared_ptr<vector<Models::GwpInventoryConstitute>> items_ = nullptr;
    // The name.
    std::shared_ptr<string> name_ = nullptr;
    // Emission Unit.
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
