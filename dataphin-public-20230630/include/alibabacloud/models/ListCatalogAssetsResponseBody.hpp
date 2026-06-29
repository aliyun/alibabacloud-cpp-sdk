// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATALOGASSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCATALOGASSETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListCatalogAssetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCatalogAssetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCatalogAssetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCatalogAssetsResponseBody() = default ;
    ListCatalogAssetsResponseBody(const ListCatalogAssetsResponseBody &) = default ;
    ListCatalogAssetsResponseBody(ListCatalogAssetsResponseBody &&) = default ;
    ListCatalogAssetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCatalogAssetsResponseBody() = default ;
    ListCatalogAssetsResponseBody& operator=(const ListCatalogAssetsResponseBody &) = default ;
    ListCatalogAssetsResponseBody& operator=(ListCatalogAssetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AssetList, assetList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetList, assetList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AssetList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AssetList& obj) { 
          DARABONBA_PTR_TO_JSON(ApiCallMode, apiCallMode_);
          DARABONBA_PTR_TO_JSON(ApiGroupName, apiGroupName_);
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiRequestMethod, apiRequestMethod_);
          DARABONBA_PTR_TO_JSON(AssetDescription, assetDescription_);
          DARABONBA_PTR_TO_JSON(AssetDisplayName, assetDisplayName_);
          DARABONBA_PTR_TO_JSON(AssetFrom, assetFrom_);
          DARABONBA_PTR_TO_JSON(AssetFullName, assetFullName_);
          DARABONBA_PTR_TO_JSON(AssetName, assetName_);
          DARABONBA_PTR_TO_JSON(AssetTags, assetTags_);
          DARABONBA_PTR_TO_JSON(AssetType, assetType_);
          DARABONBA_PTR_TO_JSON(BiCatalog, biCatalog_);
          DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
          DARABONBA_PTR_TO_JSON(BizUnitName, bizUnitName_);
          DARABONBA_PTR_TO_JSON(ChartCount, chartCount_);
          DARABONBA_PTR_TO_JSON(DataCellId, dataCellId_);
          DARABONBA_PTR_TO_JSON(DataCellName, dataCellName_);
          DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
          DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
          DARABONBA_PTR_TO_JSON(Directories, directories_);
          DARABONBA_PTR_TO_JSON(Granularity, granularity_);
          DARABONBA_PTR_TO_JSON(Guid, guid_);
          DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
          DARABONBA_PTR_TO_JSON(MaxSecurityLevel, maxSecurityLevel_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(SubType, subType_);
          DARABONBA_PTR_TO_JSON(SumTableGuid, sumTableGuid_);
          DARABONBA_PTR_TO_JSON(SumTableName, sumTableName_);
        };
        friend void from_json(const Darabonba::Json& j, AssetList& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiCallMode, apiCallMode_);
          DARABONBA_PTR_FROM_JSON(ApiGroupName, apiGroupName_);
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiRequestMethod, apiRequestMethod_);
          DARABONBA_PTR_FROM_JSON(AssetDescription, assetDescription_);
          DARABONBA_PTR_FROM_JSON(AssetDisplayName, assetDisplayName_);
          DARABONBA_PTR_FROM_JSON(AssetFrom, assetFrom_);
          DARABONBA_PTR_FROM_JSON(AssetFullName, assetFullName_);
          DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
          DARABONBA_PTR_FROM_JSON(AssetTags, assetTags_);
          DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
          DARABONBA_PTR_FROM_JSON(BiCatalog, biCatalog_);
          DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
          DARABONBA_PTR_FROM_JSON(BizUnitName, bizUnitName_);
          DARABONBA_PTR_FROM_JSON(ChartCount, chartCount_);
          DARABONBA_PTR_FROM_JSON(DataCellId, dataCellId_);
          DARABONBA_PTR_FROM_JSON(DataCellName, dataCellName_);
          DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
          DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
          DARABONBA_PTR_FROM_JSON(Directories, directories_);
          DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
          DARABONBA_PTR_FROM_JSON(Guid, guid_);
          DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
          DARABONBA_PTR_FROM_JSON(MaxSecurityLevel, maxSecurityLevel_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(SubType, subType_);
          DARABONBA_PTR_FROM_JSON(SumTableGuid, sumTableGuid_);
          DARABONBA_PTR_FROM_JSON(SumTableName, sumTableName_);
        };
        AssetList() = default ;
        AssetList(const AssetList &) = default ;
        AssetList(AssetList &&) = default ;
        AssetList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AssetList() = default ;
        AssetList& operator=(const AssetList &) = default ;
        AssetList& operator=(AssetList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Directories : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Directories& obj) { 
            DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
            DARABONBA_PTR_TO_JSON(DirectoryName, directoryName_);
            DARABONBA_PTR_TO_JSON(TopicId, topicId_);
            DARABONBA_PTR_TO_JSON(TopicName, topicName_);
          };
          friend void from_json(const Darabonba::Json& j, Directories& obj) { 
            DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
            DARABONBA_PTR_FROM_JSON(DirectoryName, directoryName_);
            DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
            DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
          };
          Directories() = default ;
          Directories(const Directories &) = default ;
          Directories(Directories &&) = default ;
          Directories(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Directories() = default ;
          Directories& operator=(const Directories &) = default ;
          Directories& operator=(Directories &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->directoryName_ == nullptr && this->topicId_ == nullptr && this->topicName_ == nullptr; };
          // directoryId Field Functions 
          bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
          void deleteDirectoryId() { this->directoryId_ = nullptr;};
          inline int64_t getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, 0L) };
          inline Directories& setDirectoryId(int64_t directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


          // directoryName Field Functions 
          bool hasDirectoryName() const { return this->directoryName_ != nullptr;};
          void deleteDirectoryName() { this->directoryName_ = nullptr;};
          inline string getDirectoryName() const { DARABONBA_PTR_GET_DEFAULT(directoryName_, "") };
          inline Directories& setDirectoryName(string directoryName) { DARABONBA_PTR_SET_VALUE(directoryName_, directoryName) };


          // topicId Field Functions 
          bool hasTopicId() const { return this->topicId_ != nullptr;};
          void deleteTopicId() { this->topicId_ = nullptr;};
          inline int64_t getTopicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
          inline Directories& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


          // topicName Field Functions 
          bool hasTopicName() const { return this->topicName_ != nullptr;};
          void deleteTopicName() { this->topicName_ = nullptr;};
          inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
          inline Directories& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


        protected:
          // The directory ID.
          shared_ptr<int64_t> directoryId_ {};
          // The directory name.
          shared_ptr<string> directoryName_ {};
          // The topic ID.
          shared_ptr<int64_t> topicId_ {};
          // The topic name.
          shared_ptr<string> topicName_ {};
        };

        virtual bool empty() const override { return this->apiCallMode_ == nullptr
        && this->apiGroupName_ == nullptr && this->apiId_ == nullptr && this->apiRequestMethod_ == nullptr && this->assetDescription_ == nullptr && this->assetDisplayName_ == nullptr
        && this->assetFrom_ == nullptr && this->assetFullName_ == nullptr && this->assetName_ == nullptr && this->assetTags_ == nullptr && this->assetType_ == nullptr
        && this->biCatalog_ == nullptr && this->bizUnitId_ == nullptr && this->bizUnitName_ == nullptr && this->chartCount_ == nullptr && this->dataCellId_ == nullptr
        && this->dataCellName_ == nullptr && this->dataSourceName_ == nullptr && this->datasourceId_ == nullptr && this->directories_ == nullptr && this->granularity_ == nullptr
        && this->guid_ == nullptr && this->isDeleted_ == nullptr && this->maxSecurityLevel_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr
        && this->subType_ == nullptr && this->sumTableGuid_ == nullptr && this->sumTableName_ == nullptr; };
        // apiCallMode Field Functions 
        bool hasApiCallMode() const { return this->apiCallMode_ != nullptr;};
        void deleteApiCallMode() { this->apiCallMode_ = nullptr;};
        inline string getApiCallMode() const { DARABONBA_PTR_GET_DEFAULT(apiCallMode_, "") };
        inline AssetList& setApiCallMode(string apiCallMode) { DARABONBA_PTR_SET_VALUE(apiCallMode_, apiCallMode) };


        // apiGroupName Field Functions 
        bool hasApiGroupName() const { return this->apiGroupName_ != nullptr;};
        void deleteApiGroupName() { this->apiGroupName_ = nullptr;};
        inline string getApiGroupName() const { DARABONBA_PTR_GET_DEFAULT(apiGroupName_, "") };
        inline AssetList& setApiGroupName(string apiGroupName) { DARABONBA_PTR_SET_VALUE(apiGroupName_, apiGroupName) };


        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline int64_t getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
        inline AssetList& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiRequestMethod Field Functions 
        bool hasApiRequestMethod() const { return this->apiRequestMethod_ != nullptr;};
        void deleteApiRequestMethod() { this->apiRequestMethod_ = nullptr;};
        inline string getApiRequestMethod() const { DARABONBA_PTR_GET_DEFAULT(apiRequestMethod_, "") };
        inline AssetList& setApiRequestMethod(string apiRequestMethod) { DARABONBA_PTR_SET_VALUE(apiRequestMethod_, apiRequestMethod) };


        // assetDescription Field Functions 
        bool hasAssetDescription() const { return this->assetDescription_ != nullptr;};
        void deleteAssetDescription() { this->assetDescription_ = nullptr;};
        inline string getAssetDescription() const { DARABONBA_PTR_GET_DEFAULT(assetDescription_, "") };
        inline AssetList& setAssetDescription(string assetDescription) { DARABONBA_PTR_SET_VALUE(assetDescription_, assetDescription) };


        // assetDisplayName Field Functions 
        bool hasAssetDisplayName() const { return this->assetDisplayName_ != nullptr;};
        void deleteAssetDisplayName() { this->assetDisplayName_ = nullptr;};
        inline string getAssetDisplayName() const { DARABONBA_PTR_GET_DEFAULT(assetDisplayName_, "") };
        inline AssetList& setAssetDisplayName(string assetDisplayName) { DARABONBA_PTR_SET_VALUE(assetDisplayName_, assetDisplayName) };


        // assetFrom Field Functions 
        bool hasAssetFrom() const { return this->assetFrom_ != nullptr;};
        void deleteAssetFrom() { this->assetFrom_ = nullptr;};
        inline string getAssetFrom() const { DARABONBA_PTR_GET_DEFAULT(assetFrom_, "") };
        inline AssetList& setAssetFrom(string assetFrom) { DARABONBA_PTR_SET_VALUE(assetFrom_, assetFrom) };


        // assetFullName Field Functions 
        bool hasAssetFullName() const { return this->assetFullName_ != nullptr;};
        void deleteAssetFullName() { this->assetFullName_ = nullptr;};
        inline string getAssetFullName() const { DARABONBA_PTR_GET_DEFAULT(assetFullName_, "") };
        inline AssetList& setAssetFullName(string assetFullName) { DARABONBA_PTR_SET_VALUE(assetFullName_, assetFullName) };


        // assetName Field Functions 
        bool hasAssetName() const { return this->assetName_ != nullptr;};
        void deleteAssetName() { this->assetName_ = nullptr;};
        inline string getAssetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
        inline AssetList& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


        // assetTags Field Functions 
        bool hasAssetTags() const { return this->assetTags_ != nullptr;};
        void deleteAssetTags() { this->assetTags_ = nullptr;};
        inline const vector<string> & getAssetTags() const { DARABONBA_PTR_GET_CONST(assetTags_, vector<string>) };
        inline vector<string> getAssetTags() { DARABONBA_PTR_GET(assetTags_, vector<string>) };
        inline AssetList& setAssetTags(const vector<string> & assetTags) { DARABONBA_PTR_SET_VALUE(assetTags_, assetTags) };
        inline AssetList& setAssetTags(vector<string> && assetTags) { DARABONBA_PTR_SET_RVALUE(assetTags_, assetTags) };


        // assetType Field Functions 
        bool hasAssetType() const { return this->assetType_ != nullptr;};
        void deleteAssetType() { this->assetType_ = nullptr;};
        inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
        inline AssetList& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


        // biCatalog Field Functions 
        bool hasBiCatalog() const { return this->biCatalog_ != nullptr;};
        void deleteBiCatalog() { this->biCatalog_ = nullptr;};
        inline string getBiCatalog() const { DARABONBA_PTR_GET_DEFAULT(biCatalog_, "") };
        inline AssetList& setBiCatalog(string biCatalog) { DARABONBA_PTR_SET_VALUE(biCatalog_, biCatalog) };


        // bizUnitId Field Functions 
        bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
        void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
        inline int64_t getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
        inline AssetList& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


        // bizUnitName Field Functions 
        bool hasBizUnitName() const { return this->bizUnitName_ != nullptr;};
        void deleteBizUnitName() { this->bizUnitName_ = nullptr;};
        inline string getBizUnitName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitName_, "") };
        inline AssetList& setBizUnitName(string bizUnitName) { DARABONBA_PTR_SET_VALUE(bizUnitName_, bizUnitName) };


        // chartCount Field Functions 
        bool hasChartCount() const { return this->chartCount_ != nullptr;};
        void deleteChartCount() { this->chartCount_ = nullptr;};
        inline int64_t getChartCount() const { DARABONBA_PTR_GET_DEFAULT(chartCount_, 0L) };
        inline AssetList& setChartCount(int64_t chartCount) { DARABONBA_PTR_SET_VALUE(chartCount_, chartCount) };


        // dataCellId Field Functions 
        bool hasDataCellId() const { return this->dataCellId_ != nullptr;};
        void deleteDataCellId() { this->dataCellId_ = nullptr;};
        inline string getDataCellId() const { DARABONBA_PTR_GET_DEFAULT(dataCellId_, "") };
        inline AssetList& setDataCellId(string dataCellId) { DARABONBA_PTR_SET_VALUE(dataCellId_, dataCellId) };


        // dataCellName Field Functions 
        bool hasDataCellName() const { return this->dataCellName_ != nullptr;};
        void deleteDataCellName() { this->dataCellName_ = nullptr;};
        inline string getDataCellName() const { DARABONBA_PTR_GET_DEFAULT(dataCellName_, "") };
        inline AssetList& setDataCellName(string dataCellName) { DARABONBA_PTR_SET_VALUE(dataCellName_, dataCellName) };


        // dataSourceName Field Functions 
        bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
        void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
        inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
        inline AssetList& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


        // datasourceId Field Functions 
        bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
        void deleteDatasourceId() { this->datasourceId_ = nullptr;};
        inline int64_t getDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, 0L) };
        inline AssetList& setDatasourceId(int64_t datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


        // directories Field Functions 
        bool hasDirectories() const { return this->directories_ != nullptr;};
        void deleteDirectories() { this->directories_ = nullptr;};
        inline const vector<AssetList::Directories> & getDirectories() const { DARABONBA_PTR_GET_CONST(directories_, vector<AssetList::Directories>) };
        inline vector<AssetList::Directories> getDirectories() { DARABONBA_PTR_GET(directories_, vector<AssetList::Directories>) };
        inline AssetList& setDirectories(const vector<AssetList::Directories> & directories) { DARABONBA_PTR_SET_VALUE(directories_, directories) };
        inline AssetList& setDirectories(vector<AssetList::Directories> && directories) { DARABONBA_PTR_SET_RVALUE(directories_, directories) };


        // granularity Field Functions 
        bool hasGranularity() const { return this->granularity_ != nullptr;};
        void deleteGranularity() { this->granularity_ = nullptr;};
        inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
        inline AssetList& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


        // guid Field Functions 
        bool hasGuid() const { return this->guid_ != nullptr;};
        void deleteGuid() { this->guid_ = nullptr;};
        inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
        inline AssetList& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


        // isDeleted Field Functions 
        bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
        void deleteIsDeleted() { this->isDeleted_ = nullptr;};
        inline bool getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, false) };
        inline AssetList& setIsDeleted(bool isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


        // maxSecurityLevel Field Functions 
        bool hasMaxSecurityLevel() const { return this->maxSecurityLevel_ != nullptr;};
        void deleteMaxSecurityLevel() { this->maxSecurityLevel_ = nullptr;};
        inline string getMaxSecurityLevel() const { DARABONBA_PTR_GET_DEFAULT(maxSecurityLevel_, "") };
        inline AssetList& setMaxSecurityLevel(string maxSecurityLevel) { DARABONBA_PTR_SET_VALUE(maxSecurityLevel_, maxSecurityLevel) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline AssetList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline AssetList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // subType Field Functions 
        bool hasSubType() const { return this->subType_ != nullptr;};
        void deleteSubType() { this->subType_ = nullptr;};
        inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
        inline AssetList& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


        // sumTableGuid Field Functions 
        bool hasSumTableGuid() const { return this->sumTableGuid_ != nullptr;};
        void deleteSumTableGuid() { this->sumTableGuid_ = nullptr;};
        inline string getSumTableGuid() const { DARABONBA_PTR_GET_DEFAULT(sumTableGuid_, "") };
        inline AssetList& setSumTableGuid(string sumTableGuid) { DARABONBA_PTR_SET_VALUE(sumTableGuid_, sumTableGuid) };


        // sumTableName Field Functions 
        bool hasSumTableName() const { return this->sumTableName_ != nullptr;};
        void deleteSumTableName() { this->sumTableName_ = nullptr;};
        inline string getSumTableName() const { DARABONBA_PTR_GET_DEFAULT(sumTableName_, "") };
        inline AssetList& setSumTableName(string sumTableName) { DARABONBA_PTR_SET_VALUE(sumTableName_, sumTableName) };


      protected:
        // The API call mode. Returned when the asset type is API. Valid values:
        // - 1: synchronous call.
        // - 2: asynchronous call.
        shared_ptr<string> apiCallMode_ {};
        // The API group name. Returned when the asset type is API.
        shared_ptr<string> apiGroupName_ {};
        // The API ID. Returned when the asset type is API.
        shared_ptr<int64_t> apiId_ {};
        // The API operation type. Returned when the asset type is API. Valid values:
        // - 1: Get.
        // - 2: List.
        // - 3: Create.
        // - 4: Update.
        // - 5: Delete.
        shared_ptr<string> apiRequestMethod_ {};
        // The asset description.
        shared_ptr<string> assetDescription_ {};
        // The asset display name. Returned when the asset type is TABLE, INDEX, or BIZ_INDEX.
        shared_ptr<string> assetDisplayName_ {};
        // The asset source. For TABLE (physical table), the value is in the format "Dataphin-workspace type-project Chinese name (project English name)". For TABLE (logical table), the value is in the format "Dataphin-workspace type-data domain Chinese name (data domain English name)". For TABLE (data source table), the value is in the format "source system name-data source name-database/schema name". For INDEX (standard modeling metric), the value is the asset source of the associated aggregate table. For INDEX (custom metric), the value is the asset source of the source table. For API, the value is the data service project name. For PAGE, the value is the application system name.
        shared_ptr<string> assetFrom_ {};
        // The asset full name. Returned when the asset type is TABLE or INDEX.
        shared_ptr<string> assetFullName_ {};
        // The asset name.
        shared_ptr<string> assetName_ {};
        // The asset tags.
        shared_ptr<vector<string>> assetTags_ {};
        // The asset type. Valid values: TABLE (table, including views and materialized views), INDEX (technical metric), BIZ_INDEX (business metric), API, and PAGE (dashboard).
        shared_ptr<string> assetType_ {};
        // The BI workspace or directory to which the asset belongs. Returned when the asset type is PAGE (dashboard).
        shared_ptr<string> biCatalog_ {};
        // The ID of the business unit to which the asset belongs. Returned when the asset type is TABLE (logical tables only) or INDEX (technical metrics whose source table is a logical table only).
        shared_ptr<int64_t> bizUnitId_ {};
        // The name of the business unit to which the asset belongs. Returned when the asset type is TABLE (logical tables only) or INDEX (technical metrics whose source table is a logical table only).
        shared_ptr<string> bizUnitName_ {};
        // The total number of charts. Returned when the asset type is PAGE (dashboard).
        shared_ptr<int64_t> chartCount_ {};
        // The ID of the subject domain to which the asset belongs. Returned when the asset type is TABLE (logical tables only) or INDEX (technical metrics whose source table is a logical table only).
        shared_ptr<string> dataCellId_ {};
        // The name of the subject domain to which the asset belongs. Returned when the asset type is TABLE (logical tables only) or INDEX (technical metrics whose source table is a logical table only).
        shared_ptr<string> dataCellName_ {};
        // The name of the data source to which the asset belongs. Returned when the asset type is TABLE (data source tables only) or INDEX (technical metrics whose source table is a data source table only).
        shared_ptr<string> dataSourceName_ {};
        // The ID of the data source to which the asset belongs. Returned when the asset type is TABLE (data source tables only) or INDEX (technical metrics whose source table is a data source table only).
        shared_ptr<int64_t> datasourceId_ {};
        // The directories to which the asset belongs, including topic ID, topic name, directory ID, and directory name.
        shared_ptr<vector<AssetList::Directories>> directories_ {};
        // The statistical granularity name of the technical metric. Returned when the asset type is INDEX.
        shared_ptr<string> granularity_ {};
        // The asset GUID, which serves as the unique identifier of the asset.
        shared_ptr<string> guid_ {};
        // Indicates whether the asset is deleted.
        shared_ptr<bool> isDeleted_ {};
        // The highest sensitivity level. Returned when the asset type is TABLE.
        shared_ptr<string> maxSecurityLevel_ {};
        // The ID of the project to which the asset belongs. Returned when the asset type is TABLE (physical tables only) or INDEX (technical metrics whose source table is a physical table only).
        shared_ptr<int64_t> projectId_ {};
        // The name of the project to which the asset belongs. Returned when the asset type is TABLE (physical tables only) or INDEX (technical metrics whose source table is a physical table only).
        shared_ptr<string> projectName_ {};
        // The subtype. Valid values: DIM_NORMAL (common logical dimension table), DIM_ENUM (enumeration logical dimension table), DIM_VIRTUAL (virtual logical dimension table), SUM_BIZ_UNIT (aggregate logical table), FACT_EVENT (event fact logical table), FACT_SNAPSHOT (snapshot fact logical table), DATASOURCE_TABLE (data source table), PHYSICAL_TABLE (physical table), DATASOURCE_VIEW (view - data source view), PHYSICAL_VIEW (physical view), MATERIALIZED_VIEW (materialized view), BIZ_INDEX (business metric), INDEX (technical metric - standard modeling metric), and CUSTOM_INDEX (technical metric - custom metric).
        shared_ptr<string> subType_ {};
        // The GUID of the aggregate table to which the asset belongs. Returned when the asset type is INDEX.
        shared_ptr<string> sumTableGuid_ {};
        // The name of the aggregate table to which the asset belongs. Returned when the asset type is INDEX.
        shared_ptr<string> sumTableName_ {};
      };

      virtual bool empty() const override { return this->assetList_ == nullptr
        && this->totalCount_ == nullptr; };
      // assetList Field Functions 
      bool hasAssetList() const { return this->assetList_ != nullptr;};
      void deleteAssetList() { this->assetList_ = nullptr;};
      inline const vector<Data::AssetList> & getAssetList() const { DARABONBA_PTR_GET_CONST(assetList_, vector<Data::AssetList>) };
      inline vector<Data::AssetList> getAssetList() { DARABONBA_PTR_GET(assetList_, vector<Data::AssetList>) };
      inline Data& setAssetList(const vector<Data::AssetList> & assetList) { DARABONBA_PTR_SET_VALUE(assetList_, assetList) };
      inline Data& setAssetList(vector<Data::AssetList> && assetList) { DARABONBA_PTR_SET_RVALUE(assetList_, assetList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The asset list.
      shared_ptr<vector<Data::AssetList>> assetList_ {};
      // The total number of records.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCatalogAssetsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCatalogAssetsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCatalogAssetsResponseBody::Data) };
    inline ListCatalogAssetsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCatalogAssetsResponseBody::Data) };
    inline ListCatalogAssetsResponseBody& setData(const ListCatalogAssetsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCatalogAssetsResponseBody& setData(ListCatalogAssetsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListCatalogAssetsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCatalogAssetsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCatalogAssetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCatalogAssetsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The data catalog asset list.
    shared_ptr<ListCatalogAssetsResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The details of the backend response exception.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
