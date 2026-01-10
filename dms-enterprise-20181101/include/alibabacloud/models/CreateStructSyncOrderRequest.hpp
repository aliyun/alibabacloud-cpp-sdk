// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTRUCTSYNCORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTRUCTSYNCORDERREQUEST_HPP_
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
  class CreateStructSyncOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStructSyncOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStructSyncOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateStructSyncOrderRequest() = default ;
    CreateStructSyncOrderRequest(const CreateStructSyncOrderRequest &) = default ;
    CreateStructSyncOrderRequest(CreateStructSyncOrderRequest &&) = default ;
    CreateStructSyncOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStructSyncOrderRequest() = default ;
    CreateStructSyncOrderRequest& operator=(const CreateStructSyncOrderRequest &) = default ;
    CreateStructSyncOrderRequest& operator=(CreateStructSyncOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Param : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Param& obj) { 
        DARABONBA_PTR_TO_JSON(IgnoreError, ignoreError_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(TableInfoList, tableInfoList_);
        DARABONBA_PTR_TO_JSON(Target, target_);
      };
      friend void from_json(const Darabonba::Json& j, Param& obj) { 
        DARABONBA_PTR_FROM_JSON(IgnoreError, ignoreError_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(TableInfoList, tableInfoList_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
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
      class Target : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Target& obj) { 
          DARABONBA_PTR_TO_JSON(DbId, dbId_);
          DARABONBA_PTR_TO_JSON(DbSearchName, dbSearchName_);
          DARABONBA_PTR_TO_JSON(Logic, logic_);
          DARABONBA_PTR_TO_JSON(VersionId, versionId_);
        };
        friend void from_json(const Darabonba::Json& j, Target& obj) { 
          DARABONBA_PTR_FROM_JSON(DbId, dbId_);
          DARABONBA_PTR_FROM_JSON(DbSearchName, dbSearchName_);
          DARABONBA_PTR_FROM_JSON(Logic, logic_);
          DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
        };
        Target() = default ;
        Target(const Target &) = default ;
        Target(Target &&) = default ;
        Target(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Target() = default ;
        Target& operator=(const Target &) = default ;
        Target& operator=(Target &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dbId_ == nullptr
        && this->dbSearchName_ == nullptr && this->logic_ == nullptr && this->versionId_ == nullptr; };
        // dbId Field Functions 
        bool hasDbId() const { return this->dbId_ != nullptr;};
        void deleteDbId() { this->dbId_ = nullptr;};
        inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
        inline Target& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


        // dbSearchName Field Functions 
        bool hasDbSearchName() const { return this->dbSearchName_ != nullptr;};
        void deleteDbSearchName() { this->dbSearchName_ = nullptr;};
        inline string getDbSearchName() const { DARABONBA_PTR_GET_DEFAULT(dbSearchName_, "") };
        inline Target& setDbSearchName(string dbSearchName) { DARABONBA_PTR_SET_VALUE(dbSearchName_, dbSearchName) };


        // logic Field Functions 
        bool hasLogic() const { return this->logic_ != nullptr;};
        void deleteLogic() { this->logic_ = nullptr;};
        inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
        inline Target& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


        // versionId Field Functions 
        bool hasVersionId() const { return this->versionId_ != nullptr;};
        void deleteVersionId() { this->versionId_ = nullptr;};
        inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
        inline Target& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


      protected:
        // The ID of the database. You can call the [SearchDatabases](https://help.aliyun.com/document_detail/141876.html) operation to query the ID of the database.
        // 
        // This parameter is required.
        shared_ptr<int64_t> dbId_ {};
        // The name that is used to search for the database. You can call the [SearchDatabases](https://help.aliyun.com/document_detail/141876.html) operation to query the name of the database.
        // 
        // This parameter is required.
        shared_ptr<string> dbSearchName_ {};
        // Specifies whether the database is a logical database. Valid values:
        // 
        // *   **true**: The database is a logical database.
        // *   **false**: The database is not a logical database.
        shared_ptr<bool> logic_ {};
        // The version number. By default, this parameter is left empty.
        // 
        // >  If you specify the schema version number of the destination database, Data Management (DMS) only compares the schemas of the two databases.
        shared_ptr<string> versionId_ {};
      };

      class TableInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TableInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(SourceTableName, sourceTableName_);
          DARABONBA_PTR_TO_JSON(TargetTableName, targetTableName_);
        };
        friend void from_json(const Darabonba::Json& j, TableInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(SourceTableName, sourceTableName_);
          DARABONBA_PTR_FROM_JSON(TargetTableName, targetTableName_);
        };
        TableInfoList() = default ;
        TableInfoList(const TableInfoList &) = default ;
        TableInfoList(TableInfoList &&) = default ;
        TableInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TableInfoList() = default ;
        TableInfoList& operator=(const TableInfoList &) = default ;
        TableInfoList& operator=(TableInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->sourceTableName_ == nullptr
        && this->targetTableName_ == nullptr; };
        // sourceTableName Field Functions 
        bool hasSourceTableName() const { return this->sourceTableName_ != nullptr;};
        void deleteSourceTableName() { this->sourceTableName_ = nullptr;};
        inline string getSourceTableName() const { DARABONBA_PTR_GET_DEFAULT(sourceTableName_, "") };
        inline TableInfoList& setSourceTableName(string sourceTableName) { DARABONBA_PTR_SET_VALUE(sourceTableName_, sourceTableName) };


        // targetTableName Field Functions 
        bool hasTargetTableName() const { return this->targetTableName_ != nullptr;};
        void deleteTargetTableName() { this->targetTableName_ = nullptr;};
        inline string getTargetTableName() const { DARABONBA_PTR_GET_DEFAULT(targetTableName_, "") };
        inline TableInfoList& setTargetTableName(string targetTableName) { DARABONBA_PTR_SET_VALUE(targetTableName_, targetTableName) };


      protected:
        // The name of the source table.
        shared_ptr<string> sourceTableName_ {};
        // The name of the destination table.
        shared_ptr<string> targetTableName_ {};
      };

      class Source : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Source& obj) { 
          DARABONBA_PTR_TO_JSON(DbId, dbId_);
          DARABONBA_PTR_TO_JSON(DbSearchName, dbSearchName_);
          DARABONBA_PTR_TO_JSON(Logic, logic_);
          DARABONBA_PTR_TO_JSON(VersionId, versionId_);
        };
        friend void from_json(const Darabonba::Json& j, Source& obj) { 
          DARABONBA_PTR_FROM_JSON(DbId, dbId_);
          DARABONBA_PTR_FROM_JSON(DbSearchName, dbSearchName_);
          DARABONBA_PTR_FROM_JSON(Logic, logic_);
          DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
        };
        Source() = default ;
        Source(const Source &) = default ;
        Source(Source &&) = default ;
        Source(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Source() = default ;
        Source& operator=(const Source &) = default ;
        Source& operator=(Source &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dbId_ == nullptr
        && this->dbSearchName_ == nullptr && this->logic_ == nullptr && this->versionId_ == nullptr; };
        // dbId Field Functions 
        bool hasDbId() const { return this->dbId_ != nullptr;};
        void deleteDbId() { this->dbId_ = nullptr;};
        inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
        inline Source& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


        // dbSearchName Field Functions 
        bool hasDbSearchName() const { return this->dbSearchName_ != nullptr;};
        void deleteDbSearchName() { this->dbSearchName_ = nullptr;};
        inline string getDbSearchName() const { DARABONBA_PTR_GET_DEFAULT(dbSearchName_, "") };
        inline Source& setDbSearchName(string dbSearchName) { DARABONBA_PTR_SET_VALUE(dbSearchName_, dbSearchName) };


        // logic Field Functions 
        bool hasLogic() const { return this->logic_ != nullptr;};
        void deleteLogic() { this->logic_ = nullptr;};
        inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
        inline Source& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


        // versionId Field Functions 
        bool hasVersionId() const { return this->versionId_ != nullptr;};
        void deleteVersionId() { this->versionId_ = nullptr;};
        inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
        inline Source& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


      protected:
        // The ID of the database. You can call the [SearchDatabases](https://help.aliyun.com/document_detail/141876.html) operation to query the ID of the database.
        // 
        // This parameter is required.
        shared_ptr<int64_t> dbId_ {};
        // The name that is used to search for the database. You can call the [SearchDatabases](https://help.aliyun.com/document_detail/141876.html) operation to query the name of the database.
        // 
        // This parameter is required.
        shared_ptr<string> dbSearchName_ {};
        // Specifies whether the database is a logical database. Valid values:
        // 
        // *   **true**: The database is a logical database.
        // *   **false**: The database is not a logical database.
        shared_ptr<bool> logic_ {};
        // The version number of the schema. The default value is the latest schema version number. For more information, see [Manage schema versions](https://help.aliyun.com/document_detail/202275.html).
        shared_ptr<string> versionId_ {};
      };

      virtual bool empty() const override { return this->ignoreError_ == nullptr
        && this->source_ == nullptr && this->tableInfoList_ == nullptr && this->target_ == nullptr; };
      // ignoreError Field Functions 
      bool hasIgnoreError() const { return this->ignoreError_ != nullptr;};
      void deleteIgnoreError() { this->ignoreError_ = nullptr;};
      inline bool getIgnoreError() const { DARABONBA_PTR_GET_DEFAULT(ignoreError_, false) };
      inline Param& setIgnoreError(bool ignoreError) { DARABONBA_PTR_SET_VALUE(ignoreError_, ignoreError) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline const Param::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, Param::Source) };
      inline Param::Source getSource() { DARABONBA_PTR_GET(source_, Param::Source) };
      inline Param& setSource(const Param::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
      inline Param& setSource(Param::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


      // tableInfoList Field Functions 
      bool hasTableInfoList() const { return this->tableInfoList_ != nullptr;};
      void deleteTableInfoList() { this->tableInfoList_ = nullptr;};
      inline const vector<Param::TableInfoList> & getTableInfoList() const { DARABONBA_PTR_GET_CONST(tableInfoList_, vector<Param::TableInfoList>) };
      inline vector<Param::TableInfoList> getTableInfoList() { DARABONBA_PTR_GET(tableInfoList_, vector<Param::TableInfoList>) };
      inline Param& setTableInfoList(const vector<Param::TableInfoList> & tableInfoList) { DARABONBA_PTR_SET_VALUE(tableInfoList_, tableInfoList) };
      inline Param& setTableInfoList(vector<Param::TableInfoList> && tableInfoList) { DARABONBA_PTR_SET_RVALUE(tableInfoList_, tableInfoList) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline const Param::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, Param::Target) };
      inline Param::Target getTarget() { DARABONBA_PTR_GET(target_, Param::Target) };
      inline Param& setTarget(const Param::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
      inline Param& setTarget(Param::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    protected:
      // Specifies whether to skip an error that occurs in executing an SQL statement. Valid values:
      // 
      // *   **true**: continues to execute subsequent SQL statements if an error occurs in executing an SQL statement.
      // *   **false**: stops executing subsequent SQL statements if an error occurs in executing an SQL statement.
      shared_ptr<bool> ignoreError_ {};
      // The information about the base database.
      // 
      // This parameter is required.
      shared_ptr<Param::Source> source_ {};
      // The information about the table of which you want to synchronize the schema.
      shared_ptr<vector<Param::TableInfoList>> tableInfoList_ {};
      // The information about the database to which you want to synchronize the schema of a table.
      // 
      // This parameter is required.
      shared_ptr<Param::Target> target_ {};
    };

    virtual bool empty() const override { return this->attachmentKey_ == nullptr
        && this->comment_ == nullptr && this->param_ == nullptr && this->relatedUserList_ == nullptr && this->tid_ == nullptr; };
    // attachmentKey Field Functions 
    bool hasAttachmentKey() const { return this->attachmentKey_ != nullptr;};
    void deleteAttachmentKey() { this->attachmentKey_ = nullptr;};
    inline string getAttachmentKey() const { DARABONBA_PTR_GET_DEFAULT(attachmentKey_, "") };
    inline CreateStructSyncOrderRequest& setAttachmentKey(string attachmentKey) { DARABONBA_PTR_SET_VALUE(attachmentKey_, attachmentKey) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateStructSyncOrderRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline const CreateStructSyncOrderRequest::Param & getParam() const { DARABONBA_PTR_GET_CONST(param_, CreateStructSyncOrderRequest::Param) };
    inline CreateStructSyncOrderRequest::Param getParam() { DARABONBA_PTR_GET(param_, CreateStructSyncOrderRequest::Param) };
    inline CreateStructSyncOrderRequest& setParam(const CreateStructSyncOrderRequest::Param & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
    inline CreateStructSyncOrderRequest& setParam(CreateStructSyncOrderRequest::Param && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


    // relatedUserList Field Functions 
    bool hasRelatedUserList() const { return this->relatedUserList_ != nullptr;};
    void deleteRelatedUserList() { this->relatedUserList_ = nullptr;};
    inline const vector<int64_t> & getRelatedUserList() const { DARABONBA_PTR_GET_CONST(relatedUserList_, vector<int64_t>) };
    inline vector<int64_t> getRelatedUserList() { DARABONBA_PTR_GET(relatedUserList_, vector<int64_t>) };
    inline CreateStructSyncOrderRequest& setRelatedUserList(const vector<int64_t> & relatedUserList) { DARABONBA_PTR_SET_VALUE(relatedUserList_, relatedUserList) };
    inline CreateStructSyncOrderRequest& setRelatedUserList(vector<int64_t> && relatedUserList) { DARABONBA_PTR_SET_RVALUE(relatedUserList_, relatedUserList) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateStructSyncOrderRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The key of an attachment that is returned after the attachment is uploaded. You can call the [GetUserUploadFileJob](https://help.aliyun.com/document_detail/206069.html) operation to query the key of the attachment.
    shared_ptr<string> attachmentKey_ {};
    // The remarks of the ticket.
    // 
    // This parameter is required.
    shared_ptr<string> comment_ {};
    // The parameters of the ticket.
    // 
    // This parameter is required.
    shared_ptr<CreateStructSyncOrderRequest::Param> param_ {};
    // The IDs of the stakeholders.
    shared_ptr<vector<int64_t>> relatedUserList_ {};
    // The ID of the tenant.
    // 
    // >  To view the tenant ID, move the pointer over the profile picture in the upper-right corner of the DMS console. For more information, see [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html).
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
