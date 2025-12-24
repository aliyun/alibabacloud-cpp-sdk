// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEXECUTORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEXECUTORSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class UpdateExecutorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateExecutorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(WorkerType, workerType_);
      DARABONBA_PTR_TO_JSON(Workers, workers_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateExecutorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(WorkerType, workerType_);
      DARABONBA_PTR_FROM_JSON(Workers, workers_);
    };
    UpdateExecutorsRequest() = default ;
    UpdateExecutorsRequest(const UpdateExecutorsRequest &) = default ;
    UpdateExecutorsRequest(UpdateExecutorsRequest &&) = default ;
    UpdateExecutorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateExecutorsRequest() = default ;
    UpdateExecutorsRequest& operator=(const UpdateExecutorsRequest &) = default ;
    UpdateExecutorsRequest& operator=(UpdateExecutorsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->clusterId_ == nullptr && return this->workerType_ == nullptr && return this->workers_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateExecutorsRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateExecutorsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // workerType Field Functions 
    bool hasWorkerType() const { return this->workerType_ != nullptr;};
    void deleteWorkerType() { this->workerType_ = nullptr;};
    inline string workerType() const { DARABONBA_PTR_GET_DEFAULT(workerType_, "") };
    inline UpdateExecutorsRequest& setWorkerType(string workerType) { DARABONBA_PTR_SET_VALUE(workerType_, workerType) };


    // workers Field Functions 
    bool hasWorkers() const { return this->workers_ != nullptr;};
    void deleteWorkers() { this->workers_ = nullptr;};
    inline string workers() const { DARABONBA_PTR_GET_DEFAULT(workers_, "") };
    inline UpdateExecutorsRequest& setWorkers(string workers) { DARABONBA_PTR_SET_VALUE(workers_, workers) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> workerType_ = nullptr;
    std::shared_ptr<string> workers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
