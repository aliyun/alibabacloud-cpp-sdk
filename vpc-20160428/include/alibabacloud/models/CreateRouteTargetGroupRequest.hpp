// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTETARGETGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTETARGETGROUPREQUEST_HPP_
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
  class CreateRouteTargetGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRouteTargetGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConfigMode, configMode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RouteTargetGroupDescription, routeTargetGroupDescription_);
      DARABONBA_PTR_TO_JSON(RouteTargetGroupName, routeTargetGroupName_);
      DARABONBA_PTR_TO_JSON(RouteTargetMemberList, routeTargetMemberList_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRouteTargetGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConfigMode, configMode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RouteTargetGroupDescription, routeTargetGroupDescription_);
      DARABONBA_PTR_FROM_JSON(RouteTargetGroupName, routeTargetGroupName_);
      DARABONBA_PTR_FROM_JSON(RouteTargetMemberList, routeTargetMemberList_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateRouteTargetGroupRequest() = default ;
    CreateRouteTargetGroupRequest(const CreateRouteTargetGroupRequest &) = default ;
    CreateRouteTargetGroupRequest(CreateRouteTargetGroupRequest &&) = default ;
    CreateRouteTargetGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRouteTargetGroupRequest() = default ;
    CreateRouteTargetGroupRequest& operator=(const CreateRouteTargetGroupRequest &) = default ;
    CreateRouteTargetGroupRequest& operator=(CreateRouteTargetGroupRequest &&) = default ;
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
      // The tag key of the resource. Up to 20 tag keys are supported. If you need to pass this value, you cannot input an empty string.
      // 
      // A tag key can have up to 128 characters and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value of the resource. Up to 20 tag values are supported. If you need to pass this value, you can input an empty string.
      // 
      // A tag value can have up to 128 characters and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    class RouteTargetMemberList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteTargetMemberList& obj) { 
        DARABONBA_PTR_TO_JSON(MemberId, memberId_);
        DARABONBA_PTR_TO_JSON(MemberType, memberType_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, RouteTargetMemberList& obj) { 
        DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
        DARABONBA_PTR_FROM_JSON(MemberType, memberType_);
        DARABONBA_PTR_FROM_JSON(Weight, weight_);
      };
      RouteTargetMemberList() = default ;
      RouteTargetMemberList(const RouteTargetMemberList &) = default ;
      RouteTargetMemberList(RouteTargetMemberList &&) = default ;
      RouteTargetMemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteTargetMemberList() = default ;
      RouteTargetMemberList& operator=(const RouteTargetMemberList &) = default ;
      RouteTargetMemberList& operator=(RouteTargetMemberList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->memberId_ == nullptr
        && this->memberType_ == nullptr && this->weight_ == nullptr; };
      // memberId Field Functions 
      bool hasMemberId() const { return this->memberId_ != nullptr;};
      void deleteMemberId() { this->memberId_ = nullptr;};
      inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
      inline RouteTargetMemberList& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


      // memberType Field Functions 
      bool hasMemberType() const { return this->memberType_ != nullptr;};
      void deleteMemberType() { this->memberType_ = nullptr;};
      inline string getMemberType() const { DARABONBA_PTR_GET_DEFAULT(memberType_, "") };
      inline RouteTargetMemberList& setMemberType(string memberType) { DARABONBA_PTR_SET_VALUE(memberType_, memberType) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline RouteTargetMemberList& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      // The instance ID of the route target group member.
      // 
      // This parameter is required.
      shared_ptr<string> memberId_ {};
      // The type of the route target group member.
      // 
      // Currently supported types:
      // 
      // - **GatewayLoadBalancerEndpoint**
      // 
      // In Active-Standby mode, all members of the route target group must have the same type.
      // 
      // This parameter is required.
      shared_ptr<string> memberType_ {};
      // The weight value of the route target group member. Values:
      // 
      // - **100**: Indicates the member is a primary instance.
      // - **0**: Indicates the member is a standby instance.
      // 
      // The weight value can only be set during creation and cannot be modified.
      // 
      // This parameter is required.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->configMode_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->routeTargetGroupDescription_ == nullptr && this->routeTargetGroupName_ == nullptr
        && this->routeTargetMemberList_ == nullptr && this->tag_ == nullptr && this->vpcId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateRouteTargetGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configMode Field Functions 
    bool hasConfigMode() const { return this->configMode_ != nullptr;};
    void deleteConfigMode() { this->configMode_ = nullptr;};
    inline string getConfigMode() const { DARABONBA_PTR_GET_DEFAULT(configMode_, "") };
    inline CreateRouteTargetGroupRequest& setConfigMode(string configMode) { DARABONBA_PTR_SET_VALUE(configMode_, configMode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateRouteTargetGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateRouteTargetGroupRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // routeTargetGroupDescription Field Functions 
    bool hasRouteTargetGroupDescription() const { return this->routeTargetGroupDescription_ != nullptr;};
    void deleteRouteTargetGroupDescription() { this->routeTargetGroupDescription_ = nullptr;};
    inline string getRouteTargetGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(routeTargetGroupDescription_, "") };
    inline CreateRouteTargetGroupRequest& setRouteTargetGroupDescription(string routeTargetGroupDescription) { DARABONBA_PTR_SET_VALUE(routeTargetGroupDescription_, routeTargetGroupDescription) };


    // routeTargetGroupName Field Functions 
    bool hasRouteTargetGroupName() const { return this->routeTargetGroupName_ != nullptr;};
    void deleteRouteTargetGroupName() { this->routeTargetGroupName_ = nullptr;};
    inline string getRouteTargetGroupName() const { DARABONBA_PTR_GET_DEFAULT(routeTargetGroupName_, "") };
    inline CreateRouteTargetGroupRequest& setRouteTargetGroupName(string routeTargetGroupName) { DARABONBA_PTR_SET_VALUE(routeTargetGroupName_, routeTargetGroupName) };


    // routeTargetMemberList Field Functions 
    bool hasRouteTargetMemberList() const { return this->routeTargetMemberList_ != nullptr;};
    void deleteRouteTargetMemberList() { this->routeTargetMemberList_ = nullptr;};
    inline const vector<CreateRouteTargetGroupRequest::RouteTargetMemberList> & getRouteTargetMemberList() const { DARABONBA_PTR_GET_CONST(routeTargetMemberList_, vector<CreateRouteTargetGroupRequest::RouteTargetMemberList>) };
    inline vector<CreateRouteTargetGroupRequest::RouteTargetMemberList> getRouteTargetMemberList() { DARABONBA_PTR_GET(routeTargetMemberList_, vector<CreateRouteTargetGroupRequest::RouteTargetMemberList>) };
    inline CreateRouteTargetGroupRequest& setRouteTargetMemberList(const vector<CreateRouteTargetGroupRequest::RouteTargetMemberList> & routeTargetMemberList) { DARABONBA_PTR_SET_VALUE(routeTargetMemberList_, routeTargetMemberList) };
    inline CreateRouteTargetGroupRequest& setRouteTargetMemberList(vector<CreateRouteTargetGroupRequest::RouteTargetMemberList> && routeTargetMemberList) { DARABONBA_PTR_SET_RVALUE(routeTargetMemberList_, routeTargetMemberList) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateRouteTargetGroupRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateRouteTargetGroupRequest::Tag>) };
    inline vector<CreateRouteTargetGroupRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateRouteTargetGroupRequest::Tag>) };
    inline CreateRouteTargetGroupRequest& setTag(const vector<CreateRouteTargetGroupRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateRouteTargetGroupRequest& setTag(vector<CreateRouteTargetGroupRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateRouteTargetGroupRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // Client token used to ensure the idempotence of the request. Generate a parameter value from your client to ensure that it is unique across different requests. ClientToken supports only ASCII characters. Note: If you do not specify this, the system automatically uses the RequestId of the API request as the ClientToken identifier. Each API request has a different RequestId.
    shared_ptr<string> clientToken_ {};
    // The configuration mode of the route target group. Supported modes:
    // 
    // - **Active-Standby**: Active-Standby mode.
    // 
    // This parameter is required.
    shared_ptr<string> configMode_ {};
    // The region ID to which the route target group belongs. You can obtain the region ID by calling the DescribeRegions interface.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    // 
    // For more information about resource groups, see [What is a Resource Group](https://help.aliyun.com/document_detail/2381067.html).
    shared_ptr<string> resourceGroupId_ {};
    // The description of the route target group.
    // 
    // The description length must be between 1 and 256 characters, and cannot start with http:// or https://.
    shared_ptr<string> routeTargetGroupDescription_ {};
    // The name of the route target group.
    // 
    // The name length must be between 1 and 128 characters, and cannot start with http:// or https://.
    shared_ptr<string> routeTargetGroupName_ {};
    // The member list of the route target group.
    // 
    // In Active-Standby mode, the following restrictions apply to the members of the route target group:
    // 
    // 1. The number of route target group members must be 2.
    // 2. The route target group members must belong to different availability zones.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateRouteTargetGroupRequest::RouteTargetMemberList>> routeTargetMemberList_ {};
    // The tags of the resource.
    shared_ptr<vector<CreateRouteTargetGroupRequest::Tag>> tag_ {};
    // The ID of the VPC to which the route target group belongs.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
