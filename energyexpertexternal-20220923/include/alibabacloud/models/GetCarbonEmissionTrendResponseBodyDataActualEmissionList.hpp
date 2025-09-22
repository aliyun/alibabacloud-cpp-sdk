// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCARBONEMISSIONTRENDRESPONSEBODYDATAACTUALEMISSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_GETCARBONEMISSIONTRENDRESPONSEBODYDATAACTUALEMISSIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetCarbonEmissionTrendResponseBodyDataActualEmissionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCarbonEmissionTrendResponseBodyDataActualEmissionList& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(year, year_);
    };
    friend void from_json(const Darabonba::Json& j, GetCarbonEmissionTrendResponseBodyDataActualEmissionList& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(year, year_);
    };
    GetCarbonEmissionTrendResponseBodyDataActualEmissionList() = default ;
    GetCarbonEmissionTrendResponseBodyDataActualEmissionList(const GetCarbonEmissionTrendResponseBodyDataActualEmissionList &) = default ;
    GetCarbonEmissionTrendResponseBodyDataActualEmissionList(GetCarbonEmissionTrendResponseBodyDataActualEmissionList &&) = default ;
    GetCarbonEmissionTrendResponseBodyDataActualEmissionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCarbonEmissionTrendResponseBodyDataActualEmissionList() = default ;
    GetCarbonEmissionTrendResponseBodyDataActualEmissionList& operator=(const GetCarbonEmissionTrendResponseBodyDataActualEmissionList &) = default ;
    GetCarbonEmissionTrendResponseBodyDataActualEmissionList& operator=(GetCarbonEmissionTrendResponseBodyDataActualEmissionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->year_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems>) };
    inline vector<Models::GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems> items() { DARABONBA_PTR_GET(items_, vector<Models::GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems>) };
    inline GetCarbonEmissionTrendResponseBodyDataActualEmissionList& setItems(const vector<Models::GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetCarbonEmissionTrendResponseBodyDataActualEmissionList& setItems(vector<Models::GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // year Field Functions 
    bool hasYear() const { return this->year_ != nullptr;};
    void deleteYear() { this->year_ = nullptr;};
    inline string year() const { DARABONBA_PTR_GET_DEFAULT(year_, "") };
    inline GetCarbonEmissionTrendResponseBodyDataActualEmissionList& setYear(string year) { DARABONBA_PTR_SET_VALUE(year_, year) };


  protected:
    // Data item list.
    std::shared_ptr<vector<Models::GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems>> items_ = nullptr;
    // The year.
    std::shared_ptr<string> year_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
