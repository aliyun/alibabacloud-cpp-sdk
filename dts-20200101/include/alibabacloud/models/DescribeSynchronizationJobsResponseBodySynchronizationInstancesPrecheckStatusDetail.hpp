// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONINSTANCESPRECHECKSTATUSDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONINSTANCESPRECHECKSTATUSDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ItemName, itemName_);
      DARABONBA_PTR_TO_JSON(RepairMethod, repairMethod_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
      DARABONBA_PTR_FROM_JSON(RepairMethod, repairMethod_);
    };
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail() = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail(const DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail &) = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail(DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail &&) = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail() = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail& operator=(const DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail &) = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail& operator=(DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkStatus_ != nullptr
        && this->errorMessage_ != nullptr && this->itemName_ != nullptr && this->repairMethod_ != nullptr; };
    // checkStatus Field Functions 
    bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
    void deleteCheckStatus() { this->checkStatus_ = nullptr;};
    inline string checkStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail& setCheckStatus(string checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // itemName Field Functions 
    bool hasItemName() const { return this->itemName_ != nullptr;};
    void deleteItemName() { this->itemName_ = nullptr;};
    inline string itemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


    // repairMethod Field Functions 
    bool hasRepairMethod() const { return this->repairMethod_ != nullptr;};
    void deleteRepairMethod() { this->repairMethod_ = nullptr;};
    inline string repairMethod() const { DARABONBA_PTR_GET_DEFAULT(repairMethod_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail& setRepairMethod(string repairMethod) { DARABONBA_PTR_SET_VALUE(repairMethod_, repairMethod) };


  protected:
    // The precheck result. Valid values:
    // 
    // *   **Success**: The task passed the precheck.
    // *   **Failed**: The task failed to pass the precheck.
    std::shared_ptr<string> checkStatus_ = nullptr;
    // The error message returned if the task failed to pass the precheck.
    // 
    // >  This parameter is returned only if the return value of the **CheckStatus** parameter is **Failed**.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The name of the precheck item.
    std::shared_ptr<string> itemName_ = nullptr;
    // The method to fix the precheck failure.
    // 
    // >  This parameter is returned only if the return value of the **CheckStatus** parameter is **Failed**.
    std::shared_ptr<string> repairMethod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
