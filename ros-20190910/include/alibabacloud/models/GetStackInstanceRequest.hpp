// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OutputOption, outputOption_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_TO_JSON(StackInstanceAccountId, stackInstanceAccountId_);
      DARABONBA_PTR_TO_JSON(StackInstanceRegionId, stackInstanceRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OutputOption, outputOption_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_FROM_JSON(StackInstanceAccountId, stackInstanceAccountId_);
      DARABONBA_PTR_FROM_JSON(StackInstanceRegionId, stackInstanceRegionId_);
    };
    GetStackInstanceRequest() = default ;
    GetStackInstanceRequest(const GetStackInstanceRequest &) = default ;
    GetStackInstanceRequest(GetStackInstanceRequest &&) = default ;
    GetStackInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackInstanceRequest() = default ;
    GetStackInstanceRequest& operator=(const GetStackInstanceRequest &) = default ;
    GetStackInstanceRequest& operator=(GetStackInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outputOption_ != nullptr
        && this->regionId_ != nullptr && this->stackGroupName_ != nullptr && this->stackInstanceAccountId_ != nullptr && this->stackInstanceRegionId_ != nullptr; };
    // outputOption Field Functions 
    bool hasOutputOption() const { return this->outputOption_ != nullptr;};
    void deleteOutputOption() { this->outputOption_ = nullptr;};
    inline string outputOption() const { DARABONBA_PTR_GET_DEFAULT(outputOption_, "") };
    inline GetStackInstanceRequest& setOutputOption(string outputOption) { DARABONBA_PTR_SET_VALUE(outputOption_, outputOption) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetStackInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string stackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline GetStackInstanceRequest& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


    // stackInstanceAccountId Field Functions 
    bool hasStackInstanceAccountId() const { return this->stackInstanceAccountId_ != nullptr;};
    void deleteStackInstanceAccountId() { this->stackInstanceAccountId_ = nullptr;};
    inline string stackInstanceAccountId() const { DARABONBA_PTR_GET_DEFAULT(stackInstanceAccountId_, "") };
    inline GetStackInstanceRequest& setStackInstanceAccountId(string stackInstanceAccountId) { DARABONBA_PTR_SET_VALUE(stackInstanceAccountId_, stackInstanceAccountId) };


    // stackInstanceRegionId Field Functions 
    bool hasStackInstanceRegionId() const { return this->stackInstanceRegionId_ != nullptr;};
    void deleteStackInstanceRegionId() { this->stackInstanceRegionId_ = nullptr;};
    inline string stackInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(stackInstanceRegionId_, "") };
    inline GetStackInstanceRequest& setStackInstanceRegionId(string stackInstanceRegionId) { DARABONBA_PTR_SET_VALUE(stackInstanceRegionId_, stackInstanceRegionId) };


  protected:
    // Specifies whether to return the Outputs parameter. The Outputs parameter specifies the outputs of the stack. Valid values:
    // 
    // *   Enabled: returns the Outputs parameter.
    // *   Disabled (default): does not return the Outputs parameter.
    // 
    // >  The Outputs parameter requires a long period of time to calculate. If you do not require the outputs of the stack, we recommend that you set OutputOption to Disabled to improve the response speed of the API operation.
    std::shared_ptr<string> outputOption_ = nullptr;
    // The region ID of the stack group. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the stack group. The name must be unique within a region.\\
    // The name can be up to 255 characters in length, and can contain digits, letters, hyphens (-), and underscores (_). It must start with a digit or letter.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackGroupName_ = nullptr;
    // The ID of the destination account to which the stack belongs.
    // 
    // *   If the stack group is granted self-managed permissions, the stack belongs to an Alibaba Cloud account.
    // *   If the stack group is granted service-managed permissions, the stack belongs to a member in a resource directory.
    // 
    // > For more information about the destination account, see [Overview](https://help.aliyun.com/document_detail/154578.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> stackInstanceAccountId_ = nullptr;
    // The region ID of the stack.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackInstanceRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
