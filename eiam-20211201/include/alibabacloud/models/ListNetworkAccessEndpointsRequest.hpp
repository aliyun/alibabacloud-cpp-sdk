// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKACCESSENDPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKACCESSENDPOINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListNetworkAccessEndpointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkAccessEndpointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointStatus, networkAccessEndpointStatus_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointType, networkAccessEndpointType_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcRegionId, vpcRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkAccessEndpointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointStatus, networkAccessEndpointStatus_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointType, networkAccessEndpointType_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcRegionId, vpcRegionId_);
    };
    ListNetworkAccessEndpointsRequest() = default ;
    ListNetworkAccessEndpointsRequest(const ListNetworkAccessEndpointsRequest &) = default ;
    ListNetworkAccessEndpointsRequest(ListNetworkAccessEndpointsRequest &&) = default ;
    ListNetworkAccessEndpointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkAccessEndpointsRequest() = default ;
    ListNetworkAccessEndpointsRequest& operator=(const ListNetworkAccessEndpointsRequest &) = default ;
    ListNetworkAccessEndpointsRequest& operator=(ListNetworkAccessEndpointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->maxResults_ == nullptr && return this->networkAccessEndpointStatus_ == nullptr && return this->networkAccessEndpointType_ == nullptr && return this->nextToken_ == nullptr && return this->vpcId_ == nullptr
        && return this->vpcRegionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListNetworkAccessEndpointsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListNetworkAccessEndpointsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // networkAccessEndpointStatus Field Functions 
    bool hasNetworkAccessEndpointStatus() const { return this->networkAccessEndpointStatus_ != nullptr;};
    void deleteNetworkAccessEndpointStatus() { this->networkAccessEndpointStatus_ = nullptr;};
    inline string networkAccessEndpointStatus() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointStatus_, "") };
    inline ListNetworkAccessEndpointsRequest& setNetworkAccessEndpointStatus(string networkAccessEndpointStatus) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointStatus_, networkAccessEndpointStatus) };


    // networkAccessEndpointType Field Functions 
    bool hasNetworkAccessEndpointType() const { return this->networkAccessEndpointType_ != nullptr;};
    void deleteNetworkAccessEndpointType() { this->networkAccessEndpointType_ = nullptr;};
    inline string networkAccessEndpointType() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointType_, "") };
    inline ListNetworkAccessEndpointsRequest& setNetworkAccessEndpointType(string networkAccessEndpointType) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointType_, networkAccessEndpointType) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNetworkAccessEndpointsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListNetworkAccessEndpointsRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcRegionId Field Functions 
    bool hasVpcRegionId() const { return this->vpcRegionId_ != nullptr;};
    void deleteVpcRegionId() { this->vpcRegionId_ = nullptr;};
    inline string vpcRegionId() const { DARABONBA_PTR_GET_DEFAULT(vpcRegionId_, "") };
    inline ListNetworkAccessEndpointsRequest& setVpcRegionId(string vpcRegionId) { DARABONBA_PTR_SET_VALUE(vpcRegionId_, vpcRegionId) };


  protected:
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // 分页查询时每页行数。默认值为20，最大值为100。
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // 专属网络端点连接的状态。NetworkAccessEndpointType取值为shared时不生效。
    std::shared_ptr<string> networkAccessEndpointStatus_ = nullptr;
    // 专属网络端点连接的类型。取值可选范围：1. private - 专属网络端点；2. shared - 共享网络端点
    std::shared_ptr<string> networkAccessEndpointType_ = nullptr;
    // 查询凭证（Token），取值为上一次API调用返回的NextToken参数值。
    std::shared_ptr<string> nextToken_ = nullptr;
    // 专属网络端点连接的Vpc ID。NetworkAccessEndpointType取值为shared时不生效。
    std::shared_ptr<string> vpcId_ = nullptr;
    // 专属网络端点连接的Vpc所属地域，该地域取值必须在ListNetworkAccessEndpointAvailableRegions接口中返回。NetworkAccessEndpointType取值为shared时不生效。
    std::shared_ptr<string> vpcRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
