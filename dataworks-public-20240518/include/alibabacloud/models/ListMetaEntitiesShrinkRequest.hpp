// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETAENTITIESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMETAENTITIESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListMetaEntitiesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaEntitiesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeFilters, attributeFiltersShrink_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CustomAttributeFilters, customAttributeFiltersShrink_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaEntitiesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeFilters, attributeFiltersShrink_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CustomAttributeFilters, customAttributeFiltersShrink_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
    };
    ListMetaEntitiesShrinkRequest() = default ;
    ListMetaEntitiesShrinkRequest(const ListMetaEntitiesShrinkRequest &) = default ;
    ListMetaEntitiesShrinkRequest(ListMetaEntitiesShrinkRequest &&) = default ;
    ListMetaEntitiesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaEntitiesShrinkRequest() = default ;
    ListMetaEntitiesShrinkRequest& operator=(const ListMetaEntitiesShrinkRequest &) = default ;
    ListMetaEntitiesShrinkRequest& operator=(ListMetaEntitiesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributeFiltersShrink_ == nullptr
        && this->comment_ == nullptr && this->customAttributeFiltersShrink_ == nullptr && this->entityType_ == nullptr && this->maxResults_ == nullptr && this->name_ == nullptr
        && this->nextToken_ == nullptr && this->order_ == nullptr && this->sortBy_ == nullptr; };
    // attributeFiltersShrink Field Functions 
    bool hasAttributeFiltersShrink() const { return this->attributeFiltersShrink_ != nullptr;};
    void deleteAttributeFiltersShrink() { this->attributeFiltersShrink_ = nullptr;};
    inline string getAttributeFiltersShrink() const { DARABONBA_PTR_GET_DEFAULT(attributeFiltersShrink_, "") };
    inline ListMetaEntitiesShrinkRequest& setAttributeFiltersShrink(string attributeFiltersShrink) { DARABONBA_PTR_SET_VALUE(attributeFiltersShrink_, attributeFiltersShrink) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListMetaEntitiesShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // customAttributeFiltersShrink Field Functions 
    bool hasCustomAttributeFiltersShrink() const { return this->customAttributeFiltersShrink_ != nullptr;};
    void deleteCustomAttributeFiltersShrink() { this->customAttributeFiltersShrink_ = nullptr;};
    inline string getCustomAttributeFiltersShrink() const { DARABONBA_PTR_GET_DEFAULT(customAttributeFiltersShrink_, "") };
    inline ListMetaEntitiesShrinkRequest& setCustomAttributeFiltersShrink(string customAttributeFiltersShrink) { DARABONBA_PTR_SET_VALUE(customAttributeFiltersShrink_, customAttributeFiltersShrink) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline ListMetaEntitiesShrinkRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMetaEntitiesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMetaEntitiesShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMetaEntitiesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListMetaEntitiesShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListMetaEntitiesShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


  protected:
    shared_ptr<string> attributeFiltersShrink_ {};
    shared_ptr<string> comment_ {};
    shared_ptr<string> customAttributeFiltersShrink_ {};
    // This parameter is required.
    shared_ptr<string> entityType_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> order_ {};
    shared_ptr<string> sortBy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
