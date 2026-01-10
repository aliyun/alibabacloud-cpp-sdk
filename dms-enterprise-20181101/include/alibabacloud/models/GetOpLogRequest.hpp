// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOPLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetOpLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(UserNick, userNick_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(UserNick, userNick_);
    };
    GetOpLogRequest() = default ;
    GetOpLogRequest(const GetOpLogRequest &) = default ;
    GetOpLogRequest(GetOpLogRequest &&) = default ;
    GetOpLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpLogRequest() = default ;
    GetOpLogRequest& operator=(const GetOpLogRequest &) = default ;
    GetOpLogRequest& operator=(GetOpLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->endTime_ == nullptr && this->module_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->startTime_ == nullptr
        && this->tid_ == nullptr && this->userNick_ == nullptr; };
    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline GetOpLogRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetOpLogRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline GetOpLogRequest& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetOpLogRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetOpLogRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetOpLogRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetOpLogRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string getUserNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline GetOpLogRequest& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


  protected:
    // DatabaseName.
    shared_ptr<string> databaseName_ {};
    // The end of the time range to query. Specify the time in the yyyy-MM-DD HH:mm:ss format.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The functional module for which you want to query operation logs. If you do not specify this parameter, operation logs for all functional modules are returned. Valid values:
    // 
    // *   **PERMISSION**: permissions
    // *   **OWNER**: data owner
    // *   **SQL_CONSOLE**: data query
    // *   **SQL_CONSOLE_EXPORT**: query result export
    // *   **DATA_CHANGE**: data change
    // *   **DATA_EXPORT**: data export
    // *   **SQL_REVIEW**: SQL review
    // *   **DT_SYNC**: database and table synchronization
    // *   **DT_DETAIL**: database and table details
    // *   **DB_TASK**: task management
    // *   **INSTANCE_MANAGE**: instance management
    // *   **USER_MANAGE**: user management
    // *   **SECURITY_RULE**: security rules
    // *   **CONFIG_MANAGE**: configuration management
    // *   **RESOURCE_AUTH**: resource authorization
    // *   **ACCESS_WHITE_IP**: access IP address whitelist
    // *   **NDDL**: schema design
    // *   **DSQL_CONSOLE**: cross-database data query
    // *   **DSQL_CONSOLE_EXPORT**: cross-database query result export
    // *   **DATA_TRACT**: data tracking
    // *   **DATA_QUALITY**: data quality
    // *   **DATALINK_MANAGE** :DBLink management
    // *   **DATASEC_MANAGE**: sensitive data management
    // *   **SELL**: sales
    shared_ptr<string> module_ {};
    // The number of the page to return. Pages start from page 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Valid values:
    // 
    // *   30
    // *   50
    // *   100
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The beginning of the time range to query. Specify the time in the yyyy-MM-DD HH:mm:ss format.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to query the tenant ID.
    shared_ptr<int64_t> tid_ {};
    // UserNick.
    shared_ptr<string> userNick_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
