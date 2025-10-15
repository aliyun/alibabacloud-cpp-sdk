// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKACCESSENDPOINTSRESPONSEBODYNETWORKACCESSENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKACCESSENDPOINTSRESPONSEBODYNETWORKACCESSENDPOINTS_HPP_
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
  class ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints& obj) { 
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
    ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints() = default ;
    ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints(const ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints &) = default ;
    ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints(ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints &&) = default ;
    ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints() = default ;
    ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints& operator=(const ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints &) = default ;
    ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints& operator=(ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->instanceId_ == nullptr && return this->networkAccessEndpointId_ == nullptr && return this->networkAccessEndpointName_ == nullptr && return this->networkAccessEndpointType_ == nullptr && return this->securityGroupId_ == nullptr
        && return this->status_ == nullptr && return this->updateTime_ == nullptr && return this->vSwitchIds_ == nullptr && return this->vpcId_ == nullptr && return this->vpcRegionId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkAccessEndpointId Field Functions 
    bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
    void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
    inline string networkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
    inline ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


    // networkAccessEndpointName Field Functions 
    bool hasNetworkAccessEndpointName() const { return this->networkAccessEndpointName_ != nullptr;};
    void deleteNetworkAccessEndpointName() { this->networkAccessEndpointName_ = nullptr;};
    inline string networkAccessEndpointName() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointName_, "") };
    inline ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints& setNetworkAccessEndpointName(string networkAccessEndpointName) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointName_, networkAccessEndpointName) };


    // networkAccessEndpointType Field Functions 
    bool hasNetworkAccessEndpointType() const { return this->networkAccessEndpointType_ != nullptr;};
    void deleteNetworkAccessEndpointType() { this->networkAccessEndpointType_ = nullptr;};
    inline string networkAccessEndpointType() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointType_, "") };
    inline ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints& setNetworkAccessEndpointType(string networkAccessEndpointType) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointType_, networkAccessEndpointType) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcRegionId Field Functions 
    bool hasVpcRegionId() const { return this->vpcRegionId_ != nullptr;};
    void deleteVpcRegionId() { this->vpcRegionId_ = nullptr;};
    inline string vpcRegionId() const { DARABONBA_PTR_GET_DEFAULT(vpcRegionId_, "") };
    inline ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints& setVpcRegionId(string vpcRegionId) { DARABONBA_PTR_SET_VALUE(vpcRegionId_, vpcRegionId) };


  protected:
    // 专属网络端点创建时间，Unix时间戳格式，单位为毫秒。
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // 实例ID。
    std::shared_ptr<string> instanceId_ = nullptr;
    // 专属网络端点ID。
    std::shared_ptr<string> networkAccessEndpointId_ = nullptr;
    // 专属网络端点名称。
    std::shared_ptr<string> networkAccessEndpointName_ = nullptr;
    // 专属网络端点连接的类型。
    std::shared_ptr<string> networkAccessEndpointType_ = nullptr;
    // 专属网络端点使用的安全组ID。
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // 专属网络端点状态。
    std::shared_ptr<string> status_ = nullptr;
    // 专属网络端点最近更新时间，Unix时间戳格式，单位为毫秒。
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // 专属网络端点连接的指定vSwitch列表。
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
    // 专属网络端点连接的VpcID。
    std::shared_ptr<string> vpcId_ = nullptr;
    // 专属网络端点连接的Vpc所属地域。
    std::shared_ptr<string> vpcRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
