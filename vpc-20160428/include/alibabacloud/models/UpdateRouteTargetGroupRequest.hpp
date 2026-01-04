// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEROUTETARGETGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEROUTETARGETGROUPREQUEST_HPP_
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
  class UpdateRouteTargetGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRouteTargetGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RouteTargetGroupDescription, routeTargetGroupDescription_);
      DARABONBA_PTR_TO_JSON(RouteTargetGroupId, routeTargetGroupId_);
      DARABONBA_PTR_TO_JSON(RouteTargetGroupName, routeTargetGroupName_);
      DARABONBA_PTR_TO_JSON(RouteTargetMemberList, routeTargetMemberList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRouteTargetGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RouteTargetGroupDescription, routeTargetGroupDescription_);
      DARABONBA_PTR_FROM_JSON(RouteTargetGroupId, routeTargetGroupId_);
      DARABONBA_PTR_FROM_JSON(RouteTargetGroupName, routeTargetGroupName_);
      DARABONBA_PTR_FROM_JSON(RouteTargetMemberList, routeTargetMemberList_);
    };
    UpdateRouteTargetGroupRequest() = default ;
    UpdateRouteTargetGroupRequest(const UpdateRouteTargetGroupRequest &) = default ;
    UpdateRouteTargetGroupRequest(UpdateRouteTargetGroupRequest &&) = default ;
    UpdateRouteTargetGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRouteTargetGroupRequest() = default ;
    UpdateRouteTargetGroupRequest& operator=(const UpdateRouteTargetGroupRequest &) = default ;
    UpdateRouteTargetGroupRequest& operator=(UpdateRouteTargetGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // ID of the route target group member instance.
      shared_ptr<string> memberId_ {};
      // The member type of the route target group. 
      // 
      // Currently supported types: - **GatewayLoadBalancerEndpoint** 
      // 
      // In active-standby mode, all members of the route target group must be of the same type.
      shared_ptr<string> memberType_ {};
      // The weight value of the route target group member. Values:
      // - 100: indicates the member is the primary instance. 
      // - 0: indicates the member is the backup instance.
      // The weight value can only be set during creation and cannot be modified.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->regionId_ == nullptr && this->routeTargetGroupDescription_ == nullptr && this->routeTargetGroupId_ == nullptr && this->routeTargetGroupName_ == nullptr && this->routeTargetMemberList_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateRouteTargetGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateRouteTargetGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // routeTargetGroupDescription Field Functions 
    bool hasRouteTargetGroupDescription() const { return this->routeTargetGroupDescription_ != nullptr;};
    void deleteRouteTargetGroupDescription() { this->routeTargetGroupDescription_ = nullptr;};
    inline string getRouteTargetGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(routeTargetGroupDescription_, "") };
    inline UpdateRouteTargetGroupRequest& setRouteTargetGroupDescription(string routeTargetGroupDescription) { DARABONBA_PTR_SET_VALUE(routeTargetGroupDescription_, routeTargetGroupDescription) };


    // routeTargetGroupId Field Functions 
    bool hasRouteTargetGroupId() const { return this->routeTargetGroupId_ != nullptr;};
    void deleteRouteTargetGroupId() { this->routeTargetGroupId_ = nullptr;};
    inline string getRouteTargetGroupId() const { DARABONBA_PTR_GET_DEFAULT(routeTargetGroupId_, "") };
    inline UpdateRouteTargetGroupRequest& setRouteTargetGroupId(string routeTargetGroupId) { DARABONBA_PTR_SET_VALUE(routeTargetGroupId_, routeTargetGroupId) };


    // routeTargetGroupName Field Functions 
    bool hasRouteTargetGroupName() const { return this->routeTargetGroupName_ != nullptr;};
    void deleteRouteTargetGroupName() { this->routeTargetGroupName_ = nullptr;};
    inline string getRouteTargetGroupName() const { DARABONBA_PTR_GET_DEFAULT(routeTargetGroupName_, "") };
    inline UpdateRouteTargetGroupRequest& setRouteTargetGroupName(string routeTargetGroupName) { DARABONBA_PTR_SET_VALUE(routeTargetGroupName_, routeTargetGroupName) };


    // routeTargetMemberList Field Functions 
    bool hasRouteTargetMemberList() const { return this->routeTargetMemberList_ != nullptr;};
    void deleteRouteTargetMemberList() { this->routeTargetMemberList_ = nullptr;};
    inline const vector<UpdateRouteTargetGroupRequest::RouteTargetMemberList> & getRouteTargetMemberList() const { DARABONBA_PTR_GET_CONST(routeTargetMemberList_, vector<UpdateRouteTargetGroupRequest::RouteTargetMemberList>) };
    inline vector<UpdateRouteTargetGroupRequest::RouteTargetMemberList> getRouteTargetMemberList() { DARABONBA_PTR_GET(routeTargetMemberList_, vector<UpdateRouteTargetGroupRequest::RouteTargetMemberList>) };
    inline UpdateRouteTargetGroupRequest& setRouteTargetMemberList(const vector<UpdateRouteTargetGroupRequest::RouteTargetMemberList> & routeTargetMemberList) { DARABONBA_PTR_SET_VALUE(routeTargetMemberList_, routeTargetMemberList) };
    inline UpdateRouteTargetGroupRequest& setRouteTargetMemberList(vector<UpdateRouteTargetGroupRequest::RouteTargetMemberList> && routeTargetMemberList) { DARABONBA_PTR_SET_RVALUE(routeTargetMemberList_, routeTargetMemberList) };


  protected:
    // Client Token, used to ensure the idempotence of requests. Generate a unique value for this parameter from your client for each request. ClientToken supports only ASCII characters. Note that if you do not specify this, the system will automatically use the RequestId of the API request as the ClientToken identifier. The RequestId may differ for each API request.
    shared_ptr<string> clientToken_ {};
    // The ID of the region to which the route target group instance belongs. You can obtain the region ID by calling the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) interface.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Description of the route target group. 
    // 
    // The description length should be between 1 to 256 characters and must not start with http:// or https://.
    shared_ptr<string> routeTargetGroupDescription_ {};
    // The ID of the route target group instance.
    // 
    // This parameter is required.
    shared_ptr<string> routeTargetGroupId_ {};
    // The name of the route target group.
    // 
    // The name length should be between 1 and 128 characters, and cannot start with http:// or https://.
    shared_ptr<string> routeTargetGroupName_ {};
    // List of members in the route target group.
    // Under the primary-standby mode, there are the following restrictions on the members of the route target group:
    // 1. The number of members in the route target group must be 2. 
    // 2. The members of the route target group must belong to different availability zones.
    shared_ptr<vector<UpdateRouteTargetGroupRequest::RouteTargetMemberList>> routeTargetMemberList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
