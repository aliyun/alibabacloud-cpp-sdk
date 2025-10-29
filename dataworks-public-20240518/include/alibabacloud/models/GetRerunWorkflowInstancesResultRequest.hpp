// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRERUNWORKFLOWINSTANCESRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRERUNWORKFLOWINSTANCESRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetRerunWorkflowInstancesResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRerunWorkflowInstancesResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OperationId, operationId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRerunWorkflowInstancesResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
    };
    GetRerunWorkflowInstancesResultRequest() = default ;
    GetRerunWorkflowInstancesResultRequest(const GetRerunWorkflowInstancesResultRequest &) = default ;
    GetRerunWorkflowInstancesResultRequest(GetRerunWorkflowInstancesResultRequest &&) = default ;
    GetRerunWorkflowInstancesResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRerunWorkflowInstancesResultRequest() = default ;
    GetRerunWorkflowInstancesResultRequest& operator=(const GetRerunWorkflowInstancesResultRequest &) = default ;
    GetRerunWorkflowInstancesResultRequest& operator=(GetRerunWorkflowInstancesResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operationId_ == nullptr; };
    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string operationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline GetRerunWorkflowInstancesResultRequest& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


  protected:
    // The operation ID used to asynchronously query the result of the workflow instance rerun. This value is obtained from the RerunWorkflowInstances operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> operationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
