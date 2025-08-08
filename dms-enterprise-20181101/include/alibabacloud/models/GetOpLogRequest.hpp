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
    virtual bool empty() const override { this->databaseName_ != nullptr
        && this->endTime_ != nullptr && this->module_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->startTime_ != nullptr
        && this->tid_ != nullptr && this->userNick_ != nullptr; };
    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline GetOpLogRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetOpLogRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string module() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline GetOpLogRequest& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetOpLogRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetOpLogRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetOpLogRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetOpLogRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string userNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline GetOpLogRequest& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


  protected:
    // DatabaseName.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The end of the time range to query. Specify the time in the yyyy-MM-DD HH:mm:ss format.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
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
    std::shared_ptr<string> module_ = nullptr;
    // The number of the page to return. Pages start from page 1.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Valid values:
    // 
    // *   30
    // *   50
    // *   100
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The beginning of the time range to query. Specify the time in the yyyy-MM-DD HH:mm:ss format.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to query the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
    // UserNick.
    std::shared_ptr<string> userNick_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
