// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROCCORRECTORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROCCORRECTORDERREQUEST_HPP_
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
  class CreateProcCorrectOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProcCorrectOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProcCorrectOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateProcCorrectOrderRequest() = default ;
    CreateProcCorrectOrderRequest(const CreateProcCorrectOrderRequest &) = default ;
    CreateProcCorrectOrderRequest(CreateProcCorrectOrderRequest &&) = default ;
    CreateProcCorrectOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProcCorrectOrderRequest() = default ;
    CreateProcCorrectOrderRequest& operator=(const CreateProcCorrectOrderRequest &) = default ;
    CreateProcCorrectOrderRequest& operator=(CreateProcCorrectOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Param : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Param& obj) { 
        DARABONBA_PTR_TO_JSON(Classify, classify_);
        DARABONBA_PTR_TO_JSON(DbItemList, dbItemList_);
        DARABONBA_PTR_TO_JSON(ExecMode, execMode_);
        DARABONBA_PTR_TO_JSON(ExecSQL, execSQL_);
        DARABONBA_PTR_TO_JSON(RollbackAttachmentName, rollbackAttachmentName_);
        DARABONBA_PTR_TO_JSON(RollbackSQL, rollbackSQL_);
        DARABONBA_PTR_TO_JSON(RollbackSqlType, rollbackSqlType_);
      };
      friend void from_json(const Darabonba::Json& j, Param& obj) { 
        DARABONBA_PTR_FROM_JSON(Classify, classify_);
        DARABONBA_PTR_FROM_JSON(DbItemList, dbItemList_);
        DARABONBA_PTR_FROM_JSON(ExecMode, execMode_);
        DARABONBA_PTR_FROM_JSON(ExecSQL, execSQL_);
        DARABONBA_PTR_FROM_JSON(RollbackAttachmentName, rollbackAttachmentName_);
        DARABONBA_PTR_FROM_JSON(RollbackSQL, rollbackSQL_);
        DARABONBA_PTR_FROM_JSON(RollbackSqlType, rollbackSqlType_);
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
        // The database ID. Databases are divided into physical databases and logical databases.
        // 
        // *   To query the ID of a physical database, call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation.
        // *   To query the ID of a logical database, call the [ListLogicDatabases](https://help.aliyun.com/document_detail/141874.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation.
        // 
        // This parameter is required.
        shared_ptr<int64_t> dbId_ {};
        // Specifies whether the database is a logical database. Valid values:
        // 
        // *   **true**: The database is a logical database.
        // *   **false**: The database is a physical database.
        // 
        // This parameter is required.
        shared_ptr<bool> logic_ {};
      };

      virtual bool empty() const override { return this->classify_ == nullptr
        && this->dbItemList_ == nullptr && this->execMode_ == nullptr && this->execSQL_ == nullptr && this->rollbackAttachmentName_ == nullptr && this->rollbackSQL_ == nullptr
        && this->rollbackSqlType_ == nullptr; };
      // classify Field Functions 
      bool hasClassify() const { return this->classify_ != nullptr;};
      void deleteClassify() { this->classify_ = nullptr;};
      inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
      inline Param& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


      // dbItemList Field Functions 
      bool hasDbItemList() const { return this->dbItemList_ != nullptr;};
      void deleteDbItemList() { this->dbItemList_ = nullptr;};
      inline const vector<Param::DbItemList> & getDbItemList() const { DARABONBA_PTR_GET_CONST(dbItemList_, vector<Param::DbItemList>) };
      inline vector<Param::DbItemList> getDbItemList() { DARABONBA_PTR_GET(dbItemList_, vector<Param::DbItemList>) };
      inline Param& setDbItemList(const vector<Param::DbItemList> & dbItemList) { DARABONBA_PTR_SET_VALUE(dbItemList_, dbItemList) };
      inline Param& setDbItemList(vector<Param::DbItemList> && dbItemList) { DARABONBA_PTR_SET_RVALUE(dbItemList_, dbItemList) };


      // execMode Field Functions 
      bool hasExecMode() const { return this->execMode_ != nullptr;};
      void deleteExecMode() { this->execMode_ = nullptr;};
      inline string getExecMode() const { DARABONBA_PTR_GET_DEFAULT(execMode_, "") };
      inline Param& setExecMode(string execMode) { DARABONBA_PTR_SET_VALUE(execMode_, execMode) };


      // execSQL Field Functions 
      bool hasExecSQL() const { return this->execSQL_ != nullptr;};
      void deleteExecSQL() { this->execSQL_ = nullptr;};
      inline string getExecSQL() const { DARABONBA_PTR_GET_DEFAULT(execSQL_, "") };
      inline Param& setExecSQL(string execSQL) { DARABONBA_PTR_SET_VALUE(execSQL_, execSQL) };


      // rollbackAttachmentName Field Functions 
      bool hasRollbackAttachmentName() const { return this->rollbackAttachmentName_ != nullptr;};
      void deleteRollbackAttachmentName() { this->rollbackAttachmentName_ = nullptr;};
      inline string getRollbackAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(rollbackAttachmentName_, "") };
      inline Param& setRollbackAttachmentName(string rollbackAttachmentName) { DARABONBA_PTR_SET_VALUE(rollbackAttachmentName_, rollbackAttachmentName) };


      // rollbackSQL Field Functions 
      bool hasRollbackSQL() const { return this->rollbackSQL_ != nullptr;};
      void deleteRollbackSQL() { this->rollbackSQL_ = nullptr;};
      inline string getRollbackSQL() const { DARABONBA_PTR_GET_DEFAULT(rollbackSQL_, "") };
      inline Param& setRollbackSQL(string rollbackSQL) { DARABONBA_PTR_SET_VALUE(rollbackSQL_, rollbackSQL) };


      // rollbackSqlType Field Functions 
      bool hasRollbackSqlType() const { return this->rollbackSqlType_ != nullptr;};
      void deleteRollbackSqlType() { this->rollbackSqlType_ = nullptr;};
      inline string getRollbackSqlType() const { DARABONBA_PTR_GET_DEFAULT(rollbackSqlType_, "") };
      inline Param& setRollbackSqlType(string rollbackSqlType) { DARABONBA_PTR_SET_VALUE(rollbackSqlType_, rollbackSqlType) };


    protected:
      // The reason for the programmable object change.
      shared_ptr<string> classify_ {};
      // The information about the database.
      // 
      // This parameter is required.
      shared_ptr<vector<Param::DbItemList>> dbItemList_ {};
      // The mode in which the data change ticket is executed after the ticket is approved. Valid values:
      // 
      // *   **COMMITOR**: The ticket is executed by the user who submits the ticket.
      // *   **AUTO**: The ticket is automatically executed after the ticket is approved.
      // *   **LAST_AUDITOR**: The ticket is executed by the last approver of the ticket.
      shared_ptr<string> execMode_ {};
      // The SQL statements for data change.
      // 
      // This parameter is required.
      shared_ptr<string> execSQL_ {};
      // The key of the attachment that contains the SQL statements used to roll back the data change. You can call the [GetUserUploadFileJob](https://help.aliyun.com/document_detail/206069.html) operation to obtain the attachment key from the value of AttachmentKey.
      // 
      // >  This parameter is required if you set **RollbackSqlType** to **ATTACHMENT**.
      shared_ptr<string> rollbackAttachmentName_ {};
      // The SQL statements for rolling back the data change.
      // 
      // >  This parameter is required if you set the **RollbackSqlType** parameter to **TEXT**.
      shared_ptr<string> rollbackSQL_ {};
      // The format of the SQL statements used to roll back the data change. Valid values:
      // 
      // *   **TEXT**
      // *   **ATTACHMENT**
      shared_ptr<string> rollbackSqlType_ {};
    };

    virtual bool empty() const override { return this->attachmentKey_ == nullptr
        && this->comment_ == nullptr && this->param_ == nullptr && this->relatedUserList_ == nullptr && this->tid_ == nullptr; };
    // attachmentKey Field Functions 
    bool hasAttachmentKey() const { return this->attachmentKey_ != nullptr;};
    void deleteAttachmentKey() { this->attachmentKey_ = nullptr;};
    inline string getAttachmentKey() const { DARABONBA_PTR_GET_DEFAULT(attachmentKey_, "") };
    inline CreateProcCorrectOrderRequest& setAttachmentKey(string attachmentKey) { DARABONBA_PTR_SET_VALUE(attachmentKey_, attachmentKey) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateProcCorrectOrderRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline const CreateProcCorrectOrderRequest::Param & getParam() const { DARABONBA_PTR_GET_CONST(param_, CreateProcCorrectOrderRequest::Param) };
    inline CreateProcCorrectOrderRequest::Param getParam() { DARABONBA_PTR_GET(param_, CreateProcCorrectOrderRequest::Param) };
    inline CreateProcCorrectOrderRequest& setParam(const CreateProcCorrectOrderRequest::Param & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
    inline CreateProcCorrectOrderRequest& setParam(CreateProcCorrectOrderRequest::Param && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


    // relatedUserList Field Functions 
    bool hasRelatedUserList() const { return this->relatedUserList_ != nullptr;};
    void deleteRelatedUserList() { this->relatedUserList_ = nullptr;};
    inline const vector<int64_t> & getRelatedUserList() const { DARABONBA_PTR_GET_CONST(relatedUserList_, vector<int64_t>) };
    inline vector<int64_t> getRelatedUserList() { DARABONBA_PTR_GET(relatedUserList_, vector<int64_t>) };
    inline CreateProcCorrectOrderRequest& setRelatedUserList(const vector<int64_t> & relatedUserList) { DARABONBA_PTR_SET_VALUE(relatedUserList_, relatedUserList) };
    inline CreateProcCorrectOrderRequest& setRelatedUserList(vector<int64_t> && relatedUserList) { DARABONBA_PTR_SET_RVALUE(relatedUserList_, relatedUserList) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateProcCorrectOrderRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The key of the attachment for the ticket. The attachment provides more instructions for this operation.
    // 
    // You can call the [GetUserUploadFileJob](https://help.aliyun.com/document_detail/206069.html) operation to query the key of the attachment.
    shared_ptr<string> attachmentKey_ {};
    // The remarks of the ticket.
    // 
    // This parameter is required.
    shared_ptr<string> comment_ {};
    // The parameters of the ticket.
    // 
    // This parameter is required.
    shared_ptr<CreateProcCorrectOrderRequest::Param> param_ {};
    // The operators that are related to the ticket.
    shared_ptr<vector<int64_t>> relatedUserList_ {};
    // The ID of the tenant.
    // 
    // >  To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see the [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html) section of the "Manage DMS tenants" topic.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
