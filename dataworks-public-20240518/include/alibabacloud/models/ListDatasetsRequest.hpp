// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDatasetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(DataTypeList, dataTypeList_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(StorageTypeList, storageTypeList_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(DataTypeList, dataTypeList_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(StorageTypeList, storageTypeList_);
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
    virtual bool empty() const override { return this->creatorId_ == nullptr
        && return this->dataTypeList_ == nullptr && return this->name_ == nullptr && return this->order_ == nullptr && return this->origin_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->projectId_ == nullptr && return this->sortBy_ == nullptr && return this->storageTypeList_ == nullptr; };
    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline ListDatasetsRequest& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // dataTypeList Field Functions 
    bool hasDataTypeList() const { return this->dataTypeList_ != nullptr;};
    void deleteDataTypeList() { this->dataTypeList_ = nullptr;};
    inline const vector<string> & dataTypeList() const { DARABONBA_PTR_GET_CONST(dataTypeList_, vector<string>) };
    inline vector<string> dataTypeList() { DARABONBA_PTR_GET(dataTypeList_, vector<string>) };
    inline ListDatasetsRequest& setDataTypeList(const vector<string> & dataTypeList) { DARABONBA_PTR_SET_VALUE(dataTypeList_, dataTypeList) };
    inline ListDatasetsRequest& setDataTypeList(vector<string> && dataTypeList) { DARABONBA_PTR_SET_RVALUE(dataTypeList_, dataTypeList) };


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


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline ListDatasetsRequest& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


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


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDatasetsRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListDatasetsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // storageTypeList Field Functions 
    bool hasStorageTypeList() const { return this->storageTypeList_ != nullptr;};
    void deleteStorageTypeList() { this->storageTypeList_ = nullptr;};
    inline const vector<string> & storageTypeList() const { DARABONBA_PTR_GET_CONST(storageTypeList_, vector<string>) };
    inline vector<string> storageTypeList() { DARABONBA_PTR_GET(storageTypeList_, vector<string>) };
    inline ListDatasetsRequest& setStorageTypeList(const vector<string> & storageTypeList) { DARABONBA_PTR_SET_VALUE(storageTypeList_, storageTypeList) };
    inline ListDatasetsRequest& setStorageTypeList(vector<string> && storageTypeList) { DARABONBA_PTR_SET_RVALUE(storageTypeList_, storageTypeList) };


  protected:
    std::shared_ptr<string> creatorId_ = nullptr;
    std::shared_ptr<vector<string>> dataTypeList_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<string> origin_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> sortBy_ = nullptr;
    std::shared_ptr<vector<string>> storageTypeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
