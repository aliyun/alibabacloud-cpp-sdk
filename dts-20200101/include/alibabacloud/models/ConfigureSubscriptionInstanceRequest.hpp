// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGURESUBSCRIPTIONINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGURESUBSCRIPTIONINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ConfigureSubscriptionInstanceRequestSourceEndpoint.hpp>
#include <alibabacloud/models/ConfigureSubscriptionInstanceRequestSubscriptionDataType.hpp>
#include <alibabacloud/models/ConfigureSubscriptionInstanceRequestSubscriptionInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ConfigureSubscriptionInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureSubscriptionInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(SubscriptionDataType, subscriptionDataType_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstance, subscriptionInstance_);
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstanceId, subscriptionInstanceId_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstanceName, subscriptionInstanceName_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstanceNetworkType, subscriptionInstanceNetworkType_);
      DARABONBA_PTR_TO_JSON(SubscriptionObject, subscriptionObject_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureSubscriptionInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(SubscriptionDataType, subscriptionDataType_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstance, subscriptionInstance_);
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstanceId, subscriptionInstanceId_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstanceName, subscriptionInstanceName_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstanceNetworkType, subscriptionInstanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(SubscriptionObject, subscriptionObject_);
    };
    ConfigureSubscriptionInstanceRequest() = default ;
    ConfigureSubscriptionInstanceRequest(const ConfigureSubscriptionInstanceRequest &) = default ;
    ConfigureSubscriptionInstanceRequest(ConfigureSubscriptionInstanceRequest &&) = default ;
    ConfigureSubscriptionInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureSubscriptionInstanceRequest() = default ;
    ConfigureSubscriptionInstanceRequest& operator=(const ConfigureSubscriptionInstanceRequest &) = default ;
    ConfigureSubscriptionInstanceRequest& operator=(ConfigureSubscriptionInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceEndpoint_ == nullptr
        && return this->subscriptionDataType_ == nullptr && return this->subscriptionInstance_ == nullptr && return this->accountId_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->subscriptionInstanceId_ == nullptr && return this->subscriptionInstanceName_ == nullptr && return this->subscriptionInstanceNetworkType_ == nullptr && return this->subscriptionObject_ == nullptr; };
    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const ConfigureSubscriptionInstanceRequestSourceEndpoint & sourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, ConfigureSubscriptionInstanceRequestSourceEndpoint) };
    inline ConfigureSubscriptionInstanceRequestSourceEndpoint sourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, ConfigureSubscriptionInstanceRequestSourceEndpoint) };
    inline ConfigureSubscriptionInstanceRequest& setSourceEndpoint(const ConfigureSubscriptionInstanceRequestSourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline ConfigureSubscriptionInstanceRequest& setSourceEndpoint(ConfigureSubscriptionInstanceRequestSourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // subscriptionDataType Field Functions 
    bool hasSubscriptionDataType() const { return this->subscriptionDataType_ != nullptr;};
    void deleteSubscriptionDataType() { this->subscriptionDataType_ = nullptr;};
    inline const ConfigureSubscriptionInstanceRequestSubscriptionDataType & subscriptionDataType() const { DARABONBA_PTR_GET_CONST(subscriptionDataType_, ConfigureSubscriptionInstanceRequestSubscriptionDataType) };
    inline ConfigureSubscriptionInstanceRequestSubscriptionDataType subscriptionDataType() { DARABONBA_PTR_GET(subscriptionDataType_, ConfigureSubscriptionInstanceRequestSubscriptionDataType) };
    inline ConfigureSubscriptionInstanceRequest& setSubscriptionDataType(const ConfigureSubscriptionInstanceRequestSubscriptionDataType & subscriptionDataType) { DARABONBA_PTR_SET_VALUE(subscriptionDataType_, subscriptionDataType) };
    inline ConfigureSubscriptionInstanceRequest& setSubscriptionDataType(ConfigureSubscriptionInstanceRequestSubscriptionDataType && subscriptionDataType) { DARABONBA_PTR_SET_RVALUE(subscriptionDataType_, subscriptionDataType) };


    // subscriptionInstance Field Functions 
    bool hasSubscriptionInstance() const { return this->subscriptionInstance_ != nullptr;};
    void deleteSubscriptionInstance() { this->subscriptionInstance_ = nullptr;};
    inline const ConfigureSubscriptionInstanceRequestSubscriptionInstance & subscriptionInstance() const { DARABONBA_PTR_GET_CONST(subscriptionInstance_, ConfigureSubscriptionInstanceRequestSubscriptionInstance) };
    inline ConfigureSubscriptionInstanceRequestSubscriptionInstance subscriptionInstance() { DARABONBA_PTR_GET(subscriptionInstance_, ConfigureSubscriptionInstanceRequestSubscriptionInstance) };
    inline ConfigureSubscriptionInstanceRequest& setSubscriptionInstance(const ConfigureSubscriptionInstanceRequestSubscriptionInstance & subscriptionInstance) { DARABONBA_PTR_SET_VALUE(subscriptionInstance_, subscriptionInstance) };
    inline ConfigureSubscriptionInstanceRequest& setSubscriptionInstance(ConfigureSubscriptionInstanceRequestSubscriptionInstance && subscriptionInstance) { DARABONBA_PTR_SET_RVALUE(subscriptionInstance_, subscriptionInstance) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ConfigureSubscriptionInstanceRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ConfigureSubscriptionInstanceRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigureSubscriptionInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ConfigureSubscriptionInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // subscriptionInstanceId Field Functions 
    bool hasSubscriptionInstanceId() const { return this->subscriptionInstanceId_ != nullptr;};
    void deleteSubscriptionInstanceId() { this->subscriptionInstanceId_ = nullptr;};
    inline string subscriptionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceId_, "") };
    inline ConfigureSubscriptionInstanceRequest& setSubscriptionInstanceId(string subscriptionInstanceId) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceId_, subscriptionInstanceId) };


    // subscriptionInstanceName Field Functions 
    bool hasSubscriptionInstanceName() const { return this->subscriptionInstanceName_ != nullptr;};
    void deleteSubscriptionInstanceName() { this->subscriptionInstanceName_ = nullptr;};
    inline string subscriptionInstanceName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceName_, "") };
    inline ConfigureSubscriptionInstanceRequest& setSubscriptionInstanceName(string subscriptionInstanceName) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceName_, subscriptionInstanceName) };


    // subscriptionInstanceNetworkType Field Functions 
    bool hasSubscriptionInstanceNetworkType() const { return this->subscriptionInstanceNetworkType_ != nullptr;};
    void deleteSubscriptionInstanceNetworkType() { this->subscriptionInstanceNetworkType_ = nullptr;};
    inline string subscriptionInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceNetworkType_, "") };
    inline ConfigureSubscriptionInstanceRequest& setSubscriptionInstanceNetworkType(string subscriptionInstanceNetworkType) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceNetworkType_, subscriptionInstanceNetworkType) };


    // subscriptionObject Field Functions 
    bool hasSubscriptionObject() const { return this->subscriptionObject_ != nullptr;};
    void deleteSubscriptionObject() { this->subscriptionObject_ = nullptr;};
    inline string subscriptionObject() const { DARABONBA_PTR_GET_DEFAULT(subscriptionObject_, "") };
    inline ConfigureSubscriptionInstanceRequest& setSubscriptionObject(string subscriptionObject) { DARABONBA_PTR_SET_VALUE(subscriptionObject_, subscriptionObject) };


  protected:
    std::shared_ptr<ConfigureSubscriptionInstanceRequestSourceEndpoint> sourceEndpoint_ = nullptr;
    std::shared_ptr<ConfigureSubscriptionInstanceRequestSubscriptionDataType> subscriptionDataType_ = nullptr;
    std::shared_ptr<ConfigureSubscriptionInstanceRequestSubscriptionInstance> subscriptionInstance_ = nullptr;
    // The ID of the Alibaba Cloud account. You do not need to specify this parameter because this parameter is about to be discontinued.
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // 资源组ID。
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the change tracking instance. You can call the [DescribeSubscriptionInstances](https://help.aliyun.com/document_detail/49442.html) operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> subscriptionInstanceId_ = nullptr;
    // The name of the change tracking instance.
    // 
    // > We recommend that you specify a descriptive name for easy identification. You do not need to use a unique name.
    std::shared_ptr<string> subscriptionInstanceName_ = nullptr;
    // The network type of the change tracking instance. Set the value to **vpc**, which specifies the Virtual Private Cloud (VPC) network type.
    // 
    // > 
    // 
    // *   To use the new version of the change tracking feature, you must specify the SubscriptionInstanceNetworkType parameter. You must also specify the **SubscriptionInstance.VPCId** and **SubscriptionInstance.VSwitchID** parameters. If you do not specify the SubscriptionInstanceNetworkType parameter, the previous version of the change tracking feature is used.
    // 
    // *   The previous version of the change tracking feature supports self-managed MySQL databases, ApsaraDB RDS for MySQL instances, and PolarDB-X 1.0 instances. The new version of the change tracking feature supports self-managed MySQL databases, ApsaraDB RDS for MySQL instances, PolarDB for MySQL clusters, and Oracle databases.
    std::shared_ptr<string> subscriptionInstanceNetworkType_ = nullptr;
    // The objects for which you want to track data changes. The value is a JSON string and can contain regular expressions. For more information, see [SubscriptionObjects](https://help.aliyun.com/document_detail/141902.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> subscriptionObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
