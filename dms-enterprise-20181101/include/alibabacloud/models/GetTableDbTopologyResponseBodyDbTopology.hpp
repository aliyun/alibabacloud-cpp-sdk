// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEDBTOPOLOGYRESPONSEBODYDBTOPOLOGY_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEDBTOPOLOGYRESPONSEBODYDBTOPOLOGY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTableDBTopologyResponseBodyDBTopologyDataSourceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTableDBTopologyResponseBodyDBTopology : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableDBTopologyResponseBodyDBTopology& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceList, dataSourceList_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableDBTopologyResponseBodyDBTopology& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceList, dataSourceList_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetTableDBTopologyResponseBodyDBTopology() = default ;
    GetTableDBTopologyResponseBodyDBTopology(const GetTableDBTopologyResponseBodyDBTopology &) = default ;
    GetTableDBTopologyResponseBodyDBTopology(GetTableDBTopologyResponseBodyDBTopology &&) = default ;
    GetTableDBTopologyResponseBodyDBTopology(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableDBTopologyResponseBodyDBTopology() = default ;
    GetTableDBTopologyResponseBodyDBTopology& operator=(const GetTableDBTopologyResponseBodyDBTopology &) = default ;
    GetTableDBTopologyResponseBodyDBTopology& operator=(GetTableDBTopologyResponseBodyDBTopology &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceList_ == nullptr
        && return this->tableGuid_ == nullptr && return this->tableName_ == nullptr; };
    // dataSourceList Field Functions 
    bool hasDataSourceList() const { return this->dataSourceList_ != nullptr;};
    void deleteDataSourceList() { this->dataSourceList_ = nullptr;};
    inline const vector<Models::GetTableDBTopologyResponseBodyDBTopologyDataSourceList> & dataSourceList() const { DARABONBA_PTR_GET_CONST(dataSourceList_, vector<Models::GetTableDBTopologyResponseBodyDBTopologyDataSourceList>) };
    inline vector<Models::GetTableDBTopologyResponseBodyDBTopologyDataSourceList> dataSourceList() { DARABONBA_PTR_GET(dataSourceList_, vector<Models::GetTableDBTopologyResponseBodyDBTopologyDataSourceList>) };
    inline GetTableDBTopologyResponseBodyDBTopology& setDataSourceList(const vector<Models::GetTableDBTopologyResponseBodyDBTopologyDataSourceList> & dataSourceList) { DARABONBA_PTR_SET_VALUE(dataSourceList_, dataSourceList) };
    inline GetTableDBTopologyResponseBodyDBTopology& setDataSourceList(vector<Models::GetTableDBTopologyResponseBodyDBTopologyDataSourceList> && dataSourceList) { DARABONBA_PTR_SET_RVALUE(dataSourceList_, dataSourceList) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string tableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline GetTableDBTopologyResponseBodyDBTopology& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetTableDBTopologyResponseBodyDBTopology& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The data sources.
    std::shared_ptr<vector<Models::GetTableDBTopologyResponseBodyDBTopologyDataSourceList>> dataSourceList_ = nullptr;
    // The GUID of the table in DMS.
    std::shared_ptr<string> tableGuid_ = nullptr;
    // The name of the table.
    // 
    // > 
    // 
    // *   If a logical table is queried, the name of the logical table is returned.
    // 
    // *   If a physical table is queried, the name of the physical table is returned.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
