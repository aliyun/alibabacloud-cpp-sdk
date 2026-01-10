// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATACRONCLEARORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATACRONCLEARORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataCronClearOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataCronClearOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataCronClearOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateDataCronClearOrderRequest() = default ;
    CreateDataCronClearOrderRequest(const CreateDataCronClearOrderRequest &) = default ;
    CreateDataCronClearOrderRequest(CreateDataCronClearOrderRequest &&) = default ;
    CreateDataCronClearOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataCronClearOrderRequest() = default ;
    CreateDataCronClearOrderRequest& operator=(const CreateDataCronClearOrderRequest &) = default ;
    CreateDataCronClearOrderRequest& operator=(CreateDataCronClearOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Param : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Param& obj) { 
        DARABONBA_PTR_TO_JSON(Classify, classify_);
        DARABONBA_PTR_TO_JSON(CronClearItemList, cronClearItemList_);
        DARABONBA_PTR_TO_JSON(CronFormat, cronFormat_);
        DARABONBA_PTR_TO_JSON(DbItemList, dbItemList_);
        DARABONBA_PTR_TO_JSON(DurationHour, durationHour_);
        DARABONBA_PTR_TO_JSON(specifyDuration, specifyDuration_);
      };
      friend void from_json(const Darabonba::Json& j, Param& obj) { 
        DARABONBA_PTR_FROM_JSON(Classify, classify_);
        DARABONBA_PTR_FROM_JSON(CronClearItemList, cronClearItemList_);
        DARABONBA_PTR_FROM_JSON(CronFormat, cronFormat_);
        DARABONBA_PTR_FROM_JSON(DbItemList, dbItemList_);
        DARABONBA_PTR_FROM_JSON(DurationHour, durationHour_);
        DARABONBA_PTR_FROM_JSON(specifyDuration, specifyDuration_);
      };
      Param() = default ;
      Param(const Param &) = default ;
      Param(Param &&) = default ;
      Param(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Param() = default ;
      Param& operator=(const Param &) = default ;
      Param& operator=(Param &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DbItemList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DbItemList& obj) { 
          DARABONBA_PTR_TO_JSON(DbId, dbId_);
          DARABONBA_PTR_TO_JSON(Logic, logic_);
        };
        friend void from_json(const Darabonba::Json& j, DbItemList& obj) { 
          DARABONBA_PTR_FROM_JSON(DbId, dbId_);
          DARABONBA_PTR_FROM_JSON(Logic, logic_);
        };
        DbItemList() = default ;
        DbItemList(const DbItemList &) = default ;
        DbItemList(DbItemList &&) = default ;
        DbItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DbItemList() = default ;
        DbItemList& operator=(const DbItemList &) = default ;
        DbItemList& operator=(DbItemList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dbId_ == nullptr
        && this->logic_ == nullptr; };
        // dbId Field Functions 
        bool hasDbId() const { return this->dbId_ != nullptr;};
        void deleteDbId() { this->dbId_ = nullptr;};
        inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
        inline DbItemList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


        // logic Field Functions 
        bool hasLogic() const { return this->logic_ != nullptr;};
        void deleteLogic() { this->logic_ = nullptr;};
        inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
        inline DbItemList& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


      protected:
        // The ID of the database. You can call the [SearchDatabases](https://help.aliyun.com/document_detail/141876.html) operation to query the ID of the database.
        // 
        // This parameter is required.
        shared_ptr<int64_t> dbId_ {};
        // Indicates whether the database is a logical database. Valid values:
        // 
        // *   **true**: The database is a logical database.
        // *   **false**: The database is not a logical database.
        // 
        // This parameter is required.
        shared_ptr<bool> logic_ {};
      };

      class CronClearItemList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CronClearItemList& obj) { 
          DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
          DARABONBA_PTR_TO_JSON(FilterSQL, filterSQL_);
          DARABONBA_PTR_TO_JSON(RemainDays, remainDays_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
          DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
        };
        friend void from_json(const Darabonba::Json& j, CronClearItemList& obj) { 
          DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
          DARABONBA_PTR_FROM_JSON(FilterSQL, filterSQL_);
          DARABONBA_PTR_FROM_JSON(RemainDays, remainDays_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          DARABONBA_PTR_FROM_JSON(TimeUnit, timeUnit_);
        };
        CronClearItemList() = default ;
        CronClearItemList(const CronClearItemList &) = default ;
        CronClearItemList(CronClearItemList &&) = default ;
        CronClearItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CronClearItemList() = default ;
        CronClearItemList& operator=(const CronClearItemList &) = default ;
        CronClearItemList& operator=(CronClearItemList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->columnName_ == nullptr
        && this->filterSQL_ == nullptr && this->remainDays_ == nullptr && this->tableName_ == nullptr && this->timeUnit_ == nullptr; };
        // columnName Field Functions 
        bool hasColumnName() const { return this->columnName_ != nullptr;};
        void deleteColumnName() { this->columnName_ = nullptr;};
        inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
        inline CronClearItemList& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


        // filterSQL Field Functions 
        bool hasFilterSQL() const { return this->filterSQL_ != nullptr;};
        void deleteFilterSQL() { this->filterSQL_ = nullptr;};
        inline string getFilterSQL() const { DARABONBA_PTR_GET_DEFAULT(filterSQL_, "") };
        inline CronClearItemList& setFilterSQL(string filterSQL) { DARABONBA_PTR_SET_VALUE(filterSQL_, filterSQL) };


        // remainDays Field Functions 
        bool hasRemainDays() const { return this->remainDays_ != nullptr;};
        void deleteRemainDays() { this->remainDays_ = nullptr;};
        inline int64_t getRemainDays() const { DARABONBA_PTR_GET_DEFAULT(remainDays_, 0L) };
        inline CronClearItemList& setRemainDays(int64_t remainDays) { DARABONBA_PTR_SET_VALUE(remainDays_, remainDays) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline CronClearItemList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // timeUnit Field Functions 
        bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
        void deleteTimeUnit() { this->timeUnit_ = nullptr;};
        inline string getTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
        inline CronClearItemList& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


      protected:
        // The name of the field.
        // 
        // This parameter is required.
        shared_ptr<string> columnName_ {};
        // The filter conditions.
        shared_ptr<string> filterSQL_ {};
        // The retention period of the historical data. Unit: days. For example, if you set the parameter to 7, DMS deletes the data that is retained for more than seven days.
        // 
        // This parameter is required.
        shared_ptr<int64_t> remainDays_ {};
        // The name of the table. You can call the [ListTables](https://help.aliyun.com/document_detail/141878.html) operation to query the name of the table.
        // 
        // This parameter is required.
        shared_ptr<string> tableName_ {};
        // The type of time granularity. If the ColumnName parameter specifies a field of a time type, this parameter is required. Valid values:
        // 
        // *   **MILLISECONDS**: milliseconds
        // *   **SECONDS**: seconds
        shared_ptr<string> timeUnit_ {};
      };

      virtual bool empty() const override { return this->classify_ == nullptr
        && this->cronClearItemList_ == nullptr && this->cronFormat_ == nullptr && this->dbItemList_ == nullptr && this->durationHour_ == nullptr && this->specifyDuration_ == nullptr; };
      // classify Field Functions 
      bool hasClassify() const { return this->classify_ != nullptr;};
      void deleteClassify() { this->classify_ = nullptr;};
      inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
      inline Param& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


      // cronClearItemList Field Functions 
      bool hasCronClearItemList() const { return this->cronClearItemList_ != nullptr;};
      void deleteCronClearItemList() { this->cronClearItemList_ = nullptr;};
      inline const vector<Param::CronClearItemList> & getCronClearItemList() const { DARABONBA_PTR_GET_CONST(cronClearItemList_, vector<Param::CronClearItemList>) };
      inline vector<Param::CronClearItemList> getCronClearItemList() { DARABONBA_PTR_GET(cronClearItemList_, vector<Param::CronClearItemList>) };
      inline Param& setCronClearItemList(const vector<Param::CronClearItemList> & cronClearItemList) { DARABONBA_PTR_SET_VALUE(cronClearItemList_, cronClearItemList) };
      inline Param& setCronClearItemList(vector<Param::CronClearItemList> && cronClearItemList) { DARABONBA_PTR_SET_RVALUE(cronClearItemList_, cronClearItemList) };


      // cronFormat Field Functions 
      bool hasCronFormat() const { return this->cronFormat_ != nullptr;};
      void deleteCronFormat() { this->cronFormat_ = nullptr;};
      inline string getCronFormat() const { DARABONBA_PTR_GET_DEFAULT(cronFormat_, "") };
      inline Param& setCronFormat(string cronFormat) { DARABONBA_PTR_SET_VALUE(cronFormat_, cronFormat) };


      // dbItemList Field Functions 
      bool hasDbItemList() const { return this->dbItemList_ != nullptr;};
      void deleteDbItemList() { this->dbItemList_ = nullptr;};
      inline const vector<Param::DbItemList> & getDbItemList() const { DARABONBA_PTR_GET_CONST(dbItemList_, vector<Param::DbItemList>) };
      inline vector<Param::DbItemList> getDbItemList() { DARABONBA_PTR_GET(dbItemList_, vector<Param::DbItemList>) };
      inline Param& setDbItemList(const vector<Param::DbItemList> & dbItemList) { DARABONBA_PTR_SET_VALUE(dbItemList_, dbItemList) };
      inline Param& setDbItemList(vector<Param::DbItemList> && dbItemList) { DARABONBA_PTR_SET_RVALUE(dbItemList_, dbItemList) };


      // durationHour Field Functions 
      bool hasDurationHour() const { return this->durationHour_ != nullptr;};
      void deleteDurationHour() { this->durationHour_ = nullptr;};
      inline int64_t getDurationHour() const { DARABONBA_PTR_GET_DEFAULT(durationHour_, 0L) };
      inline Param& setDurationHour(int64_t durationHour) { DARABONBA_PTR_SET_VALUE(durationHour_, durationHour) };


      // specifyDuration Field Functions 
      bool hasSpecifyDuration() const { return this->specifyDuration_ != nullptr;};
      void deleteSpecifyDuration() { this->specifyDuration_ = nullptr;};
      inline bool getSpecifyDuration() const { DARABONBA_PTR_GET_DEFAULT(specifyDuration_, false) };
      inline Param& setSpecifyDuration(bool specifyDuration) { DARABONBA_PTR_SET_VALUE(specifyDuration_, specifyDuration) };


    protected:
      // The reason for the data change.
      shared_ptr<string> classify_ {};
      // The tables for which you want to clear historical data.
      // 
      // This parameter is required.
      shared_ptr<vector<Param::CronClearItemList>> cronClearItemList_ {};
      // The crontab expression that you can use to run the task at a specified time. For more information, see [Crontab expression](https://help.aliyun.com/document_detail/206581.html).
      // 
      // This parameter is required.
      shared_ptr<string> cronFormat_ {};
      // The databases for which you want to clear historical data.
      // 
      // This parameter is required.
      shared_ptr<vector<Param::DbItemList>> dbItemList_ {};
      // The amount of time taken to run the task. Unit: hours.
      // 
      // >  If the **specifyDuration** parameter is set to **true**, this parameter is required.
      shared_ptr<int64_t> durationHour_ {};
      // Specifies whether to specify an end time for the task. Valid values:
      // 
      // *   **true**: specifies an end time for the task. The task is automatically suspended after this end time.
      // *   **false**: does not specify an end time for the task. The task is stopped after the historical data is cleared.
      // 
      // This parameter is required.
      shared_ptr<bool> specifyDuration_ {};
    };

    virtual bool empty() const override { return this->attachmentKey_ == nullptr
        && this->comment_ == nullptr && this->param_ == nullptr && this->relatedUserList_ == nullptr && this->tid_ == nullptr; };
    // attachmentKey Field Functions 
    bool hasAttachmentKey() const { return this->attachmentKey_ != nullptr;};
    void deleteAttachmentKey() { this->attachmentKey_ = nullptr;};
    inline string getAttachmentKey() const { DARABONBA_PTR_GET_DEFAULT(attachmentKey_, "") };
    inline CreateDataCronClearOrderRequest& setAttachmentKey(string attachmentKey) { DARABONBA_PTR_SET_VALUE(attachmentKey_, attachmentKey) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateDataCronClearOrderRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline const CreateDataCronClearOrderRequest::Param & getParam() const { DARABONBA_PTR_GET_CONST(param_, CreateDataCronClearOrderRequest::Param) };
    inline CreateDataCronClearOrderRequest::Param getParam() { DARABONBA_PTR_GET(param_, CreateDataCronClearOrderRequest::Param) };
    inline CreateDataCronClearOrderRequest& setParam(const CreateDataCronClearOrderRequest::Param & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
    inline CreateDataCronClearOrderRequest& setParam(CreateDataCronClearOrderRequest::Param && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


    // relatedUserList Field Functions 
    bool hasRelatedUserList() const { return this->relatedUserList_ != nullptr;};
    void deleteRelatedUserList() { this->relatedUserList_ = nullptr;};
    inline const vector<int64_t> & getRelatedUserList() const { DARABONBA_PTR_GET_CONST(relatedUserList_, vector<int64_t>) };
    inline vector<int64_t> getRelatedUserList() { DARABONBA_PTR_GET(relatedUserList_, vector<int64_t>) };
    inline CreateDataCronClearOrderRequest& setRelatedUserList(const vector<int64_t> & relatedUserList) { DARABONBA_PTR_SET_VALUE(relatedUserList_, relatedUserList) };
    inline CreateDataCronClearOrderRequest& setRelatedUserList(vector<int64_t> && relatedUserList) { DARABONBA_PTR_SET_RVALUE(relatedUserList_, relatedUserList) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateDataCronClearOrderRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The key of the attachment for the ticket. The attachment provides more instructions for this operation.
    // 
    // You can call the [GetUserUploadFileJob](https://help.aliyun.com/document_detail/206069.html) operation to query the key of the attachment.
    shared_ptr<string> attachmentKey_ {};
    // The purpose or objective of the data change. This reduces unnecessary communication.
    // 
    // This parameter is required.
    shared_ptr<string> comment_ {};
    // The parameters of the ticket.
    // 
    // This parameter is required.
    shared_ptr<CreateDataCronClearOrderRequest::Param> param_ {};
    // The stakeholders of this operation. All stakeholders can view the ticket details and assist in the approval process. Irrelevant users other than Data Management (DMS) administrators and database administrators (DBAs) are not allowed to view the ticket details.
    shared_ptr<vector<int64_t>> relatedUserList_ {};
    // The ID of the tenant.
    // 
    // >  The ID of the tenant is displayed when you move the pointer over the profile picture in the upper-right corner of the DMS console. For more information, see the [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html) section of the Manage DMS tenants topic.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
