// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTICDATASOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTICDATASOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListAgenticDataSourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgenticDataSourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgenticDataSourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    ListAgenticDataSourcesRequest() = default ;
    ListAgenticDataSourcesRequest(const ListAgenticDataSourcesRequest &) = default ;
    ListAgenticDataSourcesRequest(ListAgenticDataSourcesRequest &&) = default ;
    ListAgenticDataSourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgenticDataSourcesRequest() = default ;
    ListAgenticDataSourcesRequest& operator=(const ListAgenticDataSourcesRequest &) = default ;
    ListAgenticDataSourcesRequest& operator=(ListAgenticDataSourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbType_ == nullptr
        && this->host_ == nullptr && this->instanceSource_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->port_ == nullptr
        && this->schema_ == nullptr && this->searchKey_ == nullptr && this->state_ == nullptr; };
    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline ListAgenticDataSourcesRequest& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline ListAgenticDataSourcesRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceSource Field Functions 
    bool hasInstanceSource() const { return this->instanceSource_ != nullptr;};
    void deleteInstanceSource() { this->instanceSource_ = nullptr;};
    inline string getInstanceSource() const { DARABONBA_PTR_GET_DEFAULT(instanceSource_, "") };
    inline ListAgenticDataSourcesRequest& setInstanceSource(string instanceSource) { DARABONBA_PTR_SET_VALUE(instanceSource_, instanceSource) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAgenticDataSourcesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAgenticDataSourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ListAgenticDataSourcesRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline ListAgenticDataSourcesRequest& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline ListAgenticDataSourcesRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int32_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
    inline ListAgenticDataSourcesRequest& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // Filters data sources by type. If you leave this parameter empty, no restriction is applied. Valid values: MYSQL, POSTGRESQL, ORACLE, SQLSERVER, MARIADB, POLARDB, POLARDB_POSTGRESQL, POLARDB_ORACLE, OCEANBASEX, DRDS, ADB_MYSQL, ADB_POSTGRESQL, CLICKHOUSE, SELECTDB, STARROCKS, HOLOGRES, MAXCOMPUTE, ES_REST, and TRINO.
    shared_ptr<string> dbType_ {};
    // Filters data sources by endpoint. If you leave this parameter empty, no restriction is applied.
    shared_ptr<string> host_ {};
    // Filters data sources by source. If you leave this parameter empty, no restriction is applied. Valid values:
    // - RDS: ApsaraDB instance
    // - PUBLIC_OWN: self-managed database on the public network
    // - ECS_OWN: self-managed database on an ECS instance
    // - GATEWAY: connected through Database Gateway
    // - VPC_IDC: connected over a VPC or IDC
    shared_ptr<string> instanceSource_ {};
    // The number of entries to return per page. Default value: 20. Maximum value: 200.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination cursor. Leave this parameter empty when you query the first page. When you query subsequent pages, pass the NextToken value returned from the previous request.
    shared_ptr<string> nextToken_ {};
    // Filters data sources by connection port. If you leave this parameter empty, no restriction is applied.
    shared_ptr<int32_t> port_ {};
    // Filters data sources by connection target name. The meaning of this parameter varies based on the data source type. If you leave this parameter empty, no restriction is applied.
    shared_ptr<string> schema_ {};
    // Performs a fuzzy search by data source name or endpoint. If you leave this parameter empty, no fuzzy search is performed.
    shared_ptr<string> searchKey_ {};
    // Filters data sources by status. If you leave this parameter empty, no restriction is applied. Valid values:
    // - 0: normal
    // - -1: deleted
    // - -2: disabled
    shared_ptr<int32_t> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
