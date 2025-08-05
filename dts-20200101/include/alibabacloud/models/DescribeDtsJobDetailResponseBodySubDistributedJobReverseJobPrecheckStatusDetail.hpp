// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYSUBDISTRIBUTEDJOBREVERSEJOBPRECHECKSTATUSDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYSUBDISTRIBUTEDJOBREVERSEJOBPRECHECKSTATUSDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobPrecheckStatusDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobPrecheckStatusDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
      DARABONBA_PTR_TO_JSON(CheckItemDescription, checkItemDescription_);
      DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
      DARABONBA_PTR_TO_JSON(FailedReason, failedReason_);
      DARABONBA_PTR_TO_JSON(RepairMethod, repairMethod_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobPrecheckStatusDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
      DARABONBA_PTR_FROM_JSON(CheckItemDescription, checkItemDescription_);
      DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
      DARABONBA_PTR_FROM_JSON(FailedReason, failedReason_);
      DARABONBA_PTR_FROM_JSON(RepairMethod, repairMethod_);
    };
    DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobPrecheckStatusDetail() = default ;
    DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobPrecheckStatusDetail(const DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobPrecheckStatusDetail &) = default ;
    DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobPrecheckStatusDetail(DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobPrecheckStatusDetail &&) = default ;
    DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobPrecheckStatusDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobPrecheckStatusDetail() = default ;
    DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobPrecheckStatusDetail& operator=(const DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobPrecheckStatusDetail &) = default ;
    DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobPrecheckStatusDetail& operator=(DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobPrecheckStatusDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkItem_ != nullptr
        && this->checkItemDescription_ != nullptr && this->checkResult_ != nullptr && this->failedReason_ != nullptr && this->repairMethod_ != nullptr; };
    // checkItem Field Functions 
    bool hasCheckItem() const { return this->checkItem_ != nullptr;};
    void deleteCheckItem() { this->checkItem_ = nullptr;};
    inline string checkItem() const { DARABONBA_PTR_GET_DEFAULT(checkItem_, "") };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobPrecheckStatusDetail& setCheckItem(string checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };


    // checkItemDescription Field Functions 
    bool hasCheckItemDescription() const { return this->checkItemDescription_ != nullptr;};
    void deleteCheckItemDescription() { this->checkItemDescription_ = nullptr;};
    inline string checkItemDescription() const { DARABONBA_PTR_GET_DEFAULT(checkItemDescription_, "") };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobPrecheckStatusDetail& setCheckItemDescription(string checkItemDescription) { DARABONBA_PTR_SET_VALUE(checkItemDescription_, checkItemDescription) };


    // checkResult Field Functions 
    bool hasCheckResult() const { return this->checkResult_ != nullptr;};
    void deleteCheckResult() { this->checkResult_ = nullptr;};
    inline string checkResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, "") };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobPrecheckStatusDetail& setCheckResult(string checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


    // failedReason Field Functions 
    bool hasFailedReason() const { return this->failedReason_ != nullptr;};
    void deleteFailedReason() { this->failedReason_ = nullptr;};
    inline string failedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobPrecheckStatusDetail& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


    // repairMethod Field Functions 
    bool hasRepairMethod() const { return this->repairMethod_ != nullptr;};
    void deleteRepairMethod() { this->repairMethod_ = nullptr;};
    inline string repairMethod() const { DARABONBA_PTR_GET_DEFAULT(repairMethod_, "") };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobPrecheckStatusDetail& setRepairMethod(string repairMethod) { DARABONBA_PTR_SET_VALUE(repairMethod_, repairMethod) };


  protected:
    // The name of the precheck item.
    std::shared_ptr<string> checkItem_ = nullptr;
    // The description of the precheck item.
    std::shared_ptr<string> checkItemDescription_ = nullptr;
    // The precheck result. Valid values:
    // 
    // *   **Success**
    // *   **Failed**
    std::shared_ptr<string> checkResult_ = nullptr;
    // The error message returned if the task failed to pass the precheck.
    // 
    // > This parameter is returned only if the return value of **CheckResult** is **Failed**.
    std::shared_ptr<string> failedReason_ = nullptr;
    // The method used to fix the precheck failure.
    // 
    // > This parameter is returned only if the return value of **CheckResult** is **Failed**.
    std::shared_ptr<string> repairMethod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
