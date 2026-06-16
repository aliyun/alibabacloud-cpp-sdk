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
        && this->maxResults_ == nullptr && this->networkAccessEndpointStatus_ == nullptr && this->networkAccessEndpointType_ == nullptr && this->nextToken_ == nullptr && this->vpcId_ == nullptr
        && this->vpcRegionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListNetworkAccessEndpointsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListNetworkAccessEndpointsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // networkAccessEndpointStatus Field Functions 
    bool hasNetworkAccessEndpointStatus() const { return this->networkAccessEndpointStatus_ != nullptr;};
    void deleteNetworkAccessEndpointStatus() { this->networkAccessEndpointStatus_ = nullptr;};
    inline string getNetworkAccessEndpointStatus() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointStatus_, "") };
    inline ListNetworkAccessEndpointsRequest& setNetworkAccessEndpointStatus(string networkAccessEndpointStatus) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointStatus_, networkAccessEndpointStatus) };


    // networkAccessEndpointType Field Functions 
    bool hasNetworkAccessEndpointType() const { return this->networkAccessEndpointType_ != nullptr;};
    void deleteNetworkAccessEndpointType() { this->networkAccessEndpointType_ = nullptr;};
    inline string getNetworkAccessEndpointType() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointType_, "") };
    inline ListNetworkAccessEndpointsRequest& setNetworkAccessEndpointType(string networkAccessEndpointType) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointType_, networkAccessEndpointType) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNetworkAccessEndpointsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListNetworkAccessEndpointsRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcRegionId Field Functions 
    bool hasVpcRegionId() const { return this->vpcRegionId_ != nullptr;};
    void deleteVpcRegionId() { this->vpcRegionId_ = nullptr;};
    inline string getVpcRegionId() const { DARABONBA_PTR_GET_DEFAULT(vpcRegionId_, "") };
    inline ListNetworkAccessEndpointsRequest& setVpcRegionId(string vpcRegionId) { DARABONBA_PTR_SET_VALUE(vpcRegionId_, vpcRegionId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The number of entries to return on each page. The maximum value is 100.
    shared_ptr<int64_t> maxResults_ {};
    // The status of the network endpoint. Valid values:
    // 
    // - pending: The endpoint is pending initialization.
    // 
    // - creating: The endpoint is being created.
    // 
    // - running: The endpoint is running.
    // 
    // - deleting: The endpoint is being deleted.
    // 
    // This parameter does not take effect when NetworkAccessEndpointType is set to shared.
    shared_ptr<string> networkAccessEndpointStatus_ {};
    // The type of the network endpoint. Valid values:
    // 
    // - shared: a shared network endpoint.
    // 
    // - private: a private network endpoint.
    // 
    // The default value is private.
    shared_ptr<string> networkAccessEndpointType_ {};
    // The token used for the next query. Set this parameter to the NextToken value returned from the previous API call. Leave this parameter empty for the first query.
    shared_ptr<string> nextToken_ {};
    // The ID of the VPC to which the private network endpoint is connected. This parameter does not take effect when NetworkAccessEndpointType is set to shared.
    shared_ptr<string> vpcId_ {};
    // The region ID of the VPC to which the private network endpoint is connected. The value of this parameter must be a region returned by the ListNetworkAccessEndpointAvailableRegions operation. This parameter does not take effect when NetworkAccessEndpointType is set to shared.
    shared_ptr<string> vpcRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
