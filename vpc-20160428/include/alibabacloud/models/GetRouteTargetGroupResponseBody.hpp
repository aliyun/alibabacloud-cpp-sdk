// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTETARGETGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROUTETARGETGROUPRESPONSEBODY_HPP_
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
  class GetRouteTargetGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRouteTargetGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigMode, configMode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RouteTargetGroupDescription, routeTargetGroupDescription_);
      DARABONBA_PTR_TO_JSON(RouteTargetGroupId, routeTargetGroupId_);
      DARABONBA_PTR_TO_JSON(RouteTargetGroupName, routeTargetGroupName_);
      DARABONBA_PTR_TO_JSON(RouteTargetMemberList, routeTargetMemberList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRouteTargetGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigMode, configMode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RouteTargetGroupDescription, routeTargetGroupDescription_);
      DARABONBA_PTR_FROM_JSON(RouteTargetGroupId, routeTargetGroupId_);
      DARABONBA_PTR_FROM_JSON(RouteTargetGroupName, routeTargetGroupName_);
      DARABONBA_PTR_FROM_JSON(RouteTargetMemberList, routeTargetMemberList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetRouteTargetGroupResponseBody() = default ;
    GetRouteTargetGroupResponseBody(const GetRouteTargetGroupResponseBody &) = default ;
    GetRouteTargetGroupResponseBody(GetRouteTargetGroupResponseBody &&) = default ;
    GetRouteTargetGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRouteTargetGroupResponseBody() = default ;
    GetRouteTargetGroupResponseBody& operator=(const GetRouteTargetGroupResponseBody &) = default ;
    GetRouteTargetGroupResponseBody& operator=(GetRouteTargetGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
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
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Tag key.
      shared_ptr<string> key_ {};
      // Tag value.
      shared_ptr<string> value_ {};
    };

    class RouteTargetMemberList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteTargetMemberList& obj) { 
        DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
        DARABONBA_PTR_TO_JSON(HealthCheckStatus, healthCheckStatus_);
        DARABONBA_PTR_TO_JSON(MemberId, memberId_);
        DARABONBA_PTR_TO_JSON(MemberType, memberType_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, RouteTargetMemberList& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
        DARABONBA_PTR_FROM_JSON(HealthCheckStatus, healthCheckStatus_);
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
      virtual bool empty() const override { return this->enableStatus_ == nullptr
        && this->healthCheckStatus_ == nullptr && this->memberId_ == nullptr && this->memberType_ == nullptr && this->weight_ == nullptr; };
      // enableStatus Field Functions 
      bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
      void deleteEnableStatus() { this->enableStatus_ = nullptr;};
      inline string getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
      inline RouteTargetMemberList& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


      // healthCheckStatus Field Functions 
      bool hasHealthCheckStatus() const { return this->healthCheckStatus_ != nullptr;};
      void deleteHealthCheckStatus() { this->healthCheckStatus_ = nullptr;};
      inline string getHealthCheckStatus() const { DARABONBA_PTR_GET_DEFAULT(healthCheckStatus_, "") };
      inline RouteTargetMemberList& setHealthCheckStatus(string healthCheckStatus) { DARABONBA_PTR_SET_VALUE(healthCheckStatus_, healthCheckStatus) };


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
      // The enable status of the route target group member. Values:
      // 
      // - **Enable**: Enabled.
      // - **Disable**: Disabled.
      // 
      // Only disabled route target group members can be modified to other instances. Enabled route target group members cannot be modified.
      shared_ptr<string> enableStatus_ {};
      // Route target group member health check status. Values:
      // - **Normal**: Normal 
      // - **Abnormal**: Abnormal
      shared_ptr<string> healthCheckStatus_ {};
      // ID of the route target group member instance.
      shared_ptr<string> memberId_ {};
      // Type of the route target group member.
      // 
      // Currently supported types:
      // 
      // - **GatewayLoadBalancerEndpoint**
      shared_ptr<string> memberType_ {};
      // Weight value of the route target group member. Values:
      // 
      // - **100**: Indicates the member is the primary instance.
      // - **0**: Indicates the member is the standby instance.
      // 
      // The weight value can only be set during creation and cannot be modified.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->configMode_ == nullptr
        && this->createTime_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->routeTargetGroupDescription_ == nullptr
        && this->routeTargetGroupId_ == nullptr && this->routeTargetGroupName_ == nullptr && this->routeTargetMemberList_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->vpcId_ == nullptr; };
    // configMode Field Functions 
    bool hasConfigMode() const { return this->configMode_ != nullptr;};
    void deleteConfigMode() { this->configMode_ = nullptr;};
    inline string getConfigMode() const { DARABONBA_PTR_GET_DEFAULT(configMode_, "") };
    inline GetRouteTargetGroupResponseBody& setConfigMode(string configMode) { DARABONBA_PTR_SET_VALUE(configMode_, configMode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetRouteTargetGroupResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetRouteTargetGroupResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRouteTargetGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetRouteTargetGroupResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // routeTargetGroupDescription Field Functions 
    bool hasRouteTargetGroupDescription() const { return this->routeTargetGroupDescription_ != nullptr;};
    void deleteRouteTargetGroupDescription() { this->routeTargetGroupDescription_ = nullptr;};
    inline string getRouteTargetGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(routeTargetGroupDescription_, "") };
    inline GetRouteTargetGroupResponseBody& setRouteTargetGroupDescription(string routeTargetGroupDescription) { DARABONBA_PTR_SET_VALUE(routeTargetGroupDescription_, routeTargetGroupDescription) };


    // routeTargetGroupId Field Functions 
    bool hasRouteTargetGroupId() const { return this->routeTargetGroupId_ != nullptr;};
    void deleteRouteTargetGroupId() { this->routeTargetGroupId_ = nullptr;};
    inline string getRouteTargetGroupId() const { DARABONBA_PTR_GET_DEFAULT(routeTargetGroupId_, "") };
    inline GetRouteTargetGroupResponseBody& setRouteTargetGroupId(string routeTargetGroupId) { DARABONBA_PTR_SET_VALUE(routeTargetGroupId_, routeTargetGroupId) };


    // routeTargetGroupName Field Functions 
    bool hasRouteTargetGroupName() const { return this->routeTargetGroupName_ != nullptr;};
    void deleteRouteTargetGroupName() { this->routeTargetGroupName_ = nullptr;};
    inline string getRouteTargetGroupName() const { DARABONBA_PTR_GET_DEFAULT(routeTargetGroupName_, "") };
    inline GetRouteTargetGroupResponseBody& setRouteTargetGroupName(string routeTargetGroupName) { DARABONBA_PTR_SET_VALUE(routeTargetGroupName_, routeTargetGroupName) };


    // routeTargetMemberList Field Functions 
    bool hasRouteTargetMemberList() const { return this->routeTargetMemberList_ != nullptr;};
    void deleteRouteTargetMemberList() { this->routeTargetMemberList_ = nullptr;};
    inline const vector<GetRouteTargetGroupResponseBody::RouteTargetMemberList> & getRouteTargetMemberList() const { DARABONBA_PTR_GET_CONST(routeTargetMemberList_, vector<GetRouteTargetGroupResponseBody::RouteTargetMemberList>) };
    inline vector<GetRouteTargetGroupResponseBody::RouteTargetMemberList> getRouteTargetMemberList() { DARABONBA_PTR_GET(routeTargetMemberList_, vector<GetRouteTargetGroupResponseBody::RouteTargetMemberList>) };
    inline GetRouteTargetGroupResponseBody& setRouteTargetMemberList(const vector<GetRouteTargetGroupResponseBody::RouteTargetMemberList> & routeTargetMemberList) { DARABONBA_PTR_SET_VALUE(routeTargetMemberList_, routeTargetMemberList) };
    inline GetRouteTargetGroupResponseBody& setRouteTargetMemberList(vector<GetRouteTargetGroupResponseBody::RouteTargetMemberList> && routeTargetMemberList) { DARABONBA_PTR_SET_RVALUE(routeTargetMemberList_, routeTargetMemberList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetRouteTargetGroupResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetRouteTargetGroupResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetRouteTargetGroupResponseBody::Tags>) };
    inline vector<GetRouteTargetGroupResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetRouteTargetGroupResponseBody::Tags>) };
    inline GetRouteTargetGroupResponseBody& setTags(const vector<GetRouteTargetGroupResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetRouteTargetGroupResponseBody& setTags(vector<GetRouteTargetGroupResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetRouteTargetGroupResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // Configuration mode of the route target group. Supported modes are as follows:
    // 
    // - **Active-Standby**: Active-standby mode.
    shared_ptr<string> configMode_ {};
    // The time when the route target group was created.
    shared_ptr<string> createTime_ {};
    // The region ID of the VPC to which the route target group belongs. You can obtain the region ID by calling the DescribeRegions interface.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group to which the route target group belongs.
    shared_ptr<string> resourceGroupId_ {};
    // Description of the route target group.
    shared_ptr<string> routeTargetGroupDescription_ {};
    // ID of the route target group instance.
    shared_ptr<string> routeTargetGroupId_ {};
    // Name of the route target group.
    shared_ptr<string> routeTargetGroupName_ {};
    // List of members in the route target group.
    shared_ptr<vector<GetRouteTargetGroupResponseBody::RouteTargetMemberList>> routeTargetMemberList_ {};
    // The status of the route target group. Values:
    // - **Recovering**: In the process of switching back to the primary 
    // - **Switched**: The primary and secondary have been switched 
    // - **Available**: Available 
    // - **Abnormal**: Secondary instance is abnormal 
    // - **Pending**: In the process of being created 
    // - **Switching**: In the process of switching between primary and secondary 
    // - **Deleting**: In the process of being deleted 
    // - **Unavailable**: Both primary and secondary instances are abnormal
    shared_ptr<string> status_ {};
    // Tags of the route target group.
    shared_ptr<vector<GetRouteTargetGroupResponseBody::Tags>> tags_ {};
    // ID of the VPC to which the route target group belongs.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
