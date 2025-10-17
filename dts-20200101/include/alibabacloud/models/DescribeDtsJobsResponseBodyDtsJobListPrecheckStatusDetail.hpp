// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYDTSJOBLISTPRECHECKSTATUSDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYDTSJOBLISTPRECHECKSTATUSDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobsResponseBodyDtsJobListPrecheckStatusDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobsResponseBodyDtsJobListPrecheckStatusDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
      DARABONBA_PTR_TO_JSON(CheckItemDescription, checkItemDescription_);
      DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
      DARABONBA_PTR_TO_JSON(FailedReason, failedReason_);
      DARABONBA_PTR_TO_JSON(RepairMethod, repairMethod_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobsResponseBodyDtsJobListPrecheckStatusDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
      DARABONBA_PTR_FROM_JSON(CheckItemDescription, checkItemDescription_);
      DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
      DARABONBA_PTR_FROM_JSON(FailedReason, failedReason_);
      DARABONBA_PTR_FROM_JSON(RepairMethod, repairMethod_);
    };
    DescribeDtsJobsResponseBodyDtsJobListPrecheckStatusDetail() = default ;
    DescribeDtsJobsResponseBodyDtsJobListPrecheckStatusDetail(const DescribeDtsJobsResponseBodyDtsJobListPrecheckStatusDetail &) = default ;
    DescribeDtsJobsResponseBodyDtsJobListPrecheckStatusDetail(DescribeDtsJobsResponseBodyDtsJobListPrecheckStatusDetail &&) = default ;
    DescribeDtsJobsResponseBodyDtsJobListPrecheckStatusDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobsResponseBodyDtsJobListPrecheckStatusDetail() = default ;
    DescribeDtsJobsResponseBodyDtsJobListPrecheckStatusDetail& operator=(const DescribeDtsJobsResponseBodyDtsJobListPrecheckStatusDetail &) = default ;
    DescribeDtsJobsResponseBodyDtsJobListPrecheckStatusDetail& operator=(DescribeDtsJobsResponseBodyDtsJobListPrecheckStatusDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkItem_ == nullptr
        && return this->checkItemDescription_ == nullptr && return this->checkResult_ == nullptr && return this->failedReason_ == nullptr && return this->repairMethod_ == nullptr; };
    // checkItem Field Functions 
    bool hasCheckItem() const { return this->checkItem_ != nullptr;};
    void deleteCheckItem() { this->checkItem_ = nullptr;};
    inline string checkItem() const { DARABONBA_PTR_GET_DEFAULT(checkItem_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListPrecheckStatusDetail& setCheckItem(string checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };


    // checkItemDescription Field Functions 
    bool hasCheckItemDescription() const { return this->checkItemDescription_ != nullptr;};
    void deleteCheckItemDescription() { this->checkItemDescription_ = nullptr;};
    inline string checkItemDescription() const { DARABONBA_PTR_GET_DEFAULT(checkItemDescription_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListPrecheckStatusDetail& setCheckItemDescription(string checkItemDescription) { DARABONBA_PTR_SET_VALUE(checkItemDescription_, checkItemDescription) };


    // checkResult Field Functions 
    bool hasCheckResult() const { return this->checkResult_ != nullptr;};
    void deleteCheckResult() { this->checkResult_ = nullptr;};
    inline string checkResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListPrecheckStatusDetail& setCheckResult(string checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


    // failedReason Field Functions 
    bool hasFailedReason() const { return this->failedReason_ != nullptr;};
    void deleteFailedReason() { this->failedReason_ = nullptr;};
    inline string failedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListPrecheckStatusDetail& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


    // repairMethod Field Functions 
    bool hasRepairMethod() const { return this->repairMethod_ != nullptr;};
    void deleteRepairMethod() { this->repairMethod_ = nullptr;};
    inline string repairMethod() const { DARABONBA_PTR_GET_DEFAULT(repairMethod_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListPrecheckStatusDetail& setRepairMethod(string repairMethod) { DARABONBA_PTR_SET_VALUE(repairMethod_, repairMethod) };


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
    // >  This parameter is returned only if the value of the **CheckResult** parameter is **Failed**.
    std::shared_ptr<string> failedReason_ = nullptr;
    // The method to fix the precheck failure.
    // 
    // >  This parameter is returned only if the value of the **CheckResult** parameter is **Failed**.
    std::shared_ptr<string> repairMethod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
