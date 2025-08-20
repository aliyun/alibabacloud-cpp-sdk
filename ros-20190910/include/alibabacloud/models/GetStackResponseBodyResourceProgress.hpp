// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODYRESOURCEPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODYRESOURCEPROGRESS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetStackResponseBodyResourceProgressInProgressResourceDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackResponseBodyResourceProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackResponseBodyResourceProgress& obj) { 
      DARABONBA_PTR_TO_JSON(FailedResourceCount, failedResourceCount_);
      DARABONBA_PTR_TO_JSON(InProgressResourceCount, inProgressResourceCount_);
      DARABONBA_PTR_TO_JSON(InProgressResourceDetails, inProgressResourceDetails_);
      DARABONBA_PTR_TO_JSON(PendingResourceCount, pendingResourceCount_);
      DARABONBA_PTR_TO_JSON(StackActionProgress, stackActionProgress_);
      DARABONBA_PTR_TO_JSON(StackOperationProgress, stackOperationProgress_);
      DARABONBA_PTR_TO_JSON(SuccessResourceCount, successResourceCount_);
      DARABONBA_PTR_TO_JSON(TotalResourceCount, totalResourceCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackResponseBodyResourceProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedResourceCount, failedResourceCount_);
      DARABONBA_PTR_FROM_JSON(InProgressResourceCount, inProgressResourceCount_);
      DARABONBA_PTR_FROM_JSON(InProgressResourceDetails, inProgressResourceDetails_);
      DARABONBA_PTR_FROM_JSON(PendingResourceCount, pendingResourceCount_);
      DARABONBA_PTR_FROM_JSON(StackActionProgress, stackActionProgress_);
      DARABONBA_PTR_FROM_JSON(StackOperationProgress, stackOperationProgress_);
      DARABONBA_PTR_FROM_JSON(SuccessResourceCount, successResourceCount_);
      DARABONBA_PTR_FROM_JSON(TotalResourceCount, totalResourceCount_);
    };
    GetStackResponseBodyResourceProgress() = default ;
    GetStackResponseBodyResourceProgress(const GetStackResponseBodyResourceProgress &) = default ;
    GetStackResponseBodyResourceProgress(GetStackResponseBodyResourceProgress &&) = default ;
    GetStackResponseBodyResourceProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackResponseBodyResourceProgress() = default ;
    GetStackResponseBodyResourceProgress& operator=(const GetStackResponseBodyResourceProgress &) = default ;
    GetStackResponseBodyResourceProgress& operator=(GetStackResponseBodyResourceProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedResourceCount_ != nullptr
        && this->inProgressResourceCount_ != nullptr && this->inProgressResourceDetails_ != nullptr && this->pendingResourceCount_ != nullptr && this->stackActionProgress_ != nullptr && this->stackOperationProgress_ != nullptr
        && this->successResourceCount_ != nullptr && this->totalResourceCount_ != nullptr; };
    // failedResourceCount Field Functions 
    bool hasFailedResourceCount() const { return this->failedResourceCount_ != nullptr;};
    void deleteFailedResourceCount() { this->failedResourceCount_ = nullptr;};
    inline int32_t failedResourceCount() const { DARABONBA_PTR_GET_DEFAULT(failedResourceCount_, 0) };
    inline GetStackResponseBodyResourceProgress& setFailedResourceCount(int32_t failedResourceCount) { DARABONBA_PTR_SET_VALUE(failedResourceCount_, failedResourceCount) };


    // inProgressResourceCount Field Functions 
    bool hasInProgressResourceCount() const { return this->inProgressResourceCount_ != nullptr;};
    void deleteInProgressResourceCount() { this->inProgressResourceCount_ = nullptr;};
    inline int32_t inProgressResourceCount() const { DARABONBA_PTR_GET_DEFAULT(inProgressResourceCount_, 0) };
    inline GetStackResponseBodyResourceProgress& setInProgressResourceCount(int32_t inProgressResourceCount) { DARABONBA_PTR_SET_VALUE(inProgressResourceCount_, inProgressResourceCount) };


    // inProgressResourceDetails Field Functions 
    bool hasInProgressResourceDetails() const { return this->inProgressResourceDetails_ != nullptr;};
    void deleteInProgressResourceDetails() { this->inProgressResourceDetails_ = nullptr;};
    inline const vector<Models::GetStackResponseBodyResourceProgressInProgressResourceDetails> & inProgressResourceDetails() const { DARABONBA_PTR_GET_CONST(inProgressResourceDetails_, vector<Models::GetStackResponseBodyResourceProgressInProgressResourceDetails>) };
    inline vector<Models::GetStackResponseBodyResourceProgressInProgressResourceDetails> inProgressResourceDetails() { DARABONBA_PTR_GET(inProgressResourceDetails_, vector<Models::GetStackResponseBodyResourceProgressInProgressResourceDetails>) };
    inline GetStackResponseBodyResourceProgress& setInProgressResourceDetails(const vector<Models::GetStackResponseBodyResourceProgressInProgressResourceDetails> & inProgressResourceDetails) { DARABONBA_PTR_SET_VALUE(inProgressResourceDetails_, inProgressResourceDetails) };
    inline GetStackResponseBodyResourceProgress& setInProgressResourceDetails(vector<Models::GetStackResponseBodyResourceProgressInProgressResourceDetails> && inProgressResourceDetails) { DARABONBA_PTR_SET_RVALUE(inProgressResourceDetails_, inProgressResourceDetails) };


    // pendingResourceCount Field Functions 
    bool hasPendingResourceCount() const { return this->pendingResourceCount_ != nullptr;};
    void deletePendingResourceCount() { this->pendingResourceCount_ = nullptr;};
    inline int32_t pendingResourceCount() const { DARABONBA_PTR_GET_DEFAULT(pendingResourceCount_, 0) };
    inline GetStackResponseBodyResourceProgress& setPendingResourceCount(int32_t pendingResourceCount) { DARABONBA_PTR_SET_VALUE(pendingResourceCount_, pendingResourceCount) };


    // stackActionProgress Field Functions 
    bool hasStackActionProgress() const { return this->stackActionProgress_ != nullptr;};
    void deleteStackActionProgress() { this->stackActionProgress_ = nullptr;};
    inline float stackActionProgress() const { DARABONBA_PTR_GET_DEFAULT(stackActionProgress_, 0.0) };
    inline GetStackResponseBodyResourceProgress& setStackActionProgress(float stackActionProgress) { DARABONBA_PTR_SET_VALUE(stackActionProgress_, stackActionProgress) };


    // stackOperationProgress Field Functions 
    bool hasStackOperationProgress() const { return this->stackOperationProgress_ != nullptr;};
    void deleteStackOperationProgress() { this->stackOperationProgress_ = nullptr;};
    inline float stackOperationProgress() const { DARABONBA_PTR_GET_DEFAULT(stackOperationProgress_, 0.0) };
    inline GetStackResponseBodyResourceProgress& setStackOperationProgress(float stackOperationProgress) { DARABONBA_PTR_SET_VALUE(stackOperationProgress_, stackOperationProgress) };


    // successResourceCount Field Functions 
    bool hasSuccessResourceCount() const { return this->successResourceCount_ != nullptr;};
    void deleteSuccessResourceCount() { this->successResourceCount_ = nullptr;};
    inline int32_t successResourceCount() const { DARABONBA_PTR_GET_DEFAULT(successResourceCount_, 0) };
    inline GetStackResponseBodyResourceProgress& setSuccessResourceCount(int32_t successResourceCount) { DARABONBA_PTR_SET_VALUE(successResourceCount_, successResourceCount) };


    // totalResourceCount Field Functions 
    bool hasTotalResourceCount() const { return this->totalResourceCount_ != nullptr;};
    void deleteTotalResourceCount() { this->totalResourceCount_ = nullptr;};
    inline int32_t totalResourceCount() const { DARABONBA_PTR_GET_DEFAULT(totalResourceCount_, 0) };
    inline GetStackResponseBodyResourceProgress& setTotalResourceCount(int32_t totalResourceCount) { DARABONBA_PTR_SET_VALUE(totalResourceCount_, totalResourceCount) };


  protected:
    // The number of resources that failed to be created.
    // 
    // >  This parameter is returned only if `ShowResourceProgress` is set to `EnabledIfCreateStack`.
    std::shared_ptr<int32_t> failedResourceCount_ = nullptr;
    // The number of resources that are being created.
    // 
    // >  This parameter is returned only if `ShowResourceProgress` is set to `EnabledIfCreateStack`.
    std::shared_ptr<int32_t> inProgressResourceCount_ = nullptr;
    // The progress details of resources that are being created.
    // 
    // >  This parameter is returned only if `ShowResourceProgress` is set to `EnabledIfCreateStack`.
    std::shared_ptr<vector<Models::GetStackResponseBodyResourceProgressInProgressResourceDetails>> inProgressResourceDetails_ = nullptr;
    // The number of resources to be created.
    // 
    // >  This parameter is returned only if `ShowResourceProgress` is set to `EnabledIfCreateStack`.
    std::shared_ptr<int32_t> pendingResourceCount_ = nullptr;
    // The creation or rollback progress of the stack, in percentage. Valid values: 0 to 100.
    // 
    // The value progressively increases from 0 to 100 during a stack creation operation. If the stack is created, the value reaches 100. If the stack fails to be created, a rollback is started for the stack resources, and the value progressively increases from the percentage of the remaining progress (100 - Progress value generated when the stack fails to be created). The value increases to 100 when the stack resources are rolled back. This parameter indicates the creation progress during a stack creation operation and indicates the rollback progress during a stack rollback operation.
    // 
    // >  This parameter is returned only if `ShowResourceProgress` is set to `PercentageOnly`.
    std::shared_ptr<float> stackActionProgress_ = nullptr;
    // The overall creation progress of the stack, in percentage. Valid values: 0 to 100.
    // 
    // The value progressively increases from 0 to 100 during a stack creation operation. If the stack is created, the value reaches 100. If the stack fails to be created, a rollback is started for the stack resources, and the value progressively decreases. The value decreases to 0 when the stack resources are rolled back. This parameter indicates only the overall creation progress, regardless of whether during a stack creation or rollback operation.
    // 
    // >  This parameter is returned only if `ShowResourceProgress` is set to `PercentageOnly`.
    std::shared_ptr<float> stackOperationProgress_ = nullptr;
    // The number of resources that are created.
    // 
    // >  This parameter is returned only if `ShowResourceProgress` is set to `EnabledIfCreateStack`.
    std::shared_ptr<int32_t> successResourceCount_ = nullptr;
    // The total number of resources.
    // 
    // >  This parameter is returned only if `ShowResourceProgress` is set to `EnabledIfCreateStack`.
    std::shared_ptr<int32_t> totalResourceCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
