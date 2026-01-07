// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYINTRANETSUPPORTEDZONERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYINTRANETSUPPORTEDZONERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListGatewayIntranetSupportedZoneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayIntranetSupportedZoneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayIntranetSupportedZoneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    ListGatewayIntranetSupportedZoneResponseBody() = default ;
    ListGatewayIntranetSupportedZoneResponseBody(const ListGatewayIntranetSupportedZoneResponseBody &) = default ;
    ListGatewayIntranetSupportedZoneResponseBody(ListGatewayIntranetSupportedZoneResponseBody &&) = default ;
    ListGatewayIntranetSupportedZoneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayIntranetSupportedZoneResponseBody() = default ;
    ListGatewayIntranetSupportedZoneResponseBody& operator=(const ListGatewayIntranetSupportedZoneResponseBody &) = default ;
    ListGatewayIntranetSupportedZoneResponseBody& operator=(ListGatewayIntranetSupportedZoneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->zones_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayIntranetSupportedZoneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<string> & getZones() const { DARABONBA_PTR_GET_CONST(zones_, vector<string>) };
    inline vector<string> getZones() { DARABONBA_PTR_GET(zones_, vector<string>) };
    inline ListGatewayIntranetSupportedZoneResponseBody& setZones(const vector<string> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline ListGatewayIntranetSupportedZoneResponseBody& setZones(vector<string> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The zones that are supported by the region.
    shared_ptr<vector<string>> zones_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
