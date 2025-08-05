// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISCOVEREVENTSOURCERESPONSEBODYDATASOURCEMYSQLDISCOVERY_HPP_
#define ALIBABACLOUD_MODELS_DISCOVEREVENTSOURCERESPONSEBODYDATASOURCEMYSQLDISCOVERY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseNames, databaseNames_);
      DARABONBA_PTR_TO_JSON(EstimatedRows, estimatedRows_);
      DARABONBA_PTR_TO_JSON(ExpireLogsDays, expireLogsDays_);
      DARABONBA_PTR_TO_JSON(SimpleData, simpleData_);
      DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
      DARABONBA_PTR_TO_JSON(TableSchema, tableSchema_);
      DARABONBA_PTR_TO_JSON(WaitTimeout, waitTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseNames, databaseNames_);
      DARABONBA_PTR_FROM_JSON(EstimatedRows, estimatedRows_);
      DARABONBA_PTR_FROM_JSON(ExpireLogsDays, expireLogsDays_);
      DARABONBA_PTR_FROM_JSON(SimpleData, simpleData_);
      DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
      DARABONBA_PTR_FROM_JSON(TableSchema, tableSchema_);
      DARABONBA_PTR_FROM_JSON(WaitTimeout, waitTimeout_);
    };
    DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery() = default ;
    DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery(const DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery &) = default ;
    DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery(DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery &&) = default ;
    DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery() = default ;
    DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery& operator=(const DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery &) = default ;
    DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery& operator=(DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseNames_ != nullptr
        && this->estimatedRows_ != nullptr && this->expireLogsDays_ != nullptr && this->simpleData_ != nullptr && this->tableNames_ != nullptr && this->tableSchema_ != nullptr
        && this->waitTimeout_ != nullptr; };
    // databaseNames Field Functions 
    bool hasDatabaseNames() const { return this->databaseNames_ != nullptr;};
    void deleteDatabaseNames() { this->databaseNames_ = nullptr;};
    inline const vector<string> & databaseNames() const { DARABONBA_PTR_GET_CONST(databaseNames_, vector<string>) };
    inline vector<string> databaseNames() { DARABONBA_PTR_GET(databaseNames_, vector<string>) };
    inline DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery& setDatabaseNames(const vector<string> & databaseNames) { DARABONBA_PTR_SET_VALUE(databaseNames_, databaseNames) };
    inline DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery& setDatabaseNames(vector<string> && databaseNames) { DARABONBA_PTR_SET_RVALUE(databaseNames_, databaseNames) };


    // estimatedRows Field Functions 
    bool hasEstimatedRows() const { return this->estimatedRows_ != nullptr;};
    void deleteEstimatedRows() { this->estimatedRows_ = nullptr;};
    inline int64_t estimatedRows() const { DARABONBA_PTR_GET_DEFAULT(estimatedRows_, 0L) };
    inline DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery& setEstimatedRows(int64_t estimatedRows) { DARABONBA_PTR_SET_VALUE(estimatedRows_, estimatedRows) };


    // expireLogsDays Field Functions 
    bool hasExpireLogsDays() const { return this->expireLogsDays_ != nullptr;};
    void deleteExpireLogsDays() { this->expireLogsDays_ = nullptr;};
    inline int32_t expireLogsDays() const { DARABONBA_PTR_GET_DEFAULT(expireLogsDays_, 0) };
    inline DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery& setExpireLogsDays(int32_t expireLogsDays) { DARABONBA_PTR_SET_VALUE(expireLogsDays_, expireLogsDays) };


    // simpleData Field Functions 
    bool hasSimpleData() const { return this->simpleData_ != nullptr;};
    void deleteSimpleData() { this->simpleData_ = nullptr;};
    inline string simpleData() const { DARABONBA_PTR_GET_DEFAULT(simpleData_, "") };
    inline DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery& setSimpleData(string simpleData) { DARABONBA_PTR_SET_VALUE(simpleData_, simpleData) };


    // tableNames Field Functions 
    bool hasTableNames() const { return this->tableNames_ != nullptr;};
    void deleteTableNames() { this->tableNames_ = nullptr;};
    inline const vector<string> & tableNames() const { DARABONBA_PTR_GET_CONST(tableNames_, vector<string>) };
    inline vector<string> tableNames() { DARABONBA_PTR_GET(tableNames_, vector<string>) };
    inline DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery& setTableNames(const vector<string> & tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };
    inline DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery& setTableNames(vector<string> && tableNames) { DARABONBA_PTR_SET_RVALUE(tableNames_, tableNames) };


    // tableSchema Field Functions 
    bool hasTableSchema() const { return this->tableSchema_ != nullptr;};
    void deleteTableSchema() { this->tableSchema_ = nullptr;};
    inline const Models::DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema & tableSchema() const { DARABONBA_PTR_GET_CONST(tableSchema_, Models::DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema) };
    inline Models::DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema tableSchema() { DARABONBA_PTR_GET(tableSchema_, Models::DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema) };
    inline DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery& setTableSchema(const Models::DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema & tableSchema) { DARABONBA_PTR_SET_VALUE(tableSchema_, tableSchema) };
    inline DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery& setTableSchema(Models::DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema && tableSchema) { DARABONBA_PTR_SET_RVALUE(tableSchema_, tableSchema) };


    // waitTimeout Field Functions 
    bool hasWaitTimeout() const { return this->waitTimeout_ != nullptr;};
    void deleteWaitTimeout() { this->waitTimeout_ = nullptr;};
    inline int32_t waitTimeout() const { DARABONBA_PTR_GET_DEFAULT(waitTimeout_, 0) };
    inline DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery& setWaitTimeout(int32_t waitTimeout) { DARABONBA_PTR_SET_VALUE(waitTimeout_, waitTimeout) };


  protected:
    std::shared_ptr<vector<string>> databaseNames_ = nullptr;
    std::shared_ptr<int64_t> estimatedRows_ = nullptr;
    std::shared_ptr<int32_t> expireLogsDays_ = nullptr;
    std::shared_ptr<string> simpleData_ = nullptr;
    std::shared_ptr<vector<string>> tableNames_ = nullptr;
    std::shared_ptr<Models::DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchema> tableSchema_ = nullptr;
    std::shared_ptr<int32_t> waitTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
