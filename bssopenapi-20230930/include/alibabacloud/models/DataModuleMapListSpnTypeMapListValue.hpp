// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAMODULEMAPLISTSPNTYPEMAPLISTVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATAMODULEMAPLISTSPNTYPEMAPLISTVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class DataModuleMapListSpnTypeMapListValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataModuleMapListSpnTypeMapListValue& obj) { 
      DARABONBA_PTR_TO_JSON(FilterModules, filterModules_);
      DARABONBA_PTR_TO_JSON(ShowModules, showModules_);
    };
    friend void from_json(const Darabonba::Json& j, DataModuleMapListSpnTypeMapListValue& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterModules, filterModules_);
      DARABONBA_PTR_FROM_JSON(ShowModules, showModules_);
    };
    DataModuleMapListSpnTypeMapListValue() = default ;
    DataModuleMapListSpnTypeMapListValue(const DataModuleMapListSpnTypeMapListValue &) = default ;
    DataModuleMapListSpnTypeMapListValue(DataModuleMapListSpnTypeMapListValue &&) = default ;
    DataModuleMapListSpnTypeMapListValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataModuleMapListSpnTypeMapListValue() = default ;
    DataModuleMapListSpnTypeMapListValue& operator=(const DataModuleMapListSpnTypeMapListValue &) = default ;
    DataModuleMapListSpnTypeMapListValue& operator=(DataModuleMapListSpnTypeMapListValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ShowModules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ShowModules& obj) { 
        DARABONBA_PTR_TO_JSON(ModuleId, moduleId_);
        DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
        DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
      };
      friend void from_json(const Darabonba::Json& j, ShowModules& obj) { 
        DARABONBA_PTR_FROM_JSON(ModuleId, moduleId_);
        DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
        DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
      };
      ShowModules() = default ;
      ShowModules(const ShowModules &) = default ;
      ShowModules(ShowModules &&) = default ;
      ShowModules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ShowModules() = default ;
      ShowModules& operator=(const ShowModules &) = default ;
      ShowModules& operator=(ShowModules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->moduleId_ == nullptr
        && this->moduleCode_ == nullptr && this->moduleName_ == nullptr; };
      // moduleId Field Functions 
      bool hasModuleId() const { return this->moduleId_ != nullptr;};
      void deleteModuleId() { this->moduleId_ = nullptr;};
      inline int64_t getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, 0L) };
      inline ShowModules& setModuleId(int64_t moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


      // moduleCode Field Functions 
      bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
      void deleteModuleCode() { this->moduleCode_ = nullptr;};
      inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
      inline ShowModules& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


      // moduleName Field Functions 
      bool hasModuleName() const { return this->moduleName_ != nullptr;};
      void deleteModuleName() { this->moduleName_ = nullptr;};
      inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
      inline ShowModules& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    protected:
      shared_ptr<int64_t> moduleId_ {};
      shared_ptr<string> moduleCode_ {};
      shared_ptr<string> moduleName_ {};
    };

    class FilterModules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FilterModules& obj) { 
        DARABONBA_PTR_TO_JSON(ModuleId, moduleId_);
        DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
        DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
      };
      friend void from_json(const Darabonba::Json& j, FilterModules& obj) { 
        DARABONBA_PTR_FROM_JSON(ModuleId, moduleId_);
        DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
        DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
      };
      FilterModules() = default ;
      FilterModules(const FilterModules &) = default ;
      FilterModules(FilterModules &&) = default ;
      FilterModules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FilterModules() = default ;
      FilterModules& operator=(const FilterModules &) = default ;
      FilterModules& operator=(FilterModules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->moduleId_ == nullptr
        && this->moduleCode_ == nullptr && this->moduleName_ == nullptr; };
      // moduleId Field Functions 
      bool hasModuleId() const { return this->moduleId_ != nullptr;};
      void deleteModuleId() { this->moduleId_ = nullptr;};
      inline int64_t getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, 0L) };
      inline FilterModules& setModuleId(int64_t moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


      // moduleCode Field Functions 
      bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
      void deleteModuleCode() { this->moduleCode_ = nullptr;};
      inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
      inline FilterModules& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


      // moduleName Field Functions 
      bool hasModuleName() const { return this->moduleName_ != nullptr;};
      void deleteModuleName() { this->moduleName_ = nullptr;};
      inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
      inline FilterModules& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    protected:
      shared_ptr<int64_t> moduleId_ {};
      shared_ptr<string> moduleCode_ {};
      shared_ptr<string> moduleName_ {};
    };

    virtual bool empty() const override { return this->filterModules_ == nullptr
        && this->showModules_ == nullptr; };
    // filterModules Field Functions 
    bool hasFilterModules() const { return this->filterModules_ != nullptr;};
    void deleteFilterModules() { this->filterModules_ = nullptr;};
    inline const vector<DataModuleMapListSpnTypeMapListValue::FilterModules> & getFilterModules() const { DARABONBA_PTR_GET_CONST(filterModules_, vector<DataModuleMapListSpnTypeMapListValue::FilterModules>) };
    inline vector<DataModuleMapListSpnTypeMapListValue::FilterModules> getFilterModules() { DARABONBA_PTR_GET(filterModules_, vector<DataModuleMapListSpnTypeMapListValue::FilterModules>) };
    inline DataModuleMapListSpnTypeMapListValue& setFilterModules(const vector<DataModuleMapListSpnTypeMapListValue::FilterModules> & filterModules) { DARABONBA_PTR_SET_VALUE(filterModules_, filterModules) };
    inline DataModuleMapListSpnTypeMapListValue& setFilterModules(vector<DataModuleMapListSpnTypeMapListValue::FilterModules> && filterModules) { DARABONBA_PTR_SET_RVALUE(filterModules_, filterModules) };


    // showModules Field Functions 
    bool hasShowModules() const { return this->showModules_ != nullptr;};
    void deleteShowModules() { this->showModules_ = nullptr;};
    inline const vector<DataModuleMapListSpnTypeMapListValue::ShowModules> & getShowModules() const { DARABONBA_PTR_GET_CONST(showModules_, vector<DataModuleMapListSpnTypeMapListValue::ShowModules>) };
    inline vector<DataModuleMapListSpnTypeMapListValue::ShowModules> getShowModules() { DARABONBA_PTR_GET(showModules_, vector<DataModuleMapListSpnTypeMapListValue::ShowModules>) };
    inline DataModuleMapListSpnTypeMapListValue& setShowModules(const vector<DataModuleMapListSpnTypeMapListValue::ShowModules> & showModules) { DARABONBA_PTR_SET_VALUE(showModules_, showModules) };
    inline DataModuleMapListSpnTypeMapListValue& setShowModules(vector<DataModuleMapListSpnTypeMapListValue::ShowModules> && showModules) { DARABONBA_PTR_SET_RVALUE(showModules_, showModules) };


  protected:
    shared_ptr<vector<DataModuleMapListSpnTypeMapListValue::FilterModules>> filterModules_ {};
    shared_ptr<vector<DataModuleMapListSpnTypeMapListValue::ShowModules>> showModules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
