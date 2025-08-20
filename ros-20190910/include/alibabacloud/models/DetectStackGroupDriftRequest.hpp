// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTSTACKGROUPDRIFTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTSTACKGROUPDRIFTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class DetectStackGroupDriftRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectStackGroupDriftRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_ANY_TO_JSON(OperationPreferences, operationPreferences_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, DetectStackGroupDriftRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_ANY_FROM_JSON(OperationPreferences, operationPreferences_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
    };
    DetectStackGroupDriftRequest() = default ;
    DetectStackGroupDriftRequest(const DetectStackGroupDriftRequest &) = default ;
    DetectStackGroupDriftRequest(DetectStackGroupDriftRequest &&) = default ;
    DetectStackGroupDriftRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectStackGroupDriftRequest() = default ;
    DetectStackGroupDriftRequest& operator=(const DetectStackGroupDriftRequest &) = default ;
    DetectStackGroupDriftRequest& operator=(DetectStackGroupDriftRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->operationPreferences_ != nullptr && this->regionId_ != nullptr && this->stackGroupName_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DetectStackGroupDriftRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // operationPreferences Field Functions 
    bool hasOperationPreferences() const { return this->operationPreferences_ != nullptr;};
    void deleteOperationPreferences() { this->operationPreferences_ = nullptr;};
    inline     const Darabonba::Json & operationPreferences() const { DARABONBA_GET(operationPreferences_) };
    Darabonba::Json & operationPreferences() { DARABONBA_GET(operationPreferences_) };
    inline DetectStackGroupDriftRequest& setOperationPreferences(const Darabonba::Json & operationPreferences) { DARABONBA_SET_VALUE(operationPreferences_, operationPreferences) };
    inline DetectStackGroupDriftRequest& setOperationPreferences(Darabonba::Json & operationPreferences) { DARABONBA_SET_RVALUE(operationPreferences_, operationPreferences) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetectStackGroupDriftRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string stackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline DetectStackGroupDriftRequest& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests.
    // 
    // The value can be up to 64 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
    // 
    // For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The operation settings, in JSON format. The following fields are supported:
    // 
    // *   FailureToleranceCount
    // 
    // The maximum number of stack group operation failures that can occur. In a stack group operation, if the total number of failures does not exceed the FailureToleranceCount value, the operation succeeds. Otherwise, the operation fails.
    // 
    // If FailureToleranceCount is not specified, the default value 0 is used. You can specify one of FailureToleranceCount or FailureTolerancePercentage parameters, but you cannot specify both of them.
    // 
    // Valid values: 0 to 20.
    // 
    // *   FailureTolerancePercentage
    // 
    // The percentage of stack group operation failures that can occur. In a stack group operation, if the percentage of failures does not exceed the FailureTolerancePercentage value, the operation succeeds. Otherwise, the operation fails.
    // 
    // You can specify one of FailureToleranceCount or FailureTolerancePercentage parameters, but you cannot specify both of them.
    // 
    // Valid values: 0 to 100.
    // 
    // *   MaxConcurrentCount
    // 
    // The maximum number of target accounts in which a drift detection operation can be performed at a time.
    // 
    // You can specify one of MaxConcurrentCount or MaxConcurrentPercentage parameters, but you cannot specify both of them.
    // 
    // Valid values: 1 to 20.
    // 
    // *   MaxConcurrentPercentage
    // 
    // The maximum percentage of target accounts in which a drift detection operation can be performed at a time.
    // 
    // You can specify one of MaxConcurrentCount or MaxConcurrentPercentage parameters, but you cannot specify both of them.
    // 
    // Valid values: 1 to 100.
    Darabonba::Json operationPreferences_ = nullptr;
    // The region ID of the stack group. You can call the [DescribeRegions](~~131035#doc-api-ROS-DescribeRegions~~ "Queries the DescribeRegions list of a region.") operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the stack group. The name must be unique in a region.
    // 
    // The name can be up to 255 characters in length and can contain digits, letters, hyphens (-), and underscores (_). It must start with a digit or letter.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
