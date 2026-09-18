// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCANTASKSBYTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCANTASKSBYTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class ListScanTasksByTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScanTasksByTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SampleLevel, sampleLevel_);
      DARABONBA_PTR_TO_JSON(ScanType, scanType_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListScanTasksByTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SampleLevel, sampleLevel_);
      DARABONBA_PTR_FROM_JSON(ScanType, scanType_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
    };
    ListScanTasksByTargetRequest() = default ;
    ListScanTasksByTargetRequest(const ListScanTasksByTargetRequest &) = default ;
    ListScanTasksByTargetRequest(ListScanTasksByTargetRequest &&) = default ;
    ListScanTasksByTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScanTasksByTargetRequest() = default ;
    ListScanTasksByTargetRequest& operator=(const ListScanTasksByTargetRequest &) = default ;
    ListScanTasksByTargetRequest& operator=(ListScanTasksByTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->sampleLevel_ == nullptr && this->scanType_ == nullptr && this->targetId_ == nullptr && this->taskStatus_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListScanTasksByTargetRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListScanTasksByTargetRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sampleLevel Field Functions 
    bool hasSampleLevel() const { return this->sampleLevel_ != nullptr;};
    void deleteSampleLevel() { this->sampleLevel_ = nullptr;};
    inline string getSampleLevel() const { DARABONBA_PTR_GET_DEFAULT(sampleLevel_, "") };
    inline ListScanTasksByTargetRequest& setSampleLevel(string sampleLevel) { DARABONBA_PTR_SET_VALUE(sampleLevel_, sampleLevel) };


    // scanType Field Functions 
    bool hasScanType() const { return this->scanType_ != nullptr;};
    void deleteScanType() { this->scanType_ = nullptr;};
    inline string getScanType() const { DARABONBA_PTR_GET_DEFAULT(scanType_, "") };
    inline ListScanTasksByTargetRequest& setScanType(string scanType) { DARABONBA_PTR_SET_VALUE(scanType_, scanType) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline ListScanTasksByTargetRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline ListScanTasksByTargetRequest& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    // The page number, starting from 1. Values less than 1 are normalized to 1.
    // 
    // This parameter is required.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page. Default value: 10. Maximum value: 100. Values greater than 100 are clamped to 100. Values less than 1 return HTTP status code 400.
    // 
    // This parameter is required.
    shared_ptr<string> pageSize_ {};
    // Filters by detection intensity. If this parameter is not specified, no filtering by intensity is applied.
    shared_ptr<string> sampleLevel_ {};
    // Filters by scan type. If this parameter is not specified, tasks of all scan types are returned.
    shared_ptr<string> scanType_ {};
    // The unique identifier of the scan target. Only tasks under this target are queried. If the target does not exist or does not belong to the current tenant, HTTP status code 400 is returned.
    // 
    // This parameter is required.
    shared_ptr<string> targetId_ {};
    // Filters by task status. If this parameter is not specified, tasks in all statuses are returned.
    shared_ptr<string> taskStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
