// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTITIESINMETACOLLECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTENTITIESINMETACOLLECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListEntitiesInMetaCollectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEntitiesInMetaCollectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EntityDescription, entityDescription_);
      DARABONBA_PTR_TO_JSON(EntityName, entityName_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
    };
    friend void from_json(const Darabonba::Json& j, ListEntitiesInMetaCollectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityDescription, entityDescription_);
      DARABONBA_PTR_FROM_JSON(EntityName, entityName_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
    };
    ListEntitiesInMetaCollectionRequest() = default ;
    ListEntitiesInMetaCollectionRequest(const ListEntitiesInMetaCollectionRequest &) = default ;
    ListEntitiesInMetaCollectionRequest(ListEntitiesInMetaCollectionRequest &&) = default ;
    ListEntitiesInMetaCollectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEntitiesInMetaCollectionRequest() = default ;
    ListEntitiesInMetaCollectionRequest& operator=(const ListEntitiesInMetaCollectionRequest &) = default ;
    ListEntitiesInMetaCollectionRequest& operator=(ListEntitiesInMetaCollectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entityDescription_ == nullptr
        && return this->entityName_ == nullptr && return this->entityType_ == nullptr && return this->id_ == nullptr && return this->order_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->sortBy_ == nullptr; };
    // entityDescription Field Functions 
    bool hasEntityDescription() const { return this->entityDescription_ != nullptr;};
    void deleteEntityDescription() { this->entityDescription_ = nullptr;};
    inline string entityDescription() const { DARABONBA_PTR_GET_DEFAULT(entityDescription_, "") };
    inline ListEntitiesInMetaCollectionRequest& setEntityDescription(string entityDescription) { DARABONBA_PTR_SET_VALUE(entityDescription_, entityDescription) };


    // entityName Field Functions 
    bool hasEntityName() const { return this->entityName_ != nullptr;};
    void deleteEntityName() { this->entityName_ = nullptr;};
    inline string entityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
    inline ListEntitiesInMetaCollectionRequest& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline ListEntitiesInMetaCollectionRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListEntitiesInMetaCollectionRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListEntitiesInMetaCollectionRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListEntitiesInMetaCollectionRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEntitiesInMetaCollectionRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListEntitiesInMetaCollectionRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


  protected:
    // The description specified when the entity was added to the collection. Supports fuzzy matching. Valid only for the album type.
    std::shared_ptr<string> entityDescription_ = nullptr;
    // The entity name. Supports fuzzy matching.
    std::shared_ptr<string> entityName_ = nullptr;
    // The entity type.
    std::shared_ptr<string> entityType_ = nullptr;
    // The collection ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // The sort order. Valid values:
    // 
    // *   Asc (default): ascending order.
    // *   Desc
    std::shared_ptr<string> order_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of records per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The sort field. Valid values:
    // 
    // *   Name (default)
    // *   CreateTime
    std::shared_ptr<string> sortBy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
