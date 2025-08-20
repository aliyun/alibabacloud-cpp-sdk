// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESTACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESTACKREQUEST_HPP_
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
  class DeleteStackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteStackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteOptions, deleteOptions_);
      DARABONBA_PTR_TO_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RetainAllResources, retainAllResources_);
      DARABONBA_PTR_TO_JSON(RetainResources, retainResources_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteStackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteOptions, deleteOptions_);
      DARABONBA_PTR_FROM_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RetainAllResources, retainAllResources_);
      DARABONBA_PTR_FROM_JSON(RetainResources, retainResources_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
    };
    DeleteStackRequest() = default ;
    DeleteStackRequest(const DeleteStackRequest &) = default ;
    DeleteStackRequest(DeleteStackRequest &&) = default ;
    DeleteStackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteStackRequest() = default ;
    DeleteStackRequest& operator=(const DeleteStackRequest &) = default ;
    DeleteStackRequest& operator=(DeleteStackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deleteOptions_ != nullptr
        && this->parallelism_ != nullptr && this->ramRoleName_ != nullptr && this->regionId_ != nullptr && this->retainAllResources_ != nullptr && this->retainResources_ != nullptr
        && this->stackId_ != nullptr; };
    // deleteOptions Field Functions 
    bool hasDeleteOptions() const { return this->deleteOptions_ != nullptr;};
    void deleteDeleteOptions() { this->deleteOptions_ = nullptr;};
    inline const vector<string> & deleteOptions() const { DARABONBA_PTR_GET_CONST(deleteOptions_, vector<string>) };
    inline vector<string> deleteOptions() { DARABONBA_PTR_GET(deleteOptions_, vector<string>) };
    inline DeleteStackRequest& setDeleteOptions(const vector<string> & deleteOptions) { DARABONBA_PTR_SET_VALUE(deleteOptions_, deleteOptions) };
    inline DeleteStackRequest& setDeleteOptions(vector<string> && deleteOptions) { DARABONBA_PTR_SET_RVALUE(deleteOptions_, deleteOptions) };


    // parallelism Field Functions 
    bool hasParallelism() const { return this->parallelism_ != nullptr;};
    void deleteParallelism() { this->parallelism_ = nullptr;};
    inline int64_t parallelism() const { DARABONBA_PTR_GET_DEFAULT(parallelism_, 0L) };
    inline DeleteStackRequest& setParallelism(int64_t parallelism) { DARABONBA_PTR_SET_VALUE(parallelism_, parallelism) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline DeleteStackRequest& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteStackRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // retainAllResources Field Functions 
    bool hasRetainAllResources() const { return this->retainAllResources_ != nullptr;};
    void deleteRetainAllResources() { this->retainAllResources_ = nullptr;};
    inline bool retainAllResources() const { DARABONBA_PTR_GET_DEFAULT(retainAllResources_, false) };
    inline DeleteStackRequest& setRetainAllResources(bool retainAllResources) { DARABONBA_PTR_SET_VALUE(retainAllResources_, retainAllResources) };


    // retainResources Field Functions 
    bool hasRetainResources() const { return this->retainResources_ != nullptr;};
    void deleteRetainResources() { this->retainResources_ = nullptr;};
    inline const vector<string> & retainResources() const { DARABONBA_PTR_GET_CONST(retainResources_, vector<string>) };
    inline vector<string> retainResources() { DARABONBA_PTR_GET(retainResources_, vector<string>) };
    inline DeleteStackRequest& setRetainResources(const vector<string> & retainResources) { DARABONBA_PTR_SET_VALUE(retainResources_, retainResources) };
    inline DeleteStackRequest& setRetainResources(vector<string> && retainResources) { DARABONBA_PTR_SET_RVALUE(retainResources_, retainResources) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline DeleteStackRequest& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


  protected:
    // The options for deleting the stack.
    std::shared_ptr<vector<string>> deleteOptions_ = nullptr;
    // The maximum number of concurrent operations that can be performed on resources.
    // 
    // By default, this parameter is empty. You can set this parameter to an integer that is greater than or equal to 0.
    // 
    // 
    // 
    // > -  If you set this parameter to an integer that is greater than 0, the integer is used. If you set this parameter to 0 or leave this parameter empty, no limit is imposed on ROS stacks. However, the default value in Terraform is used for Terraform stacks. In most cases, the default value in Terraform is 10.
    // > -  If you set this parameter to a specific value, ROS associates the value with the stack. The value affects subsequent operations on the stack, such as an update operation.
    std::shared_ptr<int64_t> parallelism_ = nullptr;
    // The name of the RAM role. Resource Orchestration Service (ROS) assumes the RAM role to create the stack and uses the credentials of the role to call the APIs of Alibaba Cloud services.\\
    // ROS assumes the role to perform operations on the stack. If you have permissions to perform operations on the stack but do not have permissions to use the RAM role, ROS still assumes the RAM role. You must make sure that the least privileges are granted to the RAM role.\\
    // If you leave this parameter empty when you call the DeleteStack operation, ROS cannot assume the existing RAM role that is associated with the stack. If you want ROS to assume a RAM role, you must specify this parameter. If no RAM roles are available, ROS uses a temporary credential that is generated from the credentials of your account.\\
    // The name of the RAM role can be up to 64 bytes in length.
    std::shared_ptr<string> ramRoleName_ = nullptr;
    // The region ID of the stack. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to retain all resources in the stack.
    // 
    // Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<bool> retainAllResources_ = nullptr;
    // The resources that you want to retain.
    std::shared_ptr<vector<string>> retainResources_ = nullptr;
    // The ID of the stack.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
