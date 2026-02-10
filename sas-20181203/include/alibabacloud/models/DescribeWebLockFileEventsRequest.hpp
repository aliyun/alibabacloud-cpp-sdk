// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKFILEEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKFILEEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWebLockFileEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebLockFileEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Dealed, dealed_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(TsBegin, tsBegin_);
      DARABONBA_PTR_TO_JSON(TsEnd, tsEnd_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebLockFileEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Dealed, dealed_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(TsBegin, tsBegin_);
      DARABONBA_PTR_FROM_JSON(TsEnd, tsEnd_);
    };
    DescribeWebLockFileEventsRequest() = default ;
    DescribeWebLockFileEventsRequest(const DescribeWebLockFileEventsRequest &) = default ;
    DescribeWebLockFileEventsRequest(DescribeWebLockFileEventsRequest &&) = default ;
    DescribeWebLockFileEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebLockFileEventsRequest() = default ;
    DescribeWebLockFileEventsRequest& operator=(const DescribeWebLockFileEventsRequest &) = default ;
    DescribeWebLockFileEventsRequest& operator=(DescribeWebLockFileEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->dealed_ == nullptr && this->pageSize_ == nullptr && this->processName_ == nullptr && this->remark_ == nullptr && this->tsBegin_ == nullptr
        && this->tsEnd_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeWebLockFileEventsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dealed Field Functions 
    bool hasDealed() const { return this->dealed_ != nullptr;};
    void deleteDealed() { this->dealed_ = nullptr;};
    inline string getDealed() const { DARABONBA_PTR_GET_DEFAULT(dealed_, "") };
    inline DescribeWebLockFileEventsRequest& setDealed(string dealed) { DARABONBA_PTR_SET_VALUE(dealed_, dealed) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeWebLockFileEventsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline DescribeWebLockFileEventsRequest& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeWebLockFileEventsRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // tsBegin Field Functions 
    bool hasTsBegin() const { return this->tsBegin_ != nullptr;};
    void deleteTsBegin() { this->tsBegin_ = nullptr;};
    inline int64_t getTsBegin() const { DARABONBA_PTR_GET_DEFAULT(tsBegin_, 0L) };
    inline DescribeWebLockFileEventsRequest& setTsBegin(int64_t tsBegin) { DARABONBA_PTR_SET_VALUE(tsBegin_, tsBegin) };


    // tsEnd Field Functions 
    bool hasTsEnd() const { return this->tsEnd_ != nullptr;};
    void deleteTsEnd() { this->tsEnd_ = nullptr;};
    inline int64_t getTsEnd() const { DARABONBA_PTR_GET_DEFAULT(tsEnd_, 0L) };
    inline DescribeWebLockFileEventsRequest& setTsEnd(int64_t tsEnd) { DARABONBA_PTR_SET_VALUE(tsEnd_, tsEnd) };


  protected:
    // The number of the page to return. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // Specifies whether the event on web tamper proofing is handled. Valid values:
    // 
    // *   **n**: The event on web tamper proofing is handled.
    // *   **y**: The event on web tamper proofing is not handled.
    shared_ptr<string> dealed_ {};
    // The number of entries to return on each page. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the process.
    shared_ptr<string> processName_ {};
    // The name of the asset.
    // 
    // > You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the names of assets.
    shared_ptr<string> remark_ {};
    // The beginning of the time range to query. The value is a UNIX timestamp.
    shared_ptr<int64_t> tsBegin_ {};
    // The end of the time range to query. The value is a UNIX timestamp.
    shared_ptr<int64_t> tsEnd_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
