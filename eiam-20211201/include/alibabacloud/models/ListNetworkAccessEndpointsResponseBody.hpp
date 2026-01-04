// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKACCESSENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKACCESSENDPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListNetworkAccessEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkAccessEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpoints, networkAccessEndpoints_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkAccessEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpoints, networkAccessEndpoints_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNetworkAccessEndpointsResponseBody() = default ;
    ListNetworkAccessEndpointsResponseBody(const ListNetworkAccessEndpointsResponseBody &) = default ;
    ListNetworkAccessEndpointsResponseBody(ListNetworkAccessEndpointsResponseBody &&) = default ;
    ListNetworkAccessEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkAccessEndpointsResponseBody() = default ;
    ListNetworkAccessEndpointsResponseBody& operator=(const ListNetworkAccessEndpointsResponseBody &) = default ;
    ListNetworkAccessEndpointsResponseBody& operator=(ListNetworkAccessEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkAccessEndpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkAccessEndpoints& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
        DARABONBA_PTR_TO_JSON(NetworkAccessEndpointName, networkAccessEndpointName_);
        DARABONBA_PTR_TO_JSON(NetworkAccessEndpointType, networkAccessEndpointType_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcRegionId, vpcRegionId_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkAccessEndpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
        DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointName, networkAccessEndpointName_);
        DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointType, networkAccessEndpointType_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcRegionId, vpcRegionId_);
      };
      NetworkAccessEndpoints() = default ;
      NetworkAccessEndpoints(const NetworkAccessEndpoints &) = default ;
      NetworkAccessEndpoints(NetworkAccessEndpoints &&) = default ;
      NetworkAccessEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkAccessEndpoints() = default ;
      NetworkAccessEndpoints& operator=(const NetworkAccessEndpoints &) = default ;
      NetworkAccessEndpoints& operator=(NetworkAccessEndpoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->instanceId_ == nullptr && this->networkAccessEndpointId_ == nullptr && this->networkAccessEndpointName_ == nullptr && this->networkAccessEndpointType_ == nullptr && this->securityGroupId_ == nullptr
        && this->status_ == nullptr && this->updateTime_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr && this->vpcRegionId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline NetworkAccessEndpoints& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline NetworkAccessEndpoints& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // networkAccessEndpointId Field Functions 
      bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
      void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
      inline string getNetworkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
      inline NetworkAccessEndpoints& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


      // networkAccessEndpointName Field Functions 
      bool hasNetworkAccessEndpointName() const { return this->networkAccessEndpointName_ != nullptr;};
      void deleteNetworkAccessEndpointName() { this->networkAccessEndpointName_ = nullptr;};
      inline string getNetworkAccessEndpointName() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointName_, "") };
      inline NetworkAccessEndpoints& setNetworkAccessEndpointName(string networkAccessEndpointName) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointName_, networkAccessEndpointName) };


      // networkAccessEndpointType Field Functions 
      bool hasNetworkAccessEndpointType() const { return this->networkAccessEndpointType_ != nullptr;};
      void deleteNetworkAccessEndpointType() { this->networkAccessEndpointType_ = nullptr;};
      inline string getNetworkAccessEndpointType() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointType_, "") };
      inline NetworkAccessEndpoints& setNetworkAccessEndpointType(string networkAccessEndpointType) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointType_, networkAccessEndpointType) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline NetworkAccessEndpoints& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline NetworkAccessEndpoints& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline NetworkAccessEndpoints& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline NetworkAccessEndpoints& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline NetworkAccessEndpoints& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline NetworkAccessEndpoints& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcRegionId Field Functions 
      bool hasVpcRegionId() const { return this->vpcRegionId_ != nullptr;};
      void deleteVpcRegionId() { this->vpcRegionId_ = nullptr;};
      inline string getVpcRegionId() const { DARABONBA_PTR_GET_DEFAULT(vpcRegionId_, "") };
      inline NetworkAccessEndpoints& setVpcRegionId(string vpcRegionId) { DARABONBA_PTR_SET_VALUE(vpcRegionId_, vpcRegionId) };


    protected:
      // 专属网络端点创建时间，Unix时间戳格式，单位为毫秒。
      shared_ptr<int64_t> createTime_ {};
      // 实例ID。
      shared_ptr<string> instanceId_ {};
      // 专属网络端点ID。
      shared_ptr<string> networkAccessEndpointId_ {};
      // 专属网络端点名称。
      shared_ptr<string> networkAccessEndpointName_ {};
      // 专属网络端点连接的类型。
      shared_ptr<string> networkAccessEndpointType_ {};
      // 专属网络端点使用的安全组ID。
      shared_ptr<string> securityGroupId_ {};
      // 专属网络端点状态。
      shared_ptr<string> status_ {};
      // 专属网络端点最近更新时间，Unix时间戳格式，单位为毫秒。
      shared_ptr<int64_t> updateTime_ {};
      // 专属网络端点连接的指定vSwitch列表。
      shared_ptr<vector<string>> vSwitchIds_ {};
      // 专属网络端点连接的VpcID。
      shared_ptr<string> vpcId_ {};
      // 专属网络端点连接的Vpc所属地域。
      shared_ptr<string> vpcRegionId_ {};
    };

    virtual bool empty() const override { return this->networkAccessEndpoints_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // networkAccessEndpoints Field Functions 
    bool hasNetworkAccessEndpoints() const { return this->networkAccessEndpoints_ != nullptr;};
    void deleteNetworkAccessEndpoints() { this->networkAccessEndpoints_ = nullptr;};
    inline const vector<ListNetworkAccessEndpointsResponseBody::NetworkAccessEndpoints> & getNetworkAccessEndpoints() const { DARABONBA_PTR_GET_CONST(networkAccessEndpoints_, vector<ListNetworkAccessEndpointsResponseBody::NetworkAccessEndpoints>) };
    inline vector<ListNetworkAccessEndpointsResponseBody::NetworkAccessEndpoints> getNetworkAccessEndpoints() { DARABONBA_PTR_GET(networkAccessEndpoints_, vector<ListNetworkAccessEndpointsResponseBody::NetworkAccessEndpoints>) };
    inline ListNetworkAccessEndpointsResponseBody& setNetworkAccessEndpoints(const vector<ListNetworkAccessEndpointsResponseBody::NetworkAccessEndpoints> & networkAccessEndpoints) { DARABONBA_PTR_SET_VALUE(networkAccessEndpoints_, networkAccessEndpoints) };
    inline ListNetworkAccessEndpointsResponseBody& setNetworkAccessEndpoints(vector<ListNetworkAccessEndpointsResponseBody::NetworkAccessEndpoints> && networkAccessEndpoints) { DARABONBA_PTR_SET_RVALUE(networkAccessEndpoints_, networkAccessEndpoints) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNetworkAccessEndpointsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNetworkAccessEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListNetworkAccessEndpointsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListNetworkAccessEndpointsResponseBody::NetworkAccessEndpoints>> networkAccessEndpoints_ {};
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
