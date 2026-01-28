// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEUNSKIPJOBEXECUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEUNSKIPJOBEXECUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class OperateUnskipJobExecutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateUnskipJobExecutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(JobExecutionId, jobExecutionId_);
    };
    friend void from_json(const Darabonba::Json& j, OperateUnskipJobExecutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(JobExecutionId, jobExecutionId_);
    };
    OperateUnskipJobExecutionRequest() = default ;
    OperateUnskipJobExecutionRequest(const OperateUnskipJobExecutionRequest &) = default ;
    OperateUnskipJobExecutionRequest(OperateUnskipJobExecutionRequest &&) = default ;
    OperateUnskipJobExecutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateUnskipJobExecutionRequest() = default ;
    OperateUnskipJobExecutionRequest& operator=(const OperateUnskipJobExecutionRequest &) = default ;
    OperateUnskipJobExecutionRequest& operator=(OperateUnskipJobExecutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->clusterId_ == nullptr && this->jobExecutionId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline OperateUnskipJobExecutionRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline OperateUnskipJobExecutionRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // jobExecutionId Field Functions 
    bool hasJobExecutionId() const { return this->jobExecutionId_ != nullptr;};
    void deleteJobExecutionId() { this->jobExecutionId_ = nullptr;};
    inline string getJobExecutionId() const { DARABONBA_PTR_GET_DEFAULT(jobExecutionId_, "") };
    inline OperateUnskipJobExecutionRequest& setJobExecutionId(string jobExecutionId) { DARABONBA_PTR_SET_VALUE(jobExecutionId_, jobExecutionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    shared_ptr<string> jobExecutionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
