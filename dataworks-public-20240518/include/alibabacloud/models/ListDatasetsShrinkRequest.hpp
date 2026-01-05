// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDatasetsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(DataTypeList, dataTypeListShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(StorageTypeList, storageTypeListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(DataTypeList, dataTypeListShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(StorageTypeList, storageTypeListShrink_);
    };
    ListDatasetsShrinkRequest() = default ;
    ListDatasetsShrinkRequest(const ListDatasetsShrinkRequest &) = default ;
    ListDatasetsShrinkRequest(ListDatasetsShrinkRequest &&) = default ;
    ListDatasetsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetsShrinkRequest() = default ;
    ListDatasetsShrinkRequest& operator=(const ListDatasetsShrinkRequest &) = default ;
    ListDatasetsShrinkRequest& operator=(ListDatasetsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creatorId_ == nullptr
        && this->dataTypeListShrink_ == nullptr && this->name_ == nullptr && this->order_ == nullptr && this->origin_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->projectId_ == nullptr && this->sortBy_ == nullptr && this->storageTypeListShrink_ == nullptr; };
    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline ListDatasetsShrinkRequest& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // dataTypeListShrink Field Functions 
    bool hasDataTypeListShrink() const { return this->dataTypeListShrink_ != nullptr;};
    void deleteDataTypeListShrink() { this->dataTypeListShrink_ = nullptr;};
    inline string getDataTypeListShrink() const { DARABONBA_PTR_GET_DEFAULT(dataTypeListShrink_, "") };
    inline ListDatasetsShrinkRequest& setDataTypeListShrink(string dataTypeListShrink) { DARABONBA_PTR_SET_VALUE(dataTypeListShrink_, dataTypeListShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDatasetsShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListDatasetsShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline ListDatasetsShrinkRequest& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDatasetsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDatasetsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDatasetsShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListDatasetsShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // storageTypeListShrink Field Functions 
    bool hasStorageTypeListShrink() const { return this->storageTypeListShrink_ != nullptr;};
    void deleteStorageTypeListShrink() { this->storageTypeListShrink_ = nullptr;};
    inline string getStorageTypeListShrink() const { DARABONBA_PTR_GET_DEFAULT(storageTypeListShrink_, "") };
    inline ListDatasetsShrinkRequest& setStorageTypeListShrink(string storageTypeListShrink) { DARABONBA_PTR_SET_VALUE(storageTypeListShrink_, storageTypeListShrink) };


  protected:
    // The creator ID.
    shared_ptr<string> creatorId_ {};
    // The data type. Multiple selections are allowed. Valid values:
    // 
    // *   COMMON
    // *   PIC
    // *   TEXT
    // *   TABLE
    // *   VIDEO
    // *   AUDIO
    // *   INDEX
    shared_ptr<string> dataTypeListShrink_ {};
    // The dataset name. Supports fuzzy search.
    shared_ptr<string> name_ {};
    // The sort order. Default: Desc.
    // 
    // Valid values:
    // 
    // *   Asc: Ascending.
    // *   Desc: Descending.
    shared_ptr<string> order_ {};
    // The dataset source. Valid values:
    // 
    // *   DataWorks
    // *   PAI
    shared_ptr<string> origin_ {};
    // The page number. Default: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default: 10. Maximum: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The DataWorks workspace ID.
    shared_ptr<int64_t> projectId_ {};
    // The sort field. Default: CreateTime.
    // 
    // Valid values:
    // 
    // *   ModifyTime: Modification time.
    // *   CreateTime: Creation time.
    // *   Name
    shared_ptr<string> sortBy_ {};
    // The storage type. Multiple selections are allowed. Supported values:
    // 
    // *   OSS
    // *   NAS: General-purpose NAS file systems
    // *   EXTREMENAS: Extreme NAS file systems
    // *   DLF_LANCE: Data Lake Formation
    // *   CPFS: Cloud Parallel File Storage
    // *   BMCPFS: CPFS for Lingjun
    // *   MAXCOMPUTE: MaxCompute table
    shared_ptr<string> storageTypeListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
