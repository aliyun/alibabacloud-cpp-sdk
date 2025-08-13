// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEREQUESTGATEWAYSWIMMINGLANEROUTEJSONROUTEINDEPENDENTPERCENTAGELIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEREQUESTGATEWAYSWIMMINGLANEROUTEJSONROUTEINDEPENDENTPERCENTAGELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJsonRouteIndependentPercentageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJsonRouteIndependentPercentageList& obj) { 
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
      DARABONBA_PTR_TO_JSON(RouteId, routeId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJsonRouteIndependentPercentageList& obj) { 
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
      DARABONBA_PTR_FROM_JSON(RouteId, routeId_);
    };
    CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJsonRouteIndependentPercentageList() = default ;
    CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJsonRouteIndependentPercentageList(const CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJsonRouteIndependentPercentageList &) = default ;
    CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJsonRouteIndependentPercentageList(CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJsonRouteIndependentPercentageList &&) = default ;
    CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJsonRouteIndependentPercentageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJsonRouteIndependentPercentageList() = default ;
    CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJsonRouteIndependentPercentageList& operator=(const CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJsonRouteIndependentPercentageList &) = default ;
    CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJsonRouteIndependentPercentageList& operator=(CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJsonRouteIndependentPercentageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->percentage_ != nullptr
        && this->routeId_ != nullptr; };
    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline int32_t percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
    inline CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJsonRouteIndependentPercentageList& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline int64_t routeId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, 0L) };
    inline CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJsonRouteIndependentPercentageList& setRouteId(int64_t routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


  protected:
    std::shared_ptr<int32_t> percentage_ = nullptr;
    std::shared_ptr<int64_t> routeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
