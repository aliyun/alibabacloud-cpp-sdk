// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYSUBSYNCJOBREVERSEJOBPRECHECKSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYSUBSYNCJOBREVERSEJOBPRECHECKSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatusDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatus() = default ;
    DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatus(const DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatus &) = default ;
    DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatus(DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatus &&) = default ;
    DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatus() = default ;
    DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatus& operator=(const DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatus &) = default ;
    DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatus& operator=(DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detail_ != nullptr
        && this->errorMessage_ != nullptr && this->percent_ != nullptr && this->status_ != nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const vector<Models::DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatusDetail> & detail() const { DARABONBA_PTR_GET_CONST(detail_, vector<Models::DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatusDetail>) };
    inline vector<Models::DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatusDetail> detail() { DARABONBA_PTR_GET(detail_, vector<Models::DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatusDetail>) };
    inline DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatus& setDetail(const vector<Models::DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatusDetail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatus& setDetail(vector<Models::DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatusDetail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline string percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The result of each precheck item.
    std::shared_ptr<vector<Models::DescribeDtsJobDetailResponseBodySubSyncJobReverseJobPrecheckStatusDetail>> detail_ = nullptr;
    // The error message returned if the task failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The precheck progress. Unit: percentage.
    std::shared_ptr<string> percent_ = nullptr;
    // The precheck state. Valid values:
    // 
    // *   **NotStarted**: The task is not started.
    // *   **Prechecking**: The task is in precheck.
    // *   **PrecheckFailed**: The task failed to pass the precheck.
    // *   **Finished**: The task is complete.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
