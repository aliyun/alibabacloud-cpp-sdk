// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERQUEUEINFOBYENVREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERQUEUEINFOBYENVREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetClusterQueueInfoByEnvRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterQueueInfoByEnvRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(StreamBatchMode, streamBatchMode_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterQueueInfoByEnvRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(StreamBatchMode, streamBatchMode_);
    };
    GetClusterQueueInfoByEnvRequest() = default ;
    GetClusterQueueInfoByEnvRequest(const GetClusterQueueInfoByEnvRequest &) = default ;
    GetClusterQueueInfoByEnvRequest(GetClusterQueueInfoByEnvRequest &&) = default ;
    GetClusterQueueInfoByEnvRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterQueueInfoByEnvRequest() = default ;
    GetClusterQueueInfoByEnvRequest& operator=(const GetClusterQueueInfoByEnvRequest &) = default ;
    GetClusterQueueInfoByEnvRequest& operator=(GetClusterQueueInfoByEnvRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->env_ != nullptr
        && this->opTenantId_ != nullptr && this->projectId_ != nullptr && this->streamBatchMode_ != nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetClusterQueueInfoByEnvRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetClusterQueueInfoByEnvRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetClusterQueueInfoByEnvRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // streamBatchMode Field Functions 
    bool hasStreamBatchMode() const { return this->streamBatchMode_ != nullptr;};
    void deleteStreamBatchMode() { this->streamBatchMode_ = nullptr;};
    inline string streamBatchMode() const { DARABONBA_PTR_GET_DEFAULT(streamBatchMode_, "") };
    inline GetClusterQueueInfoByEnvRequest& setStreamBatchMode(string streamBatchMode) { DARABONBA_PTR_SET_VALUE(streamBatchMode_, streamBatchMode) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> streamBatchMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
