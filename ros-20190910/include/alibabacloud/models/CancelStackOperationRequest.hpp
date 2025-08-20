// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELSTACKOPERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELSTACKOPERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class CancelStackOperationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelStackOperationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedStackOperations, allowedStackOperations_);
      DARABONBA_PTR_TO_JSON(CancelType, cancelType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelStackOperationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedStackOperations, allowedStackOperations_);
      DARABONBA_PTR_FROM_JSON(CancelType, cancelType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
    };
    CancelStackOperationRequest() = default ;
    CancelStackOperationRequest(const CancelStackOperationRequest &) = default ;
    CancelStackOperationRequest(CancelStackOperationRequest &&) = default ;
    CancelStackOperationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelStackOperationRequest() = default ;
    CancelStackOperationRequest& operator=(const CancelStackOperationRequest &) = default ;
    CancelStackOperationRequest& operator=(CancelStackOperationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowedStackOperations_ != nullptr
        && this->cancelType_ != nullptr && this->regionId_ != nullptr && this->stackId_ != nullptr; };
    // allowedStackOperations Field Functions 
    bool hasAllowedStackOperations() const { return this->allowedStackOperations_ != nullptr;};
    void deleteAllowedStackOperations() { this->allowedStackOperations_ = nullptr;};
    inline const vector<string> & allowedStackOperations() const { DARABONBA_PTR_GET_CONST(allowedStackOperations_, vector<string>) };
    inline vector<string> allowedStackOperations() { DARABONBA_PTR_GET(allowedStackOperations_, vector<string>) };
    inline CancelStackOperationRequest& setAllowedStackOperations(const vector<string> & allowedStackOperations) { DARABONBA_PTR_SET_VALUE(allowedStackOperations_, allowedStackOperations) };
    inline CancelStackOperationRequest& setAllowedStackOperations(vector<string> && allowedStackOperations) { DARABONBA_PTR_SET_RVALUE(allowedStackOperations_, allowedStackOperations) };


    // cancelType Field Functions 
    bool hasCancelType() const { return this->cancelType_ != nullptr;};
    void deleteCancelType() { this->cancelType_ = nullptr;};
    inline string cancelType() const { DARABONBA_PTR_GET_DEFAULT(cancelType_, "") };
    inline CancelStackOperationRequest& setCancelType(string cancelType) { DARABONBA_PTR_SET_VALUE(cancelType_, cancelType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CancelStackOperationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline CancelStackOperationRequest& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


  protected:
    // The operations that you want to cancel on the stack.
    std::shared_ptr<vector<string>> allowedStackOperations_ = nullptr;
    // The method that you want to use to cancel the operations. Valid values:
    // 
    // *   Quick: cancels the operations on the stack at the earliest opportunity. In this case, Resource Orchestration Service (ROS) stops scheduling new resources and stops running resources at the earliest opportunity. If you use this method, the resource status may become invalid and subsequent stack operations may be affected.
    // *   Safe (default): cancels the operations on the stack in a secure manner. In this case, ROS stops scheduling new resources and waits for running resources to be stopped.
    std::shared_ptr<string> cancelType_ = nullptr;
    // The region ID of the stack. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The stack ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
