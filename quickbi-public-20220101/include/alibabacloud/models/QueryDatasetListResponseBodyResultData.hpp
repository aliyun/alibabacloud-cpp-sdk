// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASETLISTRESPONSEBODYRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASETLISTRESPONSEBODYRESULTDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDatasetListResponseBodyResultDataDataSource.hpp>
#include <alibabacloud/models/QueryDatasetListResponseBodyResultDataDirectory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDatasetListResponseBodyResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDatasetListResponseBodyResultData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Directory, directory_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(OpenOfflineAcceleration, openOfflineAcceleration_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(RowLevel, rowLevel_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDatasetListResponseBodyResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Directory, directory_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(OpenOfflineAcceleration, openOfflineAcceleration_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(RowLevel, rowLevel_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    QueryDatasetListResponseBodyResultData() = default ;
    QueryDatasetListResponseBodyResultData(const QueryDatasetListResponseBodyResultData &) = default ;
    QueryDatasetListResponseBodyResultData(QueryDatasetListResponseBodyResultData &&) = default ;
    QueryDatasetListResponseBodyResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDatasetListResponseBodyResultData() = default ;
    QueryDatasetListResponseBodyResultData& operator=(const QueryDatasetListResponseBodyResultData &) = default ;
    QueryDatasetListResponseBodyResultData& operator=(QueryDatasetListResponseBodyResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->dataSource_ != nullptr && this->datasetId_ != nullptr && this->datasetName_ != nullptr && this->description_ != nullptr && this->directory_ != nullptr
        && this->modifyTime_ != nullptr && this->openOfflineAcceleration_ != nullptr && this->ownerId_ != nullptr && this->ownerName_ != nullptr && this->rowLevel_ != nullptr
        && this->workspaceId_ != nullptr && this->workspaceName_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryDatasetListResponseBodyResultData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const Models::QueryDatasetListResponseBodyResultDataDataSource & dataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, Models::QueryDatasetListResponseBodyResultDataDataSource) };
    inline Models::QueryDatasetListResponseBodyResultDataDataSource dataSource() { DARABONBA_PTR_GET(dataSource_, Models::QueryDatasetListResponseBodyResultDataDataSource) };
    inline QueryDatasetListResponseBodyResultData& setDataSource(const Models::QueryDatasetListResponseBodyResultDataDataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline QueryDatasetListResponseBodyResultData& setDataSource(Models::QueryDatasetListResponseBodyResultDataDataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline QueryDatasetListResponseBodyResultData& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline QueryDatasetListResponseBodyResultData& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QueryDatasetListResponseBodyResultData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directory Field Functions 
    bool hasDirectory() const { return this->directory_ != nullptr;};
    void deleteDirectory() { this->directory_ = nullptr;};
    inline const Models::QueryDatasetListResponseBodyResultDataDirectory & directory() const { DARABONBA_PTR_GET_CONST(directory_, Models::QueryDatasetListResponseBodyResultDataDirectory) };
    inline Models::QueryDatasetListResponseBodyResultDataDirectory directory() { DARABONBA_PTR_GET(directory_, Models::QueryDatasetListResponseBodyResultDataDirectory) };
    inline QueryDatasetListResponseBodyResultData& setDirectory(const Models::QueryDatasetListResponseBodyResultDataDirectory & directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };
    inline QueryDatasetListResponseBodyResultData& setDirectory(Models::QueryDatasetListResponseBodyResultDataDirectory && directory) { DARABONBA_PTR_SET_RVALUE(directory_, directory) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline QueryDatasetListResponseBodyResultData& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // openOfflineAcceleration Field Functions 
    bool hasOpenOfflineAcceleration() const { return this->openOfflineAcceleration_ != nullptr;};
    void deleteOpenOfflineAcceleration() { this->openOfflineAcceleration_ = nullptr;};
    inline bool openOfflineAcceleration() const { DARABONBA_PTR_GET_DEFAULT(openOfflineAcceleration_, false) };
    inline QueryDatasetListResponseBodyResultData& setOpenOfflineAcceleration(bool openOfflineAcceleration) { DARABONBA_PTR_SET_VALUE(openOfflineAcceleration_, openOfflineAcceleration) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline QueryDatasetListResponseBodyResultData& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline QueryDatasetListResponseBodyResultData& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // rowLevel Field Functions 
    bool hasRowLevel() const { return this->rowLevel_ != nullptr;};
    void deleteRowLevel() { this->rowLevel_ = nullptr;};
    inline bool rowLevel() const { DARABONBA_PTR_GET_DEFAULT(rowLevel_, false) };
    inline QueryDatasetListResponseBodyResultData& setRowLevel(bool rowLevel) { DARABONBA_PTR_SET_VALUE(rowLevel_, rowLevel) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryDatasetListResponseBodyResultData& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline QueryDatasetListResponseBodyResultData& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // The details of the dataset list.
    std::shared_ptr<string> createTime_ = nullptr;
    // Test Space
    std::shared_ptr<Models::QueryDatasetListResponseBodyResultDataDataSource> dataSource_ = nullptr;
    // The name of the workspace.
    std::shared_ptr<string> datasetId_ = nullptr;
    // Tom
    std::shared_ptr<string> datasetName_ = nullptr;
    // The number of rows per page set when the interface is requested.
    std::shared_ptr<string> description_ = nullptr;
    // The information about the data source to which the dataset belongs.
    std::shared_ptr<Models::QueryDatasetListResponseBodyResultDataDirectory> directory_ = nullptr;
    // The nickname of the dataset owner.
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<bool> openOfflineAcceleration_ = nullptr;
    // The creation time.
    std::shared_ptr<string> ownerId_ = nullptr;
    // Whether to enable row-level permissions. Valid values:
    // 
    // *   true: The VIP Netty channel is enabled.
    // *   false: The incremental log backup feature is disabled.
    std::shared_ptr<string> ownerName_ = nullptr;
    // The total number of pages returned.
    std::shared_ptr<bool> rowLevel_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // The description of the dataset.
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
