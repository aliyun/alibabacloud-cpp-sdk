// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYEXTERNALNODESTATUSUPDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYEXTERNALNODESTATUSUPDATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class OperationRecords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperationRecords& obj) { 
        DARABONBA_PTR_TO_JSON(comment, comment_);
        DARABONBA_PTR_TO_JSON(operate_time, operateTime_);
        DARABONBA_PTR_TO_JSON(operator_name, operatorName_);
        DARABONBA_PTR_TO_JSON(result, result_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, OperationRecords& obj) { 
        DARABONBA_PTR_FROM_JSON(comment, comment_);
        DARABONBA_PTR_FROM_JSON(operate_time, operateTime_);
        DARABONBA_PTR_FROM_JSON(operator_name, operatorName_);
        DARABONBA_PTR_FROM_JSON(result, result_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      OperationRecords() = default ;
      OperationRecords(const OperationRecords &) = default ;
      OperationRecords(OperationRecords &&) = default ;
      OperationRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperationRecords() = default ;
      OperationRecords& operator=(const OperationRecords &) = default ;
      OperationRecords& operator=(OperationRecords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->operateTime_ == nullptr && this->operatorName_ == nullptr && this->result_ == nullptr && this->type_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline OperationRecords& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // operateTime Field Functions 
      bool hasOperateTime() const { return this->operateTime_ != nullptr;};
      void deleteOperateTime() { this->operateTime_ = nullptr;};
      inline string getOperateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, "") };
      inline OperationRecords& setOperateTime(string operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


      // operatorName Field Functions 
      bool hasOperatorName() const { return this->operatorName_ != nullptr;};
      void deleteOperatorName() { this->operatorName_ = nullptr;};
      inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
      inline OperationRecords& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline OperationRecords& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline OperationRecords& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> comment_ {};
      shared_ptr<string> operateTime_ {};
      shared_ptr<string> operatorName_ {};
      shared_ptr<string> result_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->nodeId_ == nullptr
        && this->operationRecords_ == nullptr && this->processActionResult_ == nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ApplyExternalNodeStatusUpdateRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // operationRecords Field Functions 
    bool hasOperationRecords() const { return this->operationRecords_ != nullptr;};
    void deleteOperationRecords() { this->operationRecords_ = nullptr;};
    inline const vector<ApplyExternalNodeStatusUpdateRequest::OperationRecords> & getOperationRecords() const { DARABONBA_PTR_GET_CONST(operationRecords_, vector<ApplyExternalNodeStatusUpdateRequest::OperationRecords>) };
    inline vector<ApplyExternalNodeStatusUpdateRequest::OperationRecords> getOperationRecords() { DARABONBA_PTR_GET(operationRecords_, vector<ApplyExternalNodeStatusUpdateRequest::OperationRecords>) };
    inline ApplyExternalNodeStatusUpdateRequest& setOperationRecords(const vector<ApplyExternalNodeStatusUpdateRequest::OperationRecords> & operationRecords) { DARABONBA_PTR_SET_VALUE(operationRecords_, operationRecords) };
    inline ApplyExternalNodeStatusUpdateRequest& setOperationRecords(vector<ApplyExternalNodeStatusUpdateRequest::OperationRecords> && operationRecords) { DARABONBA_PTR_SET_RVALUE(operationRecords_, operationRecords) };


    // processActionResult Field Functions 
    bool hasProcessActionResult() const { return this->processActionResult_ != nullptr;};
    void deleteProcessActionResult() { this->processActionResult_ = nullptr;};
    inline string getProcessActionResult() const { DARABONBA_PTR_GET_DEFAULT(processActionResult_, "") };
    inline ApplyExternalNodeStatusUpdateRequest& setProcessActionResult(string processActionResult) { DARABONBA_PTR_SET_VALUE(processActionResult_, processActionResult) };


  protected:
    // This parameter is required.
    shared_ptr<string> nodeId_ {};
    shared_ptr<vector<ApplyExternalNodeStatusUpdateRequest::OperationRecords>> operationRecords_ {};
    // This parameter is required.
    shared_ptr<string> processActionResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
