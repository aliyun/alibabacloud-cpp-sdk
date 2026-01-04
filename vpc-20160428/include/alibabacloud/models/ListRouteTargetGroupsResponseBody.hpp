// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTETARGETGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTETARGETGROUPSRESPONSEBODY_HPP_
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
  class ListRouteTargetGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRouteTargetGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteTargetGroups, routeTargetGroups_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRouteTargetGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteTargetGroups, routeTargetGroups_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRouteTargetGroupsResponseBody() = default ;
    ListRouteTargetGroupsResponseBody(const ListRouteTargetGroupsResponseBody &) = default ;
    ListRouteTargetGroupsResponseBody(ListRouteTargetGroupsResponseBody &&) = default ;
    ListRouteTargetGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRouteTargetGroupsResponseBody() = default ;
    ListRouteTargetGroupsResponseBody& operator=(const ListRouteTargetGroupsResponseBody &) = default ;
    ListRouteTargetGroupsResponseBody& operator=(ListRouteTargetGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouteTargetGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteTargetGroups& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigMode, configMode_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(RouteTargetGroupDescription, routeTargetGroupDescription_);
        DARABONBA_PTR_TO_JSON(RouteTargetGroupId, routeTargetGroupId_);
        DARABONBA_PTR_TO_JSON(RouteTargetGroupName, routeTargetGroupName_);
        DARABONBA_PTR_TO_JSON(RouteTargetMemberList, routeTargetMemberList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, RouteTargetGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigMode, configMode_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(RouteTargetGroupDescription, routeTargetGroupDescription_);
        DARABONBA_PTR_FROM_JSON(RouteTargetGroupId, routeTargetGroupId_);
        DARABONBA_PTR_FROM_JSON(RouteTargetGroupName, routeTargetGroupName_);
        DARABONBA_PTR_FROM_JSON(RouteTargetMemberList, routeTargetMemberList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      RouteTargetGroups() = default ;
      RouteTargetGroups(const RouteTargetGroups &) = default ;
      RouteTargetGroups(RouteTargetGroups &&) = default ;
      RouteTargetGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteTargetGroups() = default ;
      RouteTargetGroups& operator=(const RouteTargetGroups &) = default ;
      RouteTargetGroups& operator=(RouteTargetGroups &&) = default ;
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
        // The key of the resource tag.
        shared_ptr<string> key_ {};
        // The value of the resource tag. Up to 20 tag values are supported. If you need to pass this value, you can input an empty string. A maximum of 128 characters is allowed. The value cannot start with `aliyun` or `acs:`, and it must not contain `http://` or `https://`.
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
        // The health check status of the route target group member. Values:
        // 
        // - **Normal**: Normal
        // - **Abnormal**: Abnormal
        shared_ptr<string> healthCheckStatus_ {};
        // The ID of the route target group member instance.
        shared_ptr<string> memberId_ {};
        // The type of the route target group member.
        // 
        // Currently supported types:
        // 
        // - **GatewayLoadBalancerEndpoint**
        shared_ptr<string> memberType_ {};
        // The weight value of the route target group member. Values:
        // 
        // - **100**: Indicates that the member is the primary instance.
        // - **0**: Indicates that the member is the backup instance.
        // 
        // The weight value can only be set during creation and cannot be modified.
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->configMode_ == nullptr
        && this->createTime_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->routeTargetGroupDescription_ == nullptr && this->routeTargetGroupId_ == nullptr
        && this->routeTargetGroupName_ == nullptr && this->routeTargetMemberList_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr; };
      // configMode Field Functions 
      bool hasConfigMode() const { return this->configMode_ != nullptr;};
      void deleteConfigMode() { this->configMode_ = nullptr;};
      inline string getConfigMode() const { DARABONBA_PTR_GET_DEFAULT(configMode_, "") };
      inline RouteTargetGroups& setConfigMode(string configMode) { DARABONBA_PTR_SET_VALUE(configMode_, configMode) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline RouteTargetGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline RouteTargetGroups& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline RouteTargetGroups& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // routeTargetGroupDescription Field Functions 
      bool hasRouteTargetGroupDescription() const { return this->routeTargetGroupDescription_ != nullptr;};
      void deleteRouteTargetGroupDescription() { this->routeTargetGroupDescription_ = nullptr;};
      inline string getRouteTargetGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(routeTargetGroupDescription_, "") };
      inline RouteTargetGroups& setRouteTargetGroupDescription(string routeTargetGroupDescription) { DARABONBA_PTR_SET_VALUE(routeTargetGroupDescription_, routeTargetGroupDescription) };


      // routeTargetGroupId Field Functions 
      bool hasRouteTargetGroupId() const { return this->routeTargetGroupId_ != nullptr;};
      void deleteRouteTargetGroupId() { this->routeTargetGroupId_ = nullptr;};
      inline string getRouteTargetGroupId() const { DARABONBA_PTR_GET_DEFAULT(routeTargetGroupId_, "") };
      inline RouteTargetGroups& setRouteTargetGroupId(string routeTargetGroupId) { DARABONBA_PTR_SET_VALUE(routeTargetGroupId_, routeTargetGroupId) };


      // routeTargetGroupName Field Functions 
      bool hasRouteTargetGroupName() const { return this->routeTargetGroupName_ != nullptr;};
      void deleteRouteTargetGroupName() { this->routeTargetGroupName_ = nullptr;};
      inline string getRouteTargetGroupName() const { DARABONBA_PTR_GET_DEFAULT(routeTargetGroupName_, "") };
      inline RouteTargetGroups& setRouteTargetGroupName(string routeTargetGroupName) { DARABONBA_PTR_SET_VALUE(routeTargetGroupName_, routeTargetGroupName) };


      // routeTargetMemberList Field Functions 
      bool hasRouteTargetMemberList() const { return this->routeTargetMemberList_ != nullptr;};
      void deleteRouteTargetMemberList() { this->routeTargetMemberList_ = nullptr;};
      inline const vector<RouteTargetGroups::RouteTargetMemberList> & getRouteTargetMemberList() const { DARABONBA_PTR_GET_CONST(routeTargetMemberList_, vector<RouteTargetGroups::RouteTargetMemberList>) };
      inline vector<RouteTargetGroups::RouteTargetMemberList> getRouteTargetMemberList() { DARABONBA_PTR_GET(routeTargetMemberList_, vector<RouteTargetGroups::RouteTargetMemberList>) };
      inline RouteTargetGroups& setRouteTargetMemberList(const vector<RouteTargetGroups::RouteTargetMemberList> & routeTargetMemberList) { DARABONBA_PTR_SET_VALUE(routeTargetMemberList_, routeTargetMemberList) };
      inline RouteTargetGroups& setRouteTargetMemberList(vector<RouteTargetGroups::RouteTargetMemberList> && routeTargetMemberList) { DARABONBA_PTR_SET_RVALUE(routeTargetMemberList_, routeTargetMemberList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RouteTargetGroups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<RouteTargetGroups::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<RouteTargetGroups::Tags>) };
      inline vector<RouteTargetGroups::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<RouteTargetGroups::Tags>) };
      inline RouteTargetGroups& setTags(const vector<RouteTargetGroups::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline RouteTargetGroups& setTags(vector<RouteTargetGroups::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline RouteTargetGroups& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The configuration mode of the route target group. Supported modes are as follows:
      // 
      // - **Active-Standby**: Active-standby mode.
      shared_ptr<string> configMode_ {};
      // The time when the route target group was created.
      shared_ptr<string> createTime_ {};
      // The region ID of the VPC to which the route target group belongs.
      // 
      // You can obtain the region ID by calling the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) interface.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group to which the route target group belongs.
      shared_ptr<string> resourceGroupId_ {};
      // Description of the route target group.
      shared_ptr<string> routeTargetGroupDescription_ {};
      // The ID of the route target group instance.
      shared_ptr<string> routeTargetGroupId_ {};
      // The name of the route target group.
      shared_ptr<string> routeTargetGroupName_ {};
      // The list of route target group members.
      shared_ptr<vector<RouteTargetGroups::RouteTargetMemberList>> routeTargetMemberList_ {};
      // Status of the route target group. Values:
      // 
      // - **Recovering**: Active-Standby rollback in progress
      // - **Switched**: Active-Standby switched
      // - **Available**: Available
      // - **Abnormal**: Standby instance abnormal
      // - **Pending**: Creating
      // - **Switching**: Active-Standby switching in progress
      // - **Deleting**: Deleting
      // - **Unavailable**: Both primary and standby instances are abnormal
      shared_ptr<string> status_ {};
      // The tag values. A maximum of 20 tag values are supported. If you need to pass this value, you can input an empty string.
      // 
      // A maximum of 128 characters are supported. The value cannot start with `aliyun` or `acs:` and cannot contain `http://` or `https://`.
      shared_ptr<vector<RouteTargetGroups::Tags>> tags_ {};
      // The ID of the VPC to which the route target group belongs.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->routeTargetGroups_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRouteTargetGroupsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRouteTargetGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRouteTargetGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeTargetGroups Field Functions 
    bool hasRouteTargetGroups() const { return this->routeTargetGroups_ != nullptr;};
    void deleteRouteTargetGroups() { this->routeTargetGroups_ = nullptr;};
    inline const vector<ListRouteTargetGroupsResponseBody::RouteTargetGroups> & getRouteTargetGroups() const { DARABONBA_PTR_GET_CONST(routeTargetGroups_, vector<ListRouteTargetGroupsResponseBody::RouteTargetGroups>) };
    inline vector<ListRouteTargetGroupsResponseBody::RouteTargetGroups> getRouteTargetGroups() { DARABONBA_PTR_GET(routeTargetGroups_, vector<ListRouteTargetGroupsResponseBody::RouteTargetGroups>) };
    inline ListRouteTargetGroupsResponseBody& setRouteTargetGroups(const vector<ListRouteTargetGroupsResponseBody::RouteTargetGroups> & routeTargetGroups) { DARABONBA_PTR_SET_VALUE(routeTargetGroups_, routeTargetGroups) };
    inline ListRouteTargetGroupsResponseBody& setRouteTargetGroups(vector<ListRouteTargetGroupsResponseBody::RouteTargetGroups> && routeTargetGroups) { DARABONBA_PTR_SET_RVALUE(routeTargetGroups_, routeTargetGroups) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListRouteTargetGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page size.
    shared_ptr<int32_t> maxResults_ {};
    // Token for the next query. Value: If NextToken is empty, it indicates there is no next query. If NextToken has a return value, it indicates the token for the next query.
    shared_ptr<string> nextToken_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // List of route target groups.
    shared_ptr<vector<ListRouteTargetGroupsResponseBody::RouteTargetGroups>> routeTargetGroups_ {};
    // Number of items in the list.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
