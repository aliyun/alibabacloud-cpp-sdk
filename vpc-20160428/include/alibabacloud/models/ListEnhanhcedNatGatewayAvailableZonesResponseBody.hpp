// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENHANHCEDNATGATEWAYAVAILABLEZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENHANHCEDNATGATEWAYAVAILABLEZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListEnhanhcedNatGatewayAvailableZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnhanhcedNatGatewayAvailableZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnhanhcedNatGatewayAvailableZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    ListEnhanhcedNatGatewayAvailableZonesResponseBody() = default ;
    ListEnhanhcedNatGatewayAvailableZonesResponseBody(const ListEnhanhcedNatGatewayAvailableZonesResponseBody &) = default ;
    ListEnhanhcedNatGatewayAvailableZonesResponseBody(ListEnhanhcedNatGatewayAvailableZonesResponseBody &&) = default ;
    ListEnhanhcedNatGatewayAvailableZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnhanhcedNatGatewayAvailableZonesResponseBody() = default ;
    ListEnhanhcedNatGatewayAvailableZonesResponseBody& operator=(const ListEnhanhcedNatGatewayAvailableZonesResponseBody &) = default ;
    ListEnhanhcedNatGatewayAvailableZonesResponseBody& operator=(ListEnhanhcedNatGatewayAvailableZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->zones_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnhanhcedNatGatewayAvailableZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones> & zones() const { DARABONBA_PTR_GET_CONST(zones_, vector<ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones>) };
    inline vector<ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones> zones() { DARABONBA_PTR_GET(zones_, vector<ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones>) };
    inline ListEnhanhcedNatGatewayAvailableZonesResponseBody& setZones(const vector<ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline ListEnhanhcedNatGatewayAvailableZonesResponseBody& setZones(vector<ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of zones.
    std::shared_ptr<vector<ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones>> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
