// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOSITORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOSITORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListRepositoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepositoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(archived, archived_);
      DARABONBA_PTR_TO_JSON(minAccessLevel, minAccessLevel_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(perPage, perPage_);
      DARABONBA_PTR_TO_JSON(search, search_);
      DARABONBA_PTR_TO_JSON(sort, sort_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepositoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(archived, archived_);
      DARABONBA_PTR_FROM_JSON(minAccessLevel, minAccessLevel_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(perPage, perPage_);
      DARABONBA_PTR_FROM_JSON(search, search_);
      DARABONBA_PTR_FROM_JSON(sort, sort_);
    };
    ListRepositoriesRequest() = default ;
    ListRepositoriesRequest(const ListRepositoriesRequest &) = default ;
    ListRepositoriesRequest(ListRepositoriesRequest &&) = default ;
    ListRepositoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepositoriesRequest() = default ;
    ListRepositoriesRequest& operator=(const ListRepositoriesRequest &) = default ;
    ListRepositoriesRequest& operator=(ListRepositoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->archived_ == nullptr && return this->minAccessLevel_ == nullptr && return this->orderBy_ == nullptr && return this->organizationId_ == nullptr && return this->page_ == nullptr
        && return this->perPage_ == nullptr && return this->search_ == nullptr && return this->sort_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline ListRepositoriesRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // archived Field Functions 
    bool hasArchived() const { return this->archived_ != nullptr;};
    void deleteArchived() { this->archived_ = nullptr;};
    inline bool archived() const { DARABONBA_PTR_GET_DEFAULT(archived_, false) };
    inline ListRepositoriesRequest& setArchived(bool archived) { DARABONBA_PTR_SET_VALUE(archived_, archived) };


    // minAccessLevel Field Functions 
    bool hasMinAccessLevel() const { return this->minAccessLevel_ != nullptr;};
    void deleteMinAccessLevel() { this->minAccessLevel_ = nullptr;};
    inline int32_t minAccessLevel() const { DARABONBA_PTR_GET_DEFAULT(minAccessLevel_, 0) };
    inline ListRepositoriesRequest& setMinAccessLevel(int32_t minAccessLevel) { DARABONBA_PTR_SET_VALUE(minAccessLevel_, minAccessLevel) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListRepositoriesRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListRepositoriesRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListRepositoriesRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // perPage Field Functions 
    bool hasPerPage() const { return this->perPage_ != nullptr;};
    void deletePerPage() { this->perPage_ = nullptr;};
    inline int64_t perPage() const { DARABONBA_PTR_GET_DEFAULT(perPage_, 0L) };
    inline ListRepositoriesRequest& setPerPage(int64_t perPage) { DARABONBA_PTR_SET_VALUE(perPage_, perPage) };


    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline string search() const { DARABONBA_PTR_GET_DEFAULT(search_, "") };
    inline ListRepositoriesRequest& setSearch(string search) { DARABONBA_PTR_SET_VALUE(search_, search) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListRepositoriesRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<bool> archived_ = nullptr;
    std::shared_ptr<int32_t> minAccessLevel_ = nullptr;
    std::shared_ptr<string> orderBy_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<int64_t> page_ = nullptr;
    std::shared_ptr<int64_t> perPage_ = nullptr;
    std::shared_ptr<string> search_ = nullptr;
    std::shared_ptr<string> sort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
