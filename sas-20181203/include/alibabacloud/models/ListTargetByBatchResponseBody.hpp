// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTARGETBYBATCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTARGETBYBATCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListTargetByBatchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTargetByBatchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TargetList, targetList_);
    };
    friend void from_json(const Darabonba::Json& j, ListTargetByBatchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TargetList, targetList_);
    };
    ListTargetByBatchResponseBody() = default ;
    ListTargetByBatchResponseBody(const ListTargetByBatchResponseBody &) = default ;
    ListTargetByBatchResponseBody(ListTargetByBatchResponseBody &&) = default ;
    ListTargetByBatchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTargetByBatchResponseBody() = default ;
    ListTargetByBatchResponseBody& operator=(const ListTargetByBatchResponseBody &) = default ;
    ListTargetByBatchResponseBody& operator=(ListTargetByBatchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number of the current page in a paginated query.
      shared_ptr<int32_t> currentPage_ {};
      // The maximum number of items to return per page in a paginated query.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of items found in the query.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr && this->targetList_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListTargetByBatchResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListTargetByBatchResponseBody::PageInfo) };
    inline ListTargetByBatchResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListTargetByBatchResponseBody::PageInfo) };
    inline ListTargetByBatchResponseBody& setPageInfo(const ListTargetByBatchResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListTargetByBatchResponseBody& setPageInfo(ListTargetByBatchResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTargetByBatchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // targetList Field Functions 
    bool hasTargetList() const { return this->targetList_ != nullptr;};
    void deleteTargetList() { this->targetList_ = nullptr;};
    inline const vector<string> & getTargetList() const { DARABONBA_PTR_GET_CONST(targetList_, vector<string>) };
    inline vector<string> getTargetList() { DARABONBA_PTR_GET(targetList_, vector<string>) };
    inline ListTargetByBatchResponseBody& setTargetList(const vector<string> & targetList) { DARABONBA_PTR_SET_VALUE(targetList_, targetList) };
    inline ListTargetByBatchResponseBody& setTargetList(vector<string> && targetList) { DARABONBA_PTR_SET_RVALUE(targetList_, targetList) };


  protected:
    // Pagination information.
    shared_ptr<ListTargetByBatchResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is a unique identifier generated by Alibaba Cloud for this request and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
    // The returned list.
    shared_ptr<vector<string>> targetList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
