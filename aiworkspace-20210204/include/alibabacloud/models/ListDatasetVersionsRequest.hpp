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
        && return this->labelValues_ == nullptr && return this->order_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->properties_ == nullptr
        && return this->sortBy_ == nullptr && return this->sourceId_ == nullptr && return this->sourceTypes_ == nullptr; };
    // labelKeys Field Functions 
    bool hasLabelKeys() const { return this->labelKeys_ != nullptr;};
    void deleteLabelKeys() { this->labelKeys_ = nullptr;};
    inline string labelKeys() const { DARABONBA_PTR_GET_DEFAULT(labelKeys_, "") };
    inline ListDatasetVersionsRequest& setLabelKeys(string labelKeys) { DARABONBA_PTR_SET_VALUE(labelKeys_, labelKeys) };


    // labelValues Field Functions 
    bool hasLabelValues() const { return this->labelValues_ != nullptr;};
    void deleteLabelValues() { this->labelValues_ = nullptr;};
    inline string labelValues() const { DARABONBA_PTR_GET_DEFAULT(labelValues_, "") };
    inline ListDatasetVersionsRequest& setLabelValues(string labelValues) { DARABONBA_PTR_SET_VALUE(labelValues_, labelValues) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListDatasetVersionsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDatasetVersionsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDatasetVersionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline string properties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
    inline ListDatasetVersionsRequest& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListDatasetVersionsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ListDatasetVersionsRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceTypes Field Functions 
    bool hasSourceTypes() const { return this->sourceTypes_ != nullptr;};
    void deleteSourceTypes() { this->sourceTypes_ = nullptr;};
    inline string sourceTypes() const { DARABONBA_PTR_GET_DEFAULT(sourceTypes_, "") };
    inline ListDatasetVersionsRequest& setSourceTypes(string sourceTypes) { DARABONBA_PTR_SET_VALUE(sourceTypes_, sourceTypes) };


  protected:
    // The dataset tag keys, which are used to filter datasets. Datasets whose tag keys or tag values contain a specified string are filtered.
    std::shared_ptr<string> labelKeys_ = nullptr;
    // The dataset tag values, which are used to filter datasets. Datasets whose tag keys or tag values contain a specified string are filtered.
    std::shared_ptr<string> labelValues_ = nullptr;
    // The order in which the entries are sorted by the specific field on the returned page. Default value: ASC. Valid values:
    // 
    // *   ASC: ascending order
    // *   DESC: descending order.
    std::shared_ptr<string> order_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The dataset properties. Valid values:
    // 
    // *   DIRECTORY
    // *   FILE
    std::shared_ptr<string> properties_ = nullptr;
    // The field used to sort the results in queries by page. Default value: GmtCreateTime.
    // Valid values:
    // 
    // *   SourceType
    // *   DataSourceType
    // *   DataSize
    // *   DataCount
    // *   Property
    // *   GmtCreateTime: The results are sorted by creation time. This is the default value.
    // *   GmtModifiedTime: The results are sorted by modification time.
    // *   DatasetId
    std::shared_ptr<string> sortBy_ = nullptr;
    // The data source ID.
    // 
    // *   If SourceType is set to USER, the value of SourceId is a custom string.
    // *   If SourceType is set to ITAG, the value of SourceId is the ID of the labeling job of iTAG.
    // *   If SourceType is set to PAI_PUBLIC_DATASET, SourceId is empty by default.
    std::shared_ptr<string> sourceId_ = nullptr;
    // The source type. Valid values:
    // 
    // *   PAI-PUBLIC-DATASET: a public dataset of Platform for AI (PAI).
    // *   ITAG: a dataset generated from a labeling job of iTAG.
    // *   USER: a dataset registered by a user.
    std::shared_ptr<string> sourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
