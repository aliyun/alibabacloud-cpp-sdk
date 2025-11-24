// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEROUTEDESTINATIONS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEROUTEDESTINATIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations& obj) { 
      DARABONBA_PTR_TO_JSON(Destination, destination_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations& obj) { 
      DARABONBA_PTR_FROM_JSON(Destination, destination_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations() = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations(const UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations &) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations(UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations &&) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations() = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations& operator=(const UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations &) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations& operator=(UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destination_ == nullptr
        && return this->weight_ == nullptr; };
    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline const Models::UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination & destination() const { DARABONBA_PTR_GET_CONST(destination_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination) };
    inline Models::UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination destination() { DARABONBA_PTR_GET(destination_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations& setDestination(const Models::UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination & destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations& setDestination(Models::UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination && destination) { DARABONBA_PTR_SET_RVALUE(destination_, destination) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The unique endpoint of the destination service to which the specified requests are sent.
    std::shared_ptr<Models::UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination> destination_ = nullptr;
    // The weight of the service subset.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
