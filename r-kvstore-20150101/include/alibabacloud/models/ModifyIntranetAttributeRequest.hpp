// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINTRANETATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINTRANETATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class ModifyIntranetAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyIntranetAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BandWidth, bandWidth_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyIntranetAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BandWidth, bandWidth_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    ModifyIntranetAttributeRequest() = default ;
    ModifyIntranetAttributeRequest(const ModifyIntranetAttributeRequest &) = default ;
    ModifyIntranetAttributeRequest(ModifyIntranetAttributeRequest &&) = default ;
    ModifyIntranetAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyIntranetAttributeRequest() = default ;
    ModifyIntranetAttributeRequest& operator=(const ModifyIntranetAttributeRequest &) = default ;
    ModifyIntranetAttributeRequest& operator=(ModifyIntranetAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandWidth_ == nullptr
        && this->instanceId_ == nullptr && this->nodeId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->securityToken_ == nullptr; };
    // bandWidth Field Functions 
    bool hasBandWidth() const { return this->bandWidth_ != nullptr;};
    void deleteBandWidth() { this->bandWidth_ = nullptr;};
    inline int64_t getBandWidth() const { DARABONBA_PTR_GET_DEFAULT(bandWidth_, 0L) };
    inline ModifyIntranetAttributeRequest& setBandWidth(int64_t bandWidth) { DARABONBA_PTR_SET_VALUE(bandWidth_, bandWidth) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyIntranetAttributeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ModifyIntranetAttributeRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyIntranetAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyIntranetAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyIntranetAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyIntranetAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyIntranetAttributeRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The bandwidth to add, in MB/s. The value must be an integer greater than or equal to 0. Typically, the maximum value is twice the default maximum bandwidth of the current instance type. For bandwidth information about each instance type, see [Instance type navigation](https://help.aliyun.com/document_detail/26350.html). However, the following limits also apply:
    // * The bandwidth of a single instance cannot exceed 75% of the bandwidth of the host on which the instance resides. For information about host specifications and bandwidth, see [Host specification details](https://help.aliyun.com/document_detail/206343.html).
    // * The total bandwidth of all instances on a host cannot exceed 150% of the bandwidth of the host. You can configure overcommitment to meet bandwidth requirements for staggered-peak deployment. For more information, see [Configure cluster overcommitment to reduce costs](https://help.aliyun.com/document_detail/183798.html).
    // 
    // > For instances that use the standard architecture, if you do not specify this parameter, the bandwidth of the instance is doubled based on the current bandwidth.
    shared_ptr<int64_t> bandWidth_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the data node. You can call [DescribeClusterMemberInfo](https://help.aliyun.com/document_detail/473783.html) to query the ID. Separate multiple IDs with commas (,).
    // > This parameter is available and required only when the instance uses the [Cluster Edition](https://help.aliyun.com/document_detail/52228.html).
    shared_ptr<string> nodeId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
