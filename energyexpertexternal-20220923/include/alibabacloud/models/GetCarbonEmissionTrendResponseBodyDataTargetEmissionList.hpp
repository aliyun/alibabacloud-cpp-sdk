// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCARBONEMISSIONTRENDRESPONSEBODYDATATARGETEMISSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_GETCARBONEMISSIONTRENDRESPONSEBODYDATATARGETEMISSIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCarbonEmissionTrendResponseBodyDataTargetEmissionListItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetCarbonEmissionTrendResponseBodyDataTargetEmissionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCarbonEmissionTrendResponseBodyDataTargetEmissionList& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(year, year_);
    };
    friend void from_json(const Darabonba::Json& j, GetCarbonEmissionTrendResponseBodyDataTargetEmissionList& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(year, year_);
    };
    GetCarbonEmissionTrendResponseBodyDataTargetEmissionList() = default ;
    GetCarbonEmissionTrendResponseBodyDataTargetEmissionList(const GetCarbonEmissionTrendResponseBodyDataTargetEmissionList &) = default ;
    GetCarbonEmissionTrendResponseBodyDataTargetEmissionList(GetCarbonEmissionTrendResponseBodyDataTargetEmissionList &&) = default ;
    GetCarbonEmissionTrendResponseBodyDataTargetEmissionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCarbonEmissionTrendResponseBodyDataTargetEmissionList() = default ;
    GetCarbonEmissionTrendResponseBodyDataTargetEmissionList& operator=(const GetCarbonEmissionTrendResponseBodyDataTargetEmissionList &) = default ;
    GetCarbonEmissionTrendResponseBodyDataTargetEmissionList& operator=(GetCarbonEmissionTrendResponseBodyDataTargetEmissionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->year_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::GetCarbonEmissionTrendResponseBodyDataTargetEmissionListItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::GetCarbonEmissionTrendResponseBodyDataTargetEmissionListItems>) };
    inline vector<Models::GetCarbonEmissionTrendResponseBodyDataTargetEmissionListItems> items() { DARABONBA_PTR_GET(items_, vector<Models::GetCarbonEmissionTrendResponseBodyDataTargetEmissionListItems>) };
    inline GetCarbonEmissionTrendResponseBodyDataTargetEmissionList& setItems(const vector<Models::GetCarbonEmissionTrendResponseBodyDataTargetEmissionListItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetCarbonEmissionTrendResponseBodyDataTargetEmissionList& setItems(vector<Models::GetCarbonEmissionTrendResponseBodyDataTargetEmissionListItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // year Field Functions 
    bool hasYear() const { return this->year_ != nullptr;};
    void deleteYear() { this->year_ = nullptr;};
    inline string year() const { DARABONBA_PTR_GET_DEFAULT(year_, "") };
    inline GetCarbonEmissionTrendResponseBodyDataTargetEmissionList& setYear(string year) { DARABONBA_PTR_SET_VALUE(year_, year) };


  protected:
    // Data item list.
    std::shared_ptr<vector<Models::GetCarbonEmissionTrendResponseBodyDataTargetEmissionListItems>> items_ = nullptr;
    // The year.
    std::shared_ptr<string> year_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
