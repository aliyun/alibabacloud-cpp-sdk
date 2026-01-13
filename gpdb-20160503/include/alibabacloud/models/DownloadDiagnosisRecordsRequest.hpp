// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADDIAGNOSISRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADDIAGNOSISRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DownloadDiagnosisRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadDiagnosisRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(QueryCondition, queryCondition_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadDiagnosisRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(QueryCondition, queryCondition_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DownloadDiagnosisRecordsRequest() = default ;
    DownloadDiagnosisRecordsRequest(const DownloadDiagnosisRecordsRequest &) = default ;
    DownloadDiagnosisRecordsRequest(DownloadDiagnosisRecordsRequest &&) = default ;
    DownloadDiagnosisRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadDiagnosisRecordsRequest() = default ;
    DownloadDiagnosisRecordsRequest& operator=(const DownloadDiagnosisRecordsRequest &) = default ;
    DownloadDiagnosisRecordsRequest& operator=(DownloadDiagnosisRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->database_ == nullptr && this->endTime_ == nullptr && this->lang_ == nullptr && this->queryCondition_ == nullptr && this->resourceGroupId_ == nullptr
        && this->startTime_ == nullptr && this->user_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DownloadDiagnosisRecordsRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DownloadDiagnosisRecordsRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DownloadDiagnosisRecordsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DownloadDiagnosisRecordsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // queryCondition Field Functions 
    bool hasQueryCondition() const { return this->queryCondition_ != nullptr;};
    void deleteQueryCondition() { this->queryCondition_ = nullptr;};
    inline string getQueryCondition() const { DARABONBA_PTR_GET_DEFAULT(queryCondition_, "") };
    inline DownloadDiagnosisRecordsRequest& setQueryCondition(string queryCondition) { DARABONBA_PTR_SET_VALUE(queryCondition_, queryCondition) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DownloadDiagnosisRecordsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DownloadDiagnosisRecordsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DownloadDiagnosisRecordsRequest& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The ID of the instance.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the details of all AnalyticDB for PostgreSQL instances in a specific region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the database.
    // 
    // This parameter is required.
    shared_ptr<string> database_ {};
    // The end of the time range to query. Specify the time in the *yyyy-MM-dd*T*HH:mm*Z format. The time must be in UTC.
    shared_ptr<string> endTime_ {};
    // The language of the file that contains the query diagnostic information. Valid values:
    // 
    // *   **zh**: simplified Chinese
    // *   **en**: English
    // *   **ja**: Japanese
    // *   **zh-tw**: traditional Chinese
    shared_ptr<string> lang_ {};
    // The filter condition on queries. The value is in the JSON format. Valid values:
    // 
    // *   `{"Type":"maxCost", "Value":"100"}`: filters the top 100 queries that are the most time-consuming.
    // *   `{"Type":"status","Value":"finished"}`: filters completed queries.
    // *   `{"Type":"status","Value":"running"}`: filters running queries.
    // *   `{"Type":"cost","Max":"200"}`: filters the queries that consume less than 200 milliseconds.
    // *   `{"Type":"cost","Min":"200","Max":"60000"}`: filters the queries that consume 200 milliseconds or more and less than 1 minute.
    // *   `{"Type":"cost","Min":"60000"}`: filters the queries that consume 1 minute or more.
    // *   `{"Type":"cost","Min":"30","Max":"50"}`: filters the queries that consume 30 milliseconds or more and less than 50 milliseconds. You can customize a filter condition by setting **Min** and **Max**.
    shared_ptr<string> queryCondition_ {};
    // The ID of the resource group to which the instance belongs. For more information about how to obtain the ID of a resource group, see [View basic information of a resource group](https://help.aliyun.com/document_detail/151181.html).
    shared_ptr<string> resourceGroupId_ {};
    // The beginning of the time range to query. Specify the time in the *yyyy-MM-dd*T*HH:mm*Z format. The time must be in UTC.
    shared_ptr<string> startTime_ {};
    // The name of the database account.
    shared_ptr<string> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
