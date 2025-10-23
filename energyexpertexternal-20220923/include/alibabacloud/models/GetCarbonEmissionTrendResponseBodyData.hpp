// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCARBONEMISSIONTRENDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCARBONEMISSIONTRENDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCarbonEmissionTrendResponseBodyDataActualEmissionList.hpp>
#include <alibabacloud/models/GetCarbonEmissionTrendResponseBodyDataTargetEmissionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetCarbonEmissionTrendResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCarbonEmissionTrendResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(actualEmissionList, actualEmissionList_);
      DARABONBA_PTR_TO_JSON(targetEmissionList, targetEmissionList_);
    };
    friend void from_json(const Darabonba::Json& j, GetCarbonEmissionTrendResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(actualEmissionList, actualEmissionList_);
      DARABONBA_PTR_FROM_JSON(targetEmissionList, targetEmissionList_);
    };
    GetCarbonEmissionTrendResponseBodyData() = default ;
    GetCarbonEmissionTrendResponseBodyData(const GetCarbonEmissionTrendResponseBodyData &) = default ;
    GetCarbonEmissionTrendResponseBodyData(GetCarbonEmissionTrendResponseBodyData &&) = default ;
    GetCarbonEmissionTrendResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCarbonEmissionTrendResponseBodyData() = default ;
    GetCarbonEmissionTrendResponseBodyData& operator=(const GetCarbonEmissionTrendResponseBodyData &) = default ;
    GetCarbonEmissionTrendResponseBodyData& operator=(GetCarbonEmissionTrendResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualEmissionList_ == nullptr
        && return this->targetEmissionList_ == nullptr; };
    // actualEmissionList Field Functions 
    bool hasActualEmissionList() const { return this->actualEmissionList_ != nullptr;};
    void deleteActualEmissionList() { this->actualEmissionList_ = nullptr;};
    inline const vector<Models::GetCarbonEmissionTrendResponseBodyDataActualEmissionList> & actualEmissionList() const { DARABONBA_PTR_GET_CONST(actualEmissionList_, vector<Models::GetCarbonEmissionTrendResponseBodyDataActualEmissionList>) };
    inline vector<Models::GetCarbonEmissionTrendResponseBodyDataActualEmissionList> actualEmissionList() { DARABONBA_PTR_GET(actualEmissionList_, vector<Models::GetCarbonEmissionTrendResponseBodyDataActualEmissionList>) };
    inline GetCarbonEmissionTrendResponseBodyData& setActualEmissionList(const vector<Models::GetCarbonEmissionTrendResponseBodyDataActualEmissionList> & actualEmissionList) { DARABONBA_PTR_SET_VALUE(actualEmissionList_, actualEmissionList) };
    inline GetCarbonEmissionTrendResponseBodyData& setActualEmissionList(vector<Models::GetCarbonEmissionTrendResponseBodyDataActualEmissionList> && actualEmissionList) { DARABONBA_PTR_SET_RVALUE(actualEmissionList_, actualEmissionList) };


    // targetEmissionList Field Functions 
    bool hasTargetEmissionList() const { return this->targetEmissionList_ != nullptr;};
    void deleteTargetEmissionList() { this->targetEmissionList_ = nullptr;};
    inline const vector<Models::GetCarbonEmissionTrendResponseBodyDataTargetEmissionList> & targetEmissionList() const { DARABONBA_PTR_GET_CONST(targetEmissionList_, vector<Models::GetCarbonEmissionTrendResponseBodyDataTargetEmissionList>) };
    inline vector<Models::GetCarbonEmissionTrendResponseBodyDataTargetEmissionList> targetEmissionList() { DARABONBA_PTR_GET(targetEmissionList_, vector<Models::GetCarbonEmissionTrendResponseBodyDataTargetEmissionList>) };
    inline GetCarbonEmissionTrendResponseBodyData& setTargetEmissionList(const vector<Models::GetCarbonEmissionTrendResponseBodyDataTargetEmissionList> & targetEmissionList) { DARABONBA_PTR_SET_VALUE(targetEmissionList_, targetEmissionList) };
    inline GetCarbonEmissionTrendResponseBodyData& setTargetEmissionList(vector<Models::GetCarbonEmissionTrendResponseBodyDataTargetEmissionList> && targetEmissionList) { DARABONBA_PTR_SET_RVALUE(targetEmissionList_, targetEmissionList) };


  protected:
    // Actual emission list.
    std::shared_ptr<vector<Models::GetCarbonEmissionTrendResponseBodyDataActualEmissionList>> actualEmissionList_ = nullptr;
    // Target Emission List.
    std::shared_ptr<vector<Models::GetCarbonEmissionTrendResponseBodyDataTargetEmissionList>> targetEmissionList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
