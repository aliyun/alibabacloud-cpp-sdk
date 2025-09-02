// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETACOLLECTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMETACOLLECTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListMetaCollectionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaCollectionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Administrator, administrator_);
      DARABONBA_PTR_TO_JSON(CollectionType, collectionType_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Follower, follower_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentQualifiedName, parentQualifiedName_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaCollectionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Administrator, administrator_);
      DARABONBA_PTR_FROM_JSON(CollectionType, collectionType_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Follower, follower_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentQualifiedName, parentQualifiedName_);
    };
    ListMetaCollectionsRequest() = default ;
    ListMetaCollectionsRequest(const ListMetaCollectionsRequest &) = default ;
    ListMetaCollectionsRequest(ListMetaCollectionsRequest &&) = default ;
    ListMetaCollectionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaCollectionsRequest() = default ;
    ListMetaCollectionsRequest& operator=(const ListMetaCollectionsRequest &) = default ;
    ListMetaCollectionsRequest& operator=(ListMetaCollectionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->administrator_ != nullptr
        && this->collectionType_ != nullptr && this->creator_ != nullptr && this->follower_ != nullptr && this->keyword_ != nullptr && this->nextToken_ != nullptr
        && this->orderBy_ != nullptr && this->pageSize_ != nullptr && this->parentQualifiedName_ != nullptr; };
    // administrator Field Functions 
    bool hasAdministrator() const { return this->administrator_ != nullptr;};
    void deleteAdministrator() { this->administrator_ = nullptr;};
    inline string administrator() const { DARABONBA_PTR_GET_DEFAULT(administrator_, "") };
    inline ListMetaCollectionsRequest& setAdministrator(string administrator) { DARABONBA_PTR_SET_VALUE(administrator_, administrator) };


    // collectionType Field Functions 
    bool hasCollectionType() const { return this->collectionType_ != nullptr;};
    void deleteCollectionType() { this->collectionType_ = nullptr;};
    inline string collectionType() const { DARABONBA_PTR_GET_DEFAULT(collectionType_, "") };
    inline ListMetaCollectionsRequest& setCollectionType(string collectionType) { DARABONBA_PTR_SET_VALUE(collectionType_, collectionType) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListMetaCollectionsRequest& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // follower Field Functions 
    bool hasFollower() const { return this->follower_ != nullptr;};
    void deleteFollower() { this->follower_ = nullptr;};
    inline string follower() const { DARABONBA_PTR_GET_DEFAULT(follower_, "") };
    inline ListMetaCollectionsRequest& setFollower(string follower) { DARABONBA_PTR_SET_VALUE(follower_, follower) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListMetaCollectionsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMetaCollectionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListMetaCollectionsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMetaCollectionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentQualifiedName Field Functions 
    bool hasParentQualifiedName() const { return this->parentQualifiedName_ != nullptr;};
    void deleteParentQualifiedName() { this->parentQualifiedName_ = nullptr;};
    inline string parentQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(parentQualifiedName_, "") };
    inline ListMetaCollectionsRequest& setParentQualifiedName(string parentQualifiedName) { DARABONBA_PTR_SET_VALUE(parentQualifiedName_, parentQualifiedName) };


  protected:
    // The ID of the collection administrator.
    std::shared_ptr<string> administrator_ = nullptr;
    // - ALBUM: data album 
    // - ALBUM_CATEGORY: category in a data album
    // 
    // This parameter is required.
    std::shared_ptr<string> collectionType_ = nullptr;
    // The ID of the collection creator.
    std::shared_ptr<string> creator_ = nullptr;
    // The ID of the collection follower.
    std::shared_ptr<string> follower_ = nullptr;
    // The keyword.
    std::shared_ptr<string> keyword_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The name of the sorting field.
    std::shared_ptr<string> orderBy_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The unique identifier of the parent collection.
    std::shared_ptr<string> parentQualifiedName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
