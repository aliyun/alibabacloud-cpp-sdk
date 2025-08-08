// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEDBTOPOLOGYRESPONSEBODYDBTOPOLOGYDATASOURCELIST_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEDBTOPOLOGYRESPONSEBODYDBTOPOLOGYDATASOURCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTableDBTopologyResponseBodyDBTopologyDataSourceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableDBTopologyResponseBodyDBTopologyDataSourceList& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseList, databaseList_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Sid, sid_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableDBTopologyResponseBodyDBTopologyDataSourceList& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseList, databaseList_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Sid, sid_);
    };
    GetTableDBTopologyResponseBodyDBTopologyDataSourceList() = default ;
    GetTableDBTopologyResponseBodyDBTopologyDataSourceList(const GetTableDBTopologyResponseBodyDBTopologyDataSourceList &) = default ;
    GetTableDBTopologyResponseBodyDBTopologyDataSourceList(GetTableDBTopologyResponseBodyDBTopologyDataSourceList &&) = default ;
    GetTableDBTopologyResponseBodyDBTopologyDataSourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableDBTopologyResponseBodyDBTopologyDataSourceList() = default ;
    GetTableDBTopologyResponseBodyDBTopologyDataSourceList& operator=(const GetTableDBTopologyResponseBodyDBTopologyDataSourceList &) = default ;
    GetTableDBTopologyResponseBodyDBTopologyDataSourceList& operator=(GetTableDBTopologyResponseBodyDBTopologyDataSourceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseList_ != nullptr
        && this->dbType_ != nullptr && this->host_ != nullptr && this->port_ != nullptr && this->sid_ != nullptr; };
    // databaseList Field Functions 
    bool hasDatabaseList() const { return this->databaseList_ != nullptr;};
    void deleteDatabaseList() { this->databaseList_ = nullptr;};
    inline const vector<Models::GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList> & databaseList() const { DARABONBA_PTR_GET_CONST(databaseList_, vector<Models::GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList>) };
    inline vector<Models::GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList> databaseList() { DARABONBA_PTR_GET(databaseList_, vector<Models::GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList>) };
    inline GetTableDBTopologyResponseBodyDBTopologyDataSourceList& setDatabaseList(const vector<Models::GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList> & databaseList) { DARABONBA_PTR_SET_VALUE(databaseList_, databaseList) };
    inline GetTableDBTopologyResponseBodyDBTopologyDataSourceList& setDatabaseList(vector<Models::GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList> && databaseList) { DARABONBA_PTR_SET_RVALUE(databaseList_, databaseList) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline GetTableDBTopologyResponseBodyDBTopologyDataSourceList& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GetTableDBTopologyResponseBodyDBTopologyDataSourceList& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline GetTableDBTopologyResponseBodyDBTopologyDataSourceList& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // sid Field Functions 
    bool hasSid() const { return this->sid_ != nullptr;};
    void deleteSid() { this->sid_ = nullptr;};
    inline string sid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
    inline GetTableDBTopologyResponseBodyDBTopologyDataSourceList& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


  protected:
    // The physical databases.
    std::shared_ptr<vector<Models::GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList>> databaseList_ = nullptr;
    // The type of the database. For more information about the valid values of this parameter, see [DbType parameter](https://help.aliyun.com/document_detail/198106.html).
    std::shared_ptr<string> dbType_ = nullptr;
    // The endpoint of the data source.
    std::shared_ptr<string> host_ = nullptr;
    // The port that is used to connect to the data source.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The system ID (SID) of the data source.
    std::shared_ptr<string> sid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
