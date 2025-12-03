// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHANGEREQUESTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHANGEREQUESTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListChangeRequestsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChangeRequestsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appNameList, appNameList_);
      DARABONBA_PTR_TO_JSON(displayNameKeyword, displayNameKeyword_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(ownerIdList, ownerIdList_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pagination, pagination_);
      DARABONBA_PTR_TO_JSON(perPage, perPage_);
      DARABONBA_PTR_TO_JSON(sort, sort_);
      DARABONBA_PTR_TO_JSON(stateList, stateList_);
    };
    friend void from_json(const Darabonba::Json& j, ListChangeRequestsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appNameList, appNameList_);
      DARABONBA_PTR_FROM_JSON(displayNameKeyword, displayNameKeyword_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(ownerIdList, ownerIdList_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pagination, pagination_);
      DARABONBA_PTR_FROM_JSON(perPage, perPage_);
      DARABONBA_PTR_FROM_JSON(sort, sort_);
      DARABONBA_PTR_FROM_JSON(stateList, stateList_);
    };
    ListChangeRequestsRequest() = default ;
    ListChangeRequestsRequest(const ListChangeRequestsRequest &) = default ;
    ListChangeRequestsRequest(ListChangeRequestsRequest &&) = default ;
    ListChangeRequestsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChangeRequestsRequest() = default ;
    ListChangeRequestsRequest& operator=(const ListChangeRequestsRequest &) = default ;
    ListChangeRequestsRequest& operator=(ListChangeRequestsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appNameList_ == nullptr
        && return this->displayNameKeyword_ == nullptr && return this->nextToken_ == nullptr && return this->orderBy_ == nullptr && return this->organizationId_ == nullptr && return this->ownerIdList_ == nullptr
        && return this->page_ == nullptr && return this->pagination_ == nullptr && return this->perPage_ == nullptr && return this->sort_ == nullptr && return this->stateList_ == nullptr; };
    // appNameList Field Functions 
    bool hasAppNameList() const { return this->appNameList_ != nullptr;};
    void deleteAppNameList() { this->appNameList_ = nullptr;};
    inline const vector<string> & appNameList() const { DARABONBA_PTR_GET_CONST(appNameList_, vector<string>) };
    inline vector<string> appNameList() { DARABONBA_PTR_GET(appNameList_, vector<string>) };
    inline ListChangeRequestsRequest& setAppNameList(const vector<string> & appNameList) { DARABONBA_PTR_SET_VALUE(appNameList_, appNameList) };
    inline ListChangeRequestsRequest& setAppNameList(vector<string> && appNameList) { DARABONBA_PTR_SET_RVALUE(appNameList_, appNameList) };


    // displayNameKeyword Field Functions 
    bool hasDisplayNameKeyword() const { return this->displayNameKeyword_ != nullptr;};
    void deleteDisplayNameKeyword() { this->displayNameKeyword_ = nullptr;};
    inline string displayNameKeyword() const { DARABONBA_PTR_GET_DEFAULT(displayNameKeyword_, "") };
    inline ListChangeRequestsRequest& setDisplayNameKeyword(string displayNameKeyword) { DARABONBA_PTR_SET_VALUE(displayNameKeyword_, displayNameKeyword) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListChangeRequestsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListChangeRequestsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListChangeRequestsRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // ownerIdList Field Functions 
    bool hasOwnerIdList() const { return this->ownerIdList_ != nullptr;};
    void deleteOwnerIdList() { this->ownerIdList_ = nullptr;};
    inline const vector<string> & ownerIdList() const { DARABONBA_PTR_GET_CONST(ownerIdList_, vector<string>) };
    inline vector<string> ownerIdList() { DARABONBA_PTR_GET(ownerIdList_, vector<string>) };
    inline ListChangeRequestsRequest& setOwnerIdList(const vector<string> & ownerIdList) { DARABONBA_PTR_SET_VALUE(ownerIdList_, ownerIdList) };
    inline ListChangeRequestsRequest& setOwnerIdList(vector<string> && ownerIdList) { DARABONBA_PTR_SET_RVALUE(ownerIdList_, ownerIdList) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListChangeRequestsRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pagination Field Functions 
    bool hasPagination() const { return this->pagination_ != nullptr;};
    void deletePagination() { this->pagination_ = nullptr;};
    inline string pagination() const { DARABONBA_PTR_GET_DEFAULT(pagination_, "") };
    inline ListChangeRequestsRequest& setPagination(string pagination) { DARABONBA_PTR_SET_VALUE(pagination_, pagination) };


    // perPage Field Functions 
    bool hasPerPage() const { return this->perPage_ != nullptr;};
    void deletePerPage() { this->perPage_ = nullptr;};
    inline int32_t perPage() const { DARABONBA_PTR_GET_DEFAULT(perPage_, 0) };
    inline ListChangeRequestsRequest& setPerPage(int32_t perPage) { DARABONBA_PTR_SET_VALUE(perPage_, perPage) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListChangeRequestsRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // stateList Field Functions 
    bool hasStateList() const { return this->stateList_ != nullptr;};
    void deleteStateList() { this->stateList_ = nullptr;};
    inline const vector<string> & stateList() const { DARABONBA_PTR_GET_CONST(stateList_, vector<string>) };
    inline vector<string> stateList() { DARABONBA_PTR_GET(stateList_, vector<string>) };
    inline ListChangeRequestsRequest& setStateList(const vector<string> & stateList) { DARABONBA_PTR_SET_VALUE(stateList_, stateList) };
    inline ListChangeRequestsRequest& setStateList(vector<string> && stateList) { DARABONBA_PTR_SET_RVALUE(stateList_, stateList) };


  protected:
    std::shared_ptr<vector<string>> appNameList_ = nullptr;
    std::shared_ptr<string> displayNameKeyword_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> orderBy_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<vector<string>> ownerIdList_ = nullptr;
    std::shared_ptr<int32_t> page_ = nullptr;
    std::shared_ptr<string> pagination_ = nullptr;
    std::shared_ptr<int32_t> perPage_ = nullptr;
    std::shared_ptr<string> sort_ = nullptr;
    std::shared_ptr<vector<string>> stateList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
