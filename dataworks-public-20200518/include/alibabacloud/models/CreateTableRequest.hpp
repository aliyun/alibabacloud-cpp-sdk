// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTableRequestColumns.hpp>
#include <alibabacloud/models/CreateTableRequestThemes.hpp>
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
    virtual bool empty() const override { this->appGuid_ != nullptr
        && this->categoryId_ != nullptr && this->clientToken_ != nullptr && this->columns_ != nullptr && this->comment_ != nullptr && this->endpoint_ != nullptr
        && this->envType_ != nullptr && this->externalTableType_ != nullptr && this->hasPart_ != nullptr && this->isView_ != nullptr && this->lifeCycle_ != nullptr
        && this->location_ != nullptr && this->logicalLevelId_ != nullptr && this->ownerId_ != nullptr && this->physicsLevelId_ != nullptr && this->projectId_ != nullptr
        && this->schema_ != nullptr && this->tableName_ != nullptr && this->themes_ != nullptr && this->visibility_ != nullptr; };
    // appGuid Field Functions 
    bool hasAppGuid() const { return this->appGuid_ != nullptr;};
    void deleteAppGuid() { this->appGuid_ = nullptr;};
    inline string appGuid() const { DARABONBA_PTR_GET_DEFAULT(appGuid_, "") };
    inline CreateTableRequest& setAppGuid(string appGuid) { DARABONBA_PTR_SET_VALUE(appGuid_, appGuid) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline CreateTableRequest& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTableRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<CreateTableRequestColumns> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<CreateTableRequestColumns>) };
    inline vector<CreateTableRequestColumns> columns() { DARABONBA_PTR_GET(columns_, vector<CreateTableRequestColumns>) };
    inline CreateTableRequest& setColumns(const vector<CreateTableRequestColumns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline CreateTableRequest& setColumns(vector<CreateTableRequestColumns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateTableRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline CreateTableRequest& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline int32_t envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, 0) };
    inline CreateTableRequest& setEnvType(int32_t envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // externalTableType Field Functions 
    bool hasExternalTableType() const { return this->externalTableType_ != nullptr;};
    void deleteExternalTableType() { this->externalTableType_ = nullptr;};
    inline string externalTableType() const { DARABONBA_PTR_GET_DEFAULT(externalTableType_, "") };
    inline CreateTableRequest& setExternalTableType(string externalTableType) { DARABONBA_PTR_SET_VALUE(externalTableType_, externalTableType) };


    // hasPart Field Functions 
    bool hasHasPart() const { return this->hasPart_ != nullptr;};
    void deleteHasPart() { this->hasPart_ = nullptr;};
    inline int32_t hasPart() const { DARABONBA_PTR_GET_DEFAULT(hasPart_, 0) };
    inline CreateTableRequest& setHasPart(int32_t hasPart) { DARABONBA_PTR_SET_VALUE(hasPart_, hasPart) };


    // isView Field Functions 
    bool hasIsView() const { return this->isView_ != nullptr;};
    void deleteIsView() { this->isView_ = nullptr;};
    inline int32_t isView() const { DARABONBA_PTR_GET_DEFAULT(isView_, 0) };
    inline CreateTableRequest& setIsView(int32_t isView) { DARABONBA_PTR_SET_VALUE(isView_, isView) };


    // lifeCycle Field Functions 
    bool hasLifeCycle() const { return this->lifeCycle_ != nullptr;};
    void deleteLifeCycle() { this->lifeCycle_ = nullptr;};
    inline int32_t lifeCycle() const { DARABONBA_PTR_GET_DEFAULT(lifeCycle_, 0) };
    inline CreateTableRequest& setLifeCycle(int32_t lifeCycle) { DARABONBA_PTR_SET_VALUE(lifeCycle_, lifeCycle) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline CreateTableRequest& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // logicalLevelId Field Functions 
    bool hasLogicalLevelId() const { return this->logicalLevelId_ != nullptr;};
    void deleteLogicalLevelId() { this->logicalLevelId_ = nullptr;};
    inline int64_t logicalLevelId() const { DARABONBA_PTR_GET_DEFAULT(logicalLevelId_, 0L) };
    inline CreateTableRequest& setLogicalLevelId(int64_t logicalLevelId) { DARABONBA_PTR_SET_VALUE(logicalLevelId_, logicalLevelId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateTableRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // physicsLevelId Field Functions 
    bool hasPhysicsLevelId() const { return this->physicsLevelId_ != nullptr;};
    void deletePhysicsLevelId() { this->physicsLevelId_ = nullptr;};
    inline int64_t physicsLevelId() const { DARABONBA_PTR_GET_DEFAULT(physicsLevelId_, 0L) };
    inline CreateTableRequest& setPhysicsLevelId(int64_t physicsLevelId) { DARABONBA_PTR_SET_VALUE(physicsLevelId_, physicsLevelId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateTableRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline CreateTableRequest& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline CreateTableRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // themes Field Functions 
    bool hasThemes() const { return this->themes_ != nullptr;};
    void deleteThemes() { this->themes_ = nullptr;};
    inline const vector<CreateTableRequestThemes> & themes() const { DARABONBA_PTR_GET_CONST(themes_, vector<CreateTableRequestThemes>) };
    inline vector<CreateTableRequestThemes> themes() { DARABONBA_PTR_GET(themes_, vector<CreateTableRequestThemes>) };
    inline CreateTableRequest& setThemes(const vector<CreateTableRequestThemes> & themes) { DARABONBA_PTR_SET_VALUE(themes_, themes) };
    inline CreateTableRequest& setThemes(vector<CreateTableRequestThemes> && themes) { DARABONBA_PTR_SET_RVALUE(themes_, themes) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline int32_t visibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, 0) };
    inline CreateTableRequest& setVisibility(int32_t visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // The ID of the MaxCompute project. Specify the ID in the odps.{projectName} format.
    std::shared_ptr<string> appGuid_ = nullptr;
    // The ID of the associated category. You can call the [GetMetaCategory](https://help.aliyun.com/document_detail/173932.html) operation to query the IDs of all categories that can be associated.
    std::shared_ptr<int64_t> categoryId_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The list of fields. A maximum of 1,000 fields are supported.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateTableRequestColumns>> columns_ = nullptr;
    // The comment.
    std::shared_ptr<string> comment_ = nullptr;
    // The endpoint of MaxCompute.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The environment type of the DataWorks workspace. Valid values:
    // 
    // *   0: development environment
    // *   1: production environment
    std::shared_ptr<int32_t> envType_ = nullptr;
    // The storage type of the external table. Valid values:
    // 
    // *   0: Object Storage Service (OSS)
    // *   1: Tablestore
    // *   2: Volume
    // *   3: MySQL
    std::shared_ptr<string> externalTableType_ = nullptr;
    // Specifies whether to create a MaxCompute partitioned table. Valid values: 1 and 0. The value 1 indicates a partitioned table. The value 0 indicates a non-partitioned table. This parameter is deprecated. Do not use this parameter. The Column.N.isPartitionCol parameter is used to specify whether to create a MaxCompute partitioned table. If the Column.N.isPartitionCol parameter is set to true, a MaxCompute partitioned table is created.
    std::shared_ptr<int32_t> hasPart_ = nullptr;
    // Specifies whether to create a view or table. Valid values:
    // 
    // *   0: Create a table.
    // *   1: Create a view.
    std::shared_ptr<int32_t> isView_ = nullptr;
    // The lifecycle of the table. Unit: days. By default, this parameter is left empty, which indicates that the table is permanently stored.
    std::shared_ptr<int32_t> lifeCycle_ = nullptr;
    // The storage location of the external table.
    std::shared_ptr<string> location_ = nullptr;
    // The ID of the logical level.
    std::shared_ptr<int64_t> logicalLevelId_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // The ID of the physical level.
    std::shared_ptr<int64_t> physicsLevelId_ = nullptr;
    // The DataWorks workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The schema information of the table. You need to enter the schema information of the table if you enable the table schema in MaxCompute.
    std::shared_ptr<string> schema_ = nullptr;
    // The name of the table.
    // 
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
    // The list of themes.
    std::shared_ptr<vector<CreateTableRequestThemes>> themes_ = nullptr;
    // Specifies whether the table or workspace is visible. Valid values:
    // 
    // *   0: Both the table and workspace are invisible.
    // *   1: Both the table and workspace are visible.
    // *   2: Only the workspace is visible.
    std::shared_ptr<int32_t> visibility_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
