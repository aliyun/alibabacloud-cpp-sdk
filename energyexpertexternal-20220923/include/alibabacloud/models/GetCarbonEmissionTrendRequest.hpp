// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCARBONEMISSIONTRENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCARBONEMISSIONTRENDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetCarbonEmissionTrendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCarbonEmissionTrendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(moduleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(moduleType, moduleType_);
      DARABONBA_PTR_TO_JSON(trendType, trendType_);
      DARABONBA_PTR_TO_JSON(yearList, yearList_);
    };
    friend void from_json(const Darabonba::Json& j, GetCarbonEmissionTrendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(moduleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(moduleType, moduleType_);
      DARABONBA_PTR_FROM_JSON(trendType, trendType_);
      DARABONBA_PTR_FROM_JSON(yearList, yearList_);
    };
    GetCarbonEmissionTrendRequest() = default ;
    GetCarbonEmissionTrendRequest(const GetCarbonEmissionTrendRequest &) = default ;
    GetCarbonEmissionTrendRequest(GetCarbonEmissionTrendRequest &&) = default ;
    GetCarbonEmissionTrendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCarbonEmissionTrendRequest() = default ;
    GetCarbonEmissionTrendRequest& operator=(const GetCarbonEmissionTrendRequest &) = default ;
    GetCarbonEmissionTrendRequest& operator=(GetCarbonEmissionTrendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->moduleCode_ == nullptr && this->moduleType_ == nullptr && this->trendType_ == nullptr && this->yearList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCarbonEmissionTrendRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline GetCarbonEmissionTrendRequest& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // moduleType Field Functions 
    bool hasModuleType() const { return this->moduleType_ != nullptr;};
    void deleteModuleType() { this->moduleType_ = nullptr;};
    inline int32_t getModuleType() const { DARABONBA_PTR_GET_DEFAULT(moduleType_, 0) };
    inline GetCarbonEmissionTrendRequest& setModuleType(int32_t moduleType) { DARABONBA_PTR_SET_VALUE(moduleType_, moduleType) };


    // trendType Field Functions 
    bool hasTrendType() const { return this->trendType_ != nullptr;};
    void deleteTrendType() { this->trendType_ = nullptr;};
    inline int32_t getTrendType() const { DARABONBA_PTR_GET_DEFAULT(trendType_, 0) };
    inline GetCarbonEmissionTrendRequest& setTrendType(int32_t trendType) { DARABONBA_PTR_SET_VALUE(trendType_, trendType) };


    // yearList Field Functions 
    bool hasYearList() const { return this->yearList_ != nullptr;};
    void deleteYearList() { this->yearList_ = nullptr;};
    inline const vector<int32_t> & getYearList() const { DARABONBA_PTR_GET_CONST(yearList_, vector<int32_t>) };
    inline vector<int32_t> getYearList() { DARABONBA_PTR_GET(yearList_, vector<int32_t>) };
    inline GetCarbonEmissionTrendRequest& setYearList(const vector<int32_t> & yearList) { DARABONBA_PTR_SET_VALUE(yearList_, yearList) };
    inline GetCarbonEmissionTrendRequest& setYearList(vector<int32_t> && yearList) { DARABONBA_PTR_SET_RVALUE(yearList_, yearList) };


  protected:
    // The enterprise code.
    // 
    // This parameter is required.
    shared_ptr<string> code_ {};
    // Module code.
    shared_ptr<string> moduleCode_ {};
    // Module type.
    shared_ptr<int32_t> moduleType_ {};
    // Trend Type.
    // 
    // This parameter is required.
    shared_ptr<int32_t> trendType_ {};
    // The list of inventory year.
    // 
    // This parameter is required.
    shared_ptr<vector<int32_t>> yearList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
