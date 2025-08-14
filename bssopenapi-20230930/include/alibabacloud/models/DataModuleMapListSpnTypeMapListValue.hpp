// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAMODULEMAPLISTSPNTYPEMAPLISTVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATAMODULEMAPLISTSPNTYPEMAPLISTVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataModuleMapListSpnTypeMapListValueFilterModules.hpp>
#include <alibabacloud/models/DataModuleMapListSpnTypeMapListValueShowModules.hpp>
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
    virtual bool empty() const override { this->filterModules_ != nullptr
        && this->showModules_ != nullptr; };
    // filterModules Field Functions 
    bool hasFilterModules() const { return this->filterModules_ != nullptr;};
    void deleteFilterModules() { this->filterModules_ = nullptr;};
    inline const vector<DataModuleMapListSpnTypeMapListValueFilterModules> & filterModules() const { DARABONBA_PTR_GET_CONST(filterModules_, vector<DataModuleMapListSpnTypeMapListValueFilterModules>) };
    inline vector<DataModuleMapListSpnTypeMapListValueFilterModules> filterModules() { DARABONBA_PTR_GET(filterModules_, vector<DataModuleMapListSpnTypeMapListValueFilterModules>) };
    inline DataModuleMapListSpnTypeMapListValue& setFilterModules(const vector<DataModuleMapListSpnTypeMapListValueFilterModules> & filterModules) { DARABONBA_PTR_SET_VALUE(filterModules_, filterModules) };
    inline DataModuleMapListSpnTypeMapListValue& setFilterModules(vector<DataModuleMapListSpnTypeMapListValueFilterModules> && filterModules) { DARABONBA_PTR_SET_RVALUE(filterModules_, filterModules) };


    // showModules Field Functions 
    bool hasShowModules() const { return this->showModules_ != nullptr;};
    void deleteShowModules() { this->showModules_ = nullptr;};
    inline const vector<DataModuleMapListSpnTypeMapListValueShowModules> & showModules() const { DARABONBA_PTR_GET_CONST(showModules_, vector<DataModuleMapListSpnTypeMapListValueShowModules>) };
    inline vector<DataModuleMapListSpnTypeMapListValueShowModules> showModules() { DARABONBA_PTR_GET(showModules_, vector<DataModuleMapListSpnTypeMapListValueShowModules>) };
    inline DataModuleMapListSpnTypeMapListValue& setShowModules(const vector<DataModuleMapListSpnTypeMapListValueShowModules> & showModules) { DARABONBA_PTR_SET_VALUE(showModules_, showModules) };
    inline DataModuleMapListSpnTypeMapListValue& setShowModules(vector<DataModuleMapListSpnTypeMapListValueShowModules> && showModules) { DARABONBA_PTR_SET_RVALUE(showModules_, showModules) };


  protected:
    std::shared_ptr<vector<DataModuleMapListSpnTypeMapListValueFilterModules>> filterModules_ = nullptr;
    std::shared_ptr<vector<DataModuleMapListSpnTypeMapListValueShowModules>> showModules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
