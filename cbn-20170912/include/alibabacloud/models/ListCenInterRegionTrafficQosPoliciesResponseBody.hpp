// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCENINTERREGIONTRAFFICQOSPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCENINTERREGIONTRAFFICQOSPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListCenInterRegionTrafficQosPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCenInterRegionTrafficQosPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TrafficQosPolicies, trafficQosPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, ListCenInterRegionTrafficQosPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TrafficQosPolicies, trafficQosPolicies_);
    };
    ListCenInterRegionTrafficQosPoliciesResponseBody() = default ;
    ListCenInterRegionTrafficQosPoliciesResponseBody(const ListCenInterRegionTrafficQosPoliciesResponseBody &) = default ;
    ListCenInterRegionTrafficQosPoliciesResponseBody(ListCenInterRegionTrafficQosPoliciesResponseBody &&) = default ;
    ListCenInterRegionTrafficQosPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCenInterRegionTrafficQosPoliciesResponseBody() = default ;
    ListCenInterRegionTrafficQosPoliciesResponseBody& operator=(const ListCenInterRegionTrafficQosPoliciesResponseBody &) = default ;
    ListCenInterRegionTrafficQosPoliciesResponseBody& operator=(ListCenInterRegionTrafficQosPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->trafficQosPolicies_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCenInterRegionTrafficQosPoliciesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCenInterRegionTrafficQosPoliciesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCenInterRegionTrafficQosPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCenInterRegionTrafficQosPoliciesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // trafficQosPolicies Field Functions 
    bool hasTrafficQosPolicies() const { return this->trafficQosPolicies_ != nullptr;};
    void deleteTrafficQosPolicies() { this->trafficQosPolicies_ = nullptr;};
    inline const vector<ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies> & trafficQosPolicies() const { DARABONBA_PTR_GET_CONST(trafficQosPolicies_, vector<ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies>) };
    inline vector<ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies> trafficQosPolicies() { DARABONBA_PTR_GET(trafficQosPolicies_, vector<ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies>) };
    inline ListCenInterRegionTrafficQosPoliciesResponseBody& setTrafficQosPolicies(const vector<ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies> & trafficQosPolicies) { DARABONBA_PTR_SET_VALUE(trafficQosPolicies_, trafficQosPolicies) };
    inline ListCenInterRegionTrafficQosPoliciesResponseBody& setTrafficQosPolicies(vector<ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies> && trafficQosPolicies) { DARABONBA_PTR_SET_RVALUE(trafficQosPolicies_, trafficQosPolicies) };


  protected:
    // The number of entries returned per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that determines the start point of the query.
    // 
    // *   If **NextToken** was not returned in the previous query, it indicates that no additional results exist.
    // *   If **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // A list of QoS policies.
    std::shared_ptr<vector<ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies>> trafficQosPolicies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
