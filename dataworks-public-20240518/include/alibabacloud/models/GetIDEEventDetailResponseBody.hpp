// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetIDEEventDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIDEEventDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventDetail, eventDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIDEEventDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventDetail, eventDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetIDEEventDetailResponseBody() = default ;
    GetIDEEventDetailResponseBody(const GetIDEEventDetailResponseBody &) = default ;
    GetIDEEventDetailResponseBody(GetIDEEventDetailResponseBody &&) = default ;
    GetIDEEventDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIDEEventDetailResponseBody() = default ;
    GetIDEEventDetailResponseBody& operator=(const GetIDEEventDetailResponseBody &) = default ;
    GetIDEEventDetailResponseBody& operator=(GetIDEEventDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EventDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EventDetail& obj) { 
        DARABONBA_PTR_TO_JSON(CommittedFile, committedFile_);
        DARABONBA_PTR_TO_JSON(DeletedFile, deletedFile_);
        DARABONBA_PTR_TO_JSON(FileExecutionCommand, fileExecutionCommand_);
        DARABONBA_PTR_TO_JSON(TableModel, tableModel_);
      };
      friend void from_json(const Darabonba::Json& j, EventDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(CommittedFile, committedFile_);
        DARABONBA_PTR_FROM_JSON(DeletedFile, deletedFile_);
        DARABONBA_PTR_FROM_JSON(FileExecutionCommand, fileExecutionCommand_);
        DARABONBA_PTR_FROM_JSON(TableModel, tableModel_);
      };
      EventDetail() = default ;
      EventDetail(const EventDetail &) = default ;
      EventDetail(EventDetail &&) = default ;
      EventDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EventDetail() = default ;
      EventDetail& operator=(const EventDetail &) = default ;
      EventDetail& operator=(EventDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TableModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TableModel& obj) { 
          DARABONBA_PTR_TO_JSON(Columns, columns_);
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
          DARABONBA_PTR_TO_JSON(Env, env_);
          DARABONBA_PTR_TO_JSON(LifeCycle, lifeCycle_);
          DARABONBA_PTR_TO_JSON(Location, location_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
        };
        friend void from_json(const Darabonba::Json& j, TableModel& obj) { 
          DARABONBA_PTR_FROM_JSON(Columns, columns_);
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
          DARABONBA_PTR_FROM_JSON(Env, env_);
          DARABONBA_PTR_FROM_JSON(LifeCycle, lifeCycle_);
          DARABONBA_PTR_FROM_JSON(Location, location_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        };
        TableModel() = default ;
        TableModel(const TableModel &) = default ;
        TableModel(TableModel &&) = default ;
        TableModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TableModel() = default ;
        TableModel& operator=(const TableModel &) = default ;
        TableModel& operator=(TableModel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Columns : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Columns& obj) { 
            DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
            DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
            DARABONBA_PTR_TO_JSON(Comment, comment_);
            DARABONBA_PTR_TO_JSON(IsPartitionColumn, isPartitionColumn_);
          };
          friend void from_json(const Darabonba::Json& j, Columns& obj) { 
            DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
            DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
            DARABONBA_PTR_FROM_JSON(Comment, comment_);
            DARABONBA_PTR_FROM_JSON(IsPartitionColumn, isPartitionColumn_);
          };
          Columns() = default ;
          Columns(const Columns &) = default ;
          Columns(Columns &&) = default ;
          Columns(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Columns() = default ;
          Columns& operator=(const Columns &) = default ;
          Columns& operator=(Columns &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->columnName_ == nullptr
        && this->columnType_ == nullptr && this->comment_ == nullptr && this->isPartitionColumn_ == nullptr; };
          // columnName Field Functions 
          bool hasColumnName() const { return this->columnName_ != nullptr;};
          void deleteColumnName() { this->columnName_ = nullptr;};
          inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
          inline Columns& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


          // columnType Field Functions 
          bool hasColumnType() const { return this->columnType_ != nullptr;};
          void deleteColumnType() { this->columnType_ = nullptr;};
          inline string getColumnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
          inline Columns& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


          // comment Field Functions 
          bool hasComment() const { return this->comment_ != nullptr;};
          void deleteComment() { this->comment_ = nullptr;};
          inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
          inline Columns& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


          // isPartitionColumn Field Functions 
          bool hasIsPartitionColumn() const { return this->isPartitionColumn_ != nullptr;};
          void deleteIsPartitionColumn() { this->isPartitionColumn_ = nullptr;};
          inline bool getIsPartitionColumn() const { DARABONBA_PTR_GET_DEFAULT(isPartitionColumn_, false) };
          inline Columns& setIsPartitionColumn(bool isPartitionColumn) { DARABONBA_PTR_SET_VALUE(isPartitionColumn_, isPartitionColumn) };


        protected:
          // The name of the column.
          shared_ptr<string> columnName_ {};
          // The data type of the column.
          shared_ptr<string> columnType_ {};
          // The remarks of the column.
          shared_ptr<string> comment_ {};
          // Indicates whether the column is a partition key column. Valid values:
          // 
          // *   true
          // *   false
          shared_ptr<bool> isPartitionColumn_ {};
        };

        virtual bool empty() const override { return this->columns_ == nullptr
        && this->comment_ == nullptr && this->dataSourceName_ == nullptr && this->env_ == nullptr && this->lifeCycle_ == nullptr && this->location_ == nullptr
        && this->tableName_ == nullptr; };
        // columns Field Functions 
        bool hasColumns() const { return this->columns_ != nullptr;};
        void deleteColumns() { this->columns_ = nullptr;};
        inline const vector<TableModel::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<TableModel::Columns>) };
        inline vector<TableModel::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<TableModel::Columns>) };
        inline TableModel& setColumns(const vector<TableModel::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
        inline TableModel& setColumns(vector<TableModel::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline TableModel& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // dataSourceName Field Functions 
        bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
        void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
        inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
        inline TableModel& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


        // env Field Functions 
        bool hasEnv() const { return this->env_ != nullptr;};
        void deleteEnv() { this->env_ = nullptr;};
        inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
        inline TableModel& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


        // lifeCycle Field Functions 
        bool hasLifeCycle() const { return this->lifeCycle_ != nullptr;};
        void deleteLifeCycle() { this->lifeCycle_ = nullptr;};
        inline int64_t getLifeCycle() const { DARABONBA_PTR_GET_DEFAULT(lifeCycle_, 0L) };
        inline TableModel& setLifeCycle(int64_t lifeCycle) { DARABONBA_PTR_SET_VALUE(lifeCycle_, lifeCycle) };


        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline TableModel& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline TableModel& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      protected:
        // The columns in the table.
        shared_ptr<vector<TableModel::Columns>> columns_ {};
        // The remarks of the table.
        shared_ptr<string> comment_ {};
        // The name of the data source to which the table belongs.
        shared_ptr<string> dataSourceName_ {};
        // The environment in which the table is used. Valid values:
        // 
        // *   DEV
        // *   PROD
        shared_ptr<string> env_ {};
        // The lifecycle of the table. Unit: day.
        shared_ptr<int64_t> lifeCycle_ {};
        // The path of the table.
        shared_ptr<string> location_ {};
        // The name of the table.
        shared_ptr<string> tableName_ {};
      };

      class FileExecutionCommand : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FileExecutionCommand& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
          DARABONBA_PTR_TO_JSON(FileId, fileId_);
          DARABONBA_PTR_TO_JSON(FileType, fileType_);
        };
        friend void from_json(const Darabonba::Json& j, FileExecutionCommand& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
          DARABONBA_PTR_FROM_JSON(FileId, fileId_);
          DARABONBA_PTR_FROM_JSON(FileType, fileType_);
        };
        FileExecutionCommand() = default ;
        FileExecutionCommand(const FileExecutionCommand &) = default ;
        FileExecutionCommand(FileExecutionCommand &&) = default ;
        FileExecutionCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FileExecutionCommand() = default ;
        FileExecutionCommand& operator=(const FileExecutionCommand &) = default ;
        FileExecutionCommand& operator=(FileExecutionCommand &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->dataSourceName_ == nullptr && this->fileId_ == nullptr && this->fileType_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline FileExecutionCommand& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // dataSourceName Field Functions 
        bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
        void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
        inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
        inline FileExecutionCommand& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
        inline FileExecutionCommand& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // fileType Field Functions 
        bool hasFileType() const { return this->fileType_ != nullptr;};
        void deleteFileType() { this->fileType_ = nullptr;};
        inline int64_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0L) };
        inline FileExecutionCommand& setFileType(int64_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


      protected:
        // The code in the file of the current version.
        shared_ptr<string> content_ {};
        // The name of the data source with which the file is associated.
        shared_ptr<string> dataSourceName_ {};
        // The file ID.
        shared_ptr<int64_t> fileId_ {};
        // The file type. The code for files varies based on the file type. For more information, see [DataWorks nodes](https://help.aliyun.com/document_detail/600169.html).
        shared_ptr<int64_t> fileType_ {};
      };

      class DeletedFile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeletedFile& obj) { 
          DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
          DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
          DARABONBA_PTR_TO_JSON(FileId, fileId_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(FileType, fileType_);
          DARABONBA_PTR_TO_JSON(FolderId, folderId_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(ParentFileId, parentFileId_);
          DARABONBA_PTR_TO_JSON(UseType, useType_);
        };
        friend void from_json(const Darabonba::Json& j, DeletedFile& obj) { 
          DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
          DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
          DARABONBA_PTR_FROM_JSON(FileId, fileId_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(FileType, fileType_);
          DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(ParentFileId, parentFileId_);
          DARABONBA_PTR_FROM_JSON(UseType, useType_);
        };
        DeletedFile() = default ;
        DeletedFile(const DeletedFile &) = default ;
        DeletedFile(DeletedFile &&) = default ;
        DeletedFile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeletedFile() = default ;
        DeletedFile& operator=(const DeletedFile &) = default ;
        DeletedFile& operator=(DeletedFile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->businessId_ == nullptr
        && this->content_ == nullptr && this->currentVersion_ == nullptr && this->dataSourceName_ == nullptr && this->fileId_ == nullptr && this->fileName_ == nullptr
        && this->fileType_ == nullptr && this->folderId_ == nullptr && this->nodeId_ == nullptr && this->owner_ == nullptr && this->parentFileId_ == nullptr
        && this->useType_ == nullptr; };
        // businessId Field Functions 
        bool hasBusinessId() const { return this->businessId_ != nullptr;};
        void deleteBusinessId() { this->businessId_ = nullptr;};
        inline int64_t getBusinessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, 0L) };
        inline DeletedFile& setBusinessId(int64_t businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline DeletedFile& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // currentVersion Field Functions 
        bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
        void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
        inline int64_t getCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, 0L) };
        inline DeletedFile& setCurrentVersion(int64_t currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


        // dataSourceName Field Functions 
        bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
        void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
        inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
        inline DeletedFile& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
        inline DeletedFile& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline DeletedFile& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // fileType Field Functions 
        bool hasFileType() const { return this->fileType_ != nullptr;};
        void deleteFileType() { this->fileType_ = nullptr;};
        inline int64_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0L) };
        inline DeletedFile& setFileType(int64_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


        // folderId Field Functions 
        bool hasFolderId() const { return this->folderId_ != nullptr;};
        void deleteFolderId() { this->folderId_ = nullptr;};
        inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
        inline DeletedFile& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
        inline DeletedFile& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline DeletedFile& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // parentFileId Field Functions 
        bool hasParentFileId() const { return this->parentFileId_ != nullptr;};
        void deleteParentFileId() { this->parentFileId_ = nullptr;};
        inline int64_t getParentFileId() const { DARABONBA_PTR_GET_DEFAULT(parentFileId_, 0L) };
        inline DeletedFile& setParentFileId(int64_t parentFileId) { DARABONBA_PTR_SET_VALUE(parentFileId_, parentFileId) };


        // useType Field Functions 
        bool hasUseType() const { return this->useType_ != nullptr;};
        void deleteUseType() { this->useType_ = nullptr;};
        inline string getUseType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
        inline DeletedFile& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


      protected:
        // The ID of the workflow to which the file belongs.
        shared_ptr<int64_t> businessId_ {};
        // The code in the file of the current version.
        shared_ptr<string> content_ {};
        // The latest version number of the file.
        shared_ptr<int64_t> currentVersion_ {};
        // The name of the data source with which the file is associated.
        shared_ptr<string> dataSourceName_ {};
        // The file ID.
        shared_ptr<int64_t> fileId_ {};
        // The name of the file.
        shared_ptr<string> fileName_ {};
        // The file type. The code for files varies based on the file type. For more information, see [DataWorks nodes](https://help.aliyun.com/document_detail/600169.html).
        shared_ptr<int64_t> fileType_ {};
        // The ID of the folder to which the file belongs. You can call the [GetFolder](https://help.aliyun.com/document_detail/173952.html) operation to query the details of the file based on the folder ID.
        shared_ptr<string> folderId_ {};
        // The ID of the node that is scheduled.
        shared_ptr<int64_t> nodeId_ {};
        // The file owner.
        shared_ptr<string> owner_ {};
        // The ID of the do-while node or for-each node that corresponds to the file.
        shared_ptr<int64_t> parentFileId_ {};
        // The module to which the file belongs. Valid values:
        // 
        // *   NORMAL: The file is used for DataStudio.
        // *   MANUAL: The file is used for a manually triggered node.
        // *   MANUAL_BIZ: The file is used for a manually triggered workflow.
        // *   SKIP: The file is used for a dry-run node in DataStudio.
        // *   ADHOCQUERY: The file is used for an ad hoc query.
        // *   COMPONENT: The file is used for a script template.
        shared_ptr<string> useType_ {};
      };

      class CommittedFile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CommittedFile& obj) { 
          DARABONBA_PTR_TO_JSON(ChangeType, changeType_);
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(Committor, committor_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(FileId, fileId_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(FilePropertyContent, filePropertyContent_);
          DARABONBA_PTR_TO_JSON(FileType, fileType_);
          DARABONBA_PTR_TO_JSON(NodeConfiguration, nodeConfiguration_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(UseType, useType_);
        };
        friend void from_json(const Darabonba::Json& j, CommittedFile& obj) { 
          DARABONBA_PTR_FROM_JSON(ChangeType, changeType_);
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(Committor, committor_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(FileId, fileId_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(FilePropertyContent, filePropertyContent_);
          DARABONBA_PTR_FROM_JSON(FileType, fileType_);
          DARABONBA_PTR_FROM_JSON(NodeConfiguration, nodeConfiguration_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(UseType, useType_);
        };
        CommittedFile() = default ;
        CommittedFile(const CommittedFile &) = default ;
        CommittedFile(CommittedFile &&) = default ;
        CommittedFile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CommittedFile() = default ;
        CommittedFile& operator=(const CommittedFile &) = default ;
        CommittedFile& operator=(CommittedFile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NodeConfiguration : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NodeConfiguration& obj) { 
            DARABONBA_PTR_TO_JSON(AutoRerunIntervalMillis, autoRerunIntervalMillis_);
            DARABONBA_PTR_TO_JSON(AutoRerunTimes, autoRerunTimes_);
            DARABONBA_PTR_TO_JSON(CronExpress, cronExpress_);
            DARABONBA_PTR_TO_JSON(CycleType, cycleType_);
            DARABONBA_PTR_TO_JSON(DependentNodeIdList, dependentNodeIdList_);
            DARABONBA_PTR_TO_JSON(DependentType, dependentType_);
            DARABONBA_PTR_TO_JSON(InputList, inputList_);
            DARABONBA_PTR_TO_JSON(OutputList, outputList_);
            DARABONBA_PTR_TO_JSON(ParaValue, paraValue_);
            DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
            DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
            DARABONBA_PTR_TO_JSON(SchedulerType, schedulerType_);
          };
          friend void from_json(const Darabonba::Json& j, NodeConfiguration& obj) { 
            DARABONBA_PTR_FROM_JSON(AutoRerunIntervalMillis, autoRerunIntervalMillis_);
            DARABONBA_PTR_FROM_JSON(AutoRerunTimes, autoRerunTimes_);
            DARABONBA_PTR_FROM_JSON(CronExpress, cronExpress_);
            DARABONBA_PTR_FROM_JSON(CycleType, cycleType_);
            DARABONBA_PTR_FROM_JSON(DependentNodeIdList, dependentNodeIdList_);
            DARABONBA_PTR_FROM_JSON(DependentType, dependentType_);
            DARABONBA_PTR_FROM_JSON(InputList, inputList_);
            DARABONBA_PTR_FROM_JSON(OutputList, outputList_);
            DARABONBA_PTR_FROM_JSON(ParaValue, paraValue_);
            DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
            DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
            DARABONBA_PTR_FROM_JSON(SchedulerType, schedulerType_);
          };
          NodeConfiguration() = default ;
          NodeConfiguration(const NodeConfiguration &) = default ;
          NodeConfiguration(NodeConfiguration &&) = default ;
          NodeConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NodeConfiguration() = default ;
          NodeConfiguration& operator=(const NodeConfiguration &) = default ;
          NodeConfiguration& operator=(NodeConfiguration &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class OutputList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OutputList& obj) { 
              DARABONBA_PTR_TO_JSON(Output, output_);
              DARABONBA_PTR_TO_JSON(RefTableName, refTableName_);
            };
            friend void from_json(const Darabonba::Json& j, OutputList& obj) { 
              DARABONBA_PTR_FROM_JSON(Output, output_);
              DARABONBA_PTR_FROM_JSON(RefTableName, refTableName_);
            };
            OutputList() = default ;
            OutputList(const OutputList &) = default ;
            OutputList(OutputList &&) = default ;
            OutputList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OutputList() = default ;
            OutputList& operator=(const OutputList &) = default ;
            OutputList& operator=(OutputList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->output_ == nullptr
        && this->refTableName_ == nullptr; };
            // output Field Functions 
            bool hasOutput() const { return this->output_ != nullptr;};
            void deleteOutput() { this->output_ = nullptr;};
            inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
            inline OutputList& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


            // refTableName Field Functions 
            bool hasRefTableName() const { return this->refTableName_ != nullptr;};
            void deleteRefTableName() { this->refTableName_ = nullptr;};
            inline string getRefTableName() const { DARABONBA_PTR_GET_DEFAULT(refTableName_, "") };
            inline OutputList& setRefTableName(string refTableName) { DARABONBA_PTR_SET_VALUE(refTableName_, refTableName) };


          protected:
            // The output name of the current file.
            // 
            // This parameter corresponds to the Output Name parameter under Output Name of Current Node in the Dependencies section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
            shared_ptr<string> output_ {};
            // The output table name of the current file.
            // 
            // This parameter corresponds to the Output Table Name parameter under Output Name of Current Node in the Dependencies section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
            shared_ptr<string> refTableName_ {};
          };

          class InputList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const InputList& obj) { 
              DARABONBA_PTR_TO_JSON(Input, input_);
              DARABONBA_PTR_TO_JSON(ParseType, parseType_);
            };
            friend void from_json(const Darabonba::Json& j, InputList& obj) { 
              DARABONBA_PTR_FROM_JSON(Input, input_);
              DARABONBA_PTR_FROM_JSON(ParseType, parseType_);
            };
            InputList() = default ;
            InputList(const InputList &) = default ;
            InputList(InputList &&) = default ;
            InputList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~InputList() = default ;
            InputList& operator=(const InputList &) = default ;
            InputList& operator=(InputList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->input_ == nullptr
        && this->parseType_ == nullptr; };
            // input Field Functions 
            bool hasInput() const { return this->input_ != nullptr;};
            void deleteInput() { this->input_ = nullptr;};
            inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
            inline InputList& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


            // parseType Field Functions 
            bool hasParseType() const { return this->parseType_ != nullptr;};
            void deleteParseType() { this->parseType_ = nullptr;};
            inline string getParseType() const { DARABONBA_PTR_GET_DEFAULT(parseType_, "") };
            inline InputList& setParseType(string parseType) { DARABONBA_PTR_SET_VALUE(parseType_, parseType) };


          protected:
            // The output name of the parent file on which the current file depends.
            // 
            // This parameter corresponds to the Output Name of Ancestor Node parameter under Parent Nodes in the Dependencies section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
            shared_ptr<string> input_ {};
            // The mode of the configuration file dependency. Valid values:
            // 
            // *   MANUAL: Scheduling dependencies are manually configured.
            // *   AUTO: Scheduling dependencies are automatically parsed.
            shared_ptr<string> parseType_ {};
          };

          virtual bool empty() const override { return this->autoRerunIntervalMillis_ == nullptr
        && this->autoRerunTimes_ == nullptr && this->cronExpress_ == nullptr && this->cycleType_ == nullptr && this->dependentNodeIdList_ == nullptr && this->dependentType_ == nullptr
        && this->inputList_ == nullptr && this->outputList_ == nullptr && this->paraValue_ == nullptr && this->rerunMode_ == nullptr && this->resourceGroupId_ == nullptr
        && this->schedulerType_ == nullptr; };
          // autoRerunIntervalMillis Field Functions 
          bool hasAutoRerunIntervalMillis() const { return this->autoRerunIntervalMillis_ != nullptr;};
          void deleteAutoRerunIntervalMillis() { this->autoRerunIntervalMillis_ = nullptr;};
          inline int64_t getAutoRerunIntervalMillis() const { DARABONBA_PTR_GET_DEFAULT(autoRerunIntervalMillis_, 0L) };
          inline NodeConfiguration& setAutoRerunIntervalMillis(int64_t autoRerunIntervalMillis) { DARABONBA_PTR_SET_VALUE(autoRerunIntervalMillis_, autoRerunIntervalMillis) };


          // autoRerunTimes Field Functions 
          bool hasAutoRerunTimes() const { return this->autoRerunTimes_ != nullptr;};
          void deleteAutoRerunTimes() { this->autoRerunTimes_ = nullptr;};
          inline int64_t getAutoRerunTimes() const { DARABONBA_PTR_GET_DEFAULT(autoRerunTimes_, 0L) };
          inline NodeConfiguration& setAutoRerunTimes(int64_t autoRerunTimes) { DARABONBA_PTR_SET_VALUE(autoRerunTimes_, autoRerunTimes) };


          // cronExpress Field Functions 
          bool hasCronExpress() const { return this->cronExpress_ != nullptr;};
          void deleteCronExpress() { this->cronExpress_ = nullptr;};
          inline string getCronExpress() const { DARABONBA_PTR_GET_DEFAULT(cronExpress_, "") };
          inline NodeConfiguration& setCronExpress(string cronExpress) { DARABONBA_PTR_SET_VALUE(cronExpress_, cronExpress) };


          // cycleType Field Functions 
          bool hasCycleType() const { return this->cycleType_ != nullptr;};
          void deleteCycleType() { this->cycleType_ = nullptr;};
          inline string getCycleType() const { DARABONBA_PTR_GET_DEFAULT(cycleType_, "") };
          inline NodeConfiguration& setCycleType(string cycleType) { DARABONBA_PTR_SET_VALUE(cycleType_, cycleType) };


          // dependentNodeIdList Field Functions 
          bool hasDependentNodeIdList() const { return this->dependentNodeIdList_ != nullptr;};
          void deleteDependentNodeIdList() { this->dependentNodeIdList_ = nullptr;};
          inline string getDependentNodeIdList() const { DARABONBA_PTR_GET_DEFAULT(dependentNodeIdList_, "") };
          inline NodeConfiguration& setDependentNodeIdList(string dependentNodeIdList) { DARABONBA_PTR_SET_VALUE(dependentNodeIdList_, dependentNodeIdList) };


          // dependentType Field Functions 
          bool hasDependentType() const { return this->dependentType_ != nullptr;};
          void deleteDependentType() { this->dependentType_ = nullptr;};
          inline string getDependentType() const { DARABONBA_PTR_GET_DEFAULT(dependentType_, "") };
          inline NodeConfiguration& setDependentType(string dependentType) { DARABONBA_PTR_SET_VALUE(dependentType_, dependentType) };


          // inputList Field Functions 
          bool hasInputList() const { return this->inputList_ != nullptr;};
          void deleteInputList() { this->inputList_ = nullptr;};
          inline const vector<NodeConfiguration::InputList> & getInputList() const { DARABONBA_PTR_GET_CONST(inputList_, vector<NodeConfiguration::InputList>) };
          inline vector<NodeConfiguration::InputList> getInputList() { DARABONBA_PTR_GET(inputList_, vector<NodeConfiguration::InputList>) };
          inline NodeConfiguration& setInputList(const vector<NodeConfiguration::InputList> & inputList) { DARABONBA_PTR_SET_VALUE(inputList_, inputList) };
          inline NodeConfiguration& setInputList(vector<NodeConfiguration::InputList> && inputList) { DARABONBA_PTR_SET_RVALUE(inputList_, inputList) };


          // outputList Field Functions 
          bool hasOutputList() const { return this->outputList_ != nullptr;};
          void deleteOutputList() { this->outputList_ = nullptr;};
          inline const vector<NodeConfiguration::OutputList> & getOutputList() const { DARABONBA_PTR_GET_CONST(outputList_, vector<NodeConfiguration::OutputList>) };
          inline vector<NodeConfiguration::OutputList> getOutputList() { DARABONBA_PTR_GET(outputList_, vector<NodeConfiguration::OutputList>) };
          inline NodeConfiguration& setOutputList(const vector<NodeConfiguration::OutputList> & outputList) { DARABONBA_PTR_SET_VALUE(outputList_, outputList) };
          inline NodeConfiguration& setOutputList(vector<NodeConfiguration::OutputList> && outputList) { DARABONBA_PTR_SET_RVALUE(outputList_, outputList) };


          // paraValue Field Functions 
          bool hasParaValue() const { return this->paraValue_ != nullptr;};
          void deleteParaValue() { this->paraValue_ = nullptr;};
          inline string getParaValue() const { DARABONBA_PTR_GET_DEFAULT(paraValue_, "") };
          inline NodeConfiguration& setParaValue(string paraValue) { DARABONBA_PTR_SET_VALUE(paraValue_, paraValue) };


          // rerunMode Field Functions 
          bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
          void deleteRerunMode() { this->rerunMode_ = nullptr;};
          inline string getRerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
          inline NodeConfiguration& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


          // resourceGroupId Field Functions 
          bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
          void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
          inline int64_t getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, 0L) };
          inline NodeConfiguration& setResourceGroupId(int64_t resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


          // schedulerType Field Functions 
          bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
          void deleteSchedulerType() { this->schedulerType_ = nullptr;};
          inline string getSchedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, "") };
          inline NodeConfiguration& setSchedulerType(string schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


        protected:
          // The interval at which the node corresponding to the file is rerun. Unit: milliseconds.
          shared_ptr<int64_t> autoRerunIntervalMillis_ {};
          // The number of times that the node corresponding to the file can be rerun.
          shared_ptr<int64_t> autoRerunTimes_ {};
          // The cron expression that is used to schedule the node corresponding to the file.
          shared_ptr<string> cronExpress_ {};
          // The type of the scheduling cycle of the node that corresponds to the file. Valid values: NOT_DAY and DAY. The value NOT_DAY indicates that the node is scheduled to run by minute or hour. The value DAY indicates that the node is scheduled to run by day, week, or month.
          // 
          // This parameter corresponds to the Scheduling Cycle parameter in the Schedule section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
          shared_ptr<string> cycleType_ {};
          // The ID of the node on which the node that corresponds to the file depends when the DependentType parameter is set to USER_DEFINE. Multiple IDs are separated by commas (,).
          // 
          // The value of this parameter is equivalent to the ID of the node that you specified after you select Other Nodes for Cross-Cycle Dependency (Original Previous-Cycle Dependency) in the Dependencies section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
          shared_ptr<string> dependentNodeIdList_ {};
          // The type of the cross-cycle scheduling dependency of the node. Valid values:
          // 
          // *   SELF: The instance generated for the node in the current cycle depends on the instance generated for the node in the previous cycle.
          // *   CHILD: The instance generated for the node in the current cycle depends on the instances generated for the descendant nodes at the nearest level of the node in the previous cycle.
          // *   USER_DEFINE: The instance generated for the node in the current cycle depends on the instances generated for one or more specified nodes in the previous cycle.
          // *   NONE: No cross-cycle scheduling dependency type is selected for the node.
          shared_ptr<string> dependentType_ {};
          // The output information about the parent files on which the current file depends.
          shared_ptr<vector<NodeConfiguration::InputList>> inputList_ {};
          // The output information about the current file.
          shared_ptr<vector<NodeConfiguration::OutputList>> outputList_ {};
          // The scheduling parameters of the node.
          // 
          // This parameter corresponds to the Scheduling Parameter section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console). For more information about the configurations of scheduling parameters, see [Configure scheduling parameters](https://help.aliyun.com/document_detail/137548.html).
          shared_ptr<string> paraValue_ {};
          // Indicates whether the node that corresponds to the file can be rerun. Valid values:
          // 
          // *   ALL_ALLOWED: The node can be rerun regardless of whether it is successfully run or fails to run.
          // *   FAILURE_ALLOWED: The node can be rerun only after it fails to run.
          // *   ALL_DENIED: The node cannot be rerun regardless of whether it is successfully run or fails to run.
          // 
          // This parameter corresponds to the Rerun parameter in the Schedule section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
          shared_ptr<string> rerunMode_ {};
          // The ID of the resource group that is used to run the node that corresponds to the file. You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/173913.html) operation to query the available resource groups in the workspace.
          shared_ptr<int64_t> resourceGroupId_ {};
          // The scheduling type of the node. Valid values:
          // 
          // *   NORMAL: The node is an auto triggered node.
          // *   MANUAL: The node is a manually triggered node. Manually triggered nodes cannot be automatically triggered. They correspond to the nodes in the Manually Triggered Workflows pane.
          // *   PAUSE: The node is a paused node.
          // *   SKIP: The node is a dry-run node. Dry-run nodes are started as scheduled, but the system sets the status of the nodes to successful when it starts to run them.
          shared_ptr<string> schedulerType_ {};
        };

        class FilePropertyContent : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FilePropertyContent& obj) { 
            DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
            DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
            DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
            DARABONBA_PTR_TO_JSON(FolderId, folderId_);
            DARABONBA_PTR_TO_JSON(Owner, owner_);
            DARABONBA_PTR_TO_JSON(ParentFileId, parentFileId_);
          };
          friend void from_json(const Darabonba::Json& j, FilePropertyContent& obj) { 
            DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
            DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
            DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
            DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
            DARABONBA_PTR_FROM_JSON(Owner, owner_);
            DARABONBA_PTR_FROM_JSON(ParentFileId, parentFileId_);
          };
          FilePropertyContent() = default ;
          FilePropertyContent(const FilePropertyContent &) = default ;
          FilePropertyContent(FilePropertyContent &&) = default ;
          FilePropertyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FilePropertyContent() = default ;
          FilePropertyContent& operator=(const FilePropertyContent &) = default ;
          FilePropertyContent& operator=(FilePropertyContent &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->businessId_ == nullptr
        && this->currentVersion_ == nullptr && this->dataSourceName_ == nullptr && this->folderId_ == nullptr && this->owner_ == nullptr && this->parentFileId_ == nullptr; };
          // businessId Field Functions 
          bool hasBusinessId() const { return this->businessId_ != nullptr;};
          void deleteBusinessId() { this->businessId_ = nullptr;};
          inline int64_t getBusinessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, 0L) };
          inline FilePropertyContent& setBusinessId(int64_t businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


          // currentVersion Field Functions 
          bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
          void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
          inline int64_t getCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, 0L) };
          inline FilePropertyContent& setCurrentVersion(int64_t currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


          // dataSourceName Field Functions 
          bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
          void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
          inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
          inline FilePropertyContent& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


          // folderId Field Functions 
          bool hasFolderId() const { return this->folderId_ != nullptr;};
          void deleteFolderId() { this->folderId_ = nullptr;};
          inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
          inline FilePropertyContent& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


          // owner Field Functions 
          bool hasOwner() const { return this->owner_ != nullptr;};
          void deleteOwner() { this->owner_ = nullptr;};
          inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
          inline FilePropertyContent& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


          // parentFileId Field Functions 
          bool hasParentFileId() const { return this->parentFileId_ != nullptr;};
          void deleteParentFileId() { this->parentFileId_ = nullptr;};
          inline int64_t getParentFileId() const { DARABONBA_PTR_GET_DEFAULT(parentFileId_, 0L) };
          inline FilePropertyContent& setParentFileId(int64_t parentFileId) { DARABONBA_PTR_SET_VALUE(parentFileId_, parentFileId) };


        protected:
          // The ID of the workflow to which the file belongs.
          shared_ptr<int64_t> businessId_ {};
          // The latest version number of the file.
          shared_ptr<int64_t> currentVersion_ {};
          // The name of the data source with which the file is associated.
          shared_ptr<string> dataSourceName_ {};
          // The ID of the folder to which the file belongs. You can call the [GetFolder](https://help.aliyun.com/document_detail/173952.html) operation to query the details of the file based on the folder ID.
          shared_ptr<string> folderId_ {};
          // The file owner.
          shared_ptr<string> owner_ {};
          // The ID of the do-while node or for-each node that corresponds to the file.
          shared_ptr<int64_t> parentFileId_ {};
        };

        virtual bool empty() const override { return this->changeType_ == nullptr
        && this->comment_ == nullptr && this->committor_ == nullptr && this->content_ == nullptr && this->fileId_ == nullptr && this->fileName_ == nullptr
        && this->filePropertyContent_ == nullptr && this->fileType_ == nullptr && this->nodeConfiguration_ == nullptr && this->nodeId_ == nullptr && this->useType_ == nullptr; };
        // changeType Field Functions 
        bool hasChangeType() const { return this->changeType_ != nullptr;};
        void deleteChangeType() { this->changeType_ = nullptr;};
        inline string getChangeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, "") };
        inline CommittedFile& setChangeType(string changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline CommittedFile& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // committor Field Functions 
        bool hasCommittor() const { return this->committor_ != nullptr;};
        void deleteCommittor() { this->committor_ = nullptr;};
        inline string getCommittor() const { DARABONBA_PTR_GET_DEFAULT(committor_, "") };
        inline CommittedFile& setCommittor(string committor) { DARABONBA_PTR_SET_VALUE(committor_, committor) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline CommittedFile& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
        inline CommittedFile& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline CommittedFile& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // filePropertyContent Field Functions 
        bool hasFilePropertyContent() const { return this->filePropertyContent_ != nullptr;};
        void deleteFilePropertyContent() { this->filePropertyContent_ = nullptr;};
        inline const CommittedFile::FilePropertyContent & getFilePropertyContent() const { DARABONBA_PTR_GET_CONST(filePropertyContent_, CommittedFile::FilePropertyContent) };
        inline CommittedFile::FilePropertyContent getFilePropertyContent() { DARABONBA_PTR_GET(filePropertyContent_, CommittedFile::FilePropertyContent) };
        inline CommittedFile& setFilePropertyContent(const CommittedFile::FilePropertyContent & filePropertyContent) { DARABONBA_PTR_SET_VALUE(filePropertyContent_, filePropertyContent) };
        inline CommittedFile& setFilePropertyContent(CommittedFile::FilePropertyContent && filePropertyContent) { DARABONBA_PTR_SET_RVALUE(filePropertyContent_, filePropertyContent) };


        // fileType Field Functions 
        bool hasFileType() const { return this->fileType_ != nullptr;};
        void deleteFileType() { this->fileType_ = nullptr;};
        inline int64_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0L) };
        inline CommittedFile& setFileType(int64_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


        // nodeConfiguration Field Functions 
        bool hasNodeConfiguration() const { return this->nodeConfiguration_ != nullptr;};
        void deleteNodeConfiguration() { this->nodeConfiguration_ = nullptr;};
        inline const CommittedFile::NodeConfiguration & getNodeConfiguration() const { DARABONBA_PTR_GET_CONST(nodeConfiguration_, CommittedFile::NodeConfiguration) };
        inline CommittedFile::NodeConfiguration getNodeConfiguration() { DARABONBA_PTR_GET(nodeConfiguration_, CommittedFile::NodeConfiguration) };
        inline CommittedFile& setNodeConfiguration(const CommittedFile::NodeConfiguration & nodeConfiguration) { DARABONBA_PTR_SET_VALUE(nodeConfiguration_, nodeConfiguration) };
        inline CommittedFile& setNodeConfiguration(CommittedFile::NodeConfiguration && nodeConfiguration) { DARABONBA_PTR_SET_RVALUE(nodeConfiguration_, nodeConfiguration) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
        inline CommittedFile& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // useType Field Functions 
        bool hasUseType() const { return this->useType_ != nullptr;};
        void deleteUseType() { this->useType_ = nullptr;};
        inline string getUseType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
        inline CommittedFile& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


      protected:
        // The type of the change to the file of the current version. Valid values: CREATE, UPDATE, and DELETE.
        shared_ptr<string> changeType_ {};
        // The description of the file version.
        shared_ptr<string> comment_ {};
        // The ID of the Alibaba Cloud account that is used to generate the file of the current version.
        shared_ptr<string> committor_ {};
        // The code in the file of the current version.
        shared_ptr<string> content_ {};
        // The file ID.
        shared_ptr<int64_t> fileId_ {};
        // The name of the file.
        shared_ptr<string> fileName_ {};
        // The details of the file.
        shared_ptr<CommittedFile::FilePropertyContent> filePropertyContent_ {};
        // The file type. The code for files varies based on the file type. For more information, see [DataWorks nodes](https://help.aliyun.com/document_detail/600169.html).
        shared_ptr<int64_t> fileType_ {};
        // The scheduling properties of the node that corresponds to the file.
        shared_ptr<CommittedFile::NodeConfiguration> nodeConfiguration_ {};
        // The ID of the node that is scheduled.
        shared_ptr<int64_t> nodeId_ {};
        // The module to which the file belongs. Valid values:
        // 
        // *   NORMAL: The file is used for DataStudio.
        // *   MANUAL: The file is used for a manually triggered node.
        // *   MANUAL_BIZ: The file is used for a manually triggered workflow.
        // *   SKIP: The file is used for a dry-run node in DataStudio.
        // *   ADHOCQUERY: The file is used for an ad hoc query.
        // *   COMPONENT: The file is used for a script template.
        shared_ptr<string> useType_ {};
      };

      virtual bool empty() const override { return this->committedFile_ == nullptr
        && this->deletedFile_ == nullptr && this->fileExecutionCommand_ == nullptr && this->tableModel_ == nullptr; };
      // committedFile Field Functions 
      bool hasCommittedFile() const { return this->committedFile_ != nullptr;};
      void deleteCommittedFile() { this->committedFile_ = nullptr;};
      inline const EventDetail::CommittedFile & getCommittedFile() const { DARABONBA_PTR_GET_CONST(committedFile_, EventDetail::CommittedFile) };
      inline EventDetail::CommittedFile getCommittedFile() { DARABONBA_PTR_GET(committedFile_, EventDetail::CommittedFile) };
      inline EventDetail& setCommittedFile(const EventDetail::CommittedFile & committedFile) { DARABONBA_PTR_SET_VALUE(committedFile_, committedFile) };
      inline EventDetail& setCommittedFile(EventDetail::CommittedFile && committedFile) { DARABONBA_PTR_SET_RVALUE(committedFile_, committedFile) };


      // deletedFile Field Functions 
      bool hasDeletedFile() const { return this->deletedFile_ != nullptr;};
      void deleteDeletedFile() { this->deletedFile_ = nullptr;};
      inline const EventDetail::DeletedFile & getDeletedFile() const { DARABONBA_PTR_GET_CONST(deletedFile_, EventDetail::DeletedFile) };
      inline EventDetail::DeletedFile getDeletedFile() { DARABONBA_PTR_GET(deletedFile_, EventDetail::DeletedFile) };
      inline EventDetail& setDeletedFile(const EventDetail::DeletedFile & deletedFile) { DARABONBA_PTR_SET_VALUE(deletedFile_, deletedFile) };
      inline EventDetail& setDeletedFile(EventDetail::DeletedFile && deletedFile) { DARABONBA_PTR_SET_RVALUE(deletedFile_, deletedFile) };


      // fileExecutionCommand Field Functions 
      bool hasFileExecutionCommand() const { return this->fileExecutionCommand_ != nullptr;};
      void deleteFileExecutionCommand() { this->fileExecutionCommand_ = nullptr;};
      inline const EventDetail::FileExecutionCommand & getFileExecutionCommand() const { DARABONBA_PTR_GET_CONST(fileExecutionCommand_, EventDetail::FileExecutionCommand) };
      inline EventDetail::FileExecutionCommand getFileExecutionCommand() { DARABONBA_PTR_GET(fileExecutionCommand_, EventDetail::FileExecutionCommand) };
      inline EventDetail& setFileExecutionCommand(const EventDetail::FileExecutionCommand & fileExecutionCommand) { DARABONBA_PTR_SET_VALUE(fileExecutionCommand_, fileExecutionCommand) };
      inline EventDetail& setFileExecutionCommand(EventDetail::FileExecutionCommand && fileExecutionCommand) { DARABONBA_PTR_SET_RVALUE(fileExecutionCommand_, fileExecutionCommand) };


      // tableModel Field Functions 
      bool hasTableModel() const { return this->tableModel_ != nullptr;};
      void deleteTableModel() { this->tableModel_ = nullptr;};
      inline const EventDetail::TableModel & getTableModel() const { DARABONBA_PTR_GET_CONST(tableModel_, EventDetail::TableModel) };
      inline EventDetail::TableModel getTableModel() { DARABONBA_PTR_GET(tableModel_, EventDetail::TableModel) };
      inline EventDetail& setTableModel(const EventDetail::TableModel & tableModel) { DARABONBA_PTR_SET_VALUE(tableModel_, tableModel) };
      inline EventDetail& setTableModel(EventDetail::TableModel && tableModel) { DARABONBA_PTR_SET_RVALUE(tableModel_, tableModel) };


    protected:
      // The data snapshot when the file is committed and deployed.
      // 
      // This parameter is valid only if the message type is IDE_FILE_SUBMIT_BEFORE or IDE_FILE_DEPLOY_BEFORE.
      shared_ptr<EventDetail::CommittedFile> committedFile_ {};
      // The data snapshot when the file is deleted. This parameter is valid only if the message type is IDE_FILE_DELETE_BEFORE.
      shared_ptr<EventDetail::DeletedFile> deletedFile_ {};
      // The data snapshot when the code in the file is run. This parameter is valid only if the message type is IDE_FILE_EXECUTE_BEFORE.
      shared_ptr<EventDetail::FileExecutionCommand> fileExecutionCommand_ {};
      // The data snapshot when the table is committed and deployed. This parameter is valid only if the message type is IDE_TABLE_SUBMIT_BEFORE or IDE_TABLE_DEPLOY_BEFORE.
      shared_ptr<EventDetail::TableModel> tableModel_ {};
    };

    virtual bool empty() const override { return this->eventDetail_ == nullptr
        && this->requestId_ == nullptr; };
    // eventDetail Field Functions 
    bool hasEventDetail() const { return this->eventDetail_ != nullptr;};
    void deleteEventDetail() { this->eventDetail_ = nullptr;};
    inline const GetIDEEventDetailResponseBody::EventDetail & getEventDetail() const { DARABONBA_PTR_GET_CONST(eventDetail_, GetIDEEventDetailResponseBody::EventDetail) };
    inline GetIDEEventDetailResponseBody::EventDetail getEventDetail() { DARABONBA_PTR_GET(eventDetail_, GetIDEEventDetailResponseBody::EventDetail) };
    inline GetIDEEventDetailResponseBody& setEventDetail(const GetIDEEventDetailResponseBody::EventDetail & eventDetail) { DARABONBA_PTR_SET_VALUE(eventDetail_, eventDetail) };
    inline GetIDEEventDetailResponseBody& setEventDetail(GetIDEEventDetailResponseBody::EventDetail && eventDetail) { DARABONBA_PTR_SET_RVALUE(eventDetail_, eventDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIDEEventDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data snapshot that is generated when an extension point event is triggered.
    // 
    // The fields contained in data snapshots vary based on the types of the triggered extension point events. For more information, see the description of the fields.
    shared_ptr<GetIDEEventDetailResponseBody::EventDetail> eventDetail_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
