// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYEXTERNALNODESTATUSUPDATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYEXTERNALNODESTATUSUPDATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyExternalNodeStatusUpdateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyExternalNodeStatusUpdateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(node_id, nodeId_);
      DARABONBA_PTR_TO_JSON(operation_records, operationRecordsShrink_);
      DARABONBA_PTR_TO_JSON(process_action_result, processActionResult_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyExternalNodeStatusUpdateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(node_id, nodeId_);
      DARABONBA_PTR_FROM_JSON(operation_records, operationRecordsShrink_);
      DARABONBA_PTR_FROM_JSON(process_action_result, processActionResult_);
    };
    ApplyExternalNodeStatusUpdateShrinkRequest() = default ;
    ApplyExternalNodeStatusUpdateShrinkRequest(const ApplyExternalNodeStatusUpdateShrinkRequest &) = default ;
    ApplyExternalNodeStatusUpdateShrinkRequest(ApplyExternalNodeStatusUpdateShrinkRequest &&) = default ;
    ApplyExternalNodeStatusUpdateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyExternalNodeStatusUpdateShrinkRequest() = default ;
    ApplyExternalNodeStatusUpdateShrinkRequest& operator=(const ApplyExternalNodeStatusUpdateShrinkRequest &) = default ;
    ApplyExternalNodeStatusUpdateShrinkRequest& operator=(ApplyExternalNodeStatusUpdateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeId_ != nullptr
        && this->operationRecordsShrink_ != nullptr && this->processActionResult_ != nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ApplyExternalNodeStatusUpdateShrinkRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // operationRecordsShrink Field Functions 
    bool hasOperationRecordsShrink() const { return this->operationRecordsShrink_ != nullptr;};
    void deleteOperationRecordsShrink() { this->operationRecordsShrink_ = nullptr;};
    inline string operationRecordsShrink() const { DARABONBA_PTR_GET_DEFAULT(operationRecordsShrink_, "") };
    inline ApplyExternalNodeStatusUpdateShrinkRequest& setOperationRecordsShrink(string operationRecordsShrink) { DARABONBA_PTR_SET_VALUE(operationRecordsShrink_, operationRecordsShrink) };


    // processActionResult Field Functions 
    bool hasProcessActionResult() const { return this->processActionResult_ != nullptr;};
    void deleteProcessActionResult() { this->processActionResult_ = nullptr;};
    inline string processActionResult() const { DARABONBA_PTR_GET_DEFAULT(processActionResult_, "") };
    inline ApplyExternalNodeStatusUpdateShrinkRequest& setProcessActionResult(string processActionResult) { DARABONBA_PTR_SET_VALUE(processActionResult_, processActionResult) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> operationRecordsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> processActionResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
