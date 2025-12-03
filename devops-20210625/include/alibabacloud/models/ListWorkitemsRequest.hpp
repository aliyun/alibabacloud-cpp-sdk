// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListWorkitemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkitemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(conditions, conditions_);
      DARABONBA_PTR_TO_JSON(extraConditions, extraConditions_);
      DARABONBA_PTR_TO_JSON(groupCondition, groupCondition_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(searchType, searchType_);
      DARABONBA_PTR_TO_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_TO_JSON(spaceType, spaceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkitemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(extraConditions, extraConditions_);
      DARABONBA_PTR_FROM_JSON(groupCondition, groupCondition_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(searchType, searchType_);
      DARABONBA_PTR_FROM_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_FROM_JSON(spaceType, spaceType_);
    };
    ListWorkitemsRequest() = default ;
    ListWorkitemsRequest(const ListWorkitemsRequest &) = default ;
    ListWorkitemsRequest(ListWorkitemsRequest &&) = default ;
    ListWorkitemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkitemsRequest() = default ;
    ListWorkitemsRequest& operator=(const ListWorkitemsRequest &) = default ;
    ListWorkitemsRequest& operator=(ListWorkitemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->conditions_ == nullptr && return this->extraConditions_ == nullptr && return this->groupCondition_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr
        && return this->orderBy_ == nullptr && return this->searchType_ == nullptr && return this->spaceIdentifier_ == nullptr && return this->spaceType_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListWorkitemsRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline string conditions() const { DARABONBA_PTR_GET_DEFAULT(conditions_, "") };
    inline ListWorkitemsRequest& setConditions(string conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };


    // extraConditions Field Functions 
    bool hasExtraConditions() const { return this->extraConditions_ != nullptr;};
    void deleteExtraConditions() { this->extraConditions_ = nullptr;};
    inline string extraConditions() const { DARABONBA_PTR_GET_DEFAULT(extraConditions_, "") };
    inline ListWorkitemsRequest& setExtraConditions(string extraConditions) { DARABONBA_PTR_SET_VALUE(extraConditions_, extraConditions) };


    // groupCondition Field Functions 
    bool hasGroupCondition() const { return this->groupCondition_ != nullptr;};
    void deleteGroupCondition() { this->groupCondition_ = nullptr;};
    inline string groupCondition() const { DARABONBA_PTR_GET_DEFAULT(groupCondition_, "") };
    inline ListWorkitemsRequest& setGroupCondition(string groupCondition) { DARABONBA_PTR_SET_VALUE(groupCondition_, groupCondition) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline ListWorkitemsRequest& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWorkitemsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListWorkitemsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // searchType Field Functions 
    bool hasSearchType() const { return this->searchType_ != nullptr;};
    void deleteSearchType() { this->searchType_ = nullptr;};
    inline string searchType() const { DARABONBA_PTR_GET_DEFAULT(searchType_, "") };
    inline ListWorkitemsRequest& setSearchType(string searchType) { DARABONBA_PTR_SET_VALUE(searchType_, searchType) };


    // spaceIdentifier Field Functions 
    bool hasSpaceIdentifier() const { return this->spaceIdentifier_ != nullptr;};
    void deleteSpaceIdentifier() { this->spaceIdentifier_ = nullptr;};
    inline string spaceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(spaceIdentifier_, "") };
    inline ListWorkitemsRequest& setSpaceIdentifier(string spaceIdentifier) { DARABONBA_PTR_SET_VALUE(spaceIdentifier_, spaceIdentifier) };


    // spaceType Field Functions 
    bool hasSpaceType() const { return this->spaceType_ != nullptr;};
    void deleteSpaceType() { this->spaceType_ = nullptr;};
    inline string spaceType() const { DARABONBA_PTR_GET_DEFAULT(spaceType_, "") };
    inline ListWorkitemsRequest& setSpaceType(string spaceType) { DARABONBA_PTR_SET_VALUE(spaceType_, spaceType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> conditions_ = nullptr;
    std::shared_ptr<string> extraConditions_ = nullptr;
    std::shared_ptr<string> groupCondition_ = nullptr;
    std::shared_ptr<string> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> orderBy_ = nullptr;
    std::shared_ptr<string> searchType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceIdentifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
