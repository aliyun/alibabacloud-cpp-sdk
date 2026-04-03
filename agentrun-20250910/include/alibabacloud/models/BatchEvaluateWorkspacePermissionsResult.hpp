// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEVALUATEWORKSPACEPERMISSIONSRESULT_HPP_
#define ALIBABACLOUD_MODELS_BATCHEVALUATEWORKSPACEPERMISSIONSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchEvaluateWorkspacePermissionsOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class BatchEvaluateWorkspacePermissionsResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchEvaluateWorkspacePermissionsResult& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchEvaluateWorkspacePermissionsResult& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    BatchEvaluateWorkspacePermissionsResult() = default ;
    BatchEvaluateWorkspacePermissionsResult(const BatchEvaluateWorkspacePermissionsResult &) = default ;
    BatchEvaluateWorkspacePermissionsResult(BatchEvaluateWorkspacePermissionsResult &&) = default ;
    BatchEvaluateWorkspacePermissionsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchEvaluateWorkspacePermissionsResult() = default ;
    BatchEvaluateWorkspacePermissionsResult& operator=(const BatchEvaluateWorkspacePermissionsResult &) = default ;
    BatchEvaluateWorkspacePermissionsResult& operator=(BatchEvaluateWorkspacePermissionsResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchEvaluateWorkspacePermissionsResult& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const BatchEvaluateWorkspacePermissionsOutput & getData() const { DARABONBA_PTR_GET_CONST(data_, BatchEvaluateWorkspacePermissionsOutput) };
    inline BatchEvaluateWorkspacePermissionsOutput getData() { DARABONBA_PTR_GET(data_, BatchEvaluateWorkspacePermissionsOutput) };
    inline BatchEvaluateWorkspacePermissionsResult& setData(const BatchEvaluateWorkspacePermissionsOutput & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BatchEvaluateWorkspacePermissionsResult& setData(BatchEvaluateWorkspacePermissionsOutput && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchEvaluateWorkspacePermissionsResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // OK 表示成功
    shared_ptr<string> code_ {};
    shared_ptr<BatchEvaluateWorkspacePermissionsOutput> data_ {};
    // 与响应头 x-funagent-request-id 对应
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
