// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointServiceUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointServiceUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserListType, userListType_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointServiceUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserListType, userListType_);
    };
    ListVpcEndpointServiceUsersRequest() = default ;
    ListVpcEndpointServiceUsersRequest(const ListVpcEndpointServiceUsersRequest &) = default ;
    ListVpcEndpointServiceUsersRequest(ListVpcEndpointServiceUsersRequest &&) = default ;
    ListVpcEndpointServiceUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointServiceUsersRequest() = default ;
    ListVpcEndpointServiceUsersRequest& operator=(const ListVpcEndpointServiceUsersRequest &) = default ;
    ListVpcEndpointServiceUsersRequest& operator=(ListVpcEndpointServiceUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->regionId_ == nullptr && return this->serviceId_ == nullptr && return this->userId_ == nullptr && return this->userListType_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpcEndpointServiceUsersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcEndpointServiceUsersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVpcEndpointServiceUsersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ListVpcEndpointServiceUsersRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline ListVpcEndpointServiceUsersRequest& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userListType Field Functions 
    bool hasUserListType() const { return this->userListType_ != nullptr;};
    void deleteUserListType() { this->userListType_ = nullptr;};
    inline string userListType() const { DARABONBA_PTR_GET_DEFAULT(userListType_, "") };
    inline ListVpcEndpointServiceUsersRequest& setUserListType(string userListType) { DARABONBA_PTR_SET_VALUE(userListType_, userListType) };


  protected:
    // The number of entries to return on each page. Valid values: **1 to 50**. Default value: **50**.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If this is your first request and no next requests are to be performed, you do not need to specify this parameter.
    // *   If a next request is to be performed, set the value to the value of **NextToken** that is returned from the last call.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID of the endpoint service that you want to query.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/120468.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The endpoint service ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The ID of the Alibaba Cloud account in the whitelist of the endpoint service.
    std::shared_ptr<int64_t> userId_ = nullptr;
    // The type of the user list in the whitelist of the endpoint service.
    std::shared_ptr<string> userListType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
