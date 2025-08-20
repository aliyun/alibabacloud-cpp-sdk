// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTSTACKSTOSTACKGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTSTACKSTOSTACKGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ImportStacksToStackGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportStacksToStackGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OperationDescription, operationDescription_);
      DARABONBA_PTR_TO_JSON(OperationPreferences, operationPreferencesShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryFolderIds, resourceDirectoryFolderIdsShrink_);
      DARABONBA_PTR_TO_JSON(StackArns, stackArnsShrink_);
      DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ImportStacksToStackGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OperationDescription, operationDescription_);
      DARABONBA_PTR_FROM_JSON(OperationPreferences, operationPreferencesShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryFolderIds, resourceDirectoryFolderIdsShrink_);
      DARABONBA_PTR_FROM_JSON(StackArns, stackArnsShrink_);
      DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
    };
    ImportStacksToStackGroupShrinkRequest() = default ;
    ImportStacksToStackGroupShrinkRequest(const ImportStacksToStackGroupShrinkRequest &) = default ;
    ImportStacksToStackGroupShrinkRequest(ImportStacksToStackGroupShrinkRequest &&) = default ;
    ImportStacksToStackGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportStacksToStackGroupShrinkRequest() = default ;
    ImportStacksToStackGroupShrinkRequest& operator=(const ImportStacksToStackGroupShrinkRequest &) = default ;
    ImportStacksToStackGroupShrinkRequest& operator=(ImportStacksToStackGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->operationDescription_ != nullptr && this->operationPreferencesShrink_ != nullptr && this->regionId_ != nullptr && this->resourceDirectoryFolderIdsShrink_ != nullptr && this->stackArnsShrink_ != nullptr
        && this->stackGroupName_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ImportStacksToStackGroupShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // operationDescription Field Functions 
    bool hasOperationDescription() const { return this->operationDescription_ != nullptr;};
    void deleteOperationDescription() { this->operationDescription_ = nullptr;};
    inline string operationDescription() const { DARABONBA_PTR_GET_DEFAULT(operationDescription_, "") };
    inline ImportStacksToStackGroupShrinkRequest& setOperationDescription(string operationDescription) { DARABONBA_PTR_SET_VALUE(operationDescription_, operationDescription) };


    // operationPreferencesShrink Field Functions 
    bool hasOperationPreferencesShrink() const { return this->operationPreferencesShrink_ != nullptr;};
    void deleteOperationPreferencesShrink() { this->operationPreferencesShrink_ = nullptr;};
    inline string operationPreferencesShrink() const { DARABONBA_PTR_GET_DEFAULT(operationPreferencesShrink_, "") };
    inline ImportStacksToStackGroupShrinkRequest& setOperationPreferencesShrink(string operationPreferencesShrink) { DARABONBA_PTR_SET_VALUE(operationPreferencesShrink_, operationPreferencesShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ImportStacksToStackGroupShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceDirectoryFolderIdsShrink Field Functions 
    bool hasResourceDirectoryFolderIdsShrink() const { return this->resourceDirectoryFolderIdsShrink_ != nullptr;};
    void deleteResourceDirectoryFolderIdsShrink() { this->resourceDirectoryFolderIdsShrink_ = nullptr;};
    inline string resourceDirectoryFolderIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryFolderIdsShrink_, "") };
    inline ImportStacksToStackGroupShrinkRequest& setResourceDirectoryFolderIdsShrink(string resourceDirectoryFolderIdsShrink) { DARABONBA_PTR_SET_VALUE(resourceDirectoryFolderIdsShrink_, resourceDirectoryFolderIdsShrink) };


    // stackArnsShrink Field Functions 
    bool hasStackArnsShrink() const { return this->stackArnsShrink_ != nullptr;};
    void deleteStackArnsShrink() { this->stackArnsShrink_ = nullptr;};
    inline string stackArnsShrink() const { DARABONBA_PTR_GET_DEFAULT(stackArnsShrink_, "") };
    inline ImportStacksToStackGroupShrinkRequest& setStackArnsShrink(string stackArnsShrink) { DARABONBA_PTR_SET_VALUE(stackArnsShrink_, stackArnsShrink) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string stackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline ImportStacksToStackGroupShrinkRequest& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


  protected:
    // Ensures the idempotence of the request. This value is generated by the client and must be globally unique. 
    // It cannot exceed 64 characters and can include letters, numbers, hyphens (-), and underscores (_). 
    // For more information, see [How to Ensure Idempotence](https://help.aliyun.com/document_detail/134212.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // Description of the operation.
    std::shared_ptr<string> operationDescription_ = nullptr;
    // Operation settings for importing stacks into the stack group.
    // 
    // Includes the following parameters:
    // 
    // - {"FailureToleranceCount": N}
    // 
    //   Failure tolerance count. The number of accounts in which the stack can fail in each region. If this number is exceeded, the operation in that region will stop. If the operation in one region stops, it will not continue in other regions.
    //   
    //    The range of N: 0~20.
    // 
    //    If FailureToleranceCount is not specified, the default value is 0.
    // 
    // - {"FailureTolerancePercentage": N}
    // 
    //    Failure tolerance percentage. The percentage of total accounts in which the stack can fail in each region. If this percentage is exceeded, the operation in that region will stop.
    // 
    //    The range of N: 0~100. If the percentage is not an integer, ROS will round down.
    // 
    //    If FailureTolerancePercentage is not specified, the default value is 0.
    // 
    // - {"MaxConcurrentCount": N}
    // 
    //    Maximum concurrent account count. The number of accounts in which the stack can be deployed simultaneously in each region.
    // 
    //    The range of N: 1~20.
    // 
    //    If MaxConcurrentCount is not specified, the default value is 1.
    // 
    // - {"MaxConcurrentPercentage": N} Maximum concurrent account percentage.
    // 
    //    The percentage of total accounts in which the stack can be deployed simultaneously in each region.
    // 
    //    The range of N: 1~100. If the percentage is not an integer, ROS will round down.
    // 
    //    If MaxConcurrentPercentage is not specified, the default value is 1.
    // - {"RegionConcurrencyType": N}
    // Region-level concurrency type for deploying stack instances, values:
    //      - SEQUENTIAL (default): Deploy sequentially in each specified region, only one region at a time.
    // 
    //      - PARALLEL: Deploy in parallel across all specified regions.
    // 
    // Multiple parameters are separated by commas (,).
    // 
    // > - Do not specify both MaxConcurrentCount and MaxConcurrentPercentage.  
    // >- Do not specify both FailureToleranceCount and FailureTolerancePercentage.
    std::shared_ptr<string> operationPreferencesShrink_ = nullptr;
    // The region ID of the stack group. You can call [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) to view the latest list of Alibaba Cloud regions.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // A list of resource directory folder IDs for the stacks to be imported. A maximum of 10 folders can be added.
    std::shared_ptr<string> resourceDirectoryFolderIdsShrink_ = nullptr;
    // A list of ARNs for the stacks to be imported into the stack group, in the format `acs:ros:${RegionId}:${AccountId}:stack/${StackId}`. A maximum of 10 stacks can be added.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackArnsShrink_ = nullptr;
    // The name of the stack group. The name must be unique within a single region. It cannot exceed 255 characters and must start with a letter or number, and can include letters, numbers, hyphens (-), and underscores (_).
    // 
    // This parameter is required.
    std::shared_ptr<string> stackGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
