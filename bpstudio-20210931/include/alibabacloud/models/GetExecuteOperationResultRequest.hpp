// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXECUTEOPERATIONRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEXECUTEOPERATIONRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetExecuteOperationResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExecuteOperationResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OperationId, operationId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetExecuteOperationResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    GetExecuteOperationResultRequest() = default ;
    GetExecuteOperationResultRequest(const GetExecuteOperationResultRequest &) = default ;
    GetExecuteOperationResultRequest(GetExecuteOperationResultRequest &&) = default ;
    GetExecuteOperationResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExecuteOperationResultRequest() = default ;
    GetExecuteOperationResultRequest& operator=(const GetExecuteOperationResultRequest &) = default ;
    GetExecuteOperationResultRequest& operator=(GetExecuteOperationResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operationId_ != nullptr
        && this->resourceGroupId_ != nullptr; };
    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string operationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline GetExecuteOperationResultRequest& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetExecuteOperationResultRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> operationId_ = nullptr;
    // The ID of the resource group. This parameter is specified to verify the permissions on the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
