// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEROUTEDESTINATIONSDESTINATIONPORT_HPP_
#define ALIBABACLOUD_MODELS_CREATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEROUTEDESTINATIONSDESTINATIONPORT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort& obj) { 
      DARABONBA_PTR_TO_JSON(Number, number_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort& obj) { 
      DARABONBA_PTR_FROM_JSON(Number, number_);
    };
    CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort() = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort(const CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort &) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort(CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort &&) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort() = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort& operator=(const CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort &) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort& operator=(CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->number_ == nullptr; };
    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline int32_t number() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


  protected:
    // The port number.
    std::shared_ptr<int32_t> number_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
