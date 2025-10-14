// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYROUTESETTINGROUTES_HPP_
#define ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYROUTESETTINGROUTES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NotificationStrategyRouteSettingRoutesConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class NotificationStrategyRouteSettingRoutes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotificationStrategyRouteSettingRoutes& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(EscalationUuid, escalationUuid_);
    };
    friend void from_json(const Darabonba::Json& j, NotificationStrategyRouteSettingRoutes& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(EscalationUuid, escalationUuid_);
    };
    NotificationStrategyRouteSettingRoutes() = default ;
    NotificationStrategyRouteSettingRoutes(const NotificationStrategyRouteSettingRoutes &) = default ;
    NotificationStrategyRouteSettingRoutes(NotificationStrategyRouteSettingRoutes &&) = default ;
    NotificationStrategyRouteSettingRoutes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotificationStrategyRouteSettingRoutes() = default ;
    NotificationStrategyRouteSettingRoutes& operator=(const NotificationStrategyRouteSettingRoutes &) = default ;
    NotificationStrategyRouteSettingRoutes& operator=(NotificationStrategyRouteSettingRoutes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && return this->escalationUuid_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<Models::NotificationStrategyRouteSettingRoutesConditions> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Models::NotificationStrategyRouteSettingRoutesConditions>) };
    inline vector<Models::NotificationStrategyRouteSettingRoutesConditions> conditions() { DARABONBA_PTR_GET(conditions_, vector<Models::NotificationStrategyRouteSettingRoutesConditions>) };
    inline NotificationStrategyRouteSettingRoutes& setConditions(const vector<Models::NotificationStrategyRouteSettingRoutesConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline NotificationStrategyRouteSettingRoutes& setConditions(vector<Models::NotificationStrategyRouteSettingRoutesConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // escalationUuid Field Functions 
    bool hasEscalationUuid() const { return this->escalationUuid_ != nullptr;};
    void deleteEscalationUuid() { this->escalationUuid_ = nullptr;};
    inline string escalationUuid() const { DARABONBA_PTR_GET_DEFAULT(escalationUuid_, "") };
    inline NotificationStrategyRouteSettingRoutes& setEscalationUuid(string escalationUuid) { DARABONBA_PTR_SET_VALUE(escalationUuid_, escalationUuid) };


  protected:
    std::shared_ptr<vector<Models::NotificationStrategyRouteSettingRoutesConditions>> conditions_ = nullptr;
    std::shared_ptr<string> escalationUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
