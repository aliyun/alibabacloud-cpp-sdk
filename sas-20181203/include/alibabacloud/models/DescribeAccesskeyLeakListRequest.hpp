// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSKEYLEAKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSKEYLEAKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAccesskeyLeakListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccesskeyLeakListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(StartTs, startTs_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccesskeyLeakListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(StartTs, startTs_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeAccesskeyLeakListRequest() = default ;
    DescribeAccesskeyLeakListRequest(const DescribeAccesskeyLeakListRequest &) = default ;
    DescribeAccesskeyLeakListRequest(DescribeAccesskeyLeakListRequest &&) = default ;
    DescribeAccesskeyLeakListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccesskeyLeakListRequest() = default ;
    DescribeAccesskeyLeakListRequest& operator=(const DescribeAccesskeyLeakListRequest &) = default ;
    DescribeAccesskeyLeakListRequest& operator=(DescribeAccesskeyLeakListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->pageSize_ == nullptr && return this->query_ == nullptr && return this->resourceDirectoryAccountId_ == nullptr && return this->startTs_ == nullptr && return this->status_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeAccesskeyLeakListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAccesskeyLeakListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline DescribeAccesskeyLeakListRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t resourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeAccesskeyLeakListRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // startTs Field Functions 
    bool hasStartTs() const { return this->startTs_ != nullptr;};
    void deleteStartTs() { this->startTs_ = nullptr;};
    inline int64_t startTs() const { DARABONBA_PTR_GET_DEFAULT(startTs_, 0L) };
    inline DescribeAccesskeyLeakListRequest& setStartTs(int64_t startTs) { DARABONBA_PTR_SET_VALUE(startTs_, startTs) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAccesskeyLeakListRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The number of the page to return. Default value: **1**.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries to return on each page.\\
    // Maximum value: 100. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // > We recommend that you do not leave this parameter empty.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The AccessKey ID that you want to query. Only exact match is supported.
    std::shared_ptr<string> query_ = nullptr;
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to query the ID.
    std::shared_ptr<int64_t> resourceDirectoryAccountId_ = nullptr;
    // The beginning of the time range to query. You can query all AccessKey pair leaks that are detected later than this time point. The value of this parameter is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> startTs_ = nullptr;
    // Specifies whether an AccessKey pair leak is handled. Valid values:
    // 
    // *   **pending**: unhandled
    // *   **dealed**: handled
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
