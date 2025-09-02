// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETACOLLECTIONENTITIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMETACOLLECTIONENTITIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListMetaCollectionEntitiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaCollectionEntitiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CollectionQualifiedName, collectionQualifiedName_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaCollectionEntitiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CollectionQualifiedName, collectionQualifiedName_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListMetaCollectionEntitiesRequest() = default ;
    ListMetaCollectionEntitiesRequest(const ListMetaCollectionEntitiesRequest &) = default ;
    ListMetaCollectionEntitiesRequest(ListMetaCollectionEntitiesRequest &&) = default ;
    ListMetaCollectionEntitiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaCollectionEntitiesRequest() = default ;
    ListMetaCollectionEntitiesRequest& operator=(const ListMetaCollectionEntitiesRequest &) = default ;
    ListMetaCollectionEntitiesRequest& operator=(ListMetaCollectionEntitiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->collectionQualifiedName_ != nullptr
        && this->entityType_ != nullptr && this->keyword_ != nullptr && this->nextToken_ != nullptr && this->pageSize_ != nullptr; };
    // collectionQualifiedName Field Functions 
    bool hasCollectionQualifiedName() const { return this->collectionQualifiedName_ != nullptr;};
    void deleteCollectionQualifiedName() { this->collectionQualifiedName_ = nullptr;};
    inline string collectionQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(collectionQualifiedName_, "") };
    inline ListMetaCollectionEntitiesRequest& setCollectionQualifiedName(string collectionQualifiedName) { DARABONBA_PTR_SET_VALUE(collectionQualifiedName_, collectionQualifiedName) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline ListMetaCollectionEntitiesRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListMetaCollectionEntitiesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMetaCollectionEntitiesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMetaCollectionEntitiesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The unique identifier of the collection.
    // 
    // This parameter is required.
    std::shared_ptr<string> collectionQualifiedName_ = nullptr;
    // The type of the entities.
    // 
    // For example, if this parameter is set to maxcompute-table, the entity is a MaxCompute table.
    std::shared_ptr<string> entityType_ = nullptr;
    // The search keyword.
    std::shared_ptr<string> keyword_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
