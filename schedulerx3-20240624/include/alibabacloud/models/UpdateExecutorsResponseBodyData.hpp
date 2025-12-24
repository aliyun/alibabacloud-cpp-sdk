// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEXECUTORSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEXECUTORSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class UpdateExecutorsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateExecutorsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppGroupId, appGroupId_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(FailedService, failedService_);
      DARABONBA_PTR_TO_JSON(WorkId, workId_);
      DARABONBA_PTR_TO_JSON(WorkerType, workerType_);
      DARABONBA_PTR_TO_JSON(Workers, workers_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateExecutorsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppGroupId, appGroupId_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(FailedService, failedService_);
      DARABONBA_PTR_FROM_JSON(WorkId, workId_);
      DARABONBA_PTR_FROM_JSON(WorkerType, workerType_);
      DARABONBA_PTR_FROM_JSON(Workers, workers_);
    };
    UpdateExecutorsResponseBodyData() = default ;
    UpdateExecutorsResponseBodyData(const UpdateExecutorsResponseBodyData &) = default ;
    UpdateExecutorsResponseBodyData(UpdateExecutorsResponseBodyData &&) = default ;
    UpdateExecutorsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateExecutorsResponseBodyData() = default ;
    UpdateExecutorsResponseBodyData& operator=(const UpdateExecutorsResponseBodyData &) = default ;
    UpdateExecutorsResponseBodyData& operator=(UpdateExecutorsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appGroupId_ == nullptr
        && return this->appType_ == nullptr && return this->failedService_ == nullptr && return this->workId_ == nullptr && return this->workerType_ == nullptr && return this->workers_ == nullptr; };
    // appGroupId Field Functions 
    bool hasAppGroupId() const { return this->appGroupId_ != nullptr;};
    void deleteAppGroupId() { this->appGroupId_ = nullptr;};
    inline int64_t appGroupId() const { DARABONBA_PTR_GET_DEFAULT(appGroupId_, 0L) };
    inline UpdateExecutorsResponseBodyData& setAppGroupId(int64_t appGroupId) { DARABONBA_PTR_SET_VALUE(appGroupId_, appGroupId) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline int32_t appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, 0) };
    inline UpdateExecutorsResponseBodyData& setAppType(int32_t appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // failedService Field Functions 
    bool hasFailedService() const { return this->failedService_ != nullptr;};
    void deleteFailedService() { this->failedService_ = nullptr;};
    inline string failedService() const { DARABONBA_PTR_GET_DEFAULT(failedService_, "") };
    inline UpdateExecutorsResponseBodyData& setFailedService(string failedService) { DARABONBA_PTR_SET_VALUE(failedService_, failedService) };


    // workId Field Functions 
    bool hasWorkId() const { return this->workId_ != nullptr;};
    void deleteWorkId() { this->workId_ = nullptr;};
    inline int32_t workId() const { DARABONBA_PTR_GET_DEFAULT(workId_, 0) };
    inline UpdateExecutorsResponseBodyData& setWorkId(int32_t workId) { DARABONBA_PTR_SET_VALUE(workId_, workId) };


    // workerType Field Functions 
    bool hasWorkerType() const { return this->workerType_ != nullptr;};
    void deleteWorkerType() { this->workerType_ = nullptr;};
    inline string workerType() const { DARABONBA_PTR_GET_DEFAULT(workerType_, "") };
    inline UpdateExecutorsResponseBodyData& setWorkerType(string workerType) { DARABONBA_PTR_SET_VALUE(workerType_, workerType) };


    // workers Field Functions 
    bool hasWorkers() const { return this->workers_ != nullptr;};
    void deleteWorkers() { this->workers_ = nullptr;};
    inline string workers() const { DARABONBA_PTR_GET_DEFAULT(workers_, "") };
    inline UpdateExecutorsResponseBodyData& setWorkers(string workers) { DARABONBA_PTR_SET_VALUE(workers_, workers) };


  protected:
    std::shared_ptr<int64_t> appGroupId_ = nullptr;
    std::shared_ptr<int32_t> appType_ = nullptr;
    std::shared_ptr<string> failedService_ = nullptr;
    std::shared_ptr<int32_t> workId_ = nullptr;
    std::shared_ptr<string> workerType_ = nullptr;
    std::shared_ptr<string> workers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
