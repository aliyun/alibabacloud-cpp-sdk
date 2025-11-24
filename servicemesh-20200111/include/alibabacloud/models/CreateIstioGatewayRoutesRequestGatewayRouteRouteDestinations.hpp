// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEROUTEDESTINATIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEROUTEDESTINATIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations& obj) { 
      DARABONBA_PTR_TO_JSON(Destination, destination_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations& obj) { 
      DARABONBA_PTR_FROM_JSON(Destination, destination_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations() = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations(const CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations &) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations(CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations &&) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations() = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations& operator=(const CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations &) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations& operator=(CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destination_ == nullptr
        && return this->weight_ == nullptr; };
    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline const Models::CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination & destination() const { DARABONBA_PTR_GET_CONST(destination_, Models::CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination) };
    inline Models::CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination destination() { DARABONBA_PTR_GET(destination_, Models::CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations& setDestination(const Models::CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination & destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations& setDestination(Models::CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination && destination) { DARABONBA_PTR_SET_RVALUE(destination_, destination) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The unique endpoint of the destination service to which the specified requests are sent.
    std::shared_ptr<Models::CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination> destination_ = nullptr;
    // The weight of the service subset.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
