// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXECUTORSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXECUTORSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class CreateExecutorsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExecutorsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppGroupId, appGroupId_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(FailedService, failedService_);
      DARABONBA_PTR_TO_JSON(WorkerId, workerId_);
      DARABONBA_PTR_TO_JSON(WorkerType, workerType_);
      DARABONBA_PTR_TO_JSON(Workers, workers_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExecutorsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppGroupId, appGroupId_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(FailedService, failedService_);
      DARABONBA_PTR_FROM_JSON(WorkerId, workerId_);
      DARABONBA_PTR_FROM_JSON(WorkerType, workerType_);
      DARABONBA_PTR_FROM_JSON(Workers, workers_);
    };
    CreateExecutorsResponseBodyData() = default ;
    CreateExecutorsResponseBodyData(const CreateExecutorsResponseBodyData &) = default ;
    CreateExecutorsResponseBodyData(CreateExecutorsResponseBodyData &&) = default ;
    CreateExecutorsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExecutorsResponseBodyData() = default ;
    CreateExecutorsResponseBodyData& operator=(const CreateExecutorsResponseBodyData &) = default ;
    CreateExecutorsResponseBodyData& operator=(CreateExecutorsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appGroupId_ == nullptr
        && return this->appType_ == nullptr && return this->failedService_ == nullptr && return this->workerId_ == nullptr && return this->workerType_ == nullptr && return this->workers_ == nullptr; };
    // appGroupId Field Functions 
    bool hasAppGroupId() const { return this->appGroupId_ != nullptr;};
    void deleteAppGroupId() { this->appGroupId_ = nullptr;};
    inline int64_t appGroupId() const { DARABONBA_PTR_GET_DEFAULT(appGroupId_, 0L) };
    inline CreateExecutorsResponseBodyData& setAppGroupId(int64_t appGroupId) { DARABONBA_PTR_SET_VALUE(appGroupId_, appGroupId) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline int32_t appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, 0) };
    inline CreateExecutorsResponseBodyData& setAppType(int32_t appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // failedService Field Functions 
    bool hasFailedService() const { return this->failedService_ != nullptr;};
    void deleteFailedService() { this->failedService_ = nullptr;};
    inline string failedService() const { DARABONBA_PTR_GET_DEFAULT(failedService_, "") };
    inline CreateExecutorsResponseBodyData& setFailedService(string failedService) { DARABONBA_PTR_SET_VALUE(failedService_, failedService) };


    // workerId Field Functions 
    bool hasWorkerId() const { return this->workerId_ != nullptr;};
    void deleteWorkerId() { this->workerId_ = nullptr;};
    inline int64_t workerId() const { DARABONBA_PTR_GET_DEFAULT(workerId_, 0L) };
    inline CreateExecutorsResponseBodyData& setWorkerId(int64_t workerId) { DARABONBA_PTR_SET_VALUE(workerId_, workerId) };


    // workerType Field Functions 
    bool hasWorkerType() const { return this->workerType_ != nullptr;};
    void deleteWorkerType() { this->workerType_ = nullptr;};
    inline string workerType() const { DARABONBA_PTR_GET_DEFAULT(workerType_, "") };
    inline CreateExecutorsResponseBodyData& setWorkerType(string workerType) { DARABONBA_PTR_SET_VALUE(workerType_, workerType) };


    // workers Field Functions 
    bool hasWorkers() const { return this->workers_ != nullptr;};
    void deleteWorkers() { this->workers_ = nullptr;};
    inline string workers() const { DARABONBA_PTR_GET_DEFAULT(workers_, "") };
    inline CreateExecutorsResponseBodyData& setWorkers(string workers) { DARABONBA_PTR_SET_VALUE(workers_, workers) };


  protected:
    std::shared_ptr<int64_t> appGroupId_ = nullptr;
    std::shared_ptr<int32_t> appType_ = nullptr;
    std::shared_ptr<string> failedService_ = nullptr;
    std::shared_ptr<int64_t> workerId_ = nullptr;
    std::shared_ptr<string> workerType_ = nullptr;
    std::shared_ptr<string> workers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
