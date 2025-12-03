// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHCOMMITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHCOMMITREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSearchCommitRequestRepoPath.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListSearchCommitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchCommitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(order, order_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(repoPath, repoPath_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(sort, sort_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchCommitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(order, order_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(repoPath, repoPath_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(sort, sort_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    ListSearchCommitRequest() = default ;
    ListSearchCommitRequest(const ListSearchCommitRequest &) = default ;
    ListSearchCommitRequest(ListSearchCommitRequest &&) = default ;
    ListSearchCommitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchCommitRequest() = default ;
    ListSearchCommitRequest& operator=(const ListSearchCommitRequest &) = default ;
    ListSearchCommitRequest& operator=(ListSearchCommitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && return this->order_ == nullptr && return this->page_ == nullptr && return this->pageSize_ == nullptr && return this->repoPath_ == nullptr && return this->scope_ == nullptr
        && return this->sort_ == nullptr && return this->organizationId_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListSearchCommitRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListSearchCommitRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListSearchCommitRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSearchCommitRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // repoPath Field Functions 
    bool hasRepoPath() const { return this->repoPath_ != nullptr;};
    void deleteRepoPath() { this->repoPath_ = nullptr;};
    inline const ListSearchCommitRequestRepoPath & repoPath() const { DARABONBA_PTR_GET_CONST(repoPath_, ListSearchCommitRequestRepoPath) };
    inline ListSearchCommitRequestRepoPath repoPath() { DARABONBA_PTR_GET(repoPath_, ListSearchCommitRequestRepoPath) };
    inline ListSearchCommitRequest& setRepoPath(const ListSearchCommitRequestRepoPath & repoPath) { DARABONBA_PTR_SET_VALUE(repoPath_, repoPath) };
    inline ListSearchCommitRequest& setRepoPath(ListSearchCommitRequestRepoPath && repoPath) { DARABONBA_PTR_SET_RVALUE(repoPath_, repoPath) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ListSearchCommitRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListSearchCommitRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListSearchCommitRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<int32_t> page_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<ListSearchCommitRequestRepoPath> repoPath_ = nullptr;
    std::shared_ptr<string> scope_ = nullptr;
    std::shared_ptr<string> sort_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
