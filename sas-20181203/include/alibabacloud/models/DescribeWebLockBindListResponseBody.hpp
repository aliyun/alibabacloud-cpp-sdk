// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKBINDLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKBINDLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebLockBindListResponseBodyBindList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWebLockBindListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebLockBindListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BindList, bindList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebLockBindListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BindList, bindList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeWebLockBindListResponseBody() = default ;
    DescribeWebLockBindListResponseBody(const DescribeWebLockBindListResponseBody &) = default ;
    DescribeWebLockBindListResponseBody(DescribeWebLockBindListResponseBody &&) = default ;
    DescribeWebLockBindListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebLockBindListResponseBody() = default ;
    DescribeWebLockBindListResponseBody& operator=(const DescribeWebLockBindListResponseBody &) = default ;
    DescribeWebLockBindListResponseBody& operator=(DescribeWebLockBindListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindList_ != nullptr
        && this->currentPage_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // bindList Field Functions 
    bool hasBindList() const { return this->bindList_ != nullptr;};
    void deleteBindList() { this->bindList_ = nullptr;};
    inline const vector<DescribeWebLockBindListResponseBodyBindList> & bindList() const { DARABONBA_PTR_GET_CONST(bindList_, vector<DescribeWebLockBindListResponseBodyBindList>) };
    inline vector<DescribeWebLockBindListResponseBodyBindList> bindList() { DARABONBA_PTR_GET(bindList_, vector<DescribeWebLockBindListResponseBodyBindList>) };
    inline DescribeWebLockBindListResponseBody& setBindList(const vector<DescribeWebLockBindListResponseBodyBindList> & bindList) { DARABONBA_PTR_SET_VALUE(bindList_, bindList) };
    inline DescribeWebLockBindListResponseBody& setBindList(vector<DescribeWebLockBindListResponseBodyBindList> && bindList) { DARABONBA_PTR_SET_RVALUE(bindList_, bindList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeWebLockBindListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeWebLockBindListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebLockBindListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeWebLockBindListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the servers that have web tamper proofing enabled.
    std::shared_ptr<vector<DescribeWebLockBindListResponseBodyBindList>> bindList_ = nullptr;
    // The page number of the returned page. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries returned per page. Default value: 20.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of servers that have web tamper proofing enabled.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
