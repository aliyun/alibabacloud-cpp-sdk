// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListDatasetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(DataSourceTypes, dataSourceTypes_);
      DARABONBA_PTR_TO_JSON(DataTypes, dataTypes_);
      DARABONBA_PTR_TO_JSON(DatasetIds, datasetIds_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_PTR_TO_JSON(ShareScope, shareScope_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SourceDatasetId, sourceDatasetId_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceTypes, sourceTypes_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(DataSourceTypes, dataSourceTypes_);
      DARABONBA_PTR_FROM_JSON(DataTypes, dataTypes_);
      DARABONBA_PTR_FROM_JSON(DatasetIds, datasetIds_);
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_PTR_FROM_JSON(ShareScope, shareScope_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SourceDatasetId, sourceDatasetId_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceTypes, sourceTypes_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListDatasetsRequest() = default ;
    ListDatasetsRequest(const ListDatasetsRequest &) = default ;
    ListDatasetsRequest(ListDatasetsRequest &&) = default ;
    ListDatasetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetsRequest() = default ;
    ListDatasetsRequest& operator=(const ListDatasetsRequest &) = default ;
    ListDatasetsRequest& operator=(ListDatasetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->dataSourceTypes_ == nullptr && this->dataTypes_ == nullptr && this->datasetIds_ == nullptr && this->edition_ == nullptr && this->label_ == nullptr
        && this->name_ == nullptr && this->order_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->properties_ == nullptr
        && this->provider_ == nullptr && this->shareScope_ == nullptr && this->sortBy_ == nullptr && this->sourceDatasetId_ == nullptr && this->sourceId_ == nullptr
        && this->sourceTypes_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline ListDatasetsRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // dataSourceTypes Field Functions 
    bool hasDataSourceTypes() const { return this->dataSourceTypes_ != nullptr;};
    void deleteDataSourceTypes() { this->dataSourceTypes_ = nullptr;};
    inline string getDataSourceTypes() const { DARABONBA_PTR_GET_DEFAULT(dataSourceTypes_, "") };
    inline ListDatasetsRequest& setDataSourceTypes(string dataSourceTypes) { DARABONBA_PTR_SET_VALUE(dataSourceTypes_, dataSourceTypes) };


    // dataTypes Field Functions 
    bool hasDataTypes() const { return this->dataTypes_ != nullptr;};
    void deleteDataTypes() { this->dataTypes_ = nullptr;};
    inline string getDataTypes() const { DARABONBA_PTR_GET_DEFAULT(dataTypes_, "") };
    inline ListDatasetsRequest& setDataTypes(string dataTypes) { DARABONBA_PTR_SET_VALUE(dataTypes_, dataTypes) };


    // datasetIds Field Functions 
    bool hasDatasetIds() const { return this->datasetIds_ != nullptr;};
    void deleteDatasetIds() { this->datasetIds_ = nullptr;};
    inline string getDatasetIds() const { DARABONBA_PTR_GET_DEFAULT(datasetIds_, "") };
    inline ListDatasetsRequest& setDatasetIds(string datasetIds) { DARABONBA_PTR_SET_VALUE(datasetIds_, datasetIds) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline ListDatasetsRequest& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ListDatasetsRequest& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDatasetsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListDatasetsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDatasetsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDatasetsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline string getProperties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
    inline ListDatasetsRequest& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ListDatasetsRequest& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // shareScope Field Functions 
    bool hasShareScope() const { return this->shareScope_ != nullptr;};
    void deleteShareScope() { this->shareScope_ = nullptr;};
    inline string getShareScope() const { DARABONBA_PTR_GET_DEFAULT(shareScope_, "") };
    inline ListDatasetsRequest& setShareScope(string shareScope) { DARABONBA_PTR_SET_VALUE(shareScope_, shareScope) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListDatasetsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sourceDatasetId Field Functions 
    bool hasSourceDatasetId() const { return this->sourceDatasetId_ != nullptr;};
    void deleteSourceDatasetId() { this->sourceDatasetId_ = nullptr;};
    inline string getSourceDatasetId() const { DARABONBA_PTR_GET_DEFAULT(sourceDatasetId_, "") };
    inline ListDatasetsRequest& setSourceDatasetId(string sourceDatasetId) { DARABONBA_PTR_SET_VALUE(sourceDatasetId_, sourceDatasetId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ListDatasetsRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceTypes Field Functions 
    bool hasSourceTypes() const { return this->sourceTypes_ != nullptr;};
    void deleteSourceTypes() { this->sourceTypes_ = nullptr;};
    inline string getSourceTypes() const { DARABONBA_PTR_GET_DEFAULT(sourceTypes_, "") };
    inline ListDatasetsRequest& setSourceTypes(string sourceTypes) { DARABONBA_PTR_SET_VALUE(sourceTypes_, sourceTypes) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListDatasetsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Specifies the dataset\\"s visibility.
    // 
    // - `PUBLIC`: The dataset is publicly accessible.
    // 
    // - `PRIVATE`: The dataset is privately accessible.
    shared_ptr<string> accessibility_ {};
    // The data source type. To specify multiple types, separate them with commas (,). Valid values:
    // 
    // - `NAS`: The data source is NAS.
    // 
    // - `OSS`: The data source is OSS.
    shared_ptr<string> dataSourceTypes_ {};
    // The data type of the dataset. To specify multiple data types, separate them with commas (,). Valid values:
    // 
    // - `VIDEO`: video.
    // 
    // - `COMMON`: general.
    // 
    // - `TEXT`: text.
    // 
    // - `PIC`: image.
    // 
    // - `AUDIO`: audio.
    shared_ptr<string> dataTypes_ {};
    // A comma-separated list of dataset IDs.
    shared_ptr<string> datasetIds_ {};
    // The dataset edition. Valid values:
    // 
    // - `BASIC`: Basic edition. Does not support file metadata management.
    // 
    // - `ADVANCED`: Advanced edition. This edition is supported only for OSS datasets. Each version can manage metadata for up to 1 million files.
    // 
    // - `LOGICAL`: Logical edition. This edition is supported only for OSS datasets and is suitable for most use cases. Each version can manage metadata for up to 1 million files. You must use an SDK with this edition.
    shared_ptr<string> edition_ {};
    // A label used to filter datasets. The operation returns datasets whose label key or value contains the specified string.
    shared_ptr<string> label_ {};
    // The dataset name. Fuzzy search is supported.
    shared_ptr<string> name_ {};
    // The sort order for the results, based on the `SortBy` parameter. The default is `ASC`.
    // 
    // - `ASC`: ascending order.
    // 
    // - `DESC`: descending order.
    shared_ptr<string> order_ {};
    // The page number for the paged query. Starts at 1. The default is 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of datasets to return per page. The default is 10.
    shared_ptr<int32_t> pageSize_ {};
    // The dataset properties. To specify multiple properties, separate them with commas (,). Valid values:
    // 
    // - `DIRECTORY`: A folder.
    // 
    // - `FILE`: A file.
    shared_ptr<string> properties_ {};
    // The dataset provider. Set this parameter to `pai` to query public datasets on the PAI platform.
    shared_ptr<string> provider_ {};
    // A filter for shared datasets.
    // 
    // - `TO_ME`: Returns only datasets shared with you.
    // 
    // - `BY_ME`: Returns only datasets that you have shared with others and displays details of the sharing configuration.
    // 
    // - If this parameter is omitted or empty, the operation returns all datasets in the current workspace, including those shared with you.
    shared_ptr<string> shareScope_ {};
    // The sort field.
    shared_ptr<string> sortBy_ {};
    // The source dataset ID for an iTAG annotation set.
    shared_ptr<string> sourceDatasetId_ {};
    // The source ID. The value of this parameter varies based on the `SourceTypes` value:
    // 
    // - If `SourceTypes` is `USER`, you can specify a custom value for `SourceId`.
    // 
    // - If `SourceTypes` is `ITAG`, `SourceId` is the ID of the iTAG task.
    // 
    // - If `SourceTypes` is `PAI_PUBLIC_DATASET`, this parameter is empty by default.
    shared_ptr<string> sourceId_ {};
    // The source type. To specify multiple types, separate them with commas (,).
    shared_ptr<string> sourceTypes_ {};
    // The ID of the workspace that contains the dataset. For information about how to obtain the workspace ID, see [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html).
    // If this parameter is not specified, the default workspace is used. An error is returned if the default workspace does not exist.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
