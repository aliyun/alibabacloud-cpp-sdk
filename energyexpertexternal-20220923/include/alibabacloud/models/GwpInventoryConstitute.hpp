// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GWPINVENTORYCONSTITUTE_HPP_
#define ALIBABACLOUD_MODELS_GWPINVENTORYCONSTITUTE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GwpResourceConstitute.hpp>
#include <alibabacloud/models/GwpInventoryConstitute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GwpInventoryConstitute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GwpInventoryConstitute& obj) { 
      DARABONBA_PTR_TO_JSON(byResourceType, byResourceType_);
      DARABONBA_PTR_TO_JSON(carbonEmission, carbonEmission_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(percent, percent_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, GwpInventoryConstitute& obj) { 
      DARABONBA_PTR_FROM_JSON(byResourceType, byResourceType_);
      DARABONBA_PTR_FROM_JSON(carbonEmission, carbonEmission_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(percent, percent_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
    };
    GwpInventoryConstitute() = default ;
    GwpInventoryConstitute(const GwpInventoryConstitute &) = default ;
    GwpInventoryConstitute(GwpInventoryConstitute &&) = default ;
    GwpInventoryConstitute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GwpInventoryConstitute() = default ;
    GwpInventoryConstitute& operator=(const GwpInventoryConstitute &) = default ;
    GwpInventoryConstitute& operator=(GwpInventoryConstitute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->byResourceType_ != nullptr
        && this->carbonEmission_ != nullptr && this->items_ != nullptr && this->name_ != nullptr && this->percent_ != nullptr && this->resourceType_ != nullptr
        && this->unit_ != nullptr; };
    // byResourceType Field Functions 
    bool hasByResourceType() const { return this->byResourceType_ != nullptr;};
    void deleteByResourceType() { this->byResourceType_ = nullptr;};
    inline const vector<GwpResourceConstitute> & byResourceType() const { DARABONBA_PTR_GET_CONST(byResourceType_, vector<GwpResourceConstitute>) };
    inline vector<GwpResourceConstitute> byResourceType() { DARABONBA_PTR_GET(byResourceType_, vector<GwpResourceConstitute>) };
    inline GwpInventoryConstitute& setByResourceType(const vector<GwpResourceConstitute> & byResourceType) { DARABONBA_PTR_SET_VALUE(byResourceType_, byResourceType) };
    inline GwpInventoryConstitute& setByResourceType(vector<GwpResourceConstitute> && byResourceType) { DARABONBA_PTR_SET_RVALUE(byResourceType_, byResourceType) };


    // carbonEmission Field Functions 
    bool hasCarbonEmission() const { return this->carbonEmission_ != nullptr;};
    void deleteCarbonEmission() { this->carbonEmission_ = nullptr;};
    inline double carbonEmission() const { DARABONBA_PTR_GET_DEFAULT(carbonEmission_, 0.0) };
    inline GwpInventoryConstitute& setCarbonEmission(double carbonEmission) { DARABONBA_PTR_SET_VALUE(carbonEmission_, carbonEmission) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<GwpInventoryConstitute> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<GwpInventoryConstitute>) };
    inline vector<GwpInventoryConstitute> items() { DARABONBA_PTR_GET(items_, vector<GwpInventoryConstitute>) };
    inline GwpInventoryConstitute& setItems(const vector<GwpInventoryConstitute> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GwpInventoryConstitute& setItems(vector<GwpInventoryConstitute> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GwpInventoryConstitute& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline double percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0.0) };
    inline GwpInventoryConstitute& setPercent(double percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int32_t resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0) };
    inline GwpInventoryConstitute& setResourceType(int32_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline GwpInventoryConstitute& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    std::shared_ptr<vector<GwpResourceConstitute>> byResourceType_ = nullptr;
    std::shared_ptr<double> carbonEmission_ = nullptr;
    std::shared_ptr<vector<GwpInventoryConstitute>> items_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<double> percent_ = nullptr;
    std::shared_ptr<int32_t> resourceType_ = nullptr;
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
