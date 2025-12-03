// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHSOURCECODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHSOURCECODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSearchSourceCodeRequestFilePath.hpp>
#include <alibabacloud/models/ListSearchSourceCodeRequestRepoPath.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListSearchSourceCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchSourceCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filePath, filePath_);
      DARABONBA_PTR_TO_JSON(isCodeBlock, isCodeBlock_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(order, order_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(repoPath, repoPath_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(sort, sort_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchSourceCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filePath, filePath_);
      DARABONBA_PTR_FROM_JSON(isCodeBlock, isCodeBlock_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(order, order_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(repoPath, repoPath_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(sort, sort_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    ListSearchSourceCodeRequest() = default ;
    ListSearchSourceCodeRequest(const ListSearchSourceCodeRequest &) = default ;
    ListSearchSourceCodeRequest(ListSearchSourceCodeRequest &&) = default ;
    ListSearchSourceCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchSourceCodeRequest() = default ;
    ListSearchSourceCodeRequest& operator=(const ListSearchSourceCodeRequest &) = default ;
    ListSearchSourceCodeRequest& operator=(ListSearchSourceCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filePath_ == nullptr
        && return this->isCodeBlock_ == nullptr && return this->keyword_ == nullptr && return this->language_ == nullptr && return this->order_ == nullptr && return this->page_ == nullptr
        && return this->pageSize_ == nullptr && return this->repoPath_ == nullptr && return this->scope_ == nullptr && return this->sort_ == nullptr && return this->organizationId_ == nullptr; };
    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline const ListSearchSourceCodeRequestFilePath & filePath() const { DARABONBA_PTR_GET_CONST(filePath_, ListSearchSourceCodeRequestFilePath) };
    inline ListSearchSourceCodeRequestFilePath filePath() { DARABONBA_PTR_GET(filePath_, ListSearchSourceCodeRequestFilePath) };
    inline ListSearchSourceCodeRequest& setFilePath(const ListSearchSourceCodeRequestFilePath & filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };
    inline ListSearchSourceCodeRequest& setFilePath(ListSearchSourceCodeRequestFilePath && filePath) { DARABONBA_PTR_SET_RVALUE(filePath_, filePath) };


    // isCodeBlock Field Functions 
    bool hasIsCodeBlock() const { return this->isCodeBlock_ != nullptr;};
    void deleteIsCodeBlock() { this->isCodeBlock_ = nullptr;};
    inline bool isCodeBlock() const { DARABONBA_PTR_GET_DEFAULT(isCodeBlock_, false) };
    inline ListSearchSourceCodeRequest& setIsCodeBlock(bool isCodeBlock) { DARABONBA_PTR_SET_VALUE(isCodeBlock_, isCodeBlock) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListSearchSourceCodeRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListSearchSourceCodeRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListSearchSourceCodeRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListSearchSourceCodeRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSearchSourceCodeRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // repoPath Field Functions 
    bool hasRepoPath() const { return this->repoPath_ != nullptr;};
    void deleteRepoPath() { this->repoPath_ = nullptr;};
    inline const ListSearchSourceCodeRequestRepoPath & repoPath() const { DARABONBA_PTR_GET_CONST(repoPath_, ListSearchSourceCodeRequestRepoPath) };
    inline ListSearchSourceCodeRequestRepoPath repoPath() { DARABONBA_PTR_GET(repoPath_, ListSearchSourceCodeRequestRepoPath) };
    inline ListSearchSourceCodeRequest& setRepoPath(const ListSearchSourceCodeRequestRepoPath & repoPath) { DARABONBA_PTR_SET_VALUE(repoPath_, repoPath) };
    inline ListSearchSourceCodeRequest& setRepoPath(ListSearchSourceCodeRequestRepoPath && repoPath) { DARABONBA_PTR_SET_RVALUE(repoPath_, repoPath) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ListSearchSourceCodeRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListSearchSourceCodeRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListSearchSourceCodeRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<ListSearchSourceCodeRequestFilePath> filePath_ = nullptr;
    std::shared_ptr<bool> isCodeBlock_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<int32_t> page_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<ListSearchSourceCodeRequestRepoPath> repoPath_ = nullptr;
    std::shared_ptr<string> scope_ = nullptr;
    std::shared_ptr<string> sort_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
