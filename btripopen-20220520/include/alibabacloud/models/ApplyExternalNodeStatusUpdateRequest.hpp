// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYEXTERNALNODESTATUSUPDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYEXTERNALNODESTATUSUPDATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApplyExternalNodeStatusUpdateRequestOperationRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyExternalNodeStatusUpdateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyExternalNodeStatusUpdateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(node_id, nodeId_);
      DARABONBA_PTR_TO_JSON(operation_records, operationRecords_);
      DARABONBA_PTR_TO_JSON(process_action_result, processActionResult_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyExternalNodeStatusUpdateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(node_id, nodeId_);
      DARABONBA_PTR_FROM_JSON(operation_records, operationRecords_);
      DARABONBA_PTR_FROM_JSON(process_action_result, processActionResult_);
    };
    ApplyExternalNodeStatusUpdateRequest() = default ;
    ApplyExternalNodeStatusUpdateRequest(const ApplyExternalNodeStatusUpdateRequest &) = default ;
    ApplyExternalNodeStatusUpdateRequest(ApplyExternalNodeStatusUpdateRequest &&) = default ;
    ApplyExternalNodeStatusUpdateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyExternalNodeStatusUpdateRequest() = default ;
    ApplyExternalNodeStatusUpdateRequest& operator=(const ApplyExternalNodeStatusUpdateRequest &) = default ;
    ApplyExternalNodeStatusUpdateRequest& operator=(ApplyExternalNodeStatusUpdateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeId_ != nullptr
        && this->operationRecords_ != nullptr && this->processActionResult_ != nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ApplyExternalNodeStatusUpdateRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // operationRecords Field Functions 
    bool hasOperationRecords() const { return this->operationRecords_ != nullptr;};
    void deleteOperationRecords() { this->operationRecords_ = nullptr;};
    inline const vector<ApplyExternalNodeStatusUpdateRequestOperationRecords> & operationRecords() const { DARABONBA_PTR_GET_CONST(operationRecords_, vector<ApplyExternalNodeStatusUpdateRequestOperationRecords>) };
    inline vector<ApplyExternalNodeStatusUpdateRequestOperationRecords> operationRecords() { DARABONBA_PTR_GET(operationRecords_, vector<ApplyExternalNodeStatusUpdateRequestOperationRecords>) };
    inline ApplyExternalNodeStatusUpdateRequest& setOperationRecords(const vector<ApplyExternalNodeStatusUpdateRequestOperationRecords> & operationRecords) { DARABONBA_PTR_SET_VALUE(operationRecords_, operationRecords) };
    inline ApplyExternalNodeStatusUpdateRequest& setOperationRecords(vector<ApplyExternalNodeStatusUpdateRequestOperationRecords> && operationRecords) { DARABONBA_PTR_SET_RVALUE(operationRecords_, operationRecords) };


    // processActionResult Field Functions 
    bool hasProcessActionResult() const { return this->processActionResult_ != nullptr;};
    void deleteProcessActionResult() { this->processActionResult_ = nullptr;};
    inline string processActionResult() const { DARABONBA_PTR_GET_DEFAULT(processActionResult_, "") };
    inline ApplyExternalNodeStatusUpdateRequest& setProcessActionResult(string processActionResult) { DARABONBA_PTR_SET_VALUE(processActionResult_, processActionResult) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<vector<ApplyExternalNodeStatusUpdateRequestOperationRecords>> operationRecords_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> processActionResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
