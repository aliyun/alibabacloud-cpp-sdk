// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGAIRFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGAIRFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ConfigAirflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigAirflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AirflowId, airflowId_);
      DARABONBA_PTR_TO_JSON(CustomAirflowCfg, customAirflowCfg_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigAirflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AirflowId, airflowId_);
      DARABONBA_PTR_FROM_JSON(CustomAirflowCfg, customAirflowCfg_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ConfigAirflowRequest() = default ;
    ConfigAirflowRequest(const ConfigAirflowRequest &) = default ;
    ConfigAirflowRequest(ConfigAirflowRequest &&) = default ;
    ConfigAirflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigAirflowRequest() = default ;
    ConfigAirflowRequest& operator=(const ConfigAirflowRequest &) = default ;
    ConfigAirflowRequest& operator=(ConfigAirflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->airflowId_ == nullptr
        && this->customAirflowCfg_ == nullptr && this->workspaceId_ == nullptr; };
    // airflowId Field Functions 
    bool hasAirflowId() const { return this->airflowId_ != nullptr;};
    void deleteAirflowId() { this->airflowId_ = nullptr;};
    inline string getAirflowId() const { DARABONBA_PTR_GET_DEFAULT(airflowId_, "") };
    inline ConfigAirflowRequest& setAirflowId(string airflowId) { DARABONBA_PTR_SET_VALUE(airflowId_, airflowId) };


    // customAirflowCfg Field Functions 
    bool hasCustomAirflowCfg() const { return this->customAirflowCfg_ != nullptr;};
    void deleteCustomAirflowCfg() { this->customAirflowCfg_ = nullptr;};
    inline const vector<string> & getCustomAirflowCfg() const { DARABONBA_PTR_GET_CONST(customAirflowCfg_, vector<string>) };
    inline vector<string> getCustomAirflowCfg() { DARABONBA_PTR_GET(customAirflowCfg_, vector<string>) };
    inline ConfigAirflowRequest& setCustomAirflowCfg(const vector<string> & customAirflowCfg) { DARABONBA_PTR_SET_VALUE(customAirflowCfg_, customAirflowCfg) };
    inline ConfigAirflowRequest& setCustomAirflowCfg(vector<string> && customAirflowCfg) { DARABONBA_PTR_SET_RVALUE(customAirflowCfg_, customAirflowCfg) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ConfigAirflowRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> airflowId_ {};
    // This parameter is required.
    shared_ptr<vector<string>> customAirflowCfg_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
