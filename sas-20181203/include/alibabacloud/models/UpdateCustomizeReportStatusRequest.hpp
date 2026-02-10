// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMIZEREPORTSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMIZEREPORTSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateCustomizeReportStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomizeReportStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PinnedTime, pinnedTime_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(ReportStatus, reportStatus_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomizeReportStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PinnedTime, pinnedTime_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(ReportStatus, reportStatus_);
    };
    UpdateCustomizeReportStatusRequest() = default ;
    UpdateCustomizeReportStatusRequest(const UpdateCustomizeReportStatusRequest &) = default ;
    UpdateCustomizeReportStatusRequest(UpdateCustomizeReportStatusRequest &&) = default ;
    UpdateCustomizeReportStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomizeReportStatusRequest() = default ;
    UpdateCustomizeReportStatusRequest& operator=(const UpdateCustomizeReportStatusRequest &) = default ;
    UpdateCustomizeReportStatusRequest& operator=(UpdateCustomizeReportStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pinnedTime_ == nullptr
        && this->reportId_ == nullptr && this->reportStatus_ == nullptr; };
    // pinnedTime Field Functions 
    bool hasPinnedTime() const { return this->pinnedTime_ != nullptr;};
    void deletePinnedTime() { this->pinnedTime_ = nullptr;};
    inline int64_t getPinnedTime() const { DARABONBA_PTR_GET_DEFAULT(pinnedTime_, 0L) };
    inline UpdateCustomizeReportStatusRequest& setPinnedTime(int64_t pinnedTime) { DARABONBA_PTR_SET_VALUE(pinnedTime_, pinnedTime) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline UpdateCustomizeReportStatusRequest& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // reportStatus Field Functions 
    bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
    void deleteReportStatus() { this->reportStatus_ = nullptr;};
    inline int32_t getReportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, 0) };
    inline UpdateCustomizeReportStatusRequest& setReportStatus(int32_t reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


  protected:
    // The time when the report is pinned. Unit: milliseconds.
    shared_ptr<int64_t> pinnedTime_ {};
    // The ID of the report.
    // 
    // >  You can call the [DescribeCustomizeReportList](~~DescribeCustomizeReportList~~) operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> reportId_ {};
    // The status of the report. Valid values:
    // 
    // *   **0**: disabled.
    // *   **1**: enabled.
    // 
    // This parameter is required.
    shared_ptr<int32_t> reportStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
