// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHREPOSITORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHREPOSITORYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSearchRepositoryRequestRepoPath.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListSearchRepositoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchRepositoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunPk, aliyunPk_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(order, order_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(repoPath, repoPath_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(sort, sort_);
      DARABONBA_PTR_TO_JSON(visibilityLevel, visibilityLevel_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchRepositoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunPk, aliyunPk_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(order, order_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(repoPath, repoPath_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(sort, sort_);
      DARABONBA_PTR_FROM_JSON(visibilityLevel, visibilityLevel_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    ListSearchRepositoryRequest() = default ;
    ListSearchRepositoryRequest(const ListSearchRepositoryRequest &) = default ;
    ListSearchRepositoryRequest(ListSearchRepositoryRequest &&) = default ;
    ListSearchRepositoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchRepositoryRequest() = default ;
    ListSearchRepositoryRequest& operator=(const ListSearchRepositoryRequest &) = default ;
    ListSearchRepositoryRequest& operator=(ListSearchRepositoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunPk_ == nullptr
        && return this->keyword_ == nullptr && return this->order_ == nullptr && return this->page_ == nullptr && return this->pageSize_ == nullptr && return this->repoPath_ == nullptr
        && return this->scope_ == nullptr && return this->sort_ == nullptr && return this->visibilityLevel_ == nullptr && return this->organizationId_ == nullptr; };
    // aliyunPk Field Functions 
    bool hasAliyunPk() const { return this->aliyunPk_ != nullptr;};
    void deleteAliyunPk() { this->aliyunPk_ = nullptr;};
    inline string aliyunPk() const { DARABONBA_PTR_GET_DEFAULT(aliyunPk_, "") };
    inline ListSearchRepositoryRequest& setAliyunPk(string aliyunPk) { DARABONBA_PTR_SET_VALUE(aliyunPk_, aliyunPk) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListSearchRepositoryRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListSearchRepositoryRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListSearchRepositoryRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSearchRepositoryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // repoPath Field Functions 
    bool hasRepoPath() const { return this->repoPath_ != nullptr;};
    void deleteRepoPath() { this->repoPath_ = nullptr;};
    inline const ListSearchRepositoryRequestRepoPath & repoPath() const { DARABONBA_PTR_GET_CONST(repoPath_, ListSearchRepositoryRequestRepoPath) };
    inline ListSearchRepositoryRequestRepoPath repoPath() { DARABONBA_PTR_GET(repoPath_, ListSearchRepositoryRequestRepoPath) };
    inline ListSearchRepositoryRequest& setRepoPath(const ListSearchRepositoryRequestRepoPath & repoPath) { DARABONBA_PTR_SET_VALUE(repoPath_, repoPath) };
    inline ListSearchRepositoryRequest& setRepoPath(ListSearchRepositoryRequestRepoPath && repoPath) { DARABONBA_PTR_SET_RVALUE(repoPath_, repoPath) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ListSearchRepositoryRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListSearchRepositoryRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // visibilityLevel Field Functions 
    bool hasVisibilityLevel() const { return this->visibilityLevel_ != nullptr;};
    void deleteVisibilityLevel() { this->visibilityLevel_ = nullptr;};
    inline int32_t visibilityLevel() const { DARABONBA_PTR_GET_DEFAULT(visibilityLevel_, 0) };
    inline ListSearchRepositoryRequest& setVisibilityLevel(int32_t visibilityLevel) { DARABONBA_PTR_SET_VALUE(visibilityLevel_, visibilityLevel) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListSearchRepositoryRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> aliyunPk_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<int32_t> page_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<ListSearchRepositoryRequestRepoPath> repoPath_ = nullptr;
    std::shared_ptr<string> scope_ = nullptr;
    std::shared_ptr<string> sort_ = nullptr;
    std::shared_ptr<int32_t> visibilityLevel_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
