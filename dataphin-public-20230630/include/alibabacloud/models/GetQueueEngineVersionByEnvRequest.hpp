// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUEUEENGINEVERSIONBYENVREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUEUEENGINEVERSIONBYENVREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetQueueEngineVersionByEnvRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueueEngineVersionByEnvRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(StreamBatchMode, streamBatchMode_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueueEngineVersionByEnvRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(StreamBatchMode, streamBatchMode_);
    };
    GetQueueEngineVersionByEnvRequest() = default ;
    GetQueueEngineVersionByEnvRequest(const GetQueueEngineVersionByEnvRequest &) = default ;
    GetQueueEngineVersionByEnvRequest(GetQueueEngineVersionByEnvRequest &&) = default ;
    GetQueueEngineVersionByEnvRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueueEngineVersionByEnvRequest() = default ;
    GetQueueEngineVersionByEnvRequest& operator=(const GetQueueEngineVersionByEnvRequest &) = default ;
    GetQueueEngineVersionByEnvRequest& operator=(GetQueueEngineVersionByEnvRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->env_ == nullptr && return this->opTenantId_ == nullptr && return this->projectId_ == nullptr && return this->queueName_ == nullptr && return this->streamBatchMode_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetQueueEngineVersionByEnvRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetQueueEngineVersionByEnvRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetQueueEngineVersionByEnvRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetQueueEngineVersionByEnvRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline GetQueueEngineVersionByEnvRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // streamBatchMode Field Functions 
    bool hasStreamBatchMode() const { return this->streamBatchMode_ != nullptr;};
    void deleteStreamBatchMode() { this->streamBatchMode_ = nullptr;};
    inline string streamBatchMode() const { DARABONBA_PTR_GET_DEFAULT(streamBatchMode_, "") };
    inline GetQueueEngineVersionByEnvRequest& setStreamBatchMode(string streamBatchMode) { DARABONBA_PTR_SET_VALUE(streamBatchMode_, streamBatchMode) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> queueName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> streamBatchMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
