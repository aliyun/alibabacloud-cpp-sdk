// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPLOYGRAPHRESPONSEBODYRESULTGRAPH_HPP_
#define ALIBABACLOUD_MODELS_GETDEPLOYGRAPHRESPONSEBODYRESULTGRAPH_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDeployGraphResponseBodyResultGraphIndexMetas.hpp>
#include <alibabacloud/models/GetDeployGraphResponseBodyResultGraphOnlineMaster.hpp>
#include <map>
#include <alibabacloud/models/GetDeployGraphResponseBodyResultGraphTableMetas.hpp>
#include <alibabacloud/models/GetDeployGraphResponseBodyResultGraphZoneMetas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetDeployGraphResponseBodyResultGraph : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeployGraphResponseBodyResultGraph& obj) { 
      DARABONBA_PTR_TO_JSON(indexMetas, indexMetas_);
      DARABONBA_PTR_TO_JSON(onlineMaster, onlineMaster_);
      DARABONBA_PTR_TO_JSON(tableIndexRelation, tableIndexRelation_);
      DARABONBA_PTR_TO_JSON(tableMetas, tableMetas_);
      DARABONBA_PTR_TO_JSON(zoneIndexRelation, zoneIndexRelation_);
      DARABONBA_PTR_TO_JSON(zoneMetas, zoneMetas_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeployGraphResponseBodyResultGraph& obj) { 
      DARABONBA_PTR_FROM_JSON(indexMetas, indexMetas_);
      DARABONBA_PTR_FROM_JSON(onlineMaster, onlineMaster_);
      DARABONBA_PTR_FROM_JSON(tableIndexRelation, tableIndexRelation_);
      DARABONBA_PTR_FROM_JSON(tableMetas, tableMetas_);
      DARABONBA_PTR_FROM_JSON(zoneIndexRelation, zoneIndexRelation_);
      DARABONBA_PTR_FROM_JSON(zoneMetas, zoneMetas_);
    };
    GetDeployGraphResponseBodyResultGraph() = default ;
    GetDeployGraphResponseBodyResultGraph(const GetDeployGraphResponseBodyResultGraph &) = default ;
    GetDeployGraphResponseBodyResultGraph(GetDeployGraphResponseBodyResultGraph &&) = default ;
    GetDeployGraphResponseBodyResultGraph(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeployGraphResponseBodyResultGraph() = default ;
    GetDeployGraphResponseBodyResultGraph& operator=(const GetDeployGraphResponseBodyResultGraph &) = default ;
    GetDeployGraphResponseBodyResultGraph& operator=(GetDeployGraphResponseBodyResultGraph &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->indexMetas_ != nullptr
        && this->onlineMaster_ != nullptr && this->tableIndexRelation_ != nullptr && this->tableMetas_ != nullptr && this->zoneIndexRelation_ != nullptr && this->zoneMetas_ != nullptr; };
    // indexMetas Field Functions 
    bool hasIndexMetas() const { return this->indexMetas_ != nullptr;};
    void deleteIndexMetas() { this->indexMetas_ = nullptr;};
    inline const vector<Models::GetDeployGraphResponseBodyResultGraphIndexMetas> & indexMetas() const { DARABONBA_PTR_GET_CONST(indexMetas_, vector<Models::GetDeployGraphResponseBodyResultGraphIndexMetas>) };
    inline vector<Models::GetDeployGraphResponseBodyResultGraphIndexMetas> indexMetas() { DARABONBA_PTR_GET(indexMetas_, vector<Models::GetDeployGraphResponseBodyResultGraphIndexMetas>) };
    inline GetDeployGraphResponseBodyResultGraph& setIndexMetas(const vector<Models::GetDeployGraphResponseBodyResultGraphIndexMetas> & indexMetas) { DARABONBA_PTR_SET_VALUE(indexMetas_, indexMetas) };
    inline GetDeployGraphResponseBodyResultGraph& setIndexMetas(vector<Models::GetDeployGraphResponseBodyResultGraphIndexMetas> && indexMetas) { DARABONBA_PTR_SET_RVALUE(indexMetas_, indexMetas) };


    // onlineMaster Field Functions 
    bool hasOnlineMaster() const { return this->onlineMaster_ != nullptr;};
    void deleteOnlineMaster() { this->onlineMaster_ = nullptr;};
    inline const vector<Models::GetDeployGraphResponseBodyResultGraphOnlineMaster> & onlineMaster() const { DARABONBA_PTR_GET_CONST(onlineMaster_, vector<Models::GetDeployGraphResponseBodyResultGraphOnlineMaster>) };
    inline vector<Models::GetDeployGraphResponseBodyResultGraphOnlineMaster> onlineMaster() { DARABONBA_PTR_GET(onlineMaster_, vector<Models::GetDeployGraphResponseBodyResultGraphOnlineMaster>) };
    inline GetDeployGraphResponseBodyResultGraph& setOnlineMaster(const vector<Models::GetDeployGraphResponseBodyResultGraphOnlineMaster> & onlineMaster) { DARABONBA_PTR_SET_VALUE(onlineMaster_, onlineMaster) };
    inline GetDeployGraphResponseBodyResultGraph& setOnlineMaster(vector<Models::GetDeployGraphResponseBodyResultGraphOnlineMaster> && onlineMaster) { DARABONBA_PTR_SET_RVALUE(onlineMaster_, onlineMaster) };


    // tableIndexRelation Field Functions 
    bool hasTableIndexRelation() const { return this->tableIndexRelation_ != nullptr;};
    void deleteTableIndexRelation() { this->tableIndexRelation_ = nullptr;};
    inline const map<string, vector<string>> & tableIndexRelation() const { DARABONBA_PTR_GET_CONST(tableIndexRelation_, map<string, vector<string>>) };
    inline map<string, vector<string>> tableIndexRelation() { DARABONBA_PTR_GET(tableIndexRelation_, map<string, vector<string>>) };
    inline GetDeployGraphResponseBodyResultGraph& setTableIndexRelation(const map<string, vector<string>> & tableIndexRelation) { DARABONBA_PTR_SET_VALUE(tableIndexRelation_, tableIndexRelation) };
    inline GetDeployGraphResponseBodyResultGraph& setTableIndexRelation(map<string, vector<string>> && tableIndexRelation) { DARABONBA_PTR_SET_RVALUE(tableIndexRelation_, tableIndexRelation) };


    // tableMetas Field Functions 
    bool hasTableMetas() const { return this->tableMetas_ != nullptr;};
    void deleteTableMetas() { this->tableMetas_ = nullptr;};
    inline const vector<Models::GetDeployGraphResponseBodyResultGraphTableMetas> & tableMetas() const { DARABONBA_PTR_GET_CONST(tableMetas_, vector<Models::GetDeployGraphResponseBodyResultGraphTableMetas>) };
    inline vector<Models::GetDeployGraphResponseBodyResultGraphTableMetas> tableMetas() { DARABONBA_PTR_GET(tableMetas_, vector<Models::GetDeployGraphResponseBodyResultGraphTableMetas>) };
    inline GetDeployGraphResponseBodyResultGraph& setTableMetas(const vector<Models::GetDeployGraphResponseBodyResultGraphTableMetas> & tableMetas) { DARABONBA_PTR_SET_VALUE(tableMetas_, tableMetas) };
    inline GetDeployGraphResponseBodyResultGraph& setTableMetas(vector<Models::GetDeployGraphResponseBodyResultGraphTableMetas> && tableMetas) { DARABONBA_PTR_SET_RVALUE(tableMetas_, tableMetas) };


    // zoneIndexRelation Field Functions 
    bool hasZoneIndexRelation() const { return this->zoneIndexRelation_ != nullptr;};
    void deleteZoneIndexRelation() { this->zoneIndexRelation_ = nullptr;};
    inline const map<string, vector<string>> & zoneIndexRelation() const { DARABONBA_PTR_GET_CONST(zoneIndexRelation_, map<string, vector<string>>) };
    inline map<string, vector<string>> zoneIndexRelation() { DARABONBA_PTR_GET(zoneIndexRelation_, map<string, vector<string>>) };
    inline GetDeployGraphResponseBodyResultGraph& setZoneIndexRelation(const map<string, vector<string>> & zoneIndexRelation) { DARABONBA_PTR_SET_VALUE(zoneIndexRelation_, zoneIndexRelation) };
    inline GetDeployGraphResponseBodyResultGraph& setZoneIndexRelation(map<string, vector<string>> && zoneIndexRelation) { DARABONBA_PTR_SET_RVALUE(zoneIndexRelation_, zoneIndexRelation) };


    // zoneMetas Field Functions 
    bool hasZoneMetas() const { return this->zoneMetas_ != nullptr;};
    void deleteZoneMetas() { this->zoneMetas_ = nullptr;};
    inline const vector<Models::GetDeployGraphResponseBodyResultGraphZoneMetas> & zoneMetas() const { DARABONBA_PTR_GET_CONST(zoneMetas_, vector<Models::GetDeployGraphResponseBodyResultGraphZoneMetas>) };
    inline vector<Models::GetDeployGraphResponseBodyResultGraphZoneMetas> zoneMetas() { DARABONBA_PTR_GET(zoneMetas_, vector<Models::GetDeployGraphResponseBodyResultGraphZoneMetas>) };
    inline GetDeployGraphResponseBodyResultGraph& setZoneMetas(const vector<Models::GetDeployGraphResponseBodyResultGraphZoneMetas> & zoneMetas) { DARABONBA_PTR_SET_VALUE(zoneMetas_, zoneMetas) };
    inline GetDeployGraphResponseBodyResultGraph& setZoneMetas(vector<Models::GetDeployGraphResponseBodyResultGraphZoneMetas> && zoneMetas) { DARABONBA_PTR_SET_RVALUE(zoneMetas_, zoneMetas) };


  protected:
    // The index metadata.
    std::shared_ptr<vector<Models::GetDeployGraphResponseBodyResultGraphIndexMetas>> indexMetas_ = nullptr;
    // The metadata of online clusters.
    std::shared_ptr<vector<Models::GetDeployGraphResponseBodyResultGraphOnlineMaster>> onlineMaster_ = nullptr;
    // The association relationships between data sources and indexes.
    std::shared_ptr<map<string, vector<string>>> tableIndexRelation_ = nullptr;
    // The metadata of data sources.
    std::shared_ptr<vector<Models::GetDeployGraphResponseBodyResultGraphTableMetas>> tableMetas_ = nullptr;
    // The association relationships between zones and indexes.
    std::shared_ptr<map<string, vector<string>>> zoneIndexRelation_ = nullptr;
    // The zone metadata.
    std::shared_ptr<vector<Models::GetDeployGraphResponseBodyResultGraphZoneMetas>> zoneMetas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
