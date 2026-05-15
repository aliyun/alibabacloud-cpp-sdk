// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGAIRFLOWSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGAIRFLOWSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ConfigAirflowShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigAirflowShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AirflowId, airflowId_);
      DARABONBA_PTR_TO_JSON(CustomAirflowCfg, customAirflowCfgShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigAirflowShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AirflowId, airflowId_);
      DARABONBA_PTR_FROM_JSON(CustomAirflowCfg, customAirflowCfgShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ConfigAirflowShrinkRequest() = default ;
    ConfigAirflowShrinkRequest(const ConfigAirflowShrinkRequest &) = default ;
    ConfigAirflowShrinkRequest(ConfigAirflowShrinkRequest &&) = default ;
    ConfigAirflowShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigAirflowShrinkRequest() = default ;
    ConfigAirflowShrinkRequest& operator=(const ConfigAirflowShrinkRequest &) = default ;
    ConfigAirflowShrinkRequest& operator=(ConfigAirflowShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->airflowId_ == nullptr
        && this->customAirflowCfgShrink_ == nullptr && this->workspaceId_ == nullptr; };
    // airflowId Field Functions 
    bool hasAirflowId() const { return this->airflowId_ != nullptr;};
    void deleteAirflowId() { this->airflowId_ = nullptr;};
    inline string getAirflowId() const { DARABONBA_PTR_GET_DEFAULT(airflowId_, "") };
    inline ConfigAirflowShrinkRequest& setAirflowId(string airflowId) { DARABONBA_PTR_SET_VALUE(airflowId_, airflowId) };


    // customAirflowCfgShrink Field Functions 
    bool hasCustomAirflowCfgShrink() const { return this->customAirflowCfgShrink_ != nullptr;};
    void deleteCustomAirflowCfgShrink() { this->customAirflowCfgShrink_ = nullptr;};
    inline string getCustomAirflowCfgShrink() const { DARABONBA_PTR_GET_DEFAULT(customAirflowCfgShrink_, "") };
    inline ConfigAirflowShrinkRequest& setCustomAirflowCfgShrink(string customAirflowCfgShrink) { DARABONBA_PTR_SET_VALUE(customAirflowCfgShrink_, customAirflowCfgShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ConfigAirflowShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> airflowId_ {};
    // This parameter is required.
    shared_ptr<string> customAirflowCfgShrink_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
