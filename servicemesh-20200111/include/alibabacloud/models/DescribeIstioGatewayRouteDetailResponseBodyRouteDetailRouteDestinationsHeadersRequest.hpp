// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILROUTEDESTINATIONSHEADERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILROUTEDESTINATIONSHEADERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest& obj) { 
      DARABONBA_ANY_TO_JSON(Add, add_);
      DARABONBA_PTR_TO_JSON(Remove, remove_);
      DARABONBA_PTR_TO_JSON(Set, set_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(Add, add_);
      DARABONBA_PTR_FROM_JSON(Remove, remove_);
      DARABONBA_PTR_FROM_JSON(Set, set_);
    };
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest &&) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest& operator=(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest& operator=(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest &&) = default ;
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
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest& setAdd(const Darabonba::Json & add) { DARABONBA_SET_VALUE(add_, add) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest& setAdd(Darabonba::Json & add) { DARABONBA_SET_RVALUE(add_, add) };


    // remove Field Functions 
    bool hasRemove() const { return this->remove_ != nullptr;};
    void deleteRemove() { this->remove_ = nullptr;};
    inline const vector<string> & remove() const { DARABONBA_PTR_GET_CONST(remove_, vector<string>) };
    inline vector<string> remove() { DARABONBA_PTR_GET(remove_, vector<string>) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest& setRemove(const vector<string> & remove) { DARABONBA_PTR_SET_VALUE(remove_, remove) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest& setRemove(vector<string> && remove) { DARABONBA_PTR_SET_RVALUE(remove_, remove) };


    // set Field Functions 
    bool hasSet() const { return this->set_ != nullptr;};
    void deleteSet() { this->set_ = nullptr;};
    inline const map<string, string> & set() const { DARABONBA_PTR_GET_CONST(set_, map<string, string>) };
    inline map<string, string> set() { DARABONBA_PTR_GET(set_, map<string, string>) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest& setSet(const map<string, string> & set) { DARABONBA_PTR_SET_VALUE(set_, set) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest& setSet(map<string, string> && set) { DARABONBA_PTR_SET_RVALUE(set_, set) };


  protected:
    // The values to be added to the header key.
    Darabonba::Json add_ = nullptr;
    // The header value to be deleted.
    std::shared_ptr<vector<string>> remove_ = nullptr;
    // The header key to be used to overwrite the original header key.
    std::shared_ptr<map<string, string>> set_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
