// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRestoreJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(MachineRemark, machineRemark_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(MachineRemark, machineRemark_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeRestoreJobsRequest() = default ;
    DescribeRestoreJobsRequest(const DescribeRestoreJobsRequest &) = default ;
    DescribeRestoreJobsRequest(DescribeRestoreJobsRequest &&) = default ;
    DescribeRestoreJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreJobsRequest() = default ;
    DescribeRestoreJobsRequest& operator=(const DescribeRestoreJobsRequest &) = default ;
    DescribeRestoreJobsRequest& operator=(DescribeRestoreJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->machineRemark_ == nullptr && return this->pageSize_ == nullptr && return this->status_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeRestoreJobsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // machineRemark Field Functions 
    bool hasMachineRemark() const { return this->machineRemark_ != nullptr;};
    void deleteMachineRemark() { this->machineRemark_ = nullptr;};
    inline string machineRemark() const { DARABONBA_PTR_GET_DEFAULT(machineRemark_, "") };
    inline DescribeRestoreJobsRequest& setMachineRemark(string machineRemark) { DARABONBA_PTR_SET_VALUE(machineRemark_, machineRemark) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRestoreJobsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRestoreJobsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The number of the page to return. Default value: **1**.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The unique identifier of the server on which the restoration task is run. For example, you can use the IP address or the name of the server.
    std::shared_ptr<string> machineRemark_ = nullptr;
    // The number of entries to return on each page. Default value: **10**.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The status of the restoration task. Valid values:
    // 
    // *   **RUNNING**: The task is running.
    // *   **COMPLETE**: The task is complete.
    // *   **FAILED**: The task fails.
    // *   **CANCELING**: The task is being canceled.
    // *   **CANCELED**: The task is canceled.
    // *   **PARTIAL_COMPLETE**: The task is partially successful.
    // *   **CREATED**: The task is created but is not run.
    // *   **EXPIRED**: The task is not updated.
    // *   **QUEUED**: The task is waiting to be run.
    // *   **CLIENT_DELETED**: The task fails because the anti-ransomware agent is uninstalled.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
