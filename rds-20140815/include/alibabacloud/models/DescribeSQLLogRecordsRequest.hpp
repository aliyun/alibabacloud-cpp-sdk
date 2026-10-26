// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSQLLogRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLLogRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Form, form_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryKeywords, queryKeywords_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SQLId, SQLId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLLogRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Form, form_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryKeywords, queryKeywords_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SQLId, SQLId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribeSQLLogRecordsRequest() = default ;
    DescribeSQLLogRecordsRequest(const DescribeSQLLogRecordsRequest &) = default ;
    DescribeSQLLogRecordsRequest(DescribeSQLLogRecordsRequest &&) = default ;
    DescribeSQLLogRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLLogRecordsRequest() = default ;
    DescribeSQLLogRecordsRequest& operator=(const DescribeSQLLogRecordsRequest &) = default ;
    DescribeSQLLogRecordsRequest& operator=(DescribeSQLLogRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->DBInstanceId_ == nullptr && this->database_ == nullptr && this->endTime_ == nullptr && this->form_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->queryKeywords_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->SQLId_ == nullptr && this->startTime_ == nullptr && this->user_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeSQLLogRecordsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeSQLLogRecordsRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeSQLLogRecordsRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSQLLogRecordsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // form Field Functions 
    bool hasForm() const { return this->form_ != nullptr;};
    void deleteForm() { this->form_ = nullptr;};
    inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
    inline DescribeSQLLogRecordsRequest& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeSQLLogRecordsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeSQLLogRecordsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSQLLogRecordsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSQLLogRecordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryKeywords Field Functions 
    bool hasQueryKeywords() const { return this->queryKeywords_ != nullptr;};
    void deleteQueryKeywords() { this->queryKeywords_ = nullptr;};
    inline string getQueryKeywords() const { DARABONBA_PTR_GET_DEFAULT(queryKeywords_, "") };
    inline DescribeSQLLogRecordsRequest& setQueryKeywords(string queryKeywords) { DARABONBA_PTR_SET_VALUE(queryKeywords_, queryKeywords) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeSQLLogRecordsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeSQLLogRecordsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // SQLId Field Functions 
    bool hasSQLId() const { return this->SQLId_ != nullptr;};
    void deleteSQLId() { this->SQLId_ = nullptr;};
    inline int64_t getSQLId() const { DARABONBA_PTR_GET_DEFAULT(SQLId_, 0L) };
    inline DescribeSQLLogRecordsRequest& setSQLId(int64_t SQLId) { DARABONBA_PTR_SET_VALUE(SQLId_, SQLId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSQLLogRecordsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeSQLLogRecordsRequest& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The client token that is used to ensure the idempotence of the request and prevent duplicate submissions. The value is generated by the client and must be unique across different requests. The value can be up to 64 ASCII characters in length and cannot contain non-ASCII characters.
    shared_ptr<string> clientToken_ {};
    // Instance ID of the instance. You can call the DescribeDBInstances operation to query instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the database. By default, all databases are queried. You can also enter a database name to query a specific database. You can enter only one database name at a time.
    shared_ptr<string> database_ {};
    // The end time of the query. The end time must be later than the start time, and the interval between the start time and the end time must be less than or equal to 7 days. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format. The time must be in UTC.
    // 
    // > If DAS Enterprise Edition V3 is activated and its SQL Explorer and Audit feature is used, you can query data within the hot storage duration. You can call the [DescribeSqlLogConfig](https://help.aliyun.com/document_detail/2778837.html) operation to query the activation information of the Enterprise Edition.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // Specifies whether to trigger the generation of an audit file or return a list of SQL records. Valid values:
    // * **File**: triggers the generation of an audit file and returns only common parameters. You must call the DescribeSQLLogFiles operation to obtain the final download URL of the file.
    // * **Stream**: returns a list of SQL records. This is the default value.
    // 
    // > If the value is set to **File**, only ApsaraDB RDS for MySQL instances with Premium Local SSDs and ApsaraDB RDS for SQL Server instances are supported, and up to 1 million log entries can be recorded.
    shared_ptr<string> form_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number. Valid values: any integer greater than 0 and less than or equal to the maximum value of the Integer data type.
    // 
    // Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: **30** to **100**. Default value: **30**.
    shared_ptr<int32_t> pageSize_ {};
    // The keywords that are used for the query.
    // 
    // - When an audit file is generated by calling the API operation (the **Form** request parameter is set to **File**), filtering by keyword is not supported.
    // 
    // - Separate multiple keywords with spaces. You can specify up to 10 keywords. The logical relationship between keywords is **AND**.
    // 
    // - If a field name in the SQL statement is enclosed in backticks (\\`), you must also include the backticks when you use the field name as a query keyword. For example, if the field name is \\`id\\`, enter \\`id\\` instead of id.
    // 
    // > After you enter keywords, the system matches the keywords based on the **Database**, **User**, and **QueryKeywords** parameters at the same time. The logical relationship among these three request parameters is **AND**.
    shared_ptr<string> queryKeywords_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The reserved parameter.
    shared_ptr<int64_t> SQLId_ {};
    // The start time of the query. You can query data within the last 7 days from the current date. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format. The time must be in UTC.
    // 
    // > If DAS Enterprise Edition V3 is activated and its SQL Explorer and Audit feature is used, you can query data within the hot storage duration. You can call the [DescribeSqlLogConfig](https://help.aliyun.com/document_detail/2778837.html) operation to query the activation information of the Enterprise Edition.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The name of the user. By default, all users are queried. You can also enter a username to query a specific user. You can enter only one username at a time.
    shared_ptr<string> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
