// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeZonesResponseBodyZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    DescribeZonesResponseBody() = default ;
    DescribeZonesResponseBody(const DescribeZonesResponseBody &) = default ;
    DescribeZonesResponseBody(DescribeZonesResponseBody &&) = default ;
    DescribeZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBody() = default ;
    DescribeZonesResponseBody& operator=(const DescribeZonesResponseBody &) = default ;
    DescribeZonesResponseBody& operator=(DescribeZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->zones_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<DescribeZonesResponseBodyZones> & zones() const { DARABONBA_PTR_GET_CONST(zones_, vector<DescribeZonesResponseBodyZones>) };
    inline vector<DescribeZonesResponseBodyZones> zones() { DARABONBA_PTR_GET(zones_, vector<DescribeZonesResponseBodyZones>) };
    inline DescribeZonesResponseBody& setZones(const vector<DescribeZonesResponseBodyZones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline DescribeZonesResponseBody& setZones(vector<DescribeZonesResponseBodyZones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeZonesResponseBodyZones>> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
