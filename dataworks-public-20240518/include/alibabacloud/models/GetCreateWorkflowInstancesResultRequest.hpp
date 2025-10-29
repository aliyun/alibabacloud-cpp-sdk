// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCREATEWORKFLOWINSTANCESRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCREATEWORKFLOWINSTANCESRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetCreateWorkflowInstancesResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCreateWorkflowInstancesResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OperationId, operationId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCreateWorkflowInstancesResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
    };
    GetCreateWorkflowInstancesResultRequest() = default ;
    GetCreateWorkflowInstancesResultRequest(const GetCreateWorkflowInstancesResultRequest &) = default ;
    GetCreateWorkflowInstancesResultRequest(GetCreateWorkflowInstancesResultRequest &&) = default ;
    GetCreateWorkflowInstancesResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCreateWorkflowInstancesResultRequest() = default ;
    GetCreateWorkflowInstancesResultRequest& operator=(const GetCreateWorkflowInstancesResultRequest &) = default ;
    GetCreateWorkflowInstancesResultRequest& operator=(GetCreateWorkflowInstancesResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operationId_ == nullptr; };
    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string operationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline GetCreateWorkflowInstancesResultRequest& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


  protected:
    // The operation ID. This parameter is used to query the result of asynchronously creating a workflow instance. You can call the CreateWorkflowInstances operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> operationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
