// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATENODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATENODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NodeOperationParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class OperateNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(OperationParameters, operationParameters_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, OperateNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(OperationParameters, operationParameters_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    OperateNodeRequest() = default ;
    OperateNodeRequest(const OperateNodeRequest &) = default ;
    OperateNodeRequest(OperateNodeRequest &&) = default ;
    OperateNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateNodeRequest() = default ;
    OperateNodeRequest& operator=(const OperateNodeRequest &) = default ;
    OperateNodeRequest& operator=(OperateNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operation_ == nullptr
        && this->operationParameters_ == nullptr && this->resourceGroupId_ == nullptr; };
    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline OperateNodeRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // operationParameters Field Functions 
    bool hasOperationParameters() const { return this->operationParameters_ != nullptr;};
    void deleteOperationParameters() { this->operationParameters_ = nullptr;};
    inline const NodeOperationParameters & getOperationParameters() const { DARABONBA_PTR_GET_CONST(operationParameters_, NodeOperationParameters) };
    inline NodeOperationParameters getOperationParameters() { DARABONBA_PTR_GET(operationParameters_, NodeOperationParameters) };
    inline OperateNodeRequest& setOperationParameters(const NodeOperationParameters & operationParameters) { DARABONBA_PTR_SET_VALUE(operationParameters_, operationParameters) };
    inline OperateNodeRequest& setOperationParameters(NodeOperationParameters && operationParameters) { DARABONBA_PTR_SET_RVALUE(operationParameters_, operationParameters) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline OperateNodeRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // This parameter is required.
    shared_ptr<string> operation_ {};
    shared_ptr<NodeOperationParameters> operationParameters_ {};
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
