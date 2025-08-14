// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAVINGPLANDEDUCTABLECOMMODITYRESPONSEBODYDATAMODULEMAPLISTFILTERMODULES_HPP_
#define ALIBABACLOUD_MODELS_GETSAVINGPLANDEDUCTABLECOMMODITYRESPONSEBODYDATAMODULEMAPLISTFILTERMODULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(ModuleId, moduleId_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
    };
    friend void from_json(const Darabonba::Json& j, GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(ModuleId, moduleId_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
    };
    GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules() = default ;
    GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules(const GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules &) = default ;
    GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules(GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules &&) = default ;
    GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules() = default ;
    GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules& operator=(const GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules &) = default ;
    GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules& operator=(GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->moduleCode_ != nullptr
        && this->moduleId_ != nullptr && this->moduleName_ != nullptr; };
    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // moduleId Field Functions 
    bool hasModuleId() const { return this->moduleId_ != nullptr;};
    void deleteModuleId() { this->moduleId_ = nullptr;};
    inline int64_t moduleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, 0L) };
    inline GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules& setModuleId(int64_t moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


  protected:
    std::shared_ptr<string> moduleCode_ = nullptr;
    std::shared_ptr<int64_t> moduleId_ = nullptr;
    std::shared_ptr<string> moduleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
