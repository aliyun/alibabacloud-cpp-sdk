// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOUNTSGROUPBYREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOUNTSGROUPBYREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAggregateResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceCountsGroupByRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceCountsGroupByRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiscoveredResourceCountsSummary, discoveredResourceCountsSummary_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceCountsGroupByRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscoveredResourceCountsSummary, discoveredResourceCountsSummary_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregateResourceCountsGroupByRegionResponseBody() = default ;
    GetAggregateResourceCountsGroupByRegionResponseBody(const GetAggregateResourceCountsGroupByRegionResponseBody &) = default ;
    GetAggregateResourceCountsGroupByRegionResponseBody(GetAggregateResourceCountsGroupByRegionResponseBody &&) = default ;
    GetAggregateResourceCountsGroupByRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceCountsGroupByRegionResponseBody() = default ;
    GetAggregateResourceCountsGroupByRegionResponseBody& operator=(const GetAggregateResourceCountsGroupByRegionResponseBody &) = default ;
    GetAggregateResourceCountsGroupByRegionResponseBody& operator=(GetAggregateResourceCountsGroupByRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->discoveredResourceCountsSummary_ == nullptr
        && return this->requestId_ == nullptr; };
    // discoveredResourceCountsSummary Field Functions 
    bool hasDiscoveredResourceCountsSummary() const { return this->discoveredResourceCountsSummary_ != nullptr;};
    void deleteDiscoveredResourceCountsSummary() { this->discoveredResourceCountsSummary_ = nullptr;};
    inline const vector<GetAggregateResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary> & discoveredResourceCountsSummary() const { DARABONBA_PTR_GET_CONST(discoveredResourceCountsSummary_, vector<GetAggregateResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary>) };
    inline vector<GetAggregateResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary> discoveredResourceCountsSummary() { DARABONBA_PTR_GET(discoveredResourceCountsSummary_, vector<GetAggregateResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary>) };
    inline GetAggregateResourceCountsGroupByRegionResponseBody& setDiscoveredResourceCountsSummary(const vector<GetAggregateResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary> & discoveredResourceCountsSummary) { DARABONBA_PTR_SET_VALUE(discoveredResourceCountsSummary_, discoveredResourceCountsSummary) };
    inline GetAggregateResourceCountsGroupByRegionResponseBody& setDiscoveredResourceCountsSummary(vector<GetAggregateResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary> && discoveredResourceCountsSummary) { DARABONBA_PTR_SET_RVALUE(discoveredResourceCountsSummary_, discoveredResourceCountsSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateResourceCountsGroupByRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the region by which statistics are collected.
    std::shared_ptr<vector<GetAggregateResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary>> discoveredResourceCountsSummary_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
