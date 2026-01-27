// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYDOWNLOADTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRYDOWNLOADTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class RetryDownloadTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryDownloadTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, RetryDownloadTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    RetryDownloadTaskRequest() = default ;
    RetryDownloadTaskRequest(const RetryDownloadTaskRequest &) = default ;
    RetryDownloadTaskRequest(RetryDownloadTaskRequest &&) = default ;
    RetryDownloadTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryDownloadTaskRequest() = default ;
    RetryDownloadTaskRequest& operator=(const RetryDownloadTaskRequest &) = default ;
    RetryDownloadTaskRequest& operator=(RetryDownloadTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterName_ == nullptr
        && this->instanceName_ == nullptr && this->regionCode_ == nullptr && this->taskId_ == nullptr; };
    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline RetryDownloadTaskRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline RetryDownloadTaskRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
    inline RetryDownloadTaskRequest& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RetryDownloadTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> clusterName_ {};
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> regionCode_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
