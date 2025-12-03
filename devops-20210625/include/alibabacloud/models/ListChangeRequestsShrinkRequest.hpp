// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHANGEREQUESTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHANGEREQUESTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListChangeRequestsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChangeRequestsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appNameList, appNameListShrink_);
      DARABONBA_PTR_TO_JSON(displayNameKeyword, displayNameKeyword_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(ownerIdList, ownerIdListShrink_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pagination, pagination_);
      DARABONBA_PTR_TO_JSON(perPage, perPage_);
      DARABONBA_PTR_TO_JSON(sort, sort_);
      DARABONBA_PTR_TO_JSON(stateList, stateListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListChangeRequestsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appNameList, appNameListShrink_);
      DARABONBA_PTR_FROM_JSON(displayNameKeyword, displayNameKeyword_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(ownerIdList, ownerIdListShrink_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pagination, pagination_);
      DARABONBA_PTR_FROM_JSON(perPage, perPage_);
      DARABONBA_PTR_FROM_JSON(sort, sort_);
      DARABONBA_PTR_FROM_JSON(stateList, stateListShrink_);
    };
    ListChangeRequestsShrinkRequest() = default ;
    ListChangeRequestsShrinkRequest(const ListChangeRequestsShrinkRequest &) = default ;
    ListChangeRequestsShrinkRequest(ListChangeRequestsShrinkRequest &&) = default ;
    ListChangeRequestsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChangeRequestsShrinkRequest() = default ;
    ListChangeRequestsShrinkRequest& operator=(const ListChangeRequestsShrinkRequest &) = default ;
    ListChangeRequestsShrinkRequest& operator=(ListChangeRequestsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appNameListShrink_ == nullptr
        && return this->displayNameKeyword_ == nullptr && return this->nextToken_ == nullptr && return this->orderBy_ == nullptr && return this->organizationId_ == nullptr && return this->ownerIdListShrink_ == nullptr
        && return this->page_ == nullptr && return this->pagination_ == nullptr && return this->perPage_ == nullptr && return this->sort_ == nullptr && return this->stateListShrink_ == nullptr; };
    // appNameListShrink Field Functions 
    bool hasAppNameListShrink() const { return this->appNameListShrink_ != nullptr;};
    void deleteAppNameListShrink() { this->appNameListShrink_ = nullptr;};
    inline string appNameListShrink() const { DARABONBA_PTR_GET_DEFAULT(appNameListShrink_, "") };
    inline ListChangeRequestsShrinkRequest& setAppNameListShrink(string appNameListShrink) { DARABONBA_PTR_SET_VALUE(appNameListShrink_, appNameListShrink) };


    // displayNameKeyword Field Functions 
    bool hasDisplayNameKeyword() const { return this->displayNameKeyword_ != nullptr;};
    void deleteDisplayNameKeyword() { this->displayNameKeyword_ = nullptr;};
    inline string displayNameKeyword() const { DARABONBA_PTR_GET_DEFAULT(displayNameKeyword_, "") };
    inline ListChangeRequestsShrinkRequest& setDisplayNameKeyword(string displayNameKeyword) { DARABONBA_PTR_SET_VALUE(displayNameKeyword_, displayNameKeyword) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListChangeRequestsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListChangeRequestsShrinkRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListChangeRequestsShrinkRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // ownerIdListShrink Field Functions 
    bool hasOwnerIdListShrink() const { return this->ownerIdListShrink_ != nullptr;};
    void deleteOwnerIdListShrink() { this->ownerIdListShrink_ = nullptr;};
    inline string ownerIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(ownerIdListShrink_, "") };
    inline ListChangeRequestsShrinkRequest& setOwnerIdListShrink(string ownerIdListShrink) { DARABONBA_PTR_SET_VALUE(ownerIdListShrink_, ownerIdListShrink) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListChangeRequestsShrinkRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pagination Field Functions 
    bool hasPagination() const { return this->pagination_ != nullptr;};
    void deletePagination() { this->pagination_ = nullptr;};
    inline string pagination() const { DARABONBA_PTR_GET_DEFAULT(pagination_, "") };
    inline ListChangeRequestsShrinkRequest& setPagination(string pagination) { DARABONBA_PTR_SET_VALUE(pagination_, pagination) };


    // perPage Field Functions 
    bool hasPerPage() const { return this->perPage_ != nullptr;};
    void deletePerPage() { this->perPage_ = nullptr;};
    inline int32_t perPage() const { DARABONBA_PTR_GET_DEFAULT(perPage_, 0) };
    inline ListChangeRequestsShrinkRequest& setPerPage(int32_t perPage) { DARABONBA_PTR_SET_VALUE(perPage_, perPage) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListChangeRequestsShrinkRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // stateListShrink Field Functions 
    bool hasStateListShrink() const { return this->stateListShrink_ != nullptr;};
    void deleteStateListShrink() { this->stateListShrink_ = nullptr;};
    inline string stateListShrink() const { DARABONBA_PTR_GET_DEFAULT(stateListShrink_, "") };
    inline ListChangeRequestsShrinkRequest& setStateListShrink(string stateListShrink) { DARABONBA_PTR_SET_VALUE(stateListShrink_, stateListShrink) };


  protected:
    std::shared_ptr<string> appNameListShrink_ = nullptr;
    std::shared_ptr<string> displayNameKeyword_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> orderBy_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<string> ownerIdListShrink_ = nullptr;
    std::shared_ptr<int32_t> page_ = nullptr;
    std::shared_ptr<string> pagination_ = nullptr;
    std::shared_ptr<int32_t> perPage_ = nullptr;
    std::shared_ptr<string> sort_ = nullptr;
    std::shared_ptr<string> stateListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
