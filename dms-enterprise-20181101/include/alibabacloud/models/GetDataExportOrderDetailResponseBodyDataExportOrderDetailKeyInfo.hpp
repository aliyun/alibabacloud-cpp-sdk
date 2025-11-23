// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAEXPORTORDERDETAILRESPONSEBODYDATAEXPORTORDERDETAILKEYINFO_HPP_
#define ALIBABACLOUD_MODELS_GETDATAEXPORTORDERDETAILRESPONSEBODYDATAEXPORTORDERDETAILKEYINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(PreCheckId, preCheckId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(PreCheckId, preCheckId_);
    };
    GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo() = default ;
    GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo(const GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo &) = default ;
    GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo(GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo &&) = default ;
    GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo() = default ;
    GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo& operator=(const GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo &) = default ;
    GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo& operator=(GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && return this->jobStatus_ == nullptr && return this->preCheckId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string jobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // preCheckId Field Functions 
    bool hasPreCheckId() const { return this->preCheckId_ != nullptr;};
    void deletePreCheckId() { this->preCheckId_ = nullptr;};
    inline int64_t preCheckId() const { DARABONBA_PTR_GET_DEFAULT(preCheckId_, 0L) };
    inline GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo& setPreCheckId(int64_t preCheckId) { DARABONBA_PTR_SET_VALUE(preCheckId_, preCheckId) };


  protected:
    // Export task ID.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    // The state of the data export ticket. Valid values:
    // 
    // *   **PRE_CHECKING**: The ticket was being prechecked.
    // *   **PRE_CHECK_SUCCESS**: The ticket passed the precheck.
    // *   **PRE_CHECK_FAIL**: The ticket failed to pass the prechecked.
    // *   **WAITING_APPLY_AUDIT**: The ticket was to be submitted for approval.
    // *   **APPLY_AUDIT_SUCCESS**: The ticket was submitted for approval.
    // *   **ENABLE_EXPORT**: The ticket was approved. Data can be exported.
    // *   **WAITING_EXPORT**: Data was to be scheduled for export.
    // *   **DOING_EXPORT**: Data was being exported.
    // *   **EXPORT_FAIL**: Data failed to be exported.
    // *   **EXPORT_SUCCESS**: Data was exported.
    std::shared_ptr<string> jobStatus_ = nullptr;
    // The precheck ID.
    std::shared_ptr<int64_t> preCheckId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
