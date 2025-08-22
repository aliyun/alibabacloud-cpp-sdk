// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPTOPOLOGYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPTOPOLOGYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class QueryAppTopologyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAppTopologyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(Db, db_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Filters, filtersShrink_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Rpc, rpc_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAppTopologyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(Db, db_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Filters, filtersShrink_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Rpc, rpc_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryAppTopologyShrinkRequest() = default ;
    QueryAppTopologyShrinkRequest(const QueryAppTopologyShrinkRequest &) = default ;
    QueryAppTopologyShrinkRequest(QueryAppTopologyShrinkRequest &&) = default ;
    QueryAppTopologyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAppTopologyShrinkRequest() = default ;
    QueryAppTopologyShrinkRequest& operator=(const QueryAppTopologyShrinkRequest &) = default ;
    QueryAppTopologyShrinkRequest& operator=(QueryAppTopologyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->db_ != nullptr && this->dbName_ != nullptr && this->endTime_ != nullptr && this->filtersShrink_ != nullptr && this->pid_ != nullptr
        && this->regionId_ != nullptr && this->rpc_ != nullptr && this->startTime_ != nullptr && this->type_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline QueryAppTopologyShrinkRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // db Field Functions 
    bool hasDb() const { return this->db_ != nullptr;};
    void deleteDb() { this->db_ = nullptr;};
    inline string db() const { DARABONBA_PTR_GET_DEFAULT(db_, "") };
    inline QueryAppTopologyShrinkRequest& setDb(string db) { DARABONBA_PTR_SET_VALUE(db_, db) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline QueryAppTopologyShrinkRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryAppTopologyShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filtersShrink Field Functions 
    bool hasFiltersShrink() const { return this->filtersShrink_ != nullptr;};
    void deleteFiltersShrink() { this->filtersShrink_ = nullptr;};
    inline string filtersShrink() const { DARABONBA_PTR_GET_DEFAULT(filtersShrink_, "") };
    inline QueryAppTopologyShrinkRequest& setFiltersShrink(string filtersShrink) { DARABONBA_PTR_SET_VALUE(filtersShrink_, filtersShrink) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline QueryAppTopologyShrinkRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryAppTopologyShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rpc Field Functions 
    bool hasRpc() const { return this->rpc_ != nullptr;};
    void deleteRpc() { this->rpc_ = nullptr;};
    inline string rpc() const { DARABONBA_PTR_GET_DEFAULT(rpc_, "") };
    inline QueryAppTopologyShrinkRequest& setRpc(string rpc) { DARABONBA_PTR_SET_VALUE(rpc_, rpc) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryAppTopologyShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryAppTopologyShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The application type
    std::shared_ptr<string> appType_ = nullptr;
    // The database domain name.
    std::shared_ptr<string> db_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> dbName_ = nullptr;
    // The end of the time range to query. Unit: milliseconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The filter conditions.
    std::shared_ptr<string> filtersShrink_ = nullptr;
    // The ID of the application.
    // 
    // Log on to the **ARMS console**. In the left-side navigation pane, choose **Browser Monitoring** > **Browser Monitoring**. On the Browser Monitoring page, click the name of an application. The URL in the address bar contains the process ID (PID) of the application. The PID is indicated in the pid=xxx format. The PID is usually percent encoded as xxx%40xxx. You must modify this value to remove the percent encoding. For example, if the PID in the URL is eb4zdose6v%409781be0f44d\\*\\*\\*\\*, you must replace %40 with an at sign (@) to obtain eb4zdose6v@9781be0f44d\\*\\*\\*\\*.
    std::shared_ptr<string> pid_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // RPC interface name.
    std::shared_ptr<string> rpc_ = nullptr;
    // The start of the time range to query. Unit: milliseconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The type kind of topology.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
