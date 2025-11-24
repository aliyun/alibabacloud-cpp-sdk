// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILMATCHREQUESTTLSMATCHATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILMATCHREQUESTTLSMATCHATTRIBUTES_HPP_
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
  class DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(SNIHosts, SNIHosts_);
      DARABONBA_PTR_TO_JSON(TLSPort, TLSPort_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(SNIHosts, SNIHosts_);
      DARABONBA_PTR_FROM_JSON(TLSPort, TLSPort_);
    };
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes &&) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes& operator=(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes& operator=(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->SNIHosts_ == nullptr
        && return this->TLSPort_ == nullptr; };
    // SNIHosts Field Functions 
    bool hasSNIHosts() const { return this->SNIHosts_ != nullptr;};
    void deleteSNIHosts() { this->SNIHosts_ = nullptr;};
    inline const vector<string> & SNIHosts() const { DARABONBA_PTR_GET_CONST(SNIHosts_, vector<string>) };
    inline vector<string> SNIHosts() { DARABONBA_PTR_GET(SNIHosts_, vector<string>) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes& setSNIHosts(const vector<string> & SNIHosts) { DARABONBA_PTR_SET_VALUE(SNIHosts_, SNIHosts) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes& setSNIHosts(vector<string> && SNIHosts) { DARABONBA_PTR_SET_RVALUE(SNIHosts_, SNIHosts) };


    // TLSPort Field Functions 
    bool hasTLSPort() const { return this->TLSPort_ != nullptr;};
    void deleteTLSPort() { this->TLSPort_ = nullptr;};
    inline int32_t TLSPort() const { DARABONBA_PTR_GET_DEFAULT(TLSPort_, 0) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes& setTLSPort(int32_t TLSPort) { DARABONBA_PTR_SET_VALUE(TLSPort_, TLSPort) };


  protected:
    // The Server Name Indication (SNI) values to be matched.
    std::shared_ptr<vector<string>> SNIHosts_ = nullptr;
    // The TLS port.
    std::shared_ptr<int32_t> TLSPort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
