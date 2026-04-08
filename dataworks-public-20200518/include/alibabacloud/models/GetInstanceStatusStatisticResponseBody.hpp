// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESTATUSSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESTATUSSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetInstanceStatusStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceStatusStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatusCount, statusCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceStatusStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatusCount, statusCount_);
    };
    GetInstanceStatusStatisticResponseBody() = default ;
    GetInstanceStatusStatisticResponseBody(const GetInstanceStatusStatisticResponseBody &) = default ;
    GetInstanceStatusStatisticResponseBody(GetInstanceStatusStatisticResponseBody &&) = default ;
    GetInstanceStatusStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceStatusStatisticResponseBody() = default ;
    GetInstanceStatusStatisticResponseBody& operator=(const GetInstanceStatusStatisticResponseBody &) = default ;
    GetInstanceStatusStatisticResponseBody& operator=(GetInstanceStatusStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StatusCount : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StatusCount& obj) { 
        DARABONBA_PTR_TO_JSON(FailureCount, failureCount_);
        DARABONBA_PTR_TO_JSON(NotRunCount, notRunCount_);
        DARABONBA_PTR_TO_JSON(RunningCount, runningCount_);
        DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(WaitResCount, waitResCount_);
        DARABONBA_PTR_TO_JSON(WaitTimeCount, waitTimeCount_);
      };
      friend void from_json(const Darabonba::Json& j, StatusCount& obj) { 
        DARABONBA_PTR_FROM_JSON(FailureCount, failureCount_);
        DARABONBA_PTR_FROM_JSON(NotRunCount, notRunCount_);
        DARABONBA_PTR_FROM_JSON(RunningCount, runningCount_);
        DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(WaitResCount, waitResCount_);
        DARABONBA_PTR_FROM_JSON(WaitTimeCount, waitTimeCount_);
      };
      StatusCount() = default ;
      StatusCount(const StatusCount &) = default ;
      StatusCount(StatusCount &&) = default ;
      StatusCount(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StatusCount() = default ;
      StatusCount& operator=(const StatusCount &) = default ;
      StatusCount& operator=(StatusCount &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->failureCount_ == nullptr
        && this->notRunCount_ == nullptr && this->runningCount_ == nullptr && this->successCount_ == nullptr && this->totalCount_ == nullptr && this->waitResCount_ == nullptr
        && this->waitTimeCount_ == nullptr; };
      // failureCount Field Functions 
      bool hasFailureCount() const { return this->failureCount_ != nullptr;};
      void deleteFailureCount() { this->failureCount_ = nullptr;};
      inline int32_t getFailureCount() const { DARABONBA_PTR_GET_DEFAULT(failureCount_, 0) };
      inline StatusCount& setFailureCount(int32_t failureCount) { DARABONBA_PTR_SET_VALUE(failureCount_, failureCount) };


      // notRunCount Field Functions 
      bool hasNotRunCount() const { return this->notRunCount_ != nullptr;};
      void deleteNotRunCount() { this->notRunCount_ = nullptr;};
      inline int32_t getNotRunCount() const { DARABONBA_PTR_GET_DEFAULT(notRunCount_, 0) };
      inline StatusCount& setNotRunCount(int32_t notRunCount) { DARABONBA_PTR_SET_VALUE(notRunCount_, notRunCount) };


      // runningCount Field Functions 
      bool hasRunningCount() const { return this->runningCount_ != nullptr;};
      void deleteRunningCount() { this->runningCount_ = nullptr;};
      inline int32_t getRunningCount() const { DARABONBA_PTR_GET_DEFAULT(runningCount_, 0) };
      inline StatusCount& setRunningCount(int32_t runningCount) { DARABONBA_PTR_SET_VALUE(runningCount_, runningCount) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
      inline StatusCount& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline StatusCount& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // waitResCount Field Functions 
      bool hasWaitResCount() const { return this->waitResCount_ != nullptr;};
      void deleteWaitResCount() { this->waitResCount_ = nullptr;};
      inline int32_t getWaitResCount() const { DARABONBA_PTR_GET_DEFAULT(waitResCount_, 0) };
      inline StatusCount& setWaitResCount(int32_t waitResCount) { DARABONBA_PTR_SET_VALUE(waitResCount_, waitResCount) };


      // waitTimeCount Field Functions 
      bool hasWaitTimeCount() const { return this->waitTimeCount_ != nullptr;};
      void deleteWaitTimeCount() { this->waitTimeCount_ = nullptr;};
      inline int32_t getWaitTimeCount() const { DARABONBA_PTR_GET_DEFAULT(waitTimeCount_, 0) };
      inline StatusCount& setWaitTimeCount(int32_t waitTimeCount) { DARABONBA_PTR_SET_VALUE(waitTimeCount_, waitTimeCount) };


    protected:
      // The number of instances that failed to run.
      shared_ptr<int32_t> failureCount_ {};
      // The number of instances that are not run.
      shared_ptr<int32_t> notRunCount_ {};
      // The number of instances that are running.
      shared_ptr<int32_t> runningCount_ {};
      // The number of instances that are successfully run.
      shared_ptr<int32_t> successCount_ {};
      // The total number of instances returned.
      shared_ptr<int32_t> totalCount_ {};
      // The number of instances that are waiting for resources.
      shared_ptr<int32_t> waitResCount_ {};
      // The number of instances that are waiting to run.
      shared_ptr<int32_t> waitTimeCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->statusCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceStatusStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusCount Field Functions 
    bool hasStatusCount() const { return this->statusCount_ != nullptr;};
    void deleteStatusCount() { this->statusCount_ = nullptr;};
    inline const GetInstanceStatusStatisticResponseBody::StatusCount & getStatusCount() const { DARABONBA_PTR_GET_CONST(statusCount_, GetInstanceStatusStatisticResponseBody::StatusCount) };
    inline GetInstanceStatusStatisticResponseBody::StatusCount getStatusCount() { DARABONBA_PTR_GET(statusCount_, GetInstanceStatusStatisticResponseBody::StatusCount) };
    inline GetInstanceStatusStatisticResponseBody& setStatusCount(const GetInstanceStatusStatisticResponseBody::StatusCount & statusCount) { DARABONBA_PTR_SET_VALUE(statusCount_, statusCount) };
    inline GetInstanceStatusStatisticResponseBody& setStatusCount(GetInstanceStatusStatisticResponseBody::StatusCount && statusCount) { DARABONBA_PTR_SET_RVALUE(statusCount_, statusCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The numbers of instances in different states.
    shared_ptr<GetInstanceStatusStatisticResponseBody::StatusCount> statusCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
