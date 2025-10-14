// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETDNSLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETDNSLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInternetDnsLogsResponseBodyLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeInternetDnsLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetDnsLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Complete, complete_);
      DARABONBA_PTR_TO_JSON(CurPage, curPage_);
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetDnsLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Complete, complete_);
      DARABONBA_PTR_FROM_JSON(CurPage, curPage_);
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    DescribeInternetDnsLogsResponseBody() = default ;
    DescribeInternetDnsLogsResponseBody(const DescribeInternetDnsLogsResponseBody &) = default ;
    DescribeInternetDnsLogsResponseBody(DescribeInternetDnsLogsResponseBody &&) = default ;
    DescribeInternetDnsLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetDnsLogsResponseBody() = default ;
    DescribeInternetDnsLogsResponseBody& operator=(const DescribeInternetDnsLogsResponseBody &) = default ;
    DescribeInternetDnsLogsResponseBody& operator=(DescribeInternetDnsLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complete_ == nullptr
        && return this->curPage_ == nullptr && return this->logs_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalPage_ == nullptr
        && return this->totalSize_ == nullptr; };
    // complete Field Functions 
    bool hasComplete() const { return this->complete_ != nullptr;};
    void deleteComplete() { this->complete_ = nullptr;};
    inline bool complete() const { DARABONBA_PTR_GET_DEFAULT(complete_, false) };
    inline DescribeInternetDnsLogsResponseBody& setComplete(bool complete) { DARABONBA_PTR_SET_VALUE(complete_, complete) };


    // curPage Field Functions 
    bool hasCurPage() const { return this->curPage_ != nullptr;};
    void deleteCurPage() { this->curPage_ = nullptr;};
    inline int32_t curPage() const { DARABONBA_PTR_GET_DEFAULT(curPage_, 0) };
    inline DescribeInternetDnsLogsResponseBody& setCurPage(int32_t curPage) { DARABONBA_PTR_SET_VALUE(curPage_, curPage) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const DescribeInternetDnsLogsResponseBodyLogs & logs() const { DARABONBA_PTR_GET_CONST(logs_, DescribeInternetDnsLogsResponseBodyLogs) };
    inline DescribeInternetDnsLogsResponseBodyLogs logs() { DARABONBA_PTR_GET(logs_, DescribeInternetDnsLogsResponseBodyLogs) };
    inline DescribeInternetDnsLogsResponseBody& setLogs(const DescribeInternetDnsLogsResponseBodyLogs & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline DescribeInternetDnsLogsResponseBody& setLogs(DescribeInternetDnsLogsResponseBodyLogs && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInternetDnsLogsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInternetDnsLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeInternetDnsLogsResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline DescribeInternetDnsLogsResponseBody& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // Indicates whether the log query is precise.
    std::shared_ptr<bool> complete_ = nullptr;
    // Current page number.
    std::shared_ptr<int32_t> curPage_ = nullptr;
    // The queried logs.
    std::shared_ptr<DescribeInternetDnsLogsResponseBodyLogs> logs_ = nullptr;
    // Page size for query.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Unique request identifier.
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of pages.
    std::shared_ptr<int32_t> totalPage_ = nullptr;
    // Total quantity.
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
