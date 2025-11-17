// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASETINFORESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASETINFORESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDatasetInfoResponseBodyResultCubeTableList.hpp>
#include <alibabacloud/models/QueryDatasetInfoResponseBodyResultDimensionList.hpp>
#include <alibabacloud/models/QueryDatasetInfoResponseBodyResultDirectory.hpp>
#include <alibabacloud/models/QueryDatasetInfoResponseBodyResultMeasureList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDatasetInfoResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDatasetInfoResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CubeTableList, cubeTableList_);
      DARABONBA_PTR_TO_JSON(CustimzeSql, custimzeSql_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(DimensionList, dimensionList_);
      DARABONBA_PTR_TO_JSON(Directory, directory_);
      DARABONBA_PTR_TO_JSON(DsId, dsId_);
      DARABONBA_PTR_TO_JSON(DsName, dsName_);
      DARABONBA_PTR_TO_JSON(DsType, dsType_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModify, gmtModify_);
      DARABONBA_PTR_TO_JSON(MeasureList, measureList_);
      DARABONBA_PTR_TO_JSON(OpenOfflineAcceleration, openOfflineAcceleration_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(RowLevel, rowLevel_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDatasetInfoResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CubeTableList, cubeTableList_);
      DARABONBA_PTR_FROM_JSON(CustimzeSql, custimzeSql_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(DimensionList, dimensionList_);
      DARABONBA_PTR_FROM_JSON(Directory, directory_);
      DARABONBA_PTR_FROM_JSON(DsId, dsId_);
      DARABONBA_PTR_FROM_JSON(DsName, dsName_);
      DARABONBA_PTR_FROM_JSON(DsType, dsType_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModify, gmtModify_);
      DARABONBA_PTR_FROM_JSON(MeasureList, measureList_);
      DARABONBA_PTR_FROM_JSON(OpenOfflineAcceleration, openOfflineAcceleration_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(RowLevel, rowLevel_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    QueryDatasetInfoResponseBodyResult() = default ;
    QueryDatasetInfoResponseBodyResult(const QueryDatasetInfoResponseBodyResult &) = default ;
    QueryDatasetInfoResponseBodyResult(QueryDatasetInfoResponseBodyResult &&) = default ;
    QueryDatasetInfoResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDatasetInfoResponseBodyResult() = default ;
    QueryDatasetInfoResponseBodyResult& operator=(const QueryDatasetInfoResponseBodyResult &) = default ;
    QueryDatasetInfoResponseBodyResult& operator=(QueryDatasetInfoResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cubeTableList_ == nullptr
        && return this->custimzeSql_ == nullptr && return this->datasetId_ == nullptr && return this->datasetName_ == nullptr && return this->dimensionList_ == nullptr && return this->directory_ == nullptr
        && return this->dsId_ == nullptr && return this->dsName_ == nullptr && return this->dsType_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModify_ == nullptr
        && return this->measureList_ == nullptr && return this->openOfflineAcceleration_ == nullptr && return this->ownerId_ == nullptr && return this->ownerName_ == nullptr && return this->rowLevel_ == nullptr
        && return this->workspaceId_ == nullptr && return this->workspaceName_ == nullptr; };
    // cubeTableList Field Functions 
    bool hasCubeTableList() const { return this->cubeTableList_ != nullptr;};
    void deleteCubeTableList() { this->cubeTableList_ = nullptr;};
    inline const vector<Models::QueryDatasetInfoResponseBodyResultCubeTableList> & cubeTableList() const { DARABONBA_PTR_GET_CONST(cubeTableList_, vector<Models::QueryDatasetInfoResponseBodyResultCubeTableList>) };
    inline vector<Models::QueryDatasetInfoResponseBodyResultCubeTableList> cubeTableList() { DARABONBA_PTR_GET(cubeTableList_, vector<Models::QueryDatasetInfoResponseBodyResultCubeTableList>) };
    inline QueryDatasetInfoResponseBodyResult& setCubeTableList(const vector<Models::QueryDatasetInfoResponseBodyResultCubeTableList> & cubeTableList) { DARABONBA_PTR_SET_VALUE(cubeTableList_, cubeTableList) };
    inline QueryDatasetInfoResponseBodyResult& setCubeTableList(vector<Models::QueryDatasetInfoResponseBodyResultCubeTableList> && cubeTableList) { DARABONBA_PTR_SET_RVALUE(cubeTableList_, cubeTableList) };


    // custimzeSql Field Functions 
    bool hasCustimzeSql() const { return this->custimzeSql_ != nullptr;};
    void deleteCustimzeSql() { this->custimzeSql_ = nullptr;};
    inline bool custimzeSql() const { DARABONBA_PTR_GET_DEFAULT(custimzeSql_, false) };
    inline QueryDatasetInfoResponseBodyResult& setCustimzeSql(bool custimzeSql) { DARABONBA_PTR_SET_VALUE(custimzeSql_, custimzeSql) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline QueryDatasetInfoResponseBodyResult& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline QueryDatasetInfoResponseBodyResult& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // dimensionList Field Functions 
    bool hasDimensionList() const { return this->dimensionList_ != nullptr;};
    void deleteDimensionList() { this->dimensionList_ = nullptr;};
    inline const vector<Models::QueryDatasetInfoResponseBodyResultDimensionList> & dimensionList() const { DARABONBA_PTR_GET_CONST(dimensionList_, vector<Models::QueryDatasetInfoResponseBodyResultDimensionList>) };
    inline vector<Models::QueryDatasetInfoResponseBodyResultDimensionList> dimensionList() { DARABONBA_PTR_GET(dimensionList_, vector<Models::QueryDatasetInfoResponseBodyResultDimensionList>) };
    inline QueryDatasetInfoResponseBodyResult& setDimensionList(const vector<Models::QueryDatasetInfoResponseBodyResultDimensionList> & dimensionList) { DARABONBA_PTR_SET_VALUE(dimensionList_, dimensionList) };
    inline QueryDatasetInfoResponseBodyResult& setDimensionList(vector<Models::QueryDatasetInfoResponseBodyResultDimensionList> && dimensionList) { DARABONBA_PTR_SET_RVALUE(dimensionList_, dimensionList) };


    // directory Field Functions 
    bool hasDirectory() const { return this->directory_ != nullptr;};
    void deleteDirectory() { this->directory_ = nullptr;};
    inline const Models::QueryDatasetInfoResponseBodyResultDirectory & directory() const { DARABONBA_PTR_GET_CONST(directory_, Models::QueryDatasetInfoResponseBodyResultDirectory) };
    inline Models::QueryDatasetInfoResponseBodyResultDirectory directory() { DARABONBA_PTR_GET(directory_, Models::QueryDatasetInfoResponseBodyResultDirectory) };
    inline QueryDatasetInfoResponseBodyResult& setDirectory(const Models::QueryDatasetInfoResponseBodyResultDirectory & directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };
    inline QueryDatasetInfoResponseBodyResult& setDirectory(Models::QueryDatasetInfoResponseBodyResultDirectory && directory) { DARABONBA_PTR_SET_RVALUE(directory_, directory) };


    // dsId Field Functions 
    bool hasDsId() const { return this->dsId_ != nullptr;};
    void deleteDsId() { this->dsId_ = nullptr;};
    inline string dsId() const { DARABONBA_PTR_GET_DEFAULT(dsId_, "") };
    inline QueryDatasetInfoResponseBodyResult& setDsId(string dsId) { DARABONBA_PTR_SET_VALUE(dsId_, dsId) };


    // dsName Field Functions 
    bool hasDsName() const { return this->dsName_ != nullptr;};
    void deleteDsName() { this->dsName_ = nullptr;};
    inline string dsName() const { DARABONBA_PTR_GET_DEFAULT(dsName_, "") };
    inline QueryDatasetInfoResponseBodyResult& setDsName(string dsName) { DARABONBA_PTR_SET_VALUE(dsName_, dsName) };


    // dsType Field Functions 
    bool hasDsType() const { return this->dsType_ != nullptr;};
    void deleteDsType() { this->dsType_ = nullptr;};
    inline string dsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
    inline QueryDatasetInfoResponseBodyResult& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QueryDatasetInfoResponseBodyResult& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModify Field Functions 
    bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
    void deleteGmtModify() { this->gmtModify_ = nullptr;};
    inline string gmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
    inline QueryDatasetInfoResponseBodyResult& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


    // measureList Field Functions 
    bool hasMeasureList() const { return this->measureList_ != nullptr;};
    void deleteMeasureList() { this->measureList_ = nullptr;};
    inline const vector<Models::QueryDatasetInfoResponseBodyResultMeasureList> & measureList() const { DARABONBA_PTR_GET_CONST(measureList_, vector<Models::QueryDatasetInfoResponseBodyResultMeasureList>) };
    inline vector<Models::QueryDatasetInfoResponseBodyResultMeasureList> measureList() { DARABONBA_PTR_GET(measureList_, vector<Models::QueryDatasetInfoResponseBodyResultMeasureList>) };
    inline QueryDatasetInfoResponseBodyResult& setMeasureList(const vector<Models::QueryDatasetInfoResponseBodyResultMeasureList> & measureList) { DARABONBA_PTR_SET_VALUE(measureList_, measureList) };
    inline QueryDatasetInfoResponseBodyResult& setMeasureList(vector<Models::QueryDatasetInfoResponseBodyResultMeasureList> && measureList) { DARABONBA_PTR_SET_RVALUE(measureList_, measureList) };


    // openOfflineAcceleration Field Functions 
    bool hasOpenOfflineAcceleration() const { return this->openOfflineAcceleration_ != nullptr;};
    void deleteOpenOfflineAcceleration() { this->openOfflineAcceleration_ = nullptr;};
    inline bool openOfflineAcceleration() const { DARABONBA_PTR_GET_DEFAULT(openOfflineAcceleration_, false) };
    inline QueryDatasetInfoResponseBodyResult& setOpenOfflineAcceleration(bool openOfflineAcceleration) { DARABONBA_PTR_SET_VALUE(openOfflineAcceleration_, openOfflineAcceleration) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline QueryDatasetInfoResponseBodyResult& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline QueryDatasetInfoResponseBodyResult& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // rowLevel Field Functions 
    bool hasRowLevel() const { return this->rowLevel_ != nullptr;};
    void deleteRowLevel() { this->rowLevel_ = nullptr;};
    inline bool rowLevel() const { DARABONBA_PTR_GET_DEFAULT(rowLevel_, false) };
    inline QueryDatasetInfoResponseBodyResult& setRowLevel(bool rowLevel) { DARABONBA_PTR_SET_VALUE(rowLevel_, rowLevel) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryDatasetInfoResponseBodyResult& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline QueryDatasetInfoResponseBodyResult& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // The unique ID of the dataset.
    std::shared_ptr<vector<Models::QueryDatasetInfoResponseBodyResultCubeTableList>> cubeTableList_ = nullptr;
    // The unique ID of the workspace to which the dataset belongs.
    std::shared_ptr<bool> custimzeSql_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   mysql
    // *   odps
    // *   oracle
    // *   ... Data source types supported by Quick BI such as
    std::shared_ptr<string> datasetId_ = nullptr;
    // The user ID of the dataset owner in the Quick BI.
    std::shared_ptr<string> datasetName_ = nullptr;
    // A list of all dimensions in the dataset.
    std::shared_ptr<vector<Models::QueryDatasetInfoResponseBodyResultDimensionList>> dimensionList_ = nullptr;
    // The unique ID of the metric.
    std::shared_ptr<Models::QueryDatasetInfoResponseBodyResultDirectory> directory_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> dsId_ = nullptr;
    // The time when the dataset was last modified.
    std::shared_ptr<string> dsName_ = nullptr;
    // The point in time when the training dataset was created.
    std::shared_ptr<string> dsType_ = nullptr;
    // Indicates whether to customize SQL statements. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The information about the dataset.
    std::shared_ptr<string> gmtModify_ = nullptr;
    // A list of all measures for the dataset.
    std::shared_ptr<vector<Models::QueryDatasetInfoResponseBodyResultMeasureList>> measureList_ = nullptr;
    // Whether to enable extraction acceleration. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> openOfflineAcceleration_ = nullptr;
    // Test Space
    std::shared_ptr<string> ownerId_ = nullptr;
    // The unique ID of the data source.
    std::shared_ptr<string> ownerName_ = nullptr;
    // The name of the training dataset.
    std::shared_ptr<bool> rowLevel_ = nullptr;
    // Whether row-level permissions are enabled. Valid values:
    // 
    // *   true: The VIP Netty channel is enabled.
    // *   false: The VIP Netty channel is disabled.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // Big Baby
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
