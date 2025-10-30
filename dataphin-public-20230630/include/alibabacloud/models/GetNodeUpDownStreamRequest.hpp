// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEUPDOWNSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNODEUPDOWNSTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetNodeUpDownStreamRequestNodeId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetNodeUpDownStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeUpDownStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DownStreamDepth, downStreamDepth_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(UpStreamDepth, upStreamDepth_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeUpDownStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DownStreamDepth, downStreamDepth_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(UpStreamDepth, upStreamDepth_);
    };
    GetNodeUpDownStreamRequest() = default ;
    GetNodeUpDownStreamRequest(const GetNodeUpDownStreamRequest &) = default ;
    GetNodeUpDownStreamRequest(GetNodeUpDownStreamRequest &&) = default ;
    GetNodeUpDownStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeUpDownStreamRequest() = default ;
    GetNodeUpDownStreamRequest& operator=(const GetNodeUpDownStreamRequest &) = default ;
    GetNodeUpDownStreamRequest& operator=(GetNodeUpDownStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downStreamDepth_ == nullptr
        && return this->env_ == nullptr && return this->nodeId_ == nullptr && return this->opTenantId_ == nullptr && return this->projectId_ == nullptr && return this->upStreamDepth_ == nullptr; };
    // downStreamDepth Field Functions 
    bool hasDownStreamDepth() const { return this->downStreamDepth_ != nullptr;};
    void deleteDownStreamDepth() { this->downStreamDepth_ = nullptr;};
    inline int32_t downStreamDepth() const { DARABONBA_PTR_GET_DEFAULT(downStreamDepth_, 0) };
    inline GetNodeUpDownStreamRequest& setDownStreamDepth(int32_t downStreamDepth) { DARABONBA_PTR_SET_VALUE(downStreamDepth_, downStreamDepth) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetNodeUpDownStreamRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline const GetNodeUpDownStreamRequestNodeId & nodeId() const { DARABONBA_PTR_GET_CONST(nodeId_, GetNodeUpDownStreamRequestNodeId) };
    inline GetNodeUpDownStreamRequestNodeId nodeId() { DARABONBA_PTR_GET(nodeId_, GetNodeUpDownStreamRequestNodeId) };
    inline GetNodeUpDownStreamRequest& setNodeId(const GetNodeUpDownStreamRequestNodeId & nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };
    inline GetNodeUpDownStreamRequest& setNodeId(GetNodeUpDownStreamRequestNodeId && nodeId) { DARABONBA_PTR_SET_RVALUE(nodeId_, nodeId) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetNodeUpDownStreamRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetNodeUpDownStreamRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // upStreamDepth Field Functions 
    bool hasUpStreamDepth() const { return this->upStreamDepth_ != nullptr;};
    void deleteUpStreamDepth() { this->upStreamDepth_ = nullptr;};
    inline int32_t upStreamDepth() const { DARABONBA_PTR_GET_DEFAULT(upStreamDepth_, 0) };
    inline GetNodeUpDownStreamRequest& setUpStreamDepth(int32_t upStreamDepth) { DARABONBA_PTR_SET_VALUE(upStreamDepth_, upStreamDepth) };


  protected:
    std::shared_ptr<int32_t> downStreamDepth_ = nullptr;
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetNodeUpDownStreamRequestNodeId> nodeId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<int32_t> upStreamDepth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
