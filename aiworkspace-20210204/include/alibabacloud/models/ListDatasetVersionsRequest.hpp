// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETVERSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETVERSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListDatasetVersionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetVersionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LabelKeys, labelKeys_);
      DARABONBA_PTR_TO_JSON(LabelValues, labelValues_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceTypes, sourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetVersionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LabelKeys, labelKeys_);
      DARABONBA_PTR_FROM_JSON(LabelValues, labelValues_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceTypes, sourceTypes_);
    };
    ListDatasetVersionsRequest() = default ;
    ListDatasetVersionsRequest(const ListDatasetVersionsRequest &) = default ;
    ListDatasetVersionsRequest(ListDatasetVersionsRequest &&) = default ;
    ListDatasetVersionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetVersionsRequest() = default ;
    ListDatasetVersionsRequest& operator=(const ListDatasetVersionsRequest &) = default ;
    ListDatasetVersionsRequest& operator=(ListDatasetVersionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labelKeys_ == nullptr
        && this->labelValues_ == nullptr && this->order_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->properties_ == nullptr
        && this->sortBy_ == nullptr && this->sourceId_ == nullptr && this->sourceTypes_ == nullptr; };
    // labelKeys Field Functions 
    bool hasLabelKeys() const { return this->labelKeys_ != nullptr;};
    void deleteLabelKeys() { this->labelKeys_ = nullptr;};
    inline string getLabelKeys() const { DARABONBA_PTR_GET_DEFAULT(labelKeys_, "") };
    inline ListDatasetVersionsRequest& setLabelKeys(string labelKeys) { DARABONBA_PTR_SET_VALUE(labelKeys_, labelKeys) };


    // labelValues Field Functions 
    bool hasLabelValues() const { return this->labelValues_ != nullptr;};
    void deleteLabelValues() { this->labelValues_ = nullptr;};
    inline string getLabelValues() const { DARABONBA_PTR_GET_DEFAULT(labelValues_, "") };
    inline ListDatasetVersionsRequest& setLabelValues(string labelValues) { DARABONBA_PTR_SET_VALUE(labelValues_, labelValues) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListDatasetVersionsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDatasetVersionsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDatasetVersionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline string getProperties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
    inline ListDatasetVersionsRequest& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListDatasetVersionsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ListDatasetVersionsRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceTypes Field Functions 
    bool hasSourceTypes() const { return this->sourceTypes_ != nullptr;};
    void deleteSourceTypes() { this->sourceTypes_ = nullptr;};
    inline string getSourceTypes() const { DARABONBA_PTR_GET_DEFAULT(sourceTypes_, "") };
    inline ListDatasetVersionsRequest& setSourceTypes(string sourceTypes) { DARABONBA_PTR_SET_VALUE(sourceTypes_, sourceTypes) };


  protected:
    // The label keys used to filter the dataset list. Datasets are returned if their label keys contain the specified strings.
    shared_ptr<string> labelKeys_ {};
    // The label values used to filter the dataset list. Datasets are returned if their label values contain the specified strings.
    shared_ptr<string> labelValues_ {};
    // The sort order for the paged query. The default value is ASC. Valid values:
    // 
    // - ASC: Ascending order.
    // 
    // - DESC: Descending order.
    shared_ptr<string> order_ {};
    // The page number. The value starts from 1. The default is 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. The default value is 10.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The dataset properties. Valid values:
    // 
    // - DIRECTORY: Folder.
    // 
    // - FILE: File.
    shared_ptr<string> properties_ {};
    // The field to use for sorting in a paged query. The default value is GmtCreateTime. Valid values:
    // 
    // - GmtCreateTime (default): Creation time.
    // 
    // - GmtModifiedTime: Modification time.
    // 
    // - SourceType
    // 
    // - DataSourceType
    // 
    // - Property
    // 
    // - DataSize
    // 
    // - DataCount
    shared_ptr<string> sortBy_ {};
    // The ID of the data source.
    // 
    // - If SourceTypes is USER, you can specify a custom ID.
    // 
    // - If SourceTypes is ITAG, this is the ID of the iTAG annotation task.
    // 
    // - If SourceTypes is PAI_PUBLIC_DATASET, this parameter is empty by default.
    shared_ptr<string> sourceId_ {};
    // The source type. Valid values:
    // 
    // - PAI-PUBLIC-DATASET: A public dataset from PAI.
    // 
    // - ITAG: A dataset generated from the annotation results of the iTAG module.
    // 
    // - USER: A dataset registered by a user.
    shared_ptr<string> sourceTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
