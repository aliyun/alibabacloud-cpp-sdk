// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKACCESSENDPOINTAVAILABLEREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKACCESSENDPOINTAVAILABLEREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNetworkAccessEndpointAvailableRegionsResponseBodyRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListNetworkAccessEndpointAvailableRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkAccessEndpointAvailableRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkAccessEndpointAvailableRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListNetworkAccessEndpointAvailableRegionsResponseBody() = default ;
    ListNetworkAccessEndpointAvailableRegionsResponseBody(const ListNetworkAccessEndpointAvailableRegionsResponseBody &) = default ;
    ListNetworkAccessEndpointAvailableRegionsResponseBody(ListNetworkAccessEndpointAvailableRegionsResponseBody &&) = default ;
    ListNetworkAccessEndpointAvailableRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkAccessEndpointAvailableRegionsResponseBody() = default ;
    ListNetworkAccessEndpointAvailableRegionsResponseBody& operator=(const ListNetworkAccessEndpointAvailableRegionsResponseBody &) = default ;
    ListNetworkAccessEndpointAvailableRegionsResponseBody& operator=(ListNetworkAccessEndpointAvailableRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regions_ == nullptr
        && return this->requestId_ == nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<ListNetworkAccessEndpointAvailableRegionsResponseBodyRegions> & regions() const { DARABONBA_PTR_GET_CONST(regions_, vector<ListNetworkAccessEndpointAvailableRegionsResponseBodyRegions>) };
    inline vector<ListNetworkAccessEndpointAvailableRegionsResponseBodyRegions> regions() { DARABONBA_PTR_GET(regions_, vector<ListNetworkAccessEndpointAvailableRegionsResponseBodyRegions>) };
    inline ListNetworkAccessEndpointAvailableRegionsResponseBody& setRegions(const vector<ListNetworkAccessEndpointAvailableRegionsResponseBodyRegions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline ListNetworkAccessEndpointAvailableRegionsResponseBody& setRegions(vector<ListNetworkAccessEndpointAvailableRegionsResponseBodyRegions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNetworkAccessEndpointAvailableRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information of region.
    std::shared_ptr<vector<ListNetworkAccessEndpointAvailableRegionsResponseBodyRegions>> regions_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
