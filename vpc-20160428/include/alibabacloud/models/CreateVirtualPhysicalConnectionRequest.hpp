// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIRTUALPHYSICALCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIRTUALPHYSICALCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateVirtualPhysicalConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVirtualPhysicalConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OrderMode, orderMode_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
      DARABONBA_PTR_TO_JSON(VpconnAliUid, vpconnAliUid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVirtualPhysicalConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OrderMode, orderMode_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
      DARABONBA_PTR_FROM_JSON(VpconnAliUid, vpconnAliUid_);
    };
    CreateVirtualPhysicalConnectionRequest() = default ;
    CreateVirtualPhysicalConnectionRequest(const CreateVirtualPhysicalConnectionRequest &) = default ;
    CreateVirtualPhysicalConnectionRequest(CreateVirtualPhysicalConnectionRequest &&) = default ;
    CreateVirtualPhysicalConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVirtualPhysicalConnectionRequest() = default ;
    CreateVirtualPhysicalConnectionRequest& operator=(const CreateVirtualPhysicalConnectionRequest &) = default ;
    CreateVirtualPhysicalConnectionRequest& operator=(CreateVirtualPhysicalConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. You can specify at most 20 tag keys. The tag key cannot be an empty string.
      // 
      // The key can be up to 64 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The key must start with a letter but cannot start with `aliyun` or `acs:`. The key cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. You can specify at most 20 tag values. The tag value can be an empty string.
      // 
      // The value can be up to 128 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The value must start with a letter but cannot start with `aliyun` or `acs:`. The value cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->dryRun_ == nullptr && this->name_ == nullptr && this->orderMode_ == nullptr && this->physicalConnectionId_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->spec_ == nullptr && this->tag_ == nullptr && this->token_ == nullptr && this->vlanId_ == nullptr
        && this->vpconnAliUid_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVirtualPhysicalConnectionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateVirtualPhysicalConnectionRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateVirtualPhysicalConnectionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // orderMode Field Functions 
    bool hasOrderMode() const { return this->orderMode_ != nullptr;};
    void deleteOrderMode() { this->orderMode_ = nullptr;};
    inline string getOrderMode() const { DARABONBA_PTR_GET_DEFAULT(orderMode_, "") };
    inline CreateVirtualPhysicalConnectionRequest& setOrderMode(string orderMode) { DARABONBA_PTR_SET_VALUE(orderMode_, orderMode) };


    // physicalConnectionId Field Functions 
    bool hasPhysicalConnectionId() const { return this->physicalConnectionId_ != nullptr;};
    void deletePhysicalConnectionId() { this->physicalConnectionId_ = nullptr;};
    inline string getPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionId_, "") };
    inline CreateVirtualPhysicalConnectionRequest& setPhysicalConnectionId(string physicalConnectionId) { DARABONBA_PTR_SET_VALUE(physicalConnectionId_, physicalConnectionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVirtualPhysicalConnectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateVirtualPhysicalConnectionRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline CreateVirtualPhysicalConnectionRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateVirtualPhysicalConnectionRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateVirtualPhysicalConnectionRequest::Tag>) };
    inline vector<CreateVirtualPhysicalConnectionRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateVirtualPhysicalConnectionRequest::Tag>) };
    inline CreateVirtualPhysicalConnectionRequest& setTag(const vector<CreateVirtualPhysicalConnectionRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateVirtualPhysicalConnectionRequest& setTag(vector<CreateVirtualPhysicalConnectionRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline CreateVirtualPhysicalConnectionRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // vlanId Field Functions 
    bool hasVlanId() const { return this->vlanId_ != nullptr;};
    void deleteVlanId() { this->vlanId_ = nullptr;};
    inline int64_t getVlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, 0L) };
    inline CreateVirtualPhysicalConnectionRequest& setVlanId(int64_t vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


    // vpconnAliUid Field Functions 
    bool hasVpconnAliUid() const { return this->vpconnAliUid_ != nullptr;};
    void deleteVpconnAliUid() { this->vpconnAliUid_ = nullptr;};
    inline int64_t getVpconnAliUid() const { DARABONBA_PTR_GET_DEFAULT(vpconnAliUid_, 0L) };
    inline CreateVirtualPhysicalConnectionRequest& setVpconnAliUid(int64_t vpconnAliUid) { DARABONBA_PTR_SET_VALUE(vpconnAliUid_, vpconnAliUid) };


  protected:
    // The description of the hosted connection.
    // 
    // The description must be 2 to 256 characters in length. The description must start with a letter but cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // Specifies whether to perform a dry run, without performing the actual request. Default value: 45104. Valid values:
    // 
    // *   **true**: performs a dry run. The system checks the request for potential issues, including required parameters, request syntax, and instance status. If the request fails the dry run, an error code is returned. If the request passes the dry run, `DRYRUN.SUCCESS` is returned.
    // *   **false**: performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The name of the hosted connection.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The name must start with a letter but cannot start with `http://` or `https://`.
    shared_ptr<string> name_ {};
    // The payer for the hosted connection. Valid values:
    // 
    // *   **PayByPhysicalConnectionOwner**: The partner pays for the hosted connection.
    // *   **PayByVirtualPhysicalConnectionOwner**: The tenant pays for the hosted connection.
    // 
    // This parameter is required.
    shared_ptr<string> orderMode_ {};
    // The ID of the Express Connect circuit over which the hosted connection is created.
    // 
    // This parameter is required.
    shared_ptr<string> physicalConnectionId_ {};
    // The region ID of the hosted connection.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to obtain the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the hosted connection belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The bandwidth value of the hosted connection.
    // 
    // Valid values: **50M**, **100M**, **200M**, **300M**, **400M**, **500M**, **1G**, **2G**, **5G**, **8G**, and **10G**.
    // 
    // >  **2G**, **5G**, **8G**, and **10G** are unavailable by default. If you want to use these bandwidth values, contact your account manager.
    // 
    // **M** indicates Mbit/s and **G** indicates Gbit/s.
    // 
    // This parameter is required.
    shared_ptr<string> spec_ {};
    // The tags.
    shared_ptr<vector<CreateVirtualPhysicalConnectionRequest::Tag>> tag_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> token_ {};
    // The virtual local area network (VLAN) ID of the hosted connection. Valid values: **0** to **2999**.
    // 
    // *   If the VLAN ID is set to **0**, it indicates that the switch port of the virtual border router (VBR) is a Layer 3 router interface instead of a VLAN interface. When a Layer 3 router interface is used, each Express Connect circuit corresponds to a VBR.
    // *   If the VLAN ID is set to a value from **1** to **2999**, the switch port of the VBR is a Layer 3 VLAN subinterface. When a Layer 3 VLAN subinterface is used, each VLAN ID corresponds to one VBR. In this case, the Express Connect circuit with which the VBR is associated can be used to connect to virtual private clouds (VPCs) that belong to different Alibaba Cloud accounts. VBRs in different VLANs are isolated from each other at Layer 2.
    // 
    // This parameter is required.
    shared_ptr<int64_t> vlanId_ {};
    // The Alibaba Cloud account ID of the tenant.
    // 
    // This parameter is required.
    shared_ptr<int64_t> vpconnAliUid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
