// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppGuid, appGuid_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(ExternalTableType, externalTableType_);
      DARABONBA_PTR_TO_JSON(HasPart, hasPart_);
      DARABONBA_PTR_TO_JSON(IsView, isView_);
      DARABONBA_PTR_TO_JSON(LifeCycle, lifeCycle_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(LogicalLevelId, logicalLevelId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhysicsLevelId, physicsLevelId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Themes, themes_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppGuid, appGuid_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(ExternalTableType, externalTableType_);
      DARABONBA_PTR_FROM_JSON(HasPart, hasPart_);
      DARABONBA_PTR_FROM_JSON(IsView, isView_);
      DARABONBA_PTR_FROM_JSON(LifeCycle, lifeCycle_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(LogicalLevelId, logicalLevelId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhysicsLevelId, physicsLevelId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Themes, themes_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
    };
    CreateTableRequest() = default ;
    CreateTableRequest(const CreateTableRequest &) = default ;
    CreateTableRequest(CreateTableRequest &&) = default ;
    CreateTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTableRequest() = default ;
    CreateTableRequest& operator=(const CreateTableRequest &) = default ;
    CreateTableRequest& operator=(CreateTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Themes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Themes& obj) { 
        DARABONBA_PTR_TO_JSON(ThemeId, themeId_);
        DARABONBA_PTR_TO_JSON(ThemeLevel, themeLevel_);
      };
      friend void from_json(const Darabonba::Json& j, Themes& obj) { 
        DARABONBA_PTR_FROM_JSON(ThemeId, themeId_);
        DARABONBA_PTR_FROM_JSON(ThemeLevel, themeLevel_);
      };
      Themes() = default ;
      Themes(const Themes &) = default ;
      Themes(Themes &&) = default ;
      Themes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Themes() = default ;
      Themes& operator=(const Themes &) = default ;
      Themes& operator=(Themes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->themeId_ == nullptr
        && this->themeLevel_ == nullptr; };
      // themeId Field Functions 
      bool hasThemeId() const { return this->themeId_ != nullptr;};
      void deleteThemeId() { this->themeId_ = nullptr;};
      inline int64_t getThemeId() const { DARABONBA_PTR_GET_DEFAULT(themeId_, 0L) };
      inline Themes& setThemeId(int64_t themeId) { DARABONBA_PTR_SET_VALUE(themeId_, themeId) };


      // themeLevel Field Functions 
      bool hasThemeLevel() const { return this->themeLevel_ != nullptr;};
      void deleteThemeLevel() { this->themeLevel_ = nullptr;};
      inline int32_t getThemeLevel() const { DARABONBA_PTR_GET_DEFAULT(themeLevel_, 0) };
      inline Themes& setThemeLevel(int32_t themeLevel) { DARABONBA_PTR_SET_VALUE(themeLevel_, themeLevel) };


    protected:
      // The theme ID.
      shared_ptr<int64_t> themeId_ {};
      // The level that corresponds to the theme ID.
      shared_ptr<int32_t> themeLevel_ {};
    };

    class Columns : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Columns& obj) { 
        DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
        DARABONBA_PTR_TO_JSON(ColumnNameCn, columnNameCn_);
        DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(IsPartitionCol, isPartitionCol_);
        DARABONBA_PTR_TO_JSON(Length, length_);
        DARABONBA_PTR_TO_JSON(SeqNumber, seqNumber_);
      };
      friend void from_json(const Darabonba::Json& j, Columns& obj) { 
        DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
        DARABONBA_PTR_FROM_JSON(ColumnNameCn, columnNameCn_);
        DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(IsPartitionCol, isPartitionCol_);
        DARABONBA_PTR_FROM_JSON(Length, length_);
        DARABONBA_PTR_FROM_JSON(SeqNumber, seqNumber_);
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
        && this->columnNameCn_ == nullptr && this->columnType_ == nullptr && this->comment_ == nullptr && this->isPartitionCol_ == nullptr && this->length_ == nullptr
        && this->seqNumber_ == nullptr; };
      // columnName Field Functions 
      bool hasColumnName() const { return this->columnName_ != nullptr;};
      void deleteColumnName() { this->columnName_ = nullptr;};
      inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
      inline Columns& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


      // columnNameCn Field Functions 
      bool hasColumnNameCn() const { return this->columnNameCn_ != nullptr;};
      void deleteColumnNameCn() { this->columnNameCn_ = nullptr;};
      inline string getColumnNameCn() const { DARABONBA_PTR_GET_DEFAULT(columnNameCn_, "") };
      inline Columns& setColumnNameCn(string columnNameCn) { DARABONBA_PTR_SET_VALUE(columnNameCn_, columnNameCn) };


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


      // isPartitionCol Field Functions 
      bool hasIsPartitionCol() const { return this->isPartitionCol_ != nullptr;};
      void deleteIsPartitionCol() { this->isPartitionCol_ = nullptr;};
      inline bool getIsPartitionCol() const { DARABONBA_PTR_GET_DEFAULT(isPartitionCol_, false) };
      inline Columns& setIsPartitionCol(bool isPartitionCol) { DARABONBA_PTR_SET_VALUE(isPartitionCol_, isPartitionCol) };


      // length Field Functions 
      bool hasLength() const { return this->length_ != nullptr;};
      void deleteLength() { this->length_ = nullptr;};
      inline int32_t getLength() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
      inline Columns& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


      // seqNumber Field Functions 
      bool hasSeqNumber() const { return this->seqNumber_ != nullptr;};
      void deleteSeqNumber() { this->seqNumber_ = nullptr;};
      inline int32_t getSeqNumber() const { DARABONBA_PTR_GET_DEFAULT(seqNumber_, 0) };
      inline Columns& setSeqNumber(int32_t seqNumber) { DARABONBA_PTR_SET_VALUE(seqNumber_, seqNumber) };


    protected:
      // The name of the field. You can configure a maximum of 1,000 fields when you call the CreateTable operation to create a table.
      // 
      // This parameter is required.
      shared_ptr<string> columnName_ {};
      // The display name of the field.
      shared_ptr<string> columnNameCn_ {};
      // The data type of the field. For information about supported data types, see [Data type editions](https://help.aliyun.com/document_detail/27821.html) in MaxCompute documentation.
      // 
      // This parameter is required.
      shared_ptr<string> columnType_ {};
      // The comment of the field.
      shared_ptr<string> comment_ {};
      // Specifies whether the field is a partition field.
      shared_ptr<bool> isPartitionCol_ {};
      // The length of the field. For more information, see [MaxCompute data type editions](https://help.aliyun.com/document_detail/159541.html).
      shared_ptr<int32_t> length_ {};
      // The sequence number of the field. You can use this parameter to specify how fields are sorted in a table. By default, fields are sorted based on the order in which requests are created. If the field is a partition field, this parameter is not supported.
      shared_ptr<int32_t> seqNumber_ {};
    };

    virtual bool empty() const override { return this->appGuid_ == nullptr
        && this->categoryId_ == nullptr && this->clientToken_ == nullptr && this->columns_ == nullptr && this->comment_ == nullptr && this->endpoint_ == nullptr
        && this->envType_ == nullptr && this->externalTableType_ == nullptr && this->hasPart_ == nullptr && this->isView_ == nullptr && this->lifeCycle_ == nullptr
        && this->location_ == nullptr && this->logicalLevelId_ == nullptr && this->ownerId_ == nullptr && this->physicsLevelId_ == nullptr && this->projectId_ == nullptr
        && this->schema_ == nullptr && this->tableName_ == nullptr && this->themes_ == nullptr && this->visibility_ == nullptr; };
    // appGuid Field Functions 
    bool hasAppGuid() const { return this->appGuid_ != nullptr;};
    void deleteAppGuid() { this->appGuid_ = nullptr;};
    inline string getAppGuid() const { DARABONBA_PTR_GET_DEFAULT(appGuid_, "") };
    inline CreateTableRequest& setAppGuid(string appGuid) { DARABONBA_PTR_SET_VALUE(appGuid_, appGuid) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline CreateTableRequest& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTableRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<CreateTableRequest::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<CreateTableRequest::Columns>) };
    inline vector<CreateTableRequest::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<CreateTableRequest::Columns>) };
    inline CreateTableRequest& setColumns(const vector<CreateTableRequest::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline CreateTableRequest& setColumns(vector<CreateTableRequest::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateTableRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline CreateTableRequest& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline int32_t getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, 0) };
    inline CreateTableRequest& setEnvType(int32_t envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // externalTableType Field Functions 
    bool hasExternalTableType() const { return this->externalTableType_ != nullptr;};
    void deleteExternalTableType() { this->externalTableType_ = nullptr;};
    inline string getExternalTableType() const { DARABONBA_PTR_GET_DEFAULT(externalTableType_, "") };
    inline CreateTableRequest& setExternalTableType(string externalTableType) { DARABONBA_PTR_SET_VALUE(externalTableType_, externalTableType) };


    // hasPart Field Functions 
    bool hasHasPart() const { return this->hasPart_ != nullptr;};
    void deleteHasPart() { this->hasPart_ = nullptr;};
    inline int32_t getHasPart() const { DARABONBA_PTR_GET_DEFAULT(hasPart_, 0) };
    inline CreateTableRequest& setHasPart(int32_t hasPart) { DARABONBA_PTR_SET_VALUE(hasPart_, hasPart) };


    // isView Field Functions 
    bool hasIsView() const { return this->isView_ != nullptr;};
    void deleteIsView() { this->isView_ = nullptr;};
    inline int32_t getIsView() const { DARABONBA_PTR_GET_DEFAULT(isView_, 0) };
    inline CreateTableRequest& setIsView(int32_t isView) { DARABONBA_PTR_SET_VALUE(isView_, isView) };


    // lifeCycle Field Functions 
    bool hasLifeCycle() const { return this->lifeCycle_ != nullptr;};
    void deleteLifeCycle() { this->lifeCycle_ = nullptr;};
    inline int32_t getLifeCycle() const { DARABONBA_PTR_GET_DEFAULT(lifeCycle_, 0) };
    inline CreateTableRequest& setLifeCycle(int32_t lifeCycle) { DARABONBA_PTR_SET_VALUE(lifeCycle_, lifeCycle) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline CreateTableRequest& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // logicalLevelId Field Functions 
    bool hasLogicalLevelId() const { return this->logicalLevelId_ != nullptr;};
    void deleteLogicalLevelId() { this->logicalLevelId_ = nullptr;};
    inline int64_t getLogicalLevelId() const { DARABONBA_PTR_GET_DEFAULT(logicalLevelId_, 0L) };
    inline CreateTableRequest& setLogicalLevelId(int64_t logicalLevelId) { DARABONBA_PTR_SET_VALUE(logicalLevelId_, logicalLevelId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateTableRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // physicsLevelId Field Functions 
    bool hasPhysicsLevelId() const { return this->physicsLevelId_ != nullptr;};
    void deletePhysicsLevelId() { this->physicsLevelId_ = nullptr;};
    inline int64_t getPhysicsLevelId() const { DARABONBA_PTR_GET_DEFAULT(physicsLevelId_, 0L) };
    inline CreateTableRequest& setPhysicsLevelId(int64_t physicsLevelId) { DARABONBA_PTR_SET_VALUE(physicsLevelId_, physicsLevelId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateTableRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline CreateTableRequest& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline CreateTableRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // themes Field Functions 
    bool hasThemes() const { return this->themes_ != nullptr;};
    void deleteThemes() { this->themes_ = nullptr;};
    inline const vector<CreateTableRequest::Themes> & getThemes() const { DARABONBA_PTR_GET_CONST(themes_, vector<CreateTableRequest::Themes>) };
    inline vector<CreateTableRequest::Themes> getThemes() { DARABONBA_PTR_GET(themes_, vector<CreateTableRequest::Themes>) };
    inline CreateTableRequest& setThemes(const vector<CreateTableRequest::Themes> & themes) { DARABONBA_PTR_SET_VALUE(themes_, themes) };
    inline CreateTableRequest& setThemes(vector<CreateTableRequest::Themes> && themes) { DARABONBA_PTR_SET_RVALUE(themes_, themes) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline int32_t getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, 0) };
    inline CreateTableRequest& setVisibility(int32_t visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // The ID of the MaxCompute project. Specify the ID in the odps.{projectName} format.
    shared_ptr<string> appGuid_ {};
    // The ID of the associated category. You can call the [GetMetaCategory](https://help.aliyun.com/document_detail/173932.html) operation to query the IDs of all categories that can be associated.
    shared_ptr<int64_t> categoryId_ {};
    // A reserved parameter.
    shared_ptr<string> clientToken_ {};
    // The list of fields. A maximum of 1,000 fields are supported.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateTableRequest::Columns>> columns_ {};
    // The comment.
    shared_ptr<string> comment_ {};
    // The endpoint of MaxCompute.
    shared_ptr<string> endpoint_ {};
    // The environment type of the DataWorks workspace. Valid values:
    // 
    // *   0: development environment
    // *   1: production environment
    shared_ptr<int32_t> envType_ {};
    // The storage type of the external table. Valid values:
    // 
    // *   0: Object Storage Service (OSS)
    // *   1: Tablestore
    // *   2: Volume
    // *   3: MySQL
    shared_ptr<string> externalTableType_ {};
    // Specifies whether to create a MaxCompute partitioned table. Valid values: 1 and 0. The value 1 indicates a partitioned table. The value 0 indicates a non-partitioned table. This parameter is deprecated. Do not use this parameter. The Column.N.isPartitionCol parameter is used to specify whether to create a MaxCompute partitioned table. If the Column.N.isPartitionCol parameter is set to true, a MaxCompute partitioned table is created.
    shared_ptr<int32_t> hasPart_ {};
    // Specifies whether to create a view or table. Valid values:
    // 
    // *   0: Create a table.
    // *   1: Create a view.
    shared_ptr<int32_t> isView_ {};
    // The lifecycle of the table. Unit: days. By default, this parameter is left empty, which indicates that the table is permanently stored.
    shared_ptr<int32_t> lifeCycle_ {};
    // The storage location of the external table.
    shared_ptr<string> location_ {};
    // The ID of the logical level.
    shared_ptr<int64_t> logicalLevelId_ {};
    shared_ptr<string> ownerId_ {};
    // The ID of the physical level.
    shared_ptr<int64_t> physicsLevelId_ {};
    // The DataWorks workspace ID.
    shared_ptr<int64_t> projectId_ {};
    // The schema information of the table. You need to enter the schema information of the table if you enable the table schema in MaxCompute.
    shared_ptr<string> schema_ {};
    // The name of the table.
    // 
    // This parameter is required.
    shared_ptr<string> tableName_ {};
    // The list of themes.
    shared_ptr<vector<CreateTableRequest::Themes>> themes_ {};
    // Specifies whether the table or workspace is visible. Valid values:
    // 
    // *   0: Both the table and workspace are invisible.
    // *   1: Both the table and workspace are visible.
    // *   2: Only the workspace is visible.
    shared_ptr<int32_t> visibility_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
