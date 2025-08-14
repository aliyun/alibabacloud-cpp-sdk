// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCENINTERREGIONTRAFFICQOSQUEUESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCENINTERREGIONTRAFFICQOSQUEUESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListCenInterRegionTrafficQosQueuesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCenInterRegionTrafficQosQueuesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficQosQueues, trafficQosQueues_);
    };
    friend void from_json(const Darabonba::Json& j, ListCenInterRegionTrafficQosQueuesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficQosQueues, trafficQosQueues_);
    };
    ListCenInterRegionTrafficQosQueuesResponseBody() = default ;
    ListCenInterRegionTrafficQosQueuesResponseBody(const ListCenInterRegionTrafficQosQueuesResponseBody &) = default ;
    ListCenInterRegionTrafficQosQueuesResponseBody(ListCenInterRegionTrafficQosQueuesResponseBody &&) = default ;
    ListCenInterRegionTrafficQosQueuesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCenInterRegionTrafficQosQueuesResponseBody() = default ;
    ListCenInterRegionTrafficQosQueuesResponseBody& operator=(const ListCenInterRegionTrafficQosQueuesResponseBody &) = default ;
    ListCenInterRegionTrafficQosQueuesResponseBody& operator=(ListCenInterRegionTrafficQosQueuesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->requestId_ != nullptr && this->trafficQosQueues_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCenInterRegionTrafficQosQueuesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCenInterRegionTrafficQosQueuesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficQosQueues Field Functions 
    bool hasTrafficQosQueues() const { return this->trafficQosQueues_ != nullptr;};
    void deleteTrafficQosQueues() { this->trafficQosQueues_ = nullptr;};
    inline const vector<ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues> & trafficQosQueues() const { DARABONBA_PTR_GET_CONST(trafficQosQueues_, vector<ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues>) };
    inline vector<ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues> trafficQosQueues() { DARABONBA_PTR_GET(trafficQosQueues_, vector<ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues>) };
    inline ListCenInterRegionTrafficQosQueuesResponseBody& setTrafficQosQueues(const vector<ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues> & trafficQosQueues) { DARABONBA_PTR_SET_VALUE(trafficQosQueues_, trafficQosQueues) };
    inline ListCenInterRegionTrafficQosQueuesResponseBody& setTrafficQosQueues(vector<ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues> && trafficQosQueues) { DARABONBA_PTR_SET_RVALUE(trafficQosQueues_, trafficQosQueues) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value of **NextToken** is returned, the value indicates the token that is used for the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the QoS queue.
    std::shared_ptr<vector<ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues>> trafficQosQueues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
