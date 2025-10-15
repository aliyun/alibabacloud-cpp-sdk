// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORNETWORKACCESSENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORNETWORKACCESSENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListApplicationsForNetworkAccessEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsForNetworkAccessEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsForNetworkAccessEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListApplicationsForNetworkAccessEndpointRequest() = default ;
    ListApplicationsForNetworkAccessEndpointRequest(const ListApplicationsForNetworkAccessEndpointRequest &) = default ;
    ListApplicationsForNetworkAccessEndpointRequest(ListApplicationsForNetworkAccessEndpointRequest &&) = default ;
    ListApplicationsForNetworkAccessEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsForNetworkAccessEndpointRequest() = default ;
    ListApplicationsForNetworkAccessEndpointRequest& operator=(const ListApplicationsForNetworkAccessEndpointRequest &) = default ;
    ListApplicationsForNetworkAccessEndpointRequest& operator=(ListApplicationsForNetworkAccessEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->maxResults_ == nullptr && return this->networkAccessEndpointId_ == nullptr && return this->nextToken_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListApplicationsForNetworkAccessEndpointRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListApplicationsForNetworkAccessEndpointRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // networkAccessEndpointId Field Functions 
    bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
    void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
    inline string networkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
    inline ListApplicationsForNetworkAccessEndpointRequest& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApplicationsForNetworkAccessEndpointRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // 分页查询时每页行数。默认值为20，最大值为100。
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // 网络端点ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> networkAccessEndpointId_ = nullptr;
    // 查询凭证（Token），取值为上一次API调用返回的NextToken参数值。
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
