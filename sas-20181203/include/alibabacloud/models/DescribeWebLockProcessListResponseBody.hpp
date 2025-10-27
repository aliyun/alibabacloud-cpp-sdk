// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKPROCESSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKPROCESSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebLockProcessListResponseBodyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWebLockProcessListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebLockProcessListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebLockProcessListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeWebLockProcessListResponseBody() = default ;
    DescribeWebLockProcessListResponseBody(const DescribeWebLockProcessListResponseBody &) = default ;
    DescribeWebLockProcessListResponseBody(DescribeWebLockProcessListResponseBody &&) = default ;
    DescribeWebLockProcessListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebLockProcessListResponseBody() = default ;
    DescribeWebLockProcessListResponseBody& operator=(const DescribeWebLockProcessListResponseBody &) = default ;
    DescribeWebLockProcessListResponseBody& operator=(DescribeWebLockProcessListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->list_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeWebLockProcessListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<DescribeWebLockProcessListResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<DescribeWebLockProcessListResponseBodyList>) };
    inline vector<DescribeWebLockProcessListResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<DescribeWebLockProcessListResponseBodyList>) };
    inline DescribeWebLockProcessListResponseBody& setList(const vector<DescribeWebLockProcessListResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeWebLockProcessListResponseBody& setList(vector<DescribeWebLockProcessListResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeWebLockProcessListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebLockProcessListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeWebLockProcessListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // An array that consists of details about the process.
    std::shared_ptr<vector<DescribeWebLockProcessListResponseBodyList>> list_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of processes.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
