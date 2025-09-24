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
    virtual bool empty() const override { this->accessibility_ != nullptr
        && this->dataSourceTypes_ != nullptr && this->dataTypes_ != nullptr && this->edition_ != nullptr && this->label_ != nullptr && this->name_ != nullptr
        && this->order_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->properties_ != nullptr && this->provider_ != nullptr
        && this->shareScope_ != nullptr && this->sortBy_ != nullptr && this->sourceDatasetId_ != nullptr && this->sourceId_ != nullptr && this->sourceTypes_ != nullptr
        && this->workspaceId_ != nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline ListDatasetsRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // dataSourceTypes Field Functions 
    bool hasDataSourceTypes() const { return this->dataSourceTypes_ != nullptr;};
    void deleteDataSourceTypes() { this->dataSourceTypes_ = nullptr;};
    inline string dataSourceTypes() const { DARABONBA_PTR_GET_DEFAULT(dataSourceTypes_, "") };
    inline ListDatasetsRequest& setDataSourceTypes(string dataSourceTypes) { DARABONBA_PTR_SET_VALUE(dataSourceTypes_, dataSourceTypes) };


    // dataTypes Field Functions 
    bool hasDataTypes() const { return this->dataTypes_ != nullptr;};
    void deleteDataTypes() { this->dataTypes_ = nullptr;};
    inline string dataTypes() const { DARABONBA_PTR_GET_DEFAULT(dataTypes_, "") };
    inline ListDatasetsRequest& setDataTypes(string dataTypes) { DARABONBA_PTR_SET_VALUE(dataTypes_, dataTypes) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline ListDatasetsRequest& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ListDatasetsRequest& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDatasetsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListDatasetsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDatasetsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDatasetsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline string properties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
    inline ListDatasetsRequest& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ListDatasetsRequest& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // shareScope Field Functions 
    bool hasShareScope() const { return this->shareScope_ != nullptr;};
    void deleteShareScope() { this->shareScope_ = nullptr;};
    inline string shareScope() const { DARABONBA_PTR_GET_DEFAULT(shareScope_, "") };
    inline ListDatasetsRequest& setShareScope(string shareScope) { DARABONBA_PTR_SET_VALUE(shareScope_, shareScope) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListDatasetsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sourceDatasetId Field Functions 
    bool hasSourceDatasetId() const { return this->sourceDatasetId_ != nullptr;};
    void deleteSourceDatasetId() { this->sourceDatasetId_ = nullptr;};
    inline string sourceDatasetId() const { DARABONBA_PTR_GET_DEFAULT(sourceDatasetId_, "") };
    inline ListDatasetsRequest& setSourceDatasetId(string sourceDatasetId) { DARABONBA_PTR_SET_VALUE(sourceDatasetId_, sourceDatasetId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ListDatasetsRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceTypes Field Functions 
    bool hasSourceTypes() const { return this->sourceTypes_ != nullptr;};
    void deleteSourceTypes() { this->sourceTypes_ = nullptr;};
    inline string sourceTypes() const { DARABONBA_PTR_GET_DEFAULT(sourceTypes_, "") };
    inline ListDatasetsRequest& setSourceTypes(string sourceTypes) { DARABONBA_PTR_SET_VALUE(sourceTypes_, sourceTypes) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListDatasetsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> accessibility_ = nullptr;
    // The storage types of the data source. Multiple data source types are separated by commas (,). Valid values:
    // 
    // *   NAS: File Storage NAS (NAS).
    // *   OSS: Object Storage Service (OSS).
    std::shared_ptr<string> dataSourceTypes_ = nullptr;
    // The dataset types. Multiple dataset types are separated by commas (,). Valid values:
    // 
    // *   Video: video
    // *   COMMON: common
    // *   TEXT: text
    // *   PIC: picture
    // *   AUDIO: audio
    std::shared_ptr<string> dataTypes_ = nullptr;
    std::shared_ptr<string> edition_ = nullptr;
    // The dataset tag, which is used to filter datasets. Datasets whose tag key or tag value contains a specified string are filtered.
    std::shared_ptr<string> label_ = nullptr;
    // The dataset name. Fuzzy search based on the dataset name is supported.
    std::shared_ptr<string> name_ = nullptr;
    // The order of specific fields of the entries on the returned page. Valid values: ASC and DESC. Default value: ASC.
    // 
    // *   ASC: The entries are sorted in ascending order.
    // *   DESC: The entries are sorted in descending order.
    std::shared_ptr<string> order_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The dataset properties. Multiple properties are separated by commas (,). Valid values:
    // 
    // *   DIRECTORY
    // *   FILE
    std::shared_ptr<string> properties_ = nullptr;
    // The dataset provider. If the value pai is returned, the dataset is a public dataset provided by PAI.
    std::shared_ptr<string> provider_ = nullptr;
    std::shared_ptr<string> shareScope_ = nullptr;
    // The field used for sorting.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The ID of the iTAG labeled dataset that is used as the source dataset.
    std::shared_ptr<string> sourceDatasetId_ = nullptr;
    // The data source ID.
    // 
    // *   If SourceType is set to USER, the value of SourceId is a custom string.
    // *   If SourceType is set to ITAG, the value of SourceId is the ID of the labeling job of iTAG.
    // *   If SourceType is set to PAI_PUBLIC_DATASET, SourceId is empty by default.
    std::shared_ptr<string> sourceId_ = nullptr;
    // The source types. Multiple source types are separated by commas (,). Valid values:
    // 
    // *   PAI-PUBLIC-DATASET: a public dataset of Platform for AI (PAI).
    // *   ITAG: a dataset generated from a labeling job of iTAG.
    // *   USER: a dataset registered by a user.
    std::shared_ptr<string> sourceTypes_ = nullptr;
    // The ID of the workspace to which the dataset belongs. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID. If you do not specify this parameter, the default workspace is used. If the default workspace does not exist, an error is reported.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
