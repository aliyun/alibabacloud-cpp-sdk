// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVpcEndpointZonesResponseBodyZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    ListVpcEndpointZonesResponseBody() = default ;
    ListVpcEndpointZonesResponseBody(const ListVpcEndpointZonesResponseBody &) = default ;
    ListVpcEndpointZonesResponseBody(ListVpcEndpointZonesResponseBody &&) = default ;
    ListVpcEndpointZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointZonesResponseBody() = default ;
    ListVpcEndpointZonesResponseBody& operator=(const ListVpcEndpointZonesResponseBody &) = default ;
    ListVpcEndpointZonesResponseBody& operator=(ListVpcEndpointZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->zones_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpcEndpointZonesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcEndpointZonesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcEndpointZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListVpcEndpointZonesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<ListVpcEndpointZonesResponseBodyZones> & zones() const { DARABONBA_PTR_GET_CONST(zones_, vector<ListVpcEndpointZonesResponseBodyZones>) };
    inline vector<ListVpcEndpointZonesResponseBodyZones> zones() { DARABONBA_PTR_GET(zones_, vector<ListVpcEndpointZonesResponseBodyZones>) };
    inline ListVpcEndpointZonesResponseBody& setZones(const vector<ListVpcEndpointZonesResponseBodyZones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline ListVpcEndpointZonesResponseBody& setZones(vector<ListVpcEndpointZonesResponseBodyZones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    // The number of entries returned on each page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next requests are performed.
    // *   If a value is returned for **NextToken**, the value can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The information about the zones.
    std::shared_ptr<vector<ListVpcEndpointZonesResponseBodyZones>> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
