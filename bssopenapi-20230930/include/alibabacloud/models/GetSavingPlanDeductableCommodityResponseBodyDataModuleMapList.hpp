// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAVINGPLANDEDUCTABLECOMMODITYRESPONSEBODYDATAMODULEMAPLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSAVINGPLANDEDUCTABLECOMMODITYRESPONSEBODYDATAMODULEMAPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules.hpp>
#include <alibabacloud/models/GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListShowModules.hpp>
#include <map>
#include <alibabacloud/models/DataModuleMapListSpnTypeMapListValue.hpp>
#include <alibabacloud/models/GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListSpnTypeNameList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList& obj) { 
      DARABONBA_PTR_TO_JSON(FilterModules, filterModules_);
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(ModuleId, moduleId_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_TO_JSON(ShowModules, showModules_);
      DARABONBA_PTR_TO_JSON(SpnTypeList, spnTypeList_);
      DARABONBA_PTR_TO_JSON(SpnTypeMapList, spnTypeMapList_);
      DARABONBA_PTR_TO_JSON(SpnTypeNameList, spnTypeNameList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterModules, filterModules_);
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(ModuleId, moduleId_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(ShowModules, showModules_);
      DARABONBA_PTR_FROM_JSON(SpnTypeList, spnTypeList_);
      DARABONBA_PTR_FROM_JSON(SpnTypeMapList, spnTypeMapList_);
      DARABONBA_PTR_FROM_JSON(SpnTypeNameList, spnTypeNameList_);
    };
    GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList() = default ;
    GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList(const GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList &) = default ;
    GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList(GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList &&) = default ;
    GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList() = default ;
    GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList& operator=(const GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList &) = default ;
    GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList& operator=(GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filterModules_ != nullptr
        && this->moduleCode_ != nullptr && this->moduleId_ != nullptr && this->moduleName_ != nullptr && this->showModules_ != nullptr && this->spnTypeList_ != nullptr
        && this->spnTypeMapList_ != nullptr && this->spnTypeNameList_ != nullptr; };
    // filterModules Field Functions 
    bool hasFilterModules() const { return this->filterModules_ != nullptr;};
    void deleteFilterModules() { this->filterModules_ = nullptr;};
    inline const vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules> & filterModules() const { DARABONBA_PTR_GET_CONST(filterModules_, vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules>) };
    inline vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules> filterModules() { DARABONBA_PTR_GET(filterModules_, vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules>) };
    inline GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList& setFilterModules(const vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules> & filterModules) { DARABONBA_PTR_SET_VALUE(filterModules_, filterModules) };
    inline GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList& setFilterModules(vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules> && filterModules) { DARABONBA_PTR_SET_RVALUE(filterModules_, filterModules) };


    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // moduleId Field Functions 
    bool hasModuleId() const { return this->moduleId_ != nullptr;};
    void deleteModuleId() { this->moduleId_ = nullptr;};
    inline int64_t moduleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, 0L) };
    inline GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList& setModuleId(int64_t moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // showModules Field Functions 
    bool hasShowModules() const { return this->showModules_ != nullptr;};
    void deleteShowModules() { this->showModules_ = nullptr;};
    inline const vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListShowModules> & showModules() const { DARABONBA_PTR_GET_CONST(showModules_, vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListShowModules>) };
    inline vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListShowModules> showModules() { DARABONBA_PTR_GET(showModules_, vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListShowModules>) };
    inline GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList& setShowModules(const vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListShowModules> & showModules) { DARABONBA_PTR_SET_VALUE(showModules_, showModules) };
    inline GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList& setShowModules(vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListShowModules> && showModules) { DARABONBA_PTR_SET_RVALUE(showModules_, showModules) };


    // spnTypeList Field Functions 
    bool hasSpnTypeList() const { return this->spnTypeList_ != nullptr;};
    void deleteSpnTypeList() { this->spnTypeList_ = nullptr;};
    inline const vector<string> & spnTypeList() const { DARABONBA_PTR_GET_CONST(spnTypeList_, vector<string>) };
    inline vector<string> spnTypeList() { DARABONBA_PTR_GET(spnTypeList_, vector<string>) };
    inline GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList& setSpnTypeList(const vector<string> & spnTypeList) { DARABONBA_PTR_SET_VALUE(spnTypeList_, spnTypeList) };
    inline GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList& setSpnTypeList(vector<string> && spnTypeList) { DARABONBA_PTR_SET_RVALUE(spnTypeList_, spnTypeList) };


    // spnTypeMapList Field Functions 
    bool hasSpnTypeMapList() const { return this->spnTypeMapList_ != nullptr;};
    void deleteSpnTypeMapList() { this->spnTypeMapList_ = nullptr;};
    inline const vector<map<string, Models::DataModuleMapListSpnTypeMapListValue>> & spnTypeMapList() const { DARABONBA_PTR_GET_CONST(spnTypeMapList_, vector<map<string, Models::DataModuleMapListSpnTypeMapListValue>>) };
    inline vector<map<string, Models::DataModuleMapListSpnTypeMapListValue>> spnTypeMapList() { DARABONBA_PTR_GET(spnTypeMapList_, vector<map<string, Models::DataModuleMapListSpnTypeMapListValue>>) };
    inline GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList& setSpnTypeMapList(const vector<map<string, Models::DataModuleMapListSpnTypeMapListValue>> & spnTypeMapList) { DARABONBA_PTR_SET_VALUE(spnTypeMapList_, spnTypeMapList) };
    inline GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList& setSpnTypeMapList(vector<map<string, Models::DataModuleMapListSpnTypeMapListValue>> && spnTypeMapList) { DARABONBA_PTR_SET_RVALUE(spnTypeMapList_, spnTypeMapList) };


    // spnTypeNameList Field Functions 
    bool hasSpnTypeNameList() const { return this->spnTypeNameList_ != nullptr;};
    void deleteSpnTypeNameList() { this->spnTypeNameList_ = nullptr;};
    inline const vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListSpnTypeNameList> & spnTypeNameList() const { DARABONBA_PTR_GET_CONST(spnTypeNameList_, vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListSpnTypeNameList>) };
    inline vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListSpnTypeNameList> spnTypeNameList() { DARABONBA_PTR_GET(spnTypeNameList_, vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListSpnTypeNameList>) };
    inline GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList& setSpnTypeNameList(const vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListSpnTypeNameList> & spnTypeNameList) { DARABONBA_PTR_SET_VALUE(spnTypeNameList_, spnTypeNameList) };
    inline GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList& setSpnTypeNameList(vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListSpnTypeNameList> && spnTypeNameList) { DARABONBA_PTR_SET_RVALUE(spnTypeNameList_, spnTypeNameList) };


  protected:
    std::shared_ptr<vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules>> filterModules_ = nullptr;
    std::shared_ptr<string> moduleCode_ = nullptr;
    std::shared_ptr<int64_t> moduleId_ = nullptr;
    std::shared_ptr<string> moduleName_ = nullptr;
    std::shared_ptr<vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListShowModules>> showModules_ = nullptr;
    std::shared_ptr<vector<string>> spnTypeList_ = nullptr;
    std::shared_ptr<vector<map<string, Models::DataModuleMapListSpnTypeMapListValue>>> spnTypeMapList_ = nullptr;
    std::shared_ptr<vector<Models::GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListSpnTypeNameList>> spnTypeNameList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
