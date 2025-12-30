// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEUPDOWNSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNODEUPDOWNSTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class NodeId : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeId& obj) { 
        DARABONBA_PTR_TO_JSON(FieldIdList, fieldIdList_);
        DARABONBA_PTR_TO_JSON(Id, id_);
      };
      friend void from_json(const Darabonba::Json& j, NodeId& obj) { 
        DARABONBA_PTR_FROM_JSON(FieldIdList, fieldIdList_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
      };
      NodeId() = default ;
      NodeId(const NodeId &) = default ;
      NodeId(NodeId &&) = default ;
      NodeId(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeId() = default ;
      NodeId& operator=(const NodeId &) = default ;
      NodeId& operator=(NodeId &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fieldIdList_ == nullptr
        && this->id_ == nullptr; };
      // fieldIdList Field Functions 
      bool hasFieldIdList() const { return this->fieldIdList_ != nullptr;};
      void deleteFieldIdList() { this->fieldIdList_ = nullptr;};
      inline string getFieldIdList() const { DARABONBA_PTR_GET_DEFAULT(fieldIdList_, "") };
      inline NodeId& setFieldIdList(string fieldIdList) { DARABONBA_PTR_SET_VALUE(fieldIdList_, fieldIdList) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline NodeId& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    protected:
      shared_ptr<string> fieldIdList_ {};
      // This parameter is required.
      shared_ptr<string> id_ {};
    };

    virtual bool empty() const override { return this->downStreamDepth_ == nullptr
        && this->env_ == nullptr && this->nodeId_ == nullptr && this->opTenantId_ == nullptr && this->projectId_ == nullptr && this->upStreamDepth_ == nullptr; };
    // downStreamDepth Field Functions 
    bool hasDownStreamDepth() const { return this->downStreamDepth_ != nullptr;};
    void deleteDownStreamDepth() { this->downStreamDepth_ = nullptr;};
    inline int32_t getDownStreamDepth() const { DARABONBA_PTR_GET_DEFAULT(downStreamDepth_, 0) };
    inline GetNodeUpDownStreamRequest& setDownStreamDepth(int32_t downStreamDepth) { DARABONBA_PTR_SET_VALUE(downStreamDepth_, downStreamDepth) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetNodeUpDownStreamRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline const GetNodeUpDownStreamRequest::NodeId & getNodeId() const { DARABONBA_PTR_GET_CONST(nodeId_, GetNodeUpDownStreamRequest::NodeId) };
    inline GetNodeUpDownStreamRequest::NodeId getNodeId() { DARABONBA_PTR_GET(nodeId_, GetNodeUpDownStreamRequest::NodeId) };
    inline GetNodeUpDownStreamRequest& setNodeId(const GetNodeUpDownStreamRequest::NodeId & nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };
    inline GetNodeUpDownStreamRequest& setNodeId(GetNodeUpDownStreamRequest::NodeId && nodeId) { DARABONBA_PTR_SET_RVALUE(nodeId_, nodeId) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetNodeUpDownStreamRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetNodeUpDownStreamRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // upStreamDepth Field Functions 
    bool hasUpStreamDepth() const { return this->upStreamDepth_ != nullptr;};
    void deleteUpStreamDepth() { this->upStreamDepth_ = nullptr;};
    inline int32_t getUpStreamDepth() const { DARABONBA_PTR_GET_DEFAULT(upStreamDepth_, 0) };
    inline GetNodeUpDownStreamRequest& setUpStreamDepth(int32_t upStreamDepth) { DARABONBA_PTR_SET_VALUE(upStreamDepth_, upStreamDepth) };


  protected:
    shared_ptr<int32_t> downStreamDepth_ {};
    shared_ptr<string> env_ {};
    // This parameter is required.
    shared_ptr<GetNodeUpDownStreamRequest::NodeId> nodeId_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<int64_t> projectId_ {};
    shared_ptr<int32_t> upStreamDepth_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
