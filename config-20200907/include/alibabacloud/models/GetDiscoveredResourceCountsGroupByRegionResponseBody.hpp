// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDISCOVEREDRESOURCECOUNTSGROUPBYREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDISCOVEREDRESOURCECOUNTSGROUPBYREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetDiscoveredResourceCountsGroupByRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDiscoveredResourceCountsGroupByRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiscoveredResourceCountsSummary, discoveredResourceCountsSummary_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDiscoveredResourceCountsGroupByRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscoveredResourceCountsSummary, discoveredResourceCountsSummary_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDiscoveredResourceCountsGroupByRegionResponseBody() = default ;
    GetDiscoveredResourceCountsGroupByRegionResponseBody(const GetDiscoveredResourceCountsGroupByRegionResponseBody &) = default ;
    GetDiscoveredResourceCountsGroupByRegionResponseBody(GetDiscoveredResourceCountsGroupByRegionResponseBody &&) = default ;
    GetDiscoveredResourceCountsGroupByRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDiscoveredResourceCountsGroupByRegionResponseBody() = default ;
    GetDiscoveredResourceCountsGroupByRegionResponseBody& operator=(const GetDiscoveredResourceCountsGroupByRegionResponseBody &) = default ;
    GetDiscoveredResourceCountsGroupByRegionResponseBody& operator=(GetDiscoveredResourceCountsGroupByRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->discoveredResourceCountsSummary_ == nullptr
        && return this->requestId_ == nullptr; };
    // discoveredResourceCountsSummary Field Functions 
    bool hasDiscoveredResourceCountsSummary() const { return this->discoveredResourceCountsSummary_ != nullptr;};
    void deleteDiscoveredResourceCountsSummary() { this->discoveredResourceCountsSummary_ = nullptr;};
    inline const vector<GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary> & discoveredResourceCountsSummary() const { DARABONBA_PTR_GET_CONST(discoveredResourceCountsSummary_, vector<GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary>) };
    inline vector<GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary> discoveredResourceCountsSummary() { DARABONBA_PTR_GET(discoveredResourceCountsSummary_, vector<GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary>) };
    inline GetDiscoveredResourceCountsGroupByRegionResponseBody& setDiscoveredResourceCountsSummary(const vector<GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary> & discoveredResourceCountsSummary) { DARABONBA_PTR_SET_VALUE(discoveredResourceCountsSummary_, discoveredResourceCountsSummary) };
    inline GetDiscoveredResourceCountsGroupByRegionResponseBody& setDiscoveredResourceCountsSummary(vector<GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary> && discoveredResourceCountsSummary) { DARABONBA_PTR_SET_RVALUE(discoveredResourceCountsSummary_, discoveredResourceCountsSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDiscoveredResourceCountsGroupByRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics on the resources.
    std::shared_ptr<vector<GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary>> discoveredResourceCountsSummary_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
