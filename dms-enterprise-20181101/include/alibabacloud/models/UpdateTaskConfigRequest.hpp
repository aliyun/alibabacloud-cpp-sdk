// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateTaskConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeConfig, nodeConfig_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeConfig, nodeConfig_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    UpdateTaskConfigRequest() = default ;
    UpdateTaskConfigRequest(const UpdateTaskConfigRequest &) = default ;
    UpdateTaskConfigRequest(UpdateTaskConfigRequest &&) = default ;
    UpdateTaskConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskConfigRequest() = default ;
    UpdateTaskConfigRequest& operator=(const UpdateTaskConfigRequest &) = default ;
    UpdateTaskConfigRequest& operator=(UpdateTaskConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeConfig_ == nullptr
        && this->nodeId_ == nullptr && this->tid_ == nullptr; };
    // nodeConfig Field Functions 
    bool hasNodeConfig() const { return this->nodeConfig_ != nullptr;};
    void deleteNodeConfig() { this->nodeConfig_ = nullptr;};
    inline string getNodeConfig() const { DARABONBA_PTR_GET_DEFAULT(nodeConfig_, "") };
    inline UpdateTaskConfigRequest& setNodeConfig(string nodeConfig) { DARABONBA_PTR_SET_VALUE(nodeConfig_, nodeConfig) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline UpdateTaskConfigRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateTaskConfigRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The advanced configuration for the node. The value of this parameter must be a JSON string.
    // 
    // This parameter is required.
    shared_ptr<string> nodeConfig_ {};
    // The ID of the task node. You can call the [GetTaskInstanceRelation](https://help.aliyun.com/document_detail/424711.html) operation to query the node ID.
    // 
    // This parameter is required.
    shared_ptr<string> nodeId_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to query the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
