// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEAUTHREQUESTAUTHJSON_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEAUTHREQUESTAUTHJSON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteAuthRequestAuthJSON : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteAuthRequestAuthJSON& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteAuthRequestAuthJSON& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateGatewayRouteAuthRequestAuthJSON() = default ;
    UpdateGatewayRouteAuthRequestAuthJSON(const UpdateGatewayRouteAuthRequestAuthJSON &) = default ;
    UpdateGatewayRouteAuthRequestAuthJSON(UpdateGatewayRouteAuthRequestAuthJSON &&) = default ;
    UpdateGatewayRouteAuthRequestAuthJSON(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteAuthRequestAuthJSON() = default ;
    UpdateGatewayRouteAuthRequestAuthJSON& operator=(const UpdateGatewayRouteAuthRequestAuthJSON &) = default ;
    UpdateGatewayRouteAuthRequestAuthJSON& operator=(UpdateGatewayRouteAuthRequestAuthJSON &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateGatewayRouteAuthRequestAuthJSON& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The authentication type. If an empty string is passed, no authentication type is available. Valid values:
    // 
    // *   JWT
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
