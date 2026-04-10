// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIONINTEGRATIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_ACTIONINTEGRATIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ActionIntegrationConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActionIntegrationConfig& obj) { 
      DARABONBA_PTR_TO_JSON(actions, actions_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, ActionIntegrationConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(actions, actions_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
    };
    ActionIntegrationConfig() = default ;
    ActionIntegrationConfig(const ActionIntegrationConfig &) = default ;
    ActionIntegrationConfig(ActionIntegrationConfig &&) = default ;
    ActionIntegrationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActionIntegrationConfig() = default ;
    ActionIntegrationConfig& operator=(const ActionIntegrationConfig &) = default ;
    ActionIntegrationConfig& operator=(ActionIntegrationConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actions_ == nullptr
        && this->enabled_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<string> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
    inline vector<string> getActions() { DARABONBA_PTR_GET(actions_, vector<string>) };
    inline ActionIntegrationConfig& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline ActionIntegrationConfig& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ActionIntegrationConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    // 行动集成 ID 列表
    shared_ptr<vector<string>> actions_ {};
    // 是否启用行动集成
    shared_ptr<bool> enabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
