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
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The instance ID. You can call DescribeDBInstances to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the database. By default, all databases are queried. You can also enter a database name to query. Only one database name can be entered at a time.
    shared_ptr<string> database_ {};
    // The end time of the query. The end time must be later than the start time, and the interval between the start time and end time must be 7 days or less. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format (UTC).
    // 
    // > If DAS Enterprise Edition V3 is activated and you use the SQL Explorer and Audit feature it provides, you can query data within the hot data storage duration. You can call [DescribeSqlLogConfig](https://help.aliyun.com/document_detail/2778837.html) to query the activated Enterprise Edition information.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // Specifies whether to generate an audit file or return a list of SQL records. Valid values:
    // * **File**: If you set this parameter to File, an audit file is generated. Only common parameters are returned. You must call the DescribeSQLLogFiles operation to obtain the download URL of the file.
    // * **Stream**: This is the default value. A list of SQL records is returned.
    // 
    // > If this parameter is set to **File**, only MySQL (with Premium Local SSDs) and SQL Server instances are supported, and a maximum of 1,000,000 log entries are recorded.
    shared_ptr<string> form_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number. The value must be a positive integer that does not exceed the maximum value of the Integer data type.
    // 
    // Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: **30** to **100**. Default value: **30**.
    shared_ptr<int32_t> pageSize_ {};
    // The keywords that are used for the query.
    // 
    // - When you generate an audit file by calling this operation (the **Form** request parameter is set to **File**), keyword-based filtering is not supported.
    // 
    // - Separate multiple keywords with spaces. You can specify up to 10 keywords. The logical relationship among keywords is **and**.
    // 
    // - If a field name in the SQL statement uses backticks (\\`), you must also include the backticks when using the field name as a keyword. For example, if the field name is \\`id\\`, enter \\`id\\` instead of id.
    // 
    // > After you enter keywords, the system matches the keywords against the **Database**, **User**, and **QueryKeywords** parameters simultaneously. The logical relationship among the three request parameters is **and**.
    shared_ptr<string> queryKeywords_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // A reserved parameter.
    shared_ptr<int64_t> SQLId_ {};
    // The start time of the query. You can query data within the last 7 days from the current date. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format (UTC).
    // 
    // > If DAS Enterprise Edition V3 is activated and you use the SQL Explorer and Audit feature it provides, you can query data within the hot data storage duration. You can call [DescribeSqlLogConfig](https://help.aliyun.com/document_detail/2778837.html) to query the activated Enterprise Edition information.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The username. By default, all users are queried. You can also enter a username to query. Only one username can be entered at a time.
    shared_ptr<string> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
