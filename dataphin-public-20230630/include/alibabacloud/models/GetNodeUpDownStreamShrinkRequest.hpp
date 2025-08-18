// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEUPDOWNSTREAMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNODEUPDOWNSTREAMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetNodeUpDownStreamShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeUpDownStreamShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DownStreamDepth, downStreamDepth_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeIdShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(UpStreamDepth, upStreamDepth_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeUpDownStreamShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DownStreamDepth, downStreamDepth_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeIdShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(UpStreamDepth, upStreamDepth_);
    };
    GetNodeUpDownStreamShrinkRequest() = default ;
    GetNodeUpDownStreamShrinkRequest(const GetNodeUpDownStreamShrinkRequest &) = default ;
    GetNodeUpDownStreamShrinkRequest(GetNodeUpDownStreamShrinkRequest &&) = default ;
    GetNodeUpDownStreamShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeUpDownStreamShrinkRequest() = default ;
    GetNodeUpDownStreamShrinkRequest& operator=(const GetNodeUpDownStreamShrinkRequest &) = default ;
    GetNodeUpDownStreamShrinkRequest& operator=(GetNodeUpDownStreamShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->downStreamDepth_ != nullptr
        && this->env_ != nullptr && this->nodeIdShrink_ != nullptr && this->opTenantId_ != nullptr && this->projectId_ != nullptr && this->upStreamDepth_ != nullptr; };
    // downStreamDepth Field Functions 
    bool hasDownStreamDepth() const { return this->downStreamDepth_ != nullptr;};
    void deleteDownStreamDepth() { this->downStreamDepth_ = nullptr;};
    inline int32_t downStreamDepth() const { DARABONBA_PTR_GET_DEFAULT(downStreamDepth_, 0) };
    inline GetNodeUpDownStreamShrinkRequest& setDownStreamDepth(int32_t downStreamDepth) { DARABONBA_PTR_SET_VALUE(downStreamDepth_, downStreamDepth) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetNodeUpDownStreamShrinkRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // nodeIdShrink Field Functions 
    bool hasNodeIdShrink() const { return this->nodeIdShrink_ != nullptr;};
    void deleteNodeIdShrink() { this->nodeIdShrink_ = nullptr;};
    inline string nodeIdShrink() const { DARABONBA_PTR_GET_DEFAULT(nodeIdShrink_, "") };
    inline GetNodeUpDownStreamShrinkRequest& setNodeIdShrink(string nodeIdShrink) { DARABONBA_PTR_SET_VALUE(nodeIdShrink_, nodeIdShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetNodeUpDownStreamShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetNodeUpDownStreamShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // upStreamDepth Field Functions 
    bool hasUpStreamDepth() const { return this->upStreamDepth_ != nullptr;};
    void deleteUpStreamDepth() { this->upStreamDepth_ = nullptr;};
    inline int32_t upStreamDepth() const { DARABONBA_PTR_GET_DEFAULT(upStreamDepth_, 0) };
    inline GetNodeUpDownStreamShrinkRequest& setUpStreamDepth(int32_t upStreamDepth) { DARABONBA_PTR_SET_VALUE(upStreamDepth_, upStreamDepth) };


  protected:
    std::shared_ptr<int32_t> downStreamDepth_ = nullptr;
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nodeIdShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<int32_t> upStreamDepth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
