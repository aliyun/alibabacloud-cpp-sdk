// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIAWORKFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIAWORKFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchMediaWorkflowResponseBodyMediaWorkflowList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SearchMediaWorkflowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaWorkflowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaWorkflowList, mediaWorkflowList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaWorkflowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaWorkflowList, mediaWorkflowList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchMediaWorkflowResponseBody() = default ;
    SearchMediaWorkflowResponseBody(const SearchMediaWorkflowResponseBody &) = default ;
    SearchMediaWorkflowResponseBody(SearchMediaWorkflowResponseBody &&) = default ;
    SearchMediaWorkflowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaWorkflowResponseBody() = default ;
    SearchMediaWorkflowResponseBody& operator=(const SearchMediaWorkflowResponseBody &) = default ;
    SearchMediaWorkflowResponseBody& operator=(SearchMediaWorkflowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaWorkflowList_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // mediaWorkflowList Field Functions 
    bool hasMediaWorkflowList() const { return this->mediaWorkflowList_ != nullptr;};
    void deleteMediaWorkflowList() { this->mediaWorkflowList_ = nullptr;};
    inline const SearchMediaWorkflowResponseBodyMediaWorkflowList & mediaWorkflowList() const { DARABONBA_PTR_GET_CONST(mediaWorkflowList_, SearchMediaWorkflowResponseBodyMediaWorkflowList) };
    inline SearchMediaWorkflowResponseBodyMediaWorkflowList mediaWorkflowList() { DARABONBA_PTR_GET(mediaWorkflowList_, SearchMediaWorkflowResponseBodyMediaWorkflowList) };
    inline SearchMediaWorkflowResponseBody& setMediaWorkflowList(const SearchMediaWorkflowResponseBodyMediaWorkflowList & mediaWorkflowList) { DARABONBA_PTR_SET_VALUE(mediaWorkflowList_, mediaWorkflowList) };
    inline SearchMediaWorkflowResponseBody& setMediaWorkflowList(SearchMediaWorkflowResponseBodyMediaWorkflowList && mediaWorkflowList) { DARABONBA_PTR_SET_RVALUE(mediaWorkflowList_, mediaWorkflowList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline SearchMediaWorkflowResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline SearchMediaWorkflowResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchMediaWorkflowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline SearchMediaWorkflowResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the media workflows.
    std::shared_ptr<SearchMediaWorkflowResponseBodyMediaWorkflowList> mediaWorkflowList_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries returned on each page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
