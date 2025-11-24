// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILROUTEDESTINATIONSHEADERSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILROUTEDESTINATIONSHEADERSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse& obj) { 
      DARABONBA_ANY_TO_JSON(Add, add_);
      DARABONBA_PTR_TO_JSON(Remove, remove_);
      DARABONBA_ANY_TO_JSON(Set, set_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse& obj) { 
      DARABONBA_ANY_FROM_JSON(Add, add_);
      DARABONBA_PTR_FROM_JSON(Remove, remove_);
      DARABONBA_ANY_FROM_JSON(Set, set_);
    };
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse &&) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse& operator=(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse& operator=(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->add_ == nullptr
        && return this->remove_ == nullptr && return this->set_ == nullptr; };
    // add Field Functions 
    bool hasAdd() const { return this->add_ != nullptr;};
    void deleteAdd() { this->add_ = nullptr;};
    inline     const Darabonba::Json & add() const { DARABONBA_GET(add_) };
    Darabonba::Json & add() { DARABONBA_GET(add_) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse& setAdd(const Darabonba::Json & add) { DARABONBA_SET_VALUE(add_, add) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse& setAdd(Darabonba::Json & add) { DARABONBA_SET_RVALUE(add_, add) };


    // remove Field Functions 
    bool hasRemove() const { return this->remove_ != nullptr;};
    void deleteRemove() { this->remove_ = nullptr;};
    inline const vector<string> & remove() const { DARABONBA_PTR_GET_CONST(remove_, vector<string>) };
    inline vector<string> remove() { DARABONBA_PTR_GET(remove_, vector<string>) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse& setRemove(const vector<string> & remove) { DARABONBA_PTR_SET_VALUE(remove_, remove) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse& setRemove(vector<string> && remove) { DARABONBA_PTR_SET_RVALUE(remove_, remove) };


    // set Field Functions 
    bool hasSet() const { return this->set_ != nullptr;};
    void deleteSet() { this->set_ = nullptr;};
    inline     const Darabonba::Json & set() const { DARABONBA_GET(set_) };
    Darabonba::Json & set() { DARABONBA_GET(set_) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse& setSet(const Darabonba::Json & set) { DARABONBA_SET_VALUE(set_, set) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse& setSet(Darabonba::Json & set) { DARABONBA_SET_RVALUE(set_, set) };


  protected:
    // The values to be added to the header key.
    Darabonba::Json add_ = nullptr;
    // The header value to be deleted.
    std::shared_ptr<vector<string>> remove_ = nullptr;
    // The header key to be used to overwrite the original header key.
    Darabonba::Json set_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
