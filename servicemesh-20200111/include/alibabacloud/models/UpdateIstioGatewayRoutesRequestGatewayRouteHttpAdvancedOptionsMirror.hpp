// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEHTTPADVANCEDOPTIONSMIRROR_HPP_
#define ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEHTTPADVANCEDOPTIONSMIRROR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Subset, subset_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Subset, subset_);
    };
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror() = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror(const UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror &) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror(UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror &&) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror() = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror& operator=(const UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror &) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror& operator=(UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->host_ == nullptr
        && return this->subset_ == nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // subset Field Functions 
    bool hasSubset() const { return this->subset_ != nullptr;};
    void deleteSubset() { this->subset_ = nullptr;};
    inline string subset() const { DARABONBA_PTR_GET_DEFAULT(subset_, "") };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptionsMirror& setSubset(string subset) { DARABONBA_PTR_SET_VALUE(subset_, subset) };


  protected:
    // The name of the service defined in the service registry.
    std::shared_ptr<string> host_ = nullptr;
    // The name of the service subset.
    std::shared_ptr<string> subset_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
