// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(LogOption, logOption_);
      DARABONBA_PTR_TO_JSON(OutputOption, outputOption_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ShowResourceProgress, showResourceProgress_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(LogOption, logOption_);
      DARABONBA_PTR_FROM_JSON(OutputOption, outputOption_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ShowResourceProgress, showResourceProgress_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
    };
    GetStackRequest() = default ;
    GetStackRequest(const GetStackRequest &) = default ;
    GetStackRequest(GetStackRequest &&) = default ;
    GetStackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackRequest() = default ;
    GetStackRequest& operator=(const GetStackRequest &) = default ;
    GetStackRequest& operator=(GetStackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->logOption_ != nullptr && this->outputOption_ != nullptr && this->regionId_ != nullptr && this->showResourceProgress_ != nullptr && this->stackId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetStackRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // logOption Field Functions 
    bool hasLogOption() const { return this->logOption_ != nullptr;};
    void deleteLogOption() { this->logOption_ = nullptr;};
    inline string logOption() const { DARABONBA_PTR_GET_DEFAULT(logOption_, "") };
    inline GetStackRequest& setLogOption(string logOption) { DARABONBA_PTR_SET_VALUE(logOption_, logOption) };


    // outputOption Field Functions 
    bool hasOutputOption() const { return this->outputOption_ != nullptr;};
    void deleteOutputOption() { this->outputOption_ = nullptr;};
    inline string outputOption() const { DARABONBA_PTR_GET_DEFAULT(outputOption_, "") };
    inline GetStackRequest& setOutputOption(string outputOption) { DARABONBA_PTR_SET_VALUE(outputOption_, outputOption) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetStackRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // showResourceProgress Field Functions 
    bool hasShowResourceProgress() const { return this->showResourceProgress_ != nullptr;};
    void deleteShowResourceProgress() { this->showResourceProgress_ = nullptr;};
    inline string showResourceProgress() const { DARABONBA_PTR_GET_DEFAULT(showResourceProgress_, "") };
    inline GetStackRequest& setShowResourceProgress(string showResourceProgress) { DARABONBA_PTR_SET_VALUE(showResourceProgress_, showResourceProgress) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline GetStackRequest& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.\\
    // The token can be up to 64 characters in length.\\
    // For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The option for returning logs. Valid values:
    // 
    // *   None: does not return logs.
    // *   Stack (default): returns the logs of the stack.
    // *   Resource: returns the logs of resources in the stack.
    // *   All: returns all logs.
    std::shared_ptr<string> logOption_ = nullptr;
    // Specifies whether to return Outputs. Valid values:
    // 
    // *   Enabled (default)
    // *   Disabled
    // 
    // >  The Outputs parameter requires a long period of time to calculate. If you do not require Outputs of the stack, we recommend that you set OutputOption to Disabled to improve the response speed of the GetStack operation.
    std::shared_ptr<string> outputOption_ = nullptr;
    // The region ID of the stack. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to return information about ResourceProgress. Valid values:
    // 
    // *   Disabled (default): does not return information about ResourceProgress.
    // *   PercentageOnly: returns StackOperationProgress and StackActionProgress of ResourceProgress.
    // 
    // >  ROS and Terraform stacks are supported. Creation, resumed creation, update, deletion, import, and rollback operations on stacks are supported.
    // 
    // *   EnabledIfCreateStack (not recommend): returns \\*Count and InProgressResourceDetails of ResourceProgress only during a stack creation operation.
    // 
    // >  During a creation operation, a stack is in one of the following states: CREATE_IN_PROGRESS, CREATE_COMPLETE, CREATE_FAILED, CREATE_ROLLBACK_IN_PROGRESS, CREATE_ROLLBACK_COMPLETE, and CREATE_ROLLBACK_FAILED.
    std::shared_ptr<string> showResourceProgress_ = nullptr;
    // The stack ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
