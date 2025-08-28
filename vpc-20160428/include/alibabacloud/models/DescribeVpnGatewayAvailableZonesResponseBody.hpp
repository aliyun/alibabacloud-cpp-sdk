// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYAVAILABLEZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYAVAILABLEZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnGatewayAvailableZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnGatewayAvailableZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableZoneIdList, availableZoneIdList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnGatewayAvailableZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableZoneIdList, availableZoneIdList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVpnGatewayAvailableZonesResponseBody() = default ;
    DescribeVpnGatewayAvailableZonesResponseBody(const DescribeVpnGatewayAvailableZonesResponseBody &) = default ;
    DescribeVpnGatewayAvailableZonesResponseBody(DescribeVpnGatewayAvailableZonesResponseBody &&) = default ;
    DescribeVpnGatewayAvailableZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnGatewayAvailableZonesResponseBody() = default ;
    DescribeVpnGatewayAvailableZonesResponseBody& operator=(const DescribeVpnGatewayAvailableZonesResponseBody &) = default ;
    DescribeVpnGatewayAvailableZonesResponseBody& operator=(DescribeVpnGatewayAvailableZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableZoneIdList_ != nullptr
        && this->regionId_ != nullptr && this->requestId_ != nullptr; };
    // availableZoneIdList Field Functions 
    bool hasAvailableZoneIdList() const { return this->availableZoneIdList_ != nullptr;};
    void deleteAvailableZoneIdList() { this->availableZoneIdList_ = nullptr;};
    inline const vector<DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList> & availableZoneIdList() const { DARABONBA_PTR_GET_CONST(availableZoneIdList_, vector<DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList>) };
    inline vector<DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList> availableZoneIdList() { DARABONBA_PTR_GET(availableZoneIdList_, vector<DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList>) };
    inline DescribeVpnGatewayAvailableZonesResponseBody& setAvailableZoneIdList(const vector<DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList> & availableZoneIdList) { DARABONBA_PTR_SET_VALUE(availableZoneIdList_, availableZoneIdList) };
    inline DescribeVpnGatewayAvailableZonesResponseBody& setAvailableZoneIdList(vector<DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList> && availableZoneIdList) { DARABONBA_PTR_SET_RVALUE(availableZoneIdList_, availableZoneIdList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeVpnGatewayAvailableZonesResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpnGatewayAvailableZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The zones.
    std::shared_ptr<vector<DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList>> availableZoneIdList_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
