// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSWITHAUTHDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSWITHAUTHDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails.hpp>
#include <alibabacloud/models/ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListResourceGroupsWithAuthDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsWithAuthDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthDetails, authDetails_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroups, resourceGroups_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsWithAuthDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthDetails, authDetails_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroups, resourceGroups_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListResourceGroupsWithAuthDetailsResponseBody() = default ;
    ListResourceGroupsWithAuthDetailsResponseBody(const ListResourceGroupsWithAuthDetailsResponseBody &) = default ;
    ListResourceGroupsWithAuthDetailsResponseBody(ListResourceGroupsWithAuthDetailsResponseBody &&) = default ;
    ListResourceGroupsWithAuthDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupsWithAuthDetailsResponseBody() = default ;
    ListResourceGroupsWithAuthDetailsResponseBody& operator=(const ListResourceGroupsWithAuthDetailsResponseBody &) = default ;
    ListResourceGroupsWithAuthDetailsResponseBody& operator=(ListResourceGroupsWithAuthDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authDetails_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->resourceGroups_ == nullptr && return this->totalCount_ == nullptr; };
    // authDetails Field Functions 
    bool hasAuthDetails() const { return this->authDetails_ != nullptr;};
    void deleteAuthDetails() { this->authDetails_ = nullptr;};
    inline const vector<ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails> & authDetails() const { DARABONBA_PTR_GET_CONST(authDetails_, vector<ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails>) };
    inline vector<ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails> authDetails() { DARABONBA_PTR_GET(authDetails_, vector<ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails>) };
    inline ListResourceGroupsWithAuthDetailsResponseBody& setAuthDetails(const vector<ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails> & authDetails) { DARABONBA_PTR_SET_VALUE(authDetails_, authDetails) };
    inline ListResourceGroupsWithAuthDetailsResponseBody& setAuthDetails(vector<ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails> && authDetails) { DARABONBA_PTR_SET_RVALUE(authDetails_, authDetails) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourceGroupsWithAuthDetailsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourceGroupsWithAuthDetailsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceGroupsWithAuthDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroups Field Functions 
    bool hasResourceGroups() const { return this->resourceGroups_ != nullptr;};
    void deleteResourceGroups() { this->resourceGroups_ = nullptr;};
    inline const vector<ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups> & resourceGroups() const { DARABONBA_PTR_GET_CONST(resourceGroups_, vector<ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups>) };
    inline vector<ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups> resourceGroups() { DARABONBA_PTR_GET(resourceGroups_, vector<ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups>) };
    inline ListResourceGroupsWithAuthDetailsResponseBody& setResourceGroups(const vector<ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups> & resourceGroups) { DARABONBA_PTR_SET_VALUE(resourceGroups_, resourceGroups) };
    inline ListResourceGroupsWithAuthDetailsResponseBody& setResourceGroups(vector<ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups> && resourceGroups) { DARABONBA_PTR_SET_RVALUE(resourceGroups_, resourceGroups) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListResourceGroupsWithAuthDetailsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails>> authDetails_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups>> resourceGroups_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
