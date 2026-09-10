// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACHECKREPORTSTEPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACHECKREPORTSTEPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ListDataCheckReportStepRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCheckReportStepRequest& obj) { 
      DARABONBA_PTR_TO_JSON(checkResult, checkResult_);
      DARABONBA_PTR_TO_JSON(jobId, jobId_);
      DARABONBA_PTR_TO_JSON(jobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCheckReportStepRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(checkResult, checkResult_);
      DARABONBA_PTR_FROM_JSON(jobId, jobId_);
      DARABONBA_PTR_FROM_JSON(jobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ListDataCheckReportStepRequest() = default ;
    ListDataCheckReportStepRequest(const ListDataCheckReportStepRequest &) = default ;
    ListDataCheckReportStepRequest(ListDataCheckReportStepRequest &&) = default ;
    ListDataCheckReportStepRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCheckReportStepRequest() = default ;
    ListDataCheckReportStepRequest& operator=(const ListDataCheckReportStepRequest &) = default ;
    ListDataCheckReportStepRequest& operator=(ListDataCheckReportStepRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkResult_ == nullptr
        && this->jobId_ == nullptr && this->jobStatus_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr; };
    // checkResult Field Functions 
    bool hasCheckResult() const { return this->checkResult_ != nullptr;};
    void deleteCheckResult() { this->checkResult_ = nullptr;};
    inline int32_t getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, 0) };
    inline ListDataCheckReportStepRequest& setCheckResult(int32_t checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline ListDataCheckReportStepRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline int32_t getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, 0) };
    inline ListDataCheckReportStepRequest& setJobStatus(int32_t jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListDataCheckReportStepRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataCheckReportStepRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The verification result filter. Valid values:
    // 
    // - 0: no record.
    // - 1: passed.
    // - 2: failed.
    shared_ptr<int32_t> checkResult_ {};
    // The job database ID (integer) that identifies a verification sub-job. This parameter differs in format from the UUID-format sub-job ID (string) used in the operation that queries step details by UUID. The two are not interchangeable.
    // 
    // This parameter is required.
    shared_ptr<int64_t> jobId_ {};
    // The step status filter. Valid values:
    // 
    // - 0: INIT.
    // - 1: RUNNING.
    // - 2: FINISHED.
    // - 3: STOPPED.
    // - 4: FAIL.
    // - 6: READY.
    // - 7: SKIPPED.
    shared_ptr<int32_t> jobStatus_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageIndex_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
