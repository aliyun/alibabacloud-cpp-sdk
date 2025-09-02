// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTITIESBYTAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTENTITIESBYTAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UserEntityTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListEntitiesByTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEntitiesByTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListEntitiesByTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListEntitiesByTagsRequest() = default ;
    ListEntitiesByTagsRequest(const ListEntitiesByTagsRequest &) = default ;
    ListEntitiesByTagsRequest(ListEntitiesByTagsRequest &&) = default ;
    ListEntitiesByTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEntitiesByTagsRequest() = default ;
    ListEntitiesByTagsRequest& operator=(const ListEntitiesByTagsRequest &) = default ;
    ListEntitiesByTagsRequest& operator=(ListEntitiesByTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityType_ != nullptr
        && this->nextToken_ != nullptr && this->pageSize_ != nullptr && this->tags_ != nullptr; };
    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline ListEntitiesByTagsRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEntitiesByTagsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEntitiesByTagsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UserEntityTag> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UserEntityTag>) };
    inline vector<UserEntityTag> tags() { DARABONBA_PTR_GET(tags_, vector<UserEntityTag>) };
    inline ListEntitiesByTagsRequest& setTags(const vector<UserEntityTag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListEntitiesByTagsRequest& setTags(vector<UserEntityTag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The type of the entity.
    // 
    // This parameter is required.
    std::shared_ptr<string> entityType_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The number of entries per page. Default value: 10. Valid values: 1 to 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The tags.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UserEntityTag>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
