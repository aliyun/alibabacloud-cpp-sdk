// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPROVEOPERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPROVEOPERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ApproveOperationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApproveOperationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
    };
    friend void from_json(const Darabonba::Json& j, ApproveOperationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
    };
    ApproveOperationRequest() = default ;
    ApproveOperationRequest(const ApproveOperationRequest &) = default ;
    ApproveOperationRequest(ApproveOperationRequest &&) = default ;
    ApproveOperationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApproveOperationRequest() = default ;
    ApproveOperationRequest& operator=(const ApproveOperationRequest &) = default ;
    ApproveOperationRequest& operator=(ApproveOperationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeId_ == nullptr
        && this->operationType_ == nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ApproveOperationRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline ApproveOperationRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


  protected:
    // The node ID.
    shared_ptr<string> nodeId_ {};
    // The O\\&M operation type
    // 
    // Valid value:
    // 
    // *   RepairMachine
    shared_ptr<string> operationType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
