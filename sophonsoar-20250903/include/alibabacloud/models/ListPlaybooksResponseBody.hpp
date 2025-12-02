// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLAYBOOKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPLAYBOOKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPlaybooksResponseBodyPlaybooks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class ListPlaybooksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPlaybooksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Playbooks, playbooks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPlaybooksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Playbooks, playbooks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPlaybooksResponseBody() = default ;
    ListPlaybooksResponseBody(const ListPlaybooksResponseBody &) = default ;
    ListPlaybooksResponseBody(ListPlaybooksResponseBody &&) = default ;
    ListPlaybooksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPlaybooksResponseBody() = default ;
    ListPlaybooksResponseBody& operator=(const ListPlaybooksResponseBody &) = default ;
    ListPlaybooksResponseBody& operator=(ListPlaybooksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->playbooks_ == nullptr && return this->requestId_ == nullptr
        && return this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPlaybooksResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPlaybooksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPlaybooksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPlaybooksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // playbooks Field Functions 
    bool hasPlaybooks() const { return this->playbooks_ != nullptr;};
    void deletePlaybooks() { this->playbooks_ = nullptr;};
    inline const vector<ListPlaybooksResponseBodyPlaybooks> & playbooks() const { DARABONBA_PTR_GET_CONST(playbooks_, vector<ListPlaybooksResponseBodyPlaybooks>) };
    inline vector<ListPlaybooksResponseBodyPlaybooks> playbooks() { DARABONBA_PTR_GET(playbooks_, vector<ListPlaybooksResponseBodyPlaybooks>) };
    inline ListPlaybooksResponseBody& setPlaybooks(const vector<ListPlaybooksResponseBodyPlaybooks> & playbooks) { DARABONBA_PTR_SET_VALUE(playbooks_, playbooks) };
    inline ListPlaybooksResponseBody& setPlaybooks(vector<ListPlaybooksResponseBodyPlaybooks> && playbooks) { DARABONBA_PTR_SET_RVALUE(playbooks_, playbooks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPlaybooksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPlaybooksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Maximum number of results allowed to be returned. Range: 0~100.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Token for the start of the next page query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Current page number. The default value is 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Number of items per page in a paginated query.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // List of playbooks.
    std::shared_ptr<vector<ListPlaybooksResponseBodyPlaybooks>> playbooks_ = nullptr;
    // The unique identifier generated by Alibaba Cloud for this request, which can be used for troubleshooting and problem localization.
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of items found.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
