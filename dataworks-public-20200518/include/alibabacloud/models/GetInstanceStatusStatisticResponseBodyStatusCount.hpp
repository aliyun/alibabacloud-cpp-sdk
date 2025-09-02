// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESTATUSSTATISTICRESPONSEBODYSTATUSCOUNT_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESTATUSSTATISTICRESPONSEBODYSTATUSCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetInstanceStatusStatisticResponseBodyStatusCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceStatusStatisticResponseBodyStatusCount& obj) { 
      DARABONBA_PTR_TO_JSON(FailureCount, failureCount_);
      DARABONBA_PTR_TO_JSON(NotRunCount, notRunCount_);
      DARABONBA_PTR_TO_JSON(RunningCount, runningCount_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WaitResCount, waitResCount_);
      DARABONBA_PTR_TO_JSON(WaitTimeCount, waitTimeCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceStatusStatisticResponseBodyStatusCount& obj) { 
      DARABONBA_PTR_FROM_JSON(FailureCount, failureCount_);
      DARABONBA_PTR_FROM_JSON(NotRunCount, notRunCount_);
      DARABONBA_PTR_FROM_JSON(RunningCount, runningCount_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WaitResCount, waitResCount_);
      DARABONBA_PTR_FROM_JSON(WaitTimeCount, waitTimeCount_);
    };
    GetInstanceStatusStatisticResponseBodyStatusCount() = default ;
    GetInstanceStatusStatisticResponseBodyStatusCount(const GetInstanceStatusStatisticResponseBodyStatusCount &) = default ;
    GetInstanceStatusStatisticResponseBodyStatusCount(GetInstanceStatusStatisticResponseBodyStatusCount &&) = default ;
    GetInstanceStatusStatisticResponseBodyStatusCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceStatusStatisticResponseBodyStatusCount() = default ;
    GetInstanceStatusStatisticResponseBodyStatusCount& operator=(const GetInstanceStatusStatisticResponseBodyStatusCount &) = default ;
    GetInstanceStatusStatisticResponseBodyStatusCount& operator=(GetInstanceStatusStatisticResponseBodyStatusCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failureCount_ != nullptr
        && this->notRunCount_ != nullptr && this->runningCount_ != nullptr && this->successCount_ != nullptr && this->totalCount_ != nullptr && this->waitResCount_ != nullptr
        && this->waitTimeCount_ != nullptr; };
    // failureCount Field Functions 
    bool hasFailureCount() const { return this->failureCount_ != nullptr;};
    void deleteFailureCount() { this->failureCount_ = nullptr;};
    inline int32_t failureCount() const { DARABONBA_PTR_GET_DEFAULT(failureCount_, 0) };
    inline GetInstanceStatusStatisticResponseBodyStatusCount& setFailureCount(int32_t failureCount) { DARABONBA_PTR_SET_VALUE(failureCount_, failureCount) };


    // notRunCount Field Functions 
    bool hasNotRunCount() const { return this->notRunCount_ != nullptr;};
    void deleteNotRunCount() { this->notRunCount_ = nullptr;};
    inline int32_t notRunCount() const { DARABONBA_PTR_GET_DEFAULT(notRunCount_, 0) };
    inline GetInstanceStatusStatisticResponseBodyStatusCount& setNotRunCount(int32_t notRunCount) { DARABONBA_PTR_SET_VALUE(notRunCount_, notRunCount) };


    // runningCount Field Functions 
    bool hasRunningCount() const { return this->runningCount_ != nullptr;};
    void deleteRunningCount() { this->runningCount_ = nullptr;};
    inline int32_t runningCount() const { DARABONBA_PTR_GET_DEFAULT(runningCount_, 0) };
    inline GetInstanceStatusStatisticResponseBodyStatusCount& setRunningCount(int32_t runningCount) { DARABONBA_PTR_SET_VALUE(runningCount_, runningCount) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline GetInstanceStatusStatisticResponseBodyStatusCount& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetInstanceStatusStatisticResponseBodyStatusCount& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // waitResCount Field Functions 
    bool hasWaitResCount() const { return this->waitResCount_ != nullptr;};
    void deleteWaitResCount() { this->waitResCount_ = nullptr;};
    inline int32_t waitResCount() const { DARABONBA_PTR_GET_DEFAULT(waitResCount_, 0) };
    inline GetInstanceStatusStatisticResponseBodyStatusCount& setWaitResCount(int32_t waitResCount) { DARABONBA_PTR_SET_VALUE(waitResCount_, waitResCount) };


    // waitTimeCount Field Functions 
    bool hasWaitTimeCount() const { return this->waitTimeCount_ != nullptr;};
    void deleteWaitTimeCount() { this->waitTimeCount_ = nullptr;};
    inline int32_t waitTimeCount() const { DARABONBA_PTR_GET_DEFAULT(waitTimeCount_, 0) };
    inline GetInstanceStatusStatisticResponseBodyStatusCount& setWaitTimeCount(int32_t waitTimeCount) { DARABONBA_PTR_SET_VALUE(waitTimeCount_, waitTimeCount) };


  protected:
    // The number of instances that failed to run.
    std::shared_ptr<int32_t> failureCount_ = nullptr;
    // The number of instances that are not run.
    std::shared_ptr<int32_t> notRunCount_ = nullptr;
    // The number of instances that are running.
    std::shared_ptr<int32_t> runningCount_ = nullptr;
    // The number of instances that are successfully run.
    std::shared_ptr<int32_t> successCount_ = nullptr;
    // The total number of instances returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The number of instances that are waiting for resources.
    std::shared_ptr<int32_t> waitResCount_ = nullptr;
    // The number of instances that are waiting to run.
    std::shared_ptr<int32_t> waitTimeCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
