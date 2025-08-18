// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHYSICALNODEOPERATIONLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPHYSICALNODEOPERATIONLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPhysicalNodeOperationLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhysicalNodeOperationLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhysicalNodeOperationLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetPhysicalNodeOperationLogRequest() = default ;
    GetPhysicalNodeOperationLogRequest(const GetPhysicalNodeOperationLogRequest &) = default ;
    GetPhysicalNodeOperationLogRequest(GetPhysicalNodeOperationLogRequest &&) = default ;
    GetPhysicalNodeOperationLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhysicalNodeOperationLogRequest() = default ;
    GetPhysicalNodeOperationLogRequest& operator=(const GetPhysicalNodeOperationLogRequest &) = default ;
    GetPhysicalNodeOperationLogRequest& operator=(GetPhysicalNodeOperationLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->env_ != nullptr
        && this->nodeId_ != nullptr && this->opTenantId_ != nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetPhysicalNodeOperationLogRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetPhysicalNodeOperationLogRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetPhysicalNodeOperationLogRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nodeId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
