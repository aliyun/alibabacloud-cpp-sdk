// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROUTERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROUTERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class DeleteRouteRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRouteRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RouteRuleId, routeRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRouteRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RouteRuleId, routeRuleId_);
    };
    DeleteRouteRuleRequest() = default ;
    DeleteRouteRuleRequest(const DeleteRouteRuleRequest &) = default ;
    DeleteRouteRuleRequest(DeleteRouteRuleRequest &&) = default ;
    DeleteRouteRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRouteRuleRequest() = default ;
    DeleteRouteRuleRequest& operator=(const DeleteRouteRuleRequest &) = default ;
    DeleteRouteRuleRequest& operator=(DeleteRouteRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->routeRuleId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteRouteRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // routeRuleId Field Functions 
    bool hasRouteRuleId() const { return this->routeRuleId_ != nullptr;};
    void deleteRouteRuleId() { this->routeRuleId_ = nullptr;};
    inline string routeRuleId() const { DARABONBA_PTR_GET_DEFAULT(routeRuleId_, "") };
    inline DeleteRouteRuleRequest& setRouteRuleId(string routeRuleId) { DARABONBA_PTR_SET_VALUE(routeRuleId_, routeRuleId) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> routeRuleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
