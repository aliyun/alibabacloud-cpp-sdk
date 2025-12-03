// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOSITORYCOMMITSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOSITORYCOMMITSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListRepositoryCommitsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepositoryCommitsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(refName, refName_);
      DARABONBA_PTR_TO_JSON(search, search_);
      DARABONBA_PTR_TO_JSON(showCommentsCount, showCommentsCount_);
      DARABONBA_PTR_TO_JSON(showSignature, showSignature_);
      DARABONBA_PTR_TO_JSON(start, start_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepositoryCommitsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(refName, refName_);
      DARABONBA_PTR_FROM_JSON(search, search_);
      DARABONBA_PTR_FROM_JSON(showCommentsCount, showCommentsCount_);
      DARABONBA_PTR_FROM_JSON(showSignature, showSignature_);
      DARABONBA_PTR_FROM_JSON(start, start_);
    };
    ListRepositoryCommitsRequest() = default ;
    ListRepositoryCommitsRequest(const ListRepositoryCommitsRequest &) = default ;
    ListRepositoryCommitsRequest(ListRepositoryCommitsRequest &&) = default ;
    ListRepositoryCommitsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepositoryCommitsRequest() = default ;
    ListRepositoryCommitsRequest& operator=(const ListRepositoryCommitsRequest &) = default ;
    ListRepositoryCommitsRequest& operator=(ListRepositoryCommitsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->end_ == nullptr && return this->organizationId_ == nullptr && return this->page_ == nullptr && return this->pageSize_ == nullptr && return this->path_ == nullptr
        && return this->refName_ == nullptr && return this->search_ == nullptr && return this->showCommentsCount_ == nullptr && return this->showSignature_ == nullptr && return this->start_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline ListRepositoryCommitsRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline string end() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
    inline ListRepositoryCommitsRequest& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListRepositoryCommitsRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListRepositoryCommitsRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListRepositoryCommitsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListRepositoryCommitsRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // refName Field Functions 
    bool hasRefName() const { return this->refName_ != nullptr;};
    void deleteRefName() { this->refName_ = nullptr;};
    inline string refName() const { DARABONBA_PTR_GET_DEFAULT(refName_, "") };
    inline ListRepositoryCommitsRequest& setRefName(string refName) { DARABONBA_PTR_SET_VALUE(refName_, refName) };


    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline string search() const { DARABONBA_PTR_GET_DEFAULT(search_, "") };
    inline ListRepositoryCommitsRequest& setSearch(string search) { DARABONBA_PTR_SET_VALUE(search_, search) };


    // showCommentsCount Field Functions 
    bool hasShowCommentsCount() const { return this->showCommentsCount_ != nullptr;};
    void deleteShowCommentsCount() { this->showCommentsCount_ = nullptr;};
    inline bool showCommentsCount() const { DARABONBA_PTR_GET_DEFAULT(showCommentsCount_, false) };
    inline ListRepositoryCommitsRequest& setShowCommentsCount(bool showCommentsCount) { DARABONBA_PTR_SET_VALUE(showCommentsCount_, showCommentsCount) };


    // showSignature Field Functions 
    bool hasShowSignature() const { return this->showSignature_ != nullptr;};
    void deleteShowSignature() { this->showSignature_ = nullptr;};
    inline bool showSignature() const { DARABONBA_PTR_GET_DEFAULT(showSignature_, false) };
    inline ListRepositoryCommitsRequest& setShowSignature(bool showSignature) { DARABONBA_PTR_SET_VALUE(showSignature_, showSignature) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string start() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline ListRepositoryCommitsRequest& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<string> end_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<int64_t> page_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> refName_ = nullptr;
    std::shared_ptr<string> search_ = nullptr;
    std::shared_ptr<bool> showCommentsCount_ = nullptr;
    std::shared_ptr<bool> showSignature_ = nullptr;
    std::shared_ptr<string> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
